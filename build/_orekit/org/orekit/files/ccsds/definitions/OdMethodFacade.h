#ifndef org_orekit_files_ccsds_definitions_OdMethodFacade_H
#define org_orekit_files_ccsds_definitions_OdMethodFacade_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class OdMethodFacade;
          class OdMethodType;
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
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          class OdMethodFacade : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e8b6fbd77ed6283c,
              mid_getName_d2c8eb4129821f0e,
              mid_getTool_d2c8eb4129821f0e,
              mid_getType_14d4abc57833ba12,
              mid_parse_c6a025084524ed8a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OdMethodFacade(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OdMethodFacade(const OdMethodFacade& obj) : ::java::lang::Object(obj) {}

            OdMethodFacade(const ::java::lang::String &, const ::org::orekit::files::ccsds::definitions::OdMethodType &, const ::java::lang::String &);

            ::java::lang::String getName() const;
            ::java::lang::String getTool() const;
            ::org::orekit::files::ccsds::definitions::OdMethodType getType() const;
            static OdMethodFacade parse(const ::java::lang::String &);
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
      namespace ccsds {
        namespace definitions {
          extern PyType_Def PY_TYPE_DEF(OdMethodFacade);
          extern PyTypeObject *PY_TYPE(OdMethodFacade);

          class t_OdMethodFacade {
          public:
            PyObject_HEAD
            OdMethodFacade object;
            static PyObject *wrap_Object(const OdMethodFacade&);
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
