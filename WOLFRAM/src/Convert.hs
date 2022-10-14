module Convert where
import Data.Char
import System.Environment (getArgs)
import System.Exit ( ExitCode(ExitFailure), exitWith )
import Error
import Conf

--          Function to convert all Rules by binary

convertBinary :: Int -> Int -> String
convertBinary _ 0 = [' ']
convertBinary 0 var = ' ' : convertBinary 0 (var - 1)
convertBinary nb var | even nb = ' ' : convertBinary (nb `div` 2) (var - 1)
                     | otherwise = '*' : convertBinary (nb `div` 2) (var - 1)

myDectoBin :: Int -> String
myDectoBin 0 = [' ']
myDectoBin nb | even nb = reverse ( ' ' : convertBinary (nb `div` 2) 6)
              | otherwise = reverse ( '*' : convertBinary (nb `div` 2) 6)