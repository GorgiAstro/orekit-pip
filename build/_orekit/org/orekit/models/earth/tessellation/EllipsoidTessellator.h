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
    namespace models {
      namespace earth {
        namespace tessellation {
          class Tile;
          class TileAiming;
        }
      }
    }
    namespace bodies {
      class OneAxisEllipsoid;
      class GeodeticPoint;
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
              mid_init$_de32548b1c0b8c51,
              mid_buildSimpleZone_8d71e4724117bcd6,
              mid_buildSimpleZone_586b06c31e5fe186,
              mid_sample_5c08085dc08f44c2,
              mid_tessellate_247336b24d4de700,
              mid_toGeodetic_2006aa17613f33d7,
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
