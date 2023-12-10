#ifndef org_hipparchus_stat_descriptive_moment_SemiVariance$Direction_H
#define org_hipparchus_stat_descriptive_moment_SemiVariance$Direction_H

#include "java/lang/Enum.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {
          class SemiVariance$Direction;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          class SemiVariance$Direction : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_49b8ea7599d58688,
              mid_values_a91e0e5bbc0692ab,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SemiVariance$Direction(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SemiVariance$Direction(const SemiVariance$Direction& obj) : ::java::lang::Enum(obj) {}

            static SemiVariance$Direction *DOWNSIDE;
            static SemiVariance$Direction *UPSIDE;

            static SemiVariance$Direction valueOf(const ::java::lang::String &);
            static JArray< SemiVariance$Direction > values();
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
        namespace moment {
          extern PyType_Def PY_TYPE_DEF(SemiVariance$Direction);
          extern PyTypeObject *PY_TYPE(SemiVariance$Direction);

          class t_SemiVariance$Direction {
          public:
            PyObject_HEAD
            SemiVariance$Direction object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_SemiVariance$Direction *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const SemiVariance$Direction&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const SemiVariance$Direction&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
