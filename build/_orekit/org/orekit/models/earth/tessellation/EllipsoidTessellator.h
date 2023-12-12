#ifndef org_orekit_models_earth_tessellation_EllipsoidTessellator_H
#define org_orekit_models_earth_tessellation_EllipsoidTessellator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {
          class SphericalPolygonsSet;
        }
      }
    }
  }
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {
          class TileAiming;
          class Tile;
        }
      }
    }
    namespace bodies {
      class GeodeticPoint;
      class OneAxisEllipsoid;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {

          class EllipsoidTessellator : public ::java::lang::Object {
           public:
            enum {
              mid_init$_a31e019ba9d05ce7,
              mid_buildSimpleZone_504a8d441b5202c7,
              mid_buildSimpleZone_ec6a766e431c796c,
              mid_sample_78bd2592ae6dbd42,
              mid_tessellate_6796254ce45b0eb1,
              mid_toGeodetic_0015b467bc7250e0,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit EllipsoidTessellator(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            EllipsoidTessellator(const EllipsoidTessellator& obj) : ::java::lang::Object(obj) {}

            EllipsoidTessellator(const ::org::orekit::bodies::OneAxisEllipsoid &, const ::org::orekit::models::earth::tessellation::TileAiming &, jint);

            static ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet buildSimpleZone(jdouble, const JArray< ::org::orekit::bodies::GeodeticPoint > &);
            static ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet buildSimpleZone(jdouble, const JArray< JArray< jdouble > > &);
            ::java::util::List sample(const ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet &, jdouble, jdouble) const;
            ::java::util::List tessellate(const ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet &, jdouble, jdouble, jdouble, jdouble, jboolean, jboolean) const;
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
        namespace tessellation {
          extern PyType_Def PY_TYPE_DEF(EllipsoidTessellator);
          extern PyTypeObject *PY_TYPE(EllipsoidTessellator);

          class t_EllipsoidTessellator {
          public:
            PyObject_HEAD
            EllipsoidTessellator object;
            static PyObject *wrap_Object(const EllipsoidTessellator&);
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
