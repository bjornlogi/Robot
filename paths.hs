paths :: Int -> Int -> Integer
paths 1 _ = 1
paths _ 1 = 1
paths m n = sum [ paths (m-1) n, paths m (n-1) ]
