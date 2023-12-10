#ifndef org_orekit_models_earth_displacement_TidalDisplacement_H
#define org_orekit_models_earth_displacement_TidalDisplacement_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {
          class StationDisplacement;
        }
      }
    }
    namespace utils {
      class IERSConventions;
      class PVCoordinatesProvider;
    }
    namespace frames {
      class Frame;
    }
    namespace data {
      class BodiesElements;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {

          class TidalDisplacement : public ::java::lang::Object {
           public:
            enum {
              mid_init$_41baa2835134b5c4,
              mid_displacement_dc5338a5a1255d1d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TidalDisplacement(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TidalDisplacement(const TidalDisplacement& obj) : ::java::lang::Object(obj) {}

            TidalDisplacement(jdouble, jdouble, jdouble, const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::utils::IERSConventions &, jboolean);

            ::org::hipparchus::geometry::euclidean::threed::Vector3D displacement(const ::org::orekit::data::BodiesElements &, const ::org::orekit::frames::Frame &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {
          extern PyType_Def PY_TYPE_DEF(TidalDisplacement);
          extern PyTypeObject *PY_TYPE(TidalDisplacement);

          class t_TidalDisplacement {
          public:
            PyObject_HEAD
            TidalDisplacement object;
            static PyObject *wrap_Object(const TidalDisplacement&);
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
