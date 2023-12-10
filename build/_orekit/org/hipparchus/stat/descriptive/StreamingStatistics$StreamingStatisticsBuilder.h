#ifndef org_hipparchus_stat_descriptive_StreamingStatistics$StreamingStatisticsBuilder_H
#define org_hipparchus_stat_descriptive_StreamingStatistics$StreamingStatisticsBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace random {
      class RandomGenerator;
    }
    namespace stat {
      namespace descriptive {
        class StreamingStatistics$StreamingStatisticsBuilder;
        class StreamingStatistics;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        class StreamingStatistics$StreamingStatisticsBuilder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_7ae3461a92a43152,
            mid_build_cdee09d4729ad8fd,
            mid_extrema_2fa0b82810c56fd8,
            mid_moments_2fa0b82810c56fd8,
            mid_percentiles_6bcab1bdf48141c3,
            mid_sumOfLogs_2fa0b82810c56fd8,
            mid_sumOfSquares_2fa0b82810c56fd8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StreamingStatistics$StreamingStatisticsBuilder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StreamingStatistics$StreamingStatisticsBuilder(const StreamingStatistics$StreamingStatisticsBuilder& obj) : ::java::lang::Object(obj) {}

          StreamingStatistics$StreamingStatisticsBuilder();

          ::org::hipparchus::stat::descriptive::StreamingStatistics build() const;
          StreamingStatistics$StreamingStatisticsBuilder extrema(jboolean) const;
          StreamingStatistics$StreamingStatisticsBuilder moments(jboolean) const;
          StreamingStatistics$StreamingStatisticsBuilder percentiles(jdouble, const ::org::hipparchus::random::RandomGenerator &) const;
          StreamingStatistics$StreamingStatisticsBuilder sumOfLogs(jboolean) const;
          StreamingStatistics$StreamingStatisticsBuilder sumOfSquares(jboolean) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        extern PyType_Def PY_TYPE_DEF(StreamingStatistics$StreamingStatisticsBuilder);
        extern PyTypeObject *PY_TYPE(StreamingStatistics$StreamingStatisticsBuilder);

        class t_StreamingStatistics$StreamingStatisticsBuilder {
        public:
          PyObject_HEAD
          StreamingStatistics$StreamingStatisticsBuilder object;
          static PyObject *wrap_Object(const StreamingStatistics$StreamingStatisticsBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
