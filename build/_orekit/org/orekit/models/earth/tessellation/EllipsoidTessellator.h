#ifndef org_orekit_models_earth_tessellation_EllipsoidTessellator_H
#define org_orekit_models_earth_tessellation_EllipsoidTessellator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace bodies {
      class GeodeticPoint;
      class OneAxisEllipsoid;
    }
    namespace models {
      namespace earth {
        namespace tessellation {
          class TileAiming;
          class Tile;
        }
      }
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {
          class SphericalPolygonsSet;
        }
      }
    }
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
              mid_init$_a3d91d49623a90bf,
              mid_buildSimpleZone_784441ded7dc083f,
              mid_buildSimpleZone_2bffb02ae52a21cd,
              mid_sample_847bf4854a4b83cd,
              mid_tessellate_f423e5687a3d6692,
              mid_toGeodetic_1767b75db8cabb48,
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
