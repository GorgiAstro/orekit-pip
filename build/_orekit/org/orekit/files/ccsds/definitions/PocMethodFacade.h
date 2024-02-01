#ifndef org_orekit_files_ccsds_definitions_PocMethodFacade_H
#define org_orekit_files_ccsds_definitions_PocMethodFacade_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class PocMethodFacade;
          class PocMethodType;
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

          class PocMethodFacade : public ::java::lang::Object {
           public:
            enum {
              mid_init$_a03163693f231223,
              mid_getName_d2c8eb4129821f0e,
              mid_getType_8cc529497929859e,
              mid_parse_993207c48db7c9c9,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PocMethodFacade(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PocMethodFacade(const PocMethodFacade& obj) : ::java::lang::Object(obj) {}

            PocMethodFacade(const ::java::lang::String &, const ::org::orekit::files::ccsds::definitions::PocMethodType &);

            ::java::lang::String getName() const;
            ::org::orekit::files::ccsds::definitions::PocMethodType getType() const;
            static PocMethodFacade parse(const ::java::lang::String &);
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
          extern PyType_Def PY_TYPE_DEF(PocMethodFacade);
          extern PyTypeObject *PY_TYPE(PocMethodFacade);

          class t_PocMethodFacade {
          public:
            PyObject_HEAD
            PocMethodFacade object;
            static PyObject *wrap_Object(const PocMethodFacade&);
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
