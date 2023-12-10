#ifndef org_orekit_files_ccsds_definitions_CenterName_H
#define org_orekit_files_ccsds_definitions_CenterName_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace bodies {
      class CelestialBody;
      class CelestialBodies;
    }
    namespace files {
      namespace ccsds {
        namespace definitions {
          class CenterName;
        }
      }
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

          class CenterName : public ::java::lang::Enum {
           public:
            enum {
              mid_getCelestialBody_798caa59db6076aa,
              mid_getCelestialBody_86edba62e1b0c8fe,
              mid_guessCenter_febdc9b326bc0d01,
              mid_map_51935237629eb555,
              mid_valueOf_60ea843e15b39289,
              mid_values_3a5200f01c72cf94,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CenterName(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CenterName(const CenterName& obj) : ::java::lang::Enum(obj) {}

            static CenterName *EARTH;
            static CenterName *EARTH_MOON;
            static CenterName *JUPITER;
            static CenterName *MARS;
            static CenterName *MERCURY;
            static CenterName *MOON;
            static CenterName *NEPTUNE;
            static CenterName *PLUTO;
            static CenterName *SATURN;
            static CenterName *SOLAR_SYSTEM_BARYCENTER;
            static CenterName *SUN;
            static CenterName *URANUS;
            static CenterName *VENUS;

            ::org::orekit::bodies::CelestialBody getCelestialBody() const;
            ::org::orekit::bodies::CelestialBody getCelestialBody(const ::org::orekit::bodies::CelestialBodies &) const;
            static ::java::lang::String guessCenter(const ::org::orekit::frames::Frame &);
            static CenterName map(const ::org::orekit::frames::Frame &);
            static CenterName valueOf(const ::java::lang::String &);
            static JArray< CenterName > values();
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
          extern PyType_Def PY_TYPE_DEF(CenterName);
          extern PyTypeObject *PY_TYPE(CenterName);

          class t_CenterName {
          public:
            PyObject_HEAD
            CenterName object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_CenterName *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const CenterName&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const CenterName&, PyTypeObject *);
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
