#ifndef org_hipparchus_stat_descriptive_vector_VectorialStorelessStatistic_H
#define org_hipparchus_stat_descriptive_vector_VectorialStorelessStatistic_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        class StorelessUnivariateStatistic;
        class StorelessMultivariateStatistic;
      }
    }
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
              mid_init$_f5608c45922443b4,
              mid_clear_a1fa5dae97ea5ed2,
              mid_equals_460c5e2d9d51c6cc,
              mid_getDimension_55546ef6a647f39b,
              mid_getN_6c0ce7e438e5ded4,
              mid_getResult_25e1757a36c4dde2,
              mid_hashCode_55546ef6a647f39b,
              mid_increment_ab69da052b88f50c,
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
