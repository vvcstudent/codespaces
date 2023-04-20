def print_header(title,header1,header2,line_length):
    print(f'{title:>33}')
    print(f'{header1:<20}|{header2:>23}')
    print('-'*line_length)


title = 'Number of Novels Authored'
column1='Author Name'
column2='Number of Novels'
line_length = 80
print_header(title,column1,column2,line_length)