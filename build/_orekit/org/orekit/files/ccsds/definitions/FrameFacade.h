#ifndef org_orekit_files_ccsds_definitions_FrameFacade_H
#define org_orekit_files_ccsds_definitions_FrameFacade_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class OrbitRelativeFrame;
          class CelestialBodyFrame;
          class FrameFacade;
          class SpacecraftBodyFrame;
        }
      }
    }
    namespace utils {
      class IERSConventions;
      class PVCoordinatesProvider;
    }
    namespace data {
      class DataContext;
    }
    namespace frames {
      class Transform;
      class Frame;
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
              mid_init$_85fa769e8cc15eaf,
              mid_asCelestialBodyFrame_5ac4f33db9e11fd5,
              mid_asFrame_2c51111cc6894ba1,
              mid_asOrbitRelativeFrame_77481b528a1ae805,
              mid_asSpacecraftBodyFrame_24772727764a5aad,
              mid_getName_1c1fa1e935d6cdcf,
              mid_getTransform_43c8dcf3729902ff,
              mid_map_bff8ea121086e3b2,
              mid_parse_c6da9d98f548ff6b,
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
