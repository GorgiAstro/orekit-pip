#ifndef org_orekit_files_ccsds_definitions_OdMethodFacade_H
#define org_orekit_files_ccsds_definitions_OdMethodFacade_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class OdMethodType;
          class OdMethodFacade;
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
              mid_init$_21ac04171116ebbb,
              mid_getName_3cffd47377eca18a,
              mid_getTool_3cffd47377eca18a,
              mid_getType_b31d43c44ca02d59,
              mid_parse_c6542493769239f1,
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
