#ifndef org_orekit_files_ccsds_definitions_BodyFacade_H
#define org_orekit_files_ccsds_definitions_BodyFacade_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class BodyFacade;
          class CenterName;
        }
      }
    }
    namespace data {
      class DataContext;
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
              mid_init$_b2d579a3fdca1cae,
              mid_create_99dc00c59c0cc646,
              mid_create_7c1345ab8c0627cd,
              mid_create_157161de7288ad09,
              mid_getBody_624686a38a6b107c,
              mid_getName_11b109bd155ca898,
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
