#ifndef org_orekit_forces_BoxAndSolarArraySpacecraft_H
#define org_orekit_forces_BoxAndSolarArraySpacecraft_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {
        class RadiationSensitive;
      }
      class Panel;
      namespace drag {
        class DragSensitive;
      }
    }
    namespace utils {
      class ExtendedPVCoordinatesProvider;
      class ParameterDriver;
    }
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
          class FieldVector3D;
        }
      }
    }
    class CalculusFieldElement;
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
    namespace forces {

      class BoxAndSolarArraySpacecraft : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0e7c3032c7c93ed3,
          mid_init$_a3477d519f0e75e1,
          mid_buildBox_6d5fc44237d88733,
          mid_buildPanels_7d90265de2e24a3d,
          mid_dragAcceleration_7a2b875d7cdeb947,
          mid_dragAcceleration_c95e6c4bf4979a1a,
          mid_getDragParametersDrivers_e62d3bb06d56d7e3,
          mid_getPanels_e62d3bb06d56d7e3,
          mid_getRadiationParametersDrivers_e62d3bb06d56d7e3,
          mid_radiationPressureAcceleration_a99eceb06c3864f8,
          mid_radiationPressureAcceleration_a230d7bdb943f733,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit BoxAndSolarArraySpacecraft(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        BoxAndSolarArraySpacecraft(const BoxAndSolarArraySpacecraft& obj) : ::java::lang::Object(obj) {}

        BoxAndSolarArraySpacecraft(const ::java::util::List &);
        BoxAndSolarArraySpacecraft(jdouble, jdouble, jdouble, const ::org::orekit::utils::ExtendedPVCoordinatesProvider &, jdouble, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble, jdouble, jdouble, jdouble);

        static ::java::util::List buildBox(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
        static ::java::util::List buildPanels(jdouble, jdouble, jdouble, const ::org::orekit::utils::ExtendedPVCoordinatesProvider &, jdouble, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble, jdouble, jdouble, jdouble);
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D dragAcceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D dragAcceleration(const ::org::orekit::propagation::SpacecraftState &, jdouble, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const JArray< jdouble > &) const;
        ::java::util::List getDragParametersDrivers() const;
        ::java::util::List getPanels() const;
        ::java::util::List getRadiationParametersDrivers() const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D radiationPressureAcceleration(const ::org::orekit::propagation::SpacecraftState &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const JArray< jdouble > &) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D radiationPressureAcceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace forces {
      extern PyType_Def PY_TYPE_DEF(BoxAndSolarArraySpacecraft);
      extern PyTypeObject *PY_TYPE(BoxAndSolarArraySpacecraft);

      class t_BoxAndSolarArraySpacecraft {
      public:
        PyObject_HEAD
        BoxAndSolarArraySpacecraft object;
        static PyObject *wrap_Object(const BoxAndSolarArraySpacecraft&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
