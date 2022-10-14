module Main where
import System.Environment (getArgs)
import System.Exit
import Data.List
import Lib
import Error
import Wolfram
import Conf
import Convert
import Window

main :: IO()
main = do
    arg <- getArgs
    checkArg arg
    checkrls arg
    wolframFunc (setValue confDefault arg)