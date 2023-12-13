#ifndef org_orekit_files_ccsds_definitions_CelestialBodyFrame_H
#define org_orekit_files_ccsds_definitions_CelestialBodyFrame_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class CelestialBodyFrame;
        }
      }
    }
    namespace utils {
      class IERSConventions;
    }
    namespace data {
      class DataContext;
    }
    namespace frames {
      class Frame;
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

          class CelestialBodyFrame : public ::java::lang::Enum {
           public:
            enum {
              mid_getFrame_585ac99dc61d3871,
              mid_getName_1c1fa1e935d6cdcf,
              mid_guessFrame_e2e1dd08ff42c311,
              mid_map_d54827376d276157,
              mid_parse_04f54e6de2e14bec,
              mid_valueOf_04f54e6de2e14bec,
              mid_values_a9d376871d4e60d5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CelestialBodyFrame(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CelestialBodyFrame(const CelestialBodyFrame& obj) : ::java::lang::Enum(obj) {}

            static CelestialBodyFrame *EME2000;
            static CelestialBodyFrame *GCRF;
            static CelestialBodyFrame *GRC;
            static CelestialBodyFrame *GTOD;
            static CelestialBodyFrame *ICRF;
            static CelestialBodyFrame *ITRF;
            static CelestialBodyFrame *ITRF1988;
            static CelestialBodyFrame *ITRF1989;
            static CelestialBodyFrame *ITRF1990;
            static CelestialBodyFrame *ITRF1991;
            static CelestialBodyFrame *ITRF1992;
            static CelestialBodyFrame *ITRF1993;
            static CelestialBodyFrame *ITRF1994;
            static CelestialBodyFrame *ITRF1996;
            static CelestialBodyFrame *ITRF1997;
            static CelestialBodyFrame *ITRF2000;
            static CelestialBodyFrame *ITRF2005;
            static CelestialBodyFrame *ITRF2008;
            static CelestialBodyFrame *ITRF2014;
            static CelestialBodyFrame *ITRF2020;
            static CelestialBodyFrame *J2000;
            static CelestialBodyFrame *MCI;
            static CelestialBodyFrame *TDR;
            static CelestialBodyFrame *TEME;
            static CelestialBodyFrame *TOD;

            ::org::orekit::frames::Frame getFrame(const ::org::orekit::utils::IERSConventions &, jboolean, const ::org::orekit::data::DataContext &) const;
            ::java::lang::String getName() const;
            static ::java::lang::String guessFrame(const ::org::orekit::frames::Frame &);
            static CelestialBodyFrame map(const ::org::orekit::frames::Frame &);
            static CelestialBodyFrame parse(const ::java::lang::String &);
            static CelestialBodyFrame valueOf(const ::java::lang::String &);
            static JArray< CelestialBodyFrame > values();
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
          extern PyType_Def PY_TYPE_DEF(CelestialBodyFrame);
          extern PyTypeObject *PY_TYPE(CelestialBodyFrame);

          class t_CelestialBodyFrame {
          public:
            PyObject_HEAD
            CelestialBodyFrame object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_CelestialBodyFrame *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const CelestialBodyFrame&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const CelestialBodyFrame&, PyTypeObject *);
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
