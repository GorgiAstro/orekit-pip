#ifndef org_orekit_models_earth_atmosphere_HarrisPriester_H
#define org_orekit_models_earth_atmosphere_HarrisPriester_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Vector3D;
        }
      }
    }
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace models {
      namespace earth {
        namespace atmosphere {
          class Atmosphere;
        }
      }
    }
    namespace bodies {
      class OneAxisEllipsoid;
    }
    namespace frames {
      class Frame;
    }
    namespace utils {
      class PVCoordinatesProvider;
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
        namespace atmosphere {

          class HarrisPriester : public ::java::lang::Object {
           public:
            enum {
              mid_init$_c1551a10d56610aa,
              mid_init$_f1008dbab89482e1,
              mid_init$_9978cd126181ea09,
              mid_init$_8b6484f97e0ed072,
              mid_getDensity_7c8d4944669ef839,
              mid_getDensity_855cbb355cce7dd8,
              mid_getDensity_0c5821935d445848,
              mid_getDensity_65e73ef68b3713d0,
              mid_getFrame_cb151471db4570f0,
              mid_getMaxAlt_9981f74b2d109da6,
              mid_getMinAlt_9981f74b2d109da6,
              mid_getTabDensity_eda3f19b8225f78f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit HarrisPriester(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            HarrisPriester(const HarrisPriester& obj) : ::java::lang::Object(obj) {}

            HarrisPriester(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::bodies::OneAxisEllipsoid &);
            HarrisPriester(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::bodies::OneAxisEllipsoid &, const JArray< JArray< jdouble > > &);
            HarrisPriester(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::bodies::OneAxisEllipsoid &, jdouble);
            HarrisPriester(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::bodies::OneAxisEllipsoid &, const JArray< JArray< jdouble > > &, jdouble);

            ::org::hipparchus::CalculusFieldElement getDensity(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &) const;
            jdouble getDensity(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
            ::org::hipparchus::CalculusFieldElement getDensity(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::orekit::frames::Frame &) const;
            jdouble getDensity(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::frames::Frame &) const;
            ::org::orekit::frames::Frame getFrame() const;
            jdouble getMaxAlt() const;
            jdouble getMinAlt() const;
            JArray< JArray< jdouble > > getTabDensity() const;
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
        namespace atmosphere {
          extern PyType_Def PY_TYPE_DEF(HarrisPriester);
          extern PyTypeObject *PY_TYPE(HarrisPriester);

          class t_HarrisPriester {
          public:
            PyObject_HEAD
            HarrisPriester object;
            static PyObject *wrap_Object(const HarrisPriester&);
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
