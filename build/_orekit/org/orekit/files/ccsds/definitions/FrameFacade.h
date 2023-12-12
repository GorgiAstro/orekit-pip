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
          class CelestialBodyFrame;
          class SpacecraftBodyFrame;
          class FrameFacade;
          class OrbitRelativeFrame;
        }
      }
    }
    namespace frames {
      class Transform;
      class Frame;
    }
    namespace utils {
      class PVCoordinatesProvider;
      class IERSConventions;
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
              mid_init$_6272cf6621b4982f,
              mid_asCelestialBodyFrame_31bca1b16d563f2b,
              mid_asFrame_6c9bc0a928c56d4e,
              mid_asOrbitRelativeFrame_8f84f1568afeba4e,
              mid_asSpacecraftBodyFrame_f86371e743965d5e,
              mid_getName_3cffd47377eca18a,
              mid_getTransform_ae53bb0c5f8772f0,
              mid_map_447d75fca7063cf4,
              mid_parse_06aac91ca02a85e1,
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
