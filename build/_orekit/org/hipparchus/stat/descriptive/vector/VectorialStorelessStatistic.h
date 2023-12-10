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
              mid_init$_5a48054a38617aaa,
              mid_clear_7ae3461a92a43152,
              mid_equals_229c87223f486349,
              mid_getDimension_f2f64475e4580546,
              mid_getN_a27fc9afd27e559d,
              mid_getResult_7cdc325af0834901,
              mid_hashCode_f2f64475e4580546,
              mid_increment_ebc26dcaf4761286,
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
