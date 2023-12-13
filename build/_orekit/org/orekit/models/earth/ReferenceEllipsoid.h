#ifndef org_orekit_models_earth_ReferenceEllipsoid_H
#define org_orekit_models_earth_ReferenceEllipsoid_H

#include "org/orekit/bodies/OneAxisEllipsoid.h"

namespace org {
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace models {
      namespace earth {
        class ReferenceEllipsoid;
        class EarthShape;
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

        class ReferenceEllipsoid : public ::org::orekit::bodies::OneAxisEllipsoid {
         public:
          enum {
            mid_init$_29f310580315bd62,
            mid_getC2n0_2afcbc21f4e57ab2,
            mid_getEllipsoid_aa643af2699b886e,
            mid_getGM_b74f83833fdad017,
            mid_getGrs80_ede34de05fdfe414,
            mid_getIers2003_ede34de05fdfe414,
            mid_getIers2010_ede34de05fdfe414,
            mid_getIers96_ede34de05fdfe414,
            mid_getNormalGravity_04fd0666b613d2ab,
            mid_getPolarRadius_b74f83833fdad017,
            mid_getSpin_b74f83833fdad017,
            mid_getWgs84_ede34de05fdfe414,
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
