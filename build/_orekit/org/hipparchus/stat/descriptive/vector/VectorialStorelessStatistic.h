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
        class StorelessMultivariateStatistic;
        class StorelessUnivariateStatistic;
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
              mid_init$_87f7acbd7d5116c5,
              mid_clear_0640e6acf969ed28,
              mid_equals_221e8e85cb385209,
              mid_getDimension_412668abc8d889e9,
              mid_getN_9e26256fb0d384a2,
              mid_getResult_a53a7513ecedada2,
              mid_hashCode_412668abc8d889e9,
              mid_increment_cc18240f4a737f14,
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
