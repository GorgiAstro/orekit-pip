#ifndef org_orekit_files_ccsds_definitions_FrameFacade_H
#define org_orekit_files_ccsds_definitions_FrameFacade_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataContext;
    }
    namespace utils {
      class IERSConventions;
      class PVCoordinatesProvider;
    }
    namespace files {
      namespace ccsds {
        namespace definitions {
          class FrameFacade;
          class OrbitRelativeFrame;
          class CelestialBodyFrame;
          class SpacecraftBodyFrame;
        }
      }
    }
    namespace frames {
      class Frame;
      class Transform;
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
              mid_init$_9e70ffc025cdf925,
              mid_asCelestialBodyFrame_d0abc16340ab4d13,
              mid_asFrame_b86f9f61d97a7244,
              mid_asOrbitRelativeFrame_65b7b6f762019366,
              mid_asSpacecraftBodyFrame_630d91cd1f29802e,
              mid_getName_11b109bd155ca898,
              mid_getTransform_c498c028eaedca67,
              mid_map_1a943e9a4fa03361,
              mid_parse_86197fd144e503ce,
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
