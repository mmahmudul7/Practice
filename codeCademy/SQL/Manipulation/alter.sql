-- The ALTER TABLE statement adds a new column to a table.

ALTER TABLE celebs 
ADD COLUMN twitter_handle TEXT;

-- NULL is a special value in SQL that represents missing or unknown data.
-- Here, the rows that existed before the column was added have NULL (∅) values for twitter_handle.

'''
Common errors:

Missing the complete ADD COLUMN syntax.
Missing the data type for the new column.
'''