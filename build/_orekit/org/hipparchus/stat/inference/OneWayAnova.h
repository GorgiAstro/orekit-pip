#ifndef org_hipparchus_stat_inference_OneWayAnova_H
#define org_hipparchus_stat_inference_OneWayAnova_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
      class MathIllegalStateException;
      class NullArgumentException;
    }
    namespace stat {
      namespace descriptive {
        class StreamingStatistics;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        class OneWayAnova : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_anovaFValue_ce4bc28a12afbddc,
            mid_anovaPValue_ce4bc28a12afbddc,
            mid_anovaPValue_5347d7d7c42ce1ec,
            mid_anovaTest_9bf4a3edb5ef37bf,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit OneWayAnova(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          OneWayAnova(const OneWayAnova& obj) : ::java::lang::Object(obj) {}

          OneWayAnova();

          jdouble anovaFValue(const ::java::util::Collection &) const;
          jdouble anovaPValue(const ::java::util::Collection &) const;
          jdouble anovaPValue(const ::java::util::Collection &, jboolean) const;
          jboolean anovaTest(const ::java::util::Collection &, jdouble) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {
        extern PyType_Def PY_TYPE_DEF(OneWayAnova);
        extern PyTypeObject *PY_TYPE(OneWayAnova);

        class t_OneWayAnova {
        public:
          PyObject_HEAD
          OneWayAnova object;
          static PyObject *wrap_Object(const OneWayAnova&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
