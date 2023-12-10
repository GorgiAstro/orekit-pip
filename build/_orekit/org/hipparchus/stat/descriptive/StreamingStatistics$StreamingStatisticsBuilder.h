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
            mid_init$_0fa09c18fee449d5,
            mid_build_28f0324196bf3cb7,
            mid_extrema_41e9afe9c540b74b,
            mid_moments_41e9afe9c540b74b,
            mid_percentiles_a4f2780f270a815f,
            mid_sumOfLogs_41e9afe9c540b74b,
            mid_sumOfSquares_41e9afe9c540b74b,
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
