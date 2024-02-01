#ifndef org_orekit_models_earth_ReferenceEllipsoid_H
#define org_orekit_models_earth_ReferenceEllipsoid_H

#include "org/orekit/bodies/OneAxisEllipsoid.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        class EarthShape;
        class ReferenceEllipsoid;
      }
    }
    namespace frames {
      class Frame;
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

        class ReferenceEllipsoid : public ::org::orekit::bodies::OneAxisEllipsoid {
         public:
          enum {
            mid_init$_a99091eff2387adb,
            mid_getC2n0_ce4c02d583456bc9,
            mid_getEllipsoid_cff2eba11ebd2420,
            mid_getGM_9981f74b2d109da6,
            mid_getGrs80_dda366f84678721b,
            mid_getIers2003_dda366f84678721b,
            mid_getIers2010_dda366f84678721b,
            mid_getIers96_dda366f84678721b,
            mid_getNormalGravity_bf28ed64d6e8576b,
            mid_getPolarRadius_9981f74b2d109da6,
            mid_getSpin_9981f74b2d109da6,
            mid_getWgs84_dda366f84678721b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ReferenceEllipsoid(jobject obj) : ::org::orekit::bodies::OneAxisEllipsoid(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ReferenceEllipsoid(const ReferenceEllipsoid& obj) : ::org::orekit::bodies::OneAxisEllipsoid(obj) {}

          ReferenceEllipsoid(jdouble, jdouble, const ::org::orekit::frames::Frame &, jdouble, jdouble);

          jdouble getC2n0(jint) const;
          ReferenceEllipsoid getEllipsoid() const;
          jdouble getGM() const;
          static ReferenceEllipsoid getGrs80(const ::org::orekit::frames::Frame &);
          static ReferenceEllipsoid getIers2003(const ::org::orekit::frames::Frame &);
          static ReferenceEllipsoid getIers2010(const ::org::orekit::frames::Frame &);
          static ReferenceEllipsoid getIers96(const ::org::orekit::frames::Frame &);
          jdouble getNormalGravity(jdouble) const;
          jdouble getPolarRadius() const;
          jdouble getSpin() const;
          static ReferenceEllipsoid getWgs84(const ::org::orekit::frames::Frame &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        extern PyType_Def PY_TYPE_DEF(ReferenceEllipsoid);
        extern PyTypeObject *PY_TYPE(ReferenceEllipsoid);

        class t_ReferenceEllipsoid {
        public:
          PyObject_HEAD
          ReferenceEllipsoid object;
          static PyObject *wrap_Object(const ReferenceEllipsoid&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
