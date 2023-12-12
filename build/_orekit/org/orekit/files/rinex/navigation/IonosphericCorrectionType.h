#ifndef org_orekit_files_rinex_navigation_IonosphericCorrectionType_H
#define org_orekit_files_rinex_navigation_IonosphericCorrectionType_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {
          class IonosphericCorrectionType;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          class IonosphericCorrectionType : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_34f3c2211724e34d,
              mid_values_e461afe201e53b10,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IonosphericCorrectionType(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IonosphericCorrectionType(const IonosphericCorrectionType& obj) : ::java::lang::Enum(obj) {}

            static IonosphericCorrectionType *BDS;
            static IonosphericCorrectionType *GAL;
            static IonosphericCorrectionType *GPS;
            static IonosphericCorrectionType *IRN;
            static IonosphericCorrectionType *QZS;

            static IonosphericCorrectionType valueOf(const ::java::lang::String &);
            static JArray< IonosphericCorrectionType > values();
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {
          extern PyType_Def PY_TYPE_DEF(IonosphericCorrectionType);
          extern PyTypeObject *PY_TYPE(IonosphericCorrectionType);

          class t_IonosphericCorrectionType {
          public:
            PyObject_HEAD
            IonosphericCorrectionType object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_IonosphericCorrectionType *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const IonosphericCorrectionType&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const IonosphericCorrectionType&, PyTypeObject *);
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
