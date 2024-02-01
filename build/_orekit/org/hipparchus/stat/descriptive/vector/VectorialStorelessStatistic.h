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
              mid_init$_510336e14635cde1,
              mid_clear_ff7cb6c242604316,
              mid_equals_72faff9b05f5ed5e,
              mid_getDimension_d6ab429752e7c267,
              mid_getN_42c72b98e3c2e08a,
              mid_getResult_be783177b060994b,
              mid_hashCode_d6ab429752e7c267,
              mid_increment_a71c45509eaf92d1,
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
