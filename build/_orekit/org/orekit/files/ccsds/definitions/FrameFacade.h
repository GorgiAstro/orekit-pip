#ifndef org_orekit_files_ccsds_definitions_FrameFacade_H
#define org_orekit_files_ccsds_definitions_FrameFacade_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class OrbitRelativeFrame;
          class FrameFacade;
          class SpacecraftBodyFrame;
          class CelestialBodyFrame;
        }
      }
    }
    namespace frames {
      class Frame;
      class Transform;
    }
    namespace data {
      class DataContext;
    }
    namespace utils {
      class IERSConventions;
      class PVCoordinatesProvider;
    }
    namespace time {
      class AbsoluteDate;
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

          class FrameFacade : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f24302295efa6a9f,
              mid_asCelestialBodyFrame_00a4299572a8abf7,
              mid_asFrame_c8fe21bcdac65bf6,
              mid_asOrbitRelativeFrame_e2b586b2f9e79328,
              mid_asSpacecraftBodyFrame_c39ec70cc3f195d1,
              mid_getName_0090f7797e403f43,
              mid_getTransform_63f8c54cba6152e0,
              mid_map_2aaf6c049b4b1322,
              mid_parse_1d1c30b952268863,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FrameFacade(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FrameFacade(const FrameFacade& obj) : ::java::lang::Object(obj) {}

            FrameFacade(const ::org::orekit::frames::Frame &, const ::org::orekit::files::ccsds::definitions::CelestialBodyFrame &, const ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame &, const ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame &, const ::java::lang::String &);

            ::org::orekit::files::ccsds::definitions::CelestialBodyFrame asCelestialBodyFrame() const;
            ::org::orekit::frames::Frame asFrame() const;
            ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame asOrbitRelativeFrame() const;
            ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame asSpacecraftBodyFrame() const;
            ::java::lang::String getName() const;
            static ::org::orekit::frames::Transform getTransform(const FrameFacade &, const FrameFacade &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::utils::PVCoordinatesProvider &);
            static FrameFacade map(const ::org::orekit::frames::Frame &);
            static FrameFacade parse(const ::java::lang::String &, const ::org::orekit::utils::IERSConventions &, jboolean, const ::org::orekit::data::DataContext &, jboolean, jboolean, jboolean);
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
          extern PyType_Def PY_TYPE_DEF(FrameFacade);
          extern PyTypeObject *PY_TYPE(FrameFacade);

          class t_FrameFacade {
          public:
            PyObject_HEAD
            FrameFacade object;
            static PyObject *wrap_Object(const FrameFacade&);
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
