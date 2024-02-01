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
      class CelestialBodies;
      class CelestialBody;
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
              mid_init$_64c480fce8d50750,
              mid_create_992f0af2f17e9fc3,
              mid_create_1ffe9108b77134ed,
              mid_create_f4e150b0b64b3a10,
              mid_getBody_a1474f5cfab89b5e,
              mid_getName_d2c8eb4129821f0e,
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
