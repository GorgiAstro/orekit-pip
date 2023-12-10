#ifndef org_orekit_models_earth_displacement_TectonicsDisplacement_H
#define org_orekit_models_earth_displacement_TectonicsDisplacement_H

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
    namespace frames {
      class Frame;
    }
    namespace data {
      class BodiesElements;
    }
    namespace time {
      class AbsoluteDate;
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

          class TectonicsDisplacement : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3d7cc17d4ec11a9f,
              mid_displacement_dc5338a5a1255d1d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TectonicsDisplacement(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TectonicsDisplacement(const TectonicsDisplacement& obj) : ::java::lang::Object(obj) {}

            TectonicsDisplacement(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);

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
          extern PyType_Def PY_TYPE_DEF(TectonicsDisplacement);
          extern PyTypeObject *PY_TYPE(TectonicsDisplacement);

          class t_TectonicsDisplacement {
          public:
            PyObject_HEAD
            TectonicsDisplacement object;
            static PyObject *wrap_Object(const TectonicsDisplacement&);
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
