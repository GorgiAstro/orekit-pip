#ifndef org_orekit_files_ccsds_definitions_BodyFacade_H
#define org_orekit_files_ccsds_definitions_BodyFacade_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataContext;
    }
    namespace files {
      namespace ccsds {
        namespace definitions {
          class BodyFacade;
          class CenterName;
        }
      }
    }
    namespace bodies {
      class CelestialBody;
      class CelestialBodies;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          class BodyFacade : public ::java::lang::Object {
           public:
            enum {
              mid_init$_d59998e5077b4551,
              mid_create_c9299e91d50cf830,
              mid_create_b59714137119c161,
              mid_create_309fa36b9789d935,
              mid_getBody_798caa59db6076aa,
              mid_getName_0090f7797e403f43,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BodyFacade(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BodyFacade(const BodyFacade& obj) : ::java::lang::Object(obj) {}

            BodyFacade(const ::java::lang::String &, const ::org::orekit::bodies::CelestialBody &);

            static BodyFacade create(const ::org::orekit::files::ccsds::definitions::CenterName &);
            static BodyFacade create(const ::org::orekit::files::ccsds::definitions::CenterName &, const ::org::orekit::bodies::CelestialBodies &);
            static BodyFacade create(const ::org::orekit::files::ccsds::definitions::CenterName &, const ::org::orekit::data::DataContext &);
            ::org::orekit::bodies::CelestialBody getBody() const;
            ::java::lang::String getName() const;
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
          extern PyType_Def PY_TYPE_DEF(BodyFacade);
          extern PyTypeObject *PY_TYPE(BodyFacade);

          class t_BodyFacade {
          public:
            PyObject_HEAD
            BodyFacade object;
            static PyObject *wrap_Object(const BodyFacade&);
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
