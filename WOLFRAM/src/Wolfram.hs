module Wolfram where
import Data.Char
import System.Environment (getArgs)
import System.Exit ( ExitCode(ExitFailure), exitWith )
import Error
import Conf
import Convert
import Window

funcPrint :: [String] -> IO()
funcPrint [wolf] = putStrLn wolf
funcPrint (wolf:wolf_s) = putStrLn wolf >> funcPrint wolf_s


makeLine :: Int -> String
makeLine x = replicate (x `div` 2) ' ' ++ '*' : replicate (x `div` 2) ' '

lineF :: Conf -> String
lineF conf | sizeFunc conf = makeLine (window conf +  mv conf * 2)
           | otherwise = makeLine ((sta conf + mv conf + ln conf) * 2)


findMiddle :: Conf -> [String]
findMiddle conf = funwindow conf (drop (sta conf) (doLn (rls conf) ((ln conf + sta conf) - 1) (lineF conf)))


doLn :: Int -> Int -> String -> [String]
doLn _ 0 wolf = [wolf]
doLn rul var wolf = wolf : doLn rul (var - 1) (doLn2 rul wolf)

doLn2 :: Int -> String -> String
doLn2 rules wolf@(x:xs:_) = findRule2 ' ' x xs (myDectoBin rules) : findRule rules wolf

findRule :: Int -> String -> String
findRule rules [x] = [findRule2 x ' ' ' ' (myDectoBin rules)]
findRule rules [x, k] = findRule2 x k ' ' (myDectoBin rules) : findRule rules [k]
findRule rules (x:wolf@(k:ks:_)) = findRule2 x k ks (myDectoBin rules) : findRule rules wolf

findRule2 ::Char -> Char -> Char -> String -> Char
findRule2 '*' '*' '*' x = head x
findRule2 '*' '*' ' ' x = x !! 1
findRule2 '*' ' ' '*' x = x !! 2
findRule2 '*' ' ' ' ' x = x !! 3
findRule2 ' ' '*' '*' x = x !! 4
findRule2 ' ' '*' ' ' x = x !! 5
findRule2 ' ' ' ' '*' x = x !! 6
findRule2 ' ' ' ' ' ' x = x !! 7

--je lis a l intexte du tableu


wolframFunc :: Conf -> IO()
wolframFunc conf = funcPrint (findMiddle conf)

