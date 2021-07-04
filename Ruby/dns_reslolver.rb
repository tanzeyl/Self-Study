def get_command_line_argument
  if ARGV.empty?
    puts "Usage: ruby lookup.rb <domain>"
    exit
  end
  ARGV.first
end

domain = get_command_line_argument
dns_raw = File.readlines("zone.txt")

def parse_dns(dns_raw)
  for i in 0...dns_raw.length
    new_list = dns_raw[i].split()
    for j in 0...new_list.length
      new_list[j] = new_list[j].strip
    end
  end
  new_list
end

def resolve(dns_records, lookup_chain, domain)
  for i in 0...4
    new_list = dns_records[i]
    if new_list[1] == domain
      if new_list[0] == "A"
        lookup_chain = new_list[2]
      elsif new_list[0] == "CNAME"
        resolve(dns_records, lookup_chain, new_list[2])
      end
    else
      lookup_chain = "This address does not exists."
    end
  end
end

dns_records = parse_dns(dns_raw)
lookup_chain = [domain]
lookup_chain = resolve(dns_records, lookup_chain, domain)
puts lookup_chain.join("#{lookup_chain[0]} => #{lookup_chain[1]}")
