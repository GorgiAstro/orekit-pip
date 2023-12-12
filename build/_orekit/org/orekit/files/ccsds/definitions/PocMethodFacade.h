#ifndef org_orekit_files_ccsds_definitions_PocMethodFacade_H
#define org_orekit_files_ccsds_definitions_PocMethodFacade_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class PocMethodType;
          class PocMethodFacade;
        }
      }
    }
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
              mid_init$_94701ab674aa32f2,
              mid_getName_3cffd47377eca18a,
              mid_getType_02085b86725642db,
              mid_parse_589a3825a8dd2867,
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
