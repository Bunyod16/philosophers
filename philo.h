#ifndef PHILO_H
# define PHILO_H

typedef struct s_settings t_settings;

typedef struct s_philo
{
	int					chair;
	long				eat_time;
	long				last_eaten;
	int					sleep_time;
	int					holds_fork1;
	int					holds_fork2;
	int					meals;
	pthread_mutex_t		fork; //need to destroy the mutex
	pthread_t			death_tracker;
	t_settings			*settings;
}	t_philo;

typedef struct s_settings
{
	int args;
	int philo_num;
	int die_time;
	int eat_time;
	int sleep_time;
	int stop_after;
	int dead_count;
	t_philo *philos;
}		t_settings;

int			ft_atoi(const char *str);
int			ft_isnum(char *str);
long int	get_time(void);
void    philo_eat(t_philo *philo, t_philo *neighbour);

#endif
