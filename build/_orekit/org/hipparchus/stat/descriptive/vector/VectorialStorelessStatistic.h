#ifndef org_hipparchus_stat_descriptive_vector_VectorialStorelessStatistic_H
#define org_hipparchus_stat_descriptive_vector_VectorialStorelessStatistic_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        class StorelessMultivariateStatistic;
        class StorelessUnivariateStatistic;
      }
    }
  }
}
namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace vector {

          class VectorialStorelessStatistic : public ::java::lang::Object {
           public:
            enum {
              mid_init$_9e70572d4f37e6cf,
              mid_clear_0fa09c18fee449d5,
              mid_equals_65c7d273e80d497a,
              mid_getDimension_570ce0828f81a2c1,
              mid_getN_492808a339bfa35f,
              mid_getResult_60c7040667a7dc5c,
              mid_hashCode_570ce0828f81a2c1,
              mid_increment_fa9d415d19f69361,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit VectorialStorelessStatistic(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            VectorialStorelessStatistic(const VectorialStorelessStatistic& obj) : ::java::lang::Object(obj) {}

            VectorialStorelessStatistic(jint, const ::org::hipparchus::stat::descriptive::StorelessUnivariateStatistic &);

            void clear() const;
            jboolean equals(const ::java::lang::Object &) const;
            jint getDimension() const;
            jlong getN() const;
            JArray< jdouble > getResult() const;
            jint hashCode() const;
            void increment(const JArray< jdouble > &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace vector {
          extern PyType_Def PY_TYPE_DEF(VectorialStorelessStatistic);
          extern PyTypeObject *PY_TYPE(VectorialStorelessStatistic);

          class t_VectorialStorelessStatistic {
          public:
            PyObject_HEAD
            VectorialStorelessStatistic object;
            static PyObject *wrap_Object(const VectorialStorelessStatistic&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
