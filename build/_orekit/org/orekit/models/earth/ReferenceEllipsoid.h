#ifndef org_orekit_models_earth_ReferenceEllipsoid_H
#define org_orekit_models_earth_ReferenceEllipsoid_H

#include "org/orekit/bodies/OneAxisEllipsoid.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        class ReferenceEllipsoid;
        class EarthShape;
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
            mid_init$_dc7300a4d004d885,
            mid_getC2n0_69cfb132c661aca4,
            mid_getEllipsoid_576f0b44e8384336,
            mid_getGM_557b8123390d8d0c,
            mid_getGrs80_039ba5d4c7fe1b86,
            mid_getIers2003_039ba5d4c7fe1b86,
            mid_getIers2010_039ba5d4c7fe1b86,
            mid_getIers96_039ba5d4c7fe1b86,
            mid_getNormalGravity_7e960cd6eee376d8,
            mid_getPolarRadius_557b8123390d8d0c,
            mid_getSpin_557b8123390d8d0c,
            mid_getWgs84_039ba5d4c7fe1b86,
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
