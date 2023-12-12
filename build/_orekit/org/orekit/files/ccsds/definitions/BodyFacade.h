#ifndef org_orekit_files_ccsds_definitions_BodyFacade_H
#define org_orekit_files_ccsds_definitions_BodyFacade_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class CenterName;
          class BodyFacade;
        }
      }
    }
    namespace bodies {
      class CelestialBody;
      class CelestialBodies;
    }
    namespace data {
      class DataContext;
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
              mid_init$_b8d85b160e35dea0,
              mid_create_8350318c3f6a35fa,
              mid_create_6a724a5aaeb66912,
              mid_create_66495be5ac120ead,
              mid_getBody_40e74583267ad550,
              mid_getName_3cffd47377eca18a,
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
