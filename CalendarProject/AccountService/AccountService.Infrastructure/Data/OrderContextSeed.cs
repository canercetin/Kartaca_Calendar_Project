using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using AccountService.Domain.Entities;

namespace AccountService.Infrastructure.Data
{
    public class OrderContextSeed
    {
        public static async Task SeedAsync(AccountContext accountContext)
        {
            if (accountContext.Accounts.Any())
            {
                accountContext.Accounts.AddRange(GetPreconfiguredAccounts());
                await accountContext.SaveChangesAsync();
            }
        }

        private static IEnumerable<Account> GetPreconfiguredAccounts()
        {

        }
    }
}
