module Error where
import System.Environment (getArgs)
import System.Exit ( ExitCode(ExitFailure), exitWith, exitSuccess)

exitPrint :: String -> IO ()
exitPrint s = putStrLn s >> exitWith (ExitFailure 84)

exitPrintgood :: String -> IO ()
exitPrintgood s = putStrLn s >> exitSuccess

checkrls :: [String] -> IO()
checkrls ("--rule":xs) = return()
checkrls (_:xs) = checkrls xs
checkrls _ = exitPrint "ERROR IN INVOCATION NEED rls !! TRY AGAIN"

isInt :: String -> Bool
isInt [] = True
isInt ('-':b) = isInt b
isInt (a:b) | a > '9' || a < '0' = False
            | otherwise = isInt b


defaultInvoc :: String -> Bool
defaultInvoc "--rule" = True
defaultInvoc "--lines" = True
defaultInvoc "--start" = True
defaultInvoc "--window" = True
defaultInvoc "--move" = True
defaultInvoc _ = False


checkTwoEle :: String -> String -> Bool
checkTwoEle rule nb | defaultInvoc rule && isInt nb = True
                    | otherwise = False


checkInvoc :: [String] -> IO()
checkInvoc [] = return ()
checkInvoc (x:xs:y) | checkTwoEle x xs = checkInvoc y
                    | otherwise = exitPrint "ERROR IN INVOCATION !! TRY AGAIN"
checkInvoc _ = exitPrint "ERROR IN INVOCATION"

checkArg :: [String] -> IO()
checkArg arg | null arg = exitPrint "NO ARGUMENT !! TRY AGAIN"
             | odd $ length arg = exitPrint "ARGS MUST BE EVEN !! TRY AGAIN"
             | otherwise = checkInvoc arg
