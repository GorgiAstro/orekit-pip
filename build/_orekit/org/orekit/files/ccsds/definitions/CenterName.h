#ifndef org_orekit_files_ccsds_definitions_CenterName_H
#define org_orekit_files_ccsds_definitions_CenterName_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class CenterName;
        }
      }
    }
    namespace frames {
      class Frame;
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

          class CenterName : public ::java::lang::Enum {
           public:
            enum {
              mid_getCelestialBody_624686a38a6b107c,
              mid_getCelestialBody_e2da993b112eb885,
              mid_guessCenter_4120982664ebec0c,
              mid_map_26124556454e0c08,
              mid_valueOf_54896343e052f441,
              mid_values_228befef05db3571,
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
