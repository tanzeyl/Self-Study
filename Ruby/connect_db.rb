require 'active_record'

def connect_db!
  ActiveRecord::Base.establish_connection(
    host: 'localhost',
    adapter: 'postgresql',
    database: 'cafe',
    user: 'postgres',
    password: 'password'
  )
end
