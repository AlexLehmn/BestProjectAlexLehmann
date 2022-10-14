module Conf where
import System.Environment
import System.Exit
import Data.List


--  defined data Conf

data Conf = Conf    { rls_v :: Maybe Int
                    , sta_v :: Maybe Int
                    , ln_v :: Maybe Int
                    , window_v :: Maybe Int
                    , mv_v :: Maybe Int
                    }

-- Set Maybe Value to int

rls :: Conf -> Int
rls (Conf (Just rls_v) _ _ _ _) = rls_v

sta :: Conf -> Int
sta (Conf _ (Just sta_v) _ _ _) = sta_v

ln :: Conf -> Int
ln (Conf _ _ (Just ln_v) _ _) = ln_v

window :: Conf -> Int
window (Conf _ _ _ (Just window_v) _) = window_v

mv :: Conf -> Int
mv (Conf _ _ _ _ (Just mv_v)) = mv_v

--  Set by defaut data Conf

confDefault :: Conf
confDefault =  Conf Nothing (Just 0) Nothing (Just 80) (Just 0)

--  Set Value arg with data Conf

setValue :: Conf -> [String] -> Conf
setValue conf ["--rule", x] = conf {rls_v = Just (read x)}
setValue conf ["--lines", x] = conf {ln_v = Just(read x)}
setValue conf ["--start", x] = conf {sta_v = Just(read x)}
setValue conf ["--window", x] = conf {window_v = Just(read x)}
setValue conf ["--move", x] = conf {mv_v = Just(read x)}
setValue conf ("--rule":x:xs) = setValue conf {rls_v = Just (read x)} xs
setValue conf ("--lines":x:xs) = setValue conf {ln_v = Just(read x)} xs
setValue conf ("--start":x:xs) = setValue conf {sta_v = Just(read x)} xs
setValue conf ("--window":x:xs) = setValue conf {window_v = Just(read x)} xs
setValue conf ("--move":x:xs) = setValue conf {mv_v = Just(read x)} xs
