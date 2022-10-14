module Window where
import System.Environment (getArgs)
import System.Exit
import Data.List
import Lib
import Conf
import Convert

--  Check if size of line is not over 80

sizeFunc :: Conf -> Bool
sizeFunc conf | 2 * (ln conf + sta conf) < window conf = True
              | otherwise = False


remvBegin :: Int -> String -> String
remvBegin 0 wolf = wolf
remvBegin sta (_:wolf_s) = remvBegin (sta - 1) wolf_s

kepLn :: Int -> String -> String
kepLn _ [] = []
kepLn 0 (x:xs) = []
kepLn sta (x:xs) = x : kepLn (sta - 1) xs

windowBegin :: Conf -> Int
windowBegin conf | mv conf < 0 = mv conf * 2
                 | otherwise = 0

lineBegin :: Conf -> Int
lineBegin conf | 0 > mv conf = sta conf + mv conf * 2 + ln conf - window conf `div` 2
               | otherwise = sta conf + ln conf - window conf `div` 2

cutWindow :: Int -> Int -> [String] -> [String]
cutWindow sta wind [x] = [kepLn wind (remvBegin sta x)]
cutWindow sta wind (x:xs) = kepLn wind (remvBegin sta x) : cutWindow sta wind xs

funwindow :: Conf -> [String] -> [String]
funwindow conf wolf | sizeFunc conf = cutWindow (windowBegin conf) (window conf) wolf
                    | otherwise = cutWindow (lineBegin conf) (window conf) wolf