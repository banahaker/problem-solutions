import Data.Set (Set, fromList, difference)

findUniqueElements :: [Int] -> [Int] -> ([Int], [Int])
findUniqueElements xs ys =
  let setX = fromList xs
      setY = fromList ys
  in (difference setX setY, difference setY setX)

main :: IO ()
main = do
  let xs = [1, 2, 3, 4]
      ys = [2, 4, 5, 6]
  let (uniqueXs, uniqueYs) = findUniqueElements xs ys
  print ("Unique elements in xs:", uniqueXs)
  print ("Unique elements in ys:", uniqueYs)

