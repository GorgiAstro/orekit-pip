#ifndef org_orekit_files_ccsds_definitions_FrameFacade_H
#define org_orekit_files_ccsds_definitions_FrameFacade_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataContext;
    }
    namespace files {
      namespace ccsds {
        namespace definitions {
          class FrameFacade;
          class SpacecraftBodyFrame;
          class OrbitRelativeFrame;
          class CelestialBodyFrame;
        }
      }
    }
    namespace utils {
      class IERSConventions;
      class PVCoordinatesProvider;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace frames {
      class Transform;
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

          class FrameFacade : public ::java::lang::Object {
           public:
            enum {
              mid_init$_974e42dec5c8c61f,
              mid_asCelestialBodyFrame_f7bff9eee7210db3,
              mid_asFrame_cb151471db4570f0,
              mid_asOrbitRelativeFrame_0b1c57b4ded01423,
              mid_asSpacecraftBodyFrame_e9bc4980320b8143,
              mid_getName_d2c8eb4129821f0e,
              mid_getTransform_f0f79dd476f7dc19,
              mid_map_df56c09046b263c6,
              mid_parse_30a55f049e86b82f,
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
