#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/ionosphere/IonosphericMappingFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *IonosphericMappingFunction::class$ = NULL;
          jmethodID *IonosphericMappingFunction::mids$ = NULL;
          bool IonosphericMappingFunction::live$ = false;

          jclass IonosphericMappingFunction::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/IonosphericMappingFunction");

              mids$ = new jmethodID[max_mid];
              mids$[mid_mappingFactor_04fd0666b613d2ab] = env->getMethodID(cls, "mappingFactor", "(D)D");
              mids$[mid_mappingFactor_6e00dc5eb352fe51] = env->getMethodID(cls, "mappingFactor", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble IonosphericMappingFunction::mappingFactor(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_mappingFactor_04fd0666b613d2ab], a0);
          }

          ::org::hipparchus::CalculusFieldElement IonosphericMappingFunction::mappingFactor(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_mappingFactor_6e00dc5eb352fe51], a0.this$));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {
          static PyObject *t_IonosphericMappingFunction_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphericMappingFunction_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphericMappingFunction_mappingFactor(t_IonosphericMappingFunction *self, PyObject *args);

          static PyMethodDef t_IonosphericMappingFunction__methods_[] = {
            DECLARE_METHOD(t_IonosphericMappingFunction, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphericMappingFunction, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphericMappingFunction, mappingFactor, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IonosphericMappingFunction)[] = {
            { Py_tp_methods, t_IonosphericMappingFunction__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IonosphericMappingFunction)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(IonosphericMappingFunction, t_IonosphericMappingFunction, IonosphericMappingFunction);

          void t_IonosphericMappingFunction::install(PyObject *module)
          {
            installType(&PY_TYPE(IonosphericMappingFunction), &PY_TYPE_DEF(IonosphericMappingFunction), module, "IonosphericMappingFunction", 0);
          }

          void t_IonosphericMappingFunction::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericMappingFunction), "class_", make_descriptor(IonosphericMappingFunction::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericMappingFunction), "wrapfn_", make_descriptor(t_IonosphericMappingFunction::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericMappingFunction), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IonosphericMappingFunction_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IonosphericMappingFunction::initializeClass, 1)))
              return NULL;
            return t_IonosphericMappingFunction::wrap_Object(IonosphericMappingFunction(((t_IonosphericMappingFunction *) arg)->object.this$));
          }
          static PyObject *t_IonosphericMappingFunction_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IonosphericMappingFunction::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_IonosphericMappingFunction_mappingFactor(t_IonosphericMappingFunction *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                jdouble result;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.mappingFactor(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.mappingFactor(a0));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "mappingFactor", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/Constants.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *Constants::class$ = NULL;
      jmethodID *Constants::mids$ = NULL;
      bool Constants::live$ = false;
      jdouble Constants::ARC_SECONDS_TO_RADIANS = (jdouble) 0;
      jdouble Constants::BESSELIAN_YEAR = (jdouble) 0;
      jdouble Constants::EGM96_EARTH_C20 = (jdouble) 0;
      jdouble Constants::EGM96_EARTH_C30 = (jdouble) 0;
      jdouble Constants::EGM96_EARTH_C40 = (jdouble) 0;
      jdouble Constants::EGM96_EARTH_C50 = (jdouble) 0;
      jdouble Constants::EGM96_EARTH_C60 = (jdouble) 0;
      jdouble Constants::EGM96_EARTH_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::EGM96_EARTH_MU = (jdouble) 0;
      jdouble Constants::EIGEN5C_EARTH_C20 = (jdouble) 0;
      jdouble Constants::EIGEN5C_EARTH_C30 = (jdouble) 0;
      jdouble Constants::EIGEN5C_EARTH_C40 = (jdouble) 0;
      jdouble Constants::EIGEN5C_EARTH_C50 = (jdouble) 0;
      jdouble Constants::EIGEN5C_EARTH_C60 = (jdouble) 0;
      jdouble Constants::EIGEN5C_EARTH_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::EIGEN5C_EARTH_MU = (jdouble) 0;
      jdouble Constants::G0_STANDARD_GRAVITY = (jdouble) 0;
      jdouble Constants::GRIM5C1_EARTH_ANGULAR_VELOCITY = (jdouble) 0;
      jdouble Constants::GRIM5C1_EARTH_C20 = (jdouble) 0;
      jdouble Constants::GRIM5C1_EARTH_C30 = (jdouble) 0;
      jdouble Constants::GRIM5C1_EARTH_C40 = (jdouble) 0;
      jdouble Constants::GRIM5C1_EARTH_C50 = (jdouble) 0;
      jdouble Constants::GRIM5C1_EARTH_C60 = (jdouble) 0;
      jdouble Constants::GRIM5C1_EARTH_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::GRIM5C1_EARTH_FLATTENING = (jdouble) 0;
      jdouble Constants::GRIM5C1_EARTH_MU = (jdouble) 0;
      jdouble Constants::GRS80_EARTH_ANGULAR_VELOCITY = (jdouble) 0;
      jdouble Constants::GRS80_EARTH_C20 = (jdouble) 0;
      jdouble Constants::GRS80_EARTH_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::GRS80_EARTH_FLATTENING = (jdouble) 0;
      jdouble Constants::GRS80_EARTH_MU = (jdouble) 0;
      jdouble Constants::IAU_2012_ASTRONOMICAL_UNIT = (jdouble) 0;
      jdouble Constants::IAU_2015_NOMINAL_EARTH_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::IAU_2015_NOMINAL_EARTH_GM = (jdouble) 0;
      jdouble Constants::IAU_2015_NOMINAL_EARTH_POLAR_RADIUS = (jdouble) 0;
      jdouble Constants::IAU_2015_NOMINAL_JUPITER_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::IAU_2015_NOMINAL_JUPITER_GM = (jdouble) 0;
      jdouble Constants::IAU_2015_NOMINAL_JUPITER_POLAR_RADIUS = (jdouble) 0;
      jdouble Constants::IAU_2015_NOMINAL_SOLAR_RADIUS = (jdouble) 0;
      jdouble Constants::IAU_2015_NOMINAL_SUN_GM = (jdouble) 0;
      jdouble Constants::IERS2003_EARTH_ANGULAR_VELOCITY = (jdouble) 0;
      jdouble Constants::IERS2003_EARTH_C20 = (jdouble) 0;
      jdouble Constants::IERS2003_EARTH_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::IERS2003_EARTH_FLATTENING = (jdouble) 0;
      jdouble Constants::IERS2003_EARTH_MU = (jdouble) 0;
      jdouble Constants::IERS2010_EARTH_ANGULAR_VELOCITY = (jdouble) 0;
      jdouble Constants::IERS2010_EARTH_C20 = (jdouble) 0;
      jdouble Constants::IERS2010_EARTH_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::IERS2010_EARTH_FLATTENING = (jdouble) 0;
      jdouble Constants::IERS2010_EARTH_MU = (jdouble) 0;
      jdouble Constants::IERS96_EARTH_ANGULAR_VELOCITY = (jdouble) 0;
      jdouble Constants::IERS96_EARTH_C20 = (jdouble) 0;
      jdouble Constants::IERS96_EARTH_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::IERS96_EARTH_FLATTENING = (jdouble) 0;
      jdouble Constants::IERS96_EARTH_MU = (jdouble) 0;
      jdouble Constants::JPL_SSD_ASTRONOMICAL_UNIT = (jdouble) 0;
      jdouble Constants::JPL_SSD_EARTH_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_EARTH_MOON_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_EARTH_PLUS_MOON_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_GAUSSIAN_GRAVITATIONAL_CONSTANT = (jdouble) 0;
      jdouble Constants::JPL_SSD_JUPITER_SYSTEM_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_MARS_SYSTEM_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_MERCURY_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_MOON_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_NEPTUNE_SYSTEM_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_PLUTO_SYSTEM_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_SATURN_SYSTEM_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_EARTH_PLUS_MOON_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_JUPITER_SYSTEM_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_MARS_SYSTEM_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_MERCURY_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_NEPTUNE_SYSTEM_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_PLUTO_SYSTEM_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_SATURN_SYSTEM_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_URANUS_SYSTEM_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_VENUS_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_URANUS_SYSTEM_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_VENUS_GM = (jdouble) 0;
      jdouble Constants::JULIAN_CENTURY = (jdouble) 0;
      jdouble Constants::JULIAN_DAY = (jdouble) 0;
      jdouble Constants::JULIAN_YEAR = (jdouble) 0;
      jdouble Constants::MOON_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::SPEED_OF_LIGHT = (jdouble) 0;
      jdouble Constants::SUN_RADIUS = (jdouble) 0;
      jdouble Constants::WGS84_EARTH_ANGULAR_VELOCITY = (jdouble) 0;
      jdouble Constants::WGS84_EARTH_C20 = (jdouble) 0;
      jdouble Constants::WGS84_EARTH_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::WGS84_EARTH_FLATTENING = (jdouble) 0;
      jdouble Constants::WGS84_EARTH_MU = (jdouble) 0;

      jclass Constants::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/Constants");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ARC_SECONDS_TO_RADIANS = env->getStaticDoubleField(cls, "ARC_SECONDS_TO_RADIANS");
          BESSELIAN_YEAR = env->getStaticDoubleField(cls, "BESSELIAN_YEAR");
          EGM96_EARTH_C20 = env->getStaticDoubleField(cls, "EGM96_EARTH_C20");
          EGM96_EARTH_C30 = env->getStaticDoubleField(cls, "EGM96_EARTH_C30");
          EGM96_EARTH_C40 = env->getStaticDoubleField(cls, "EGM96_EARTH_C40");
          EGM96_EARTH_C50 = env->getStaticDoubleField(cls, "EGM96_EARTH_C50");
          EGM96_EARTH_C60 = env->getStaticDoubleField(cls, "EGM96_EARTH_C60");
          EGM96_EARTH_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "EGM96_EARTH_EQUATORIAL_RADIUS");
          EGM96_EARTH_MU = env->getStaticDoubleField(cls, "EGM96_EARTH_MU");
          EIGEN5C_EARTH_C20 = env->getStaticDoubleField(cls, "EIGEN5C_EARTH_C20");
          EIGEN5C_EARTH_C30 = env->getStaticDoubleField(cls, "EIGEN5C_EARTH_C30");
          EIGEN5C_EARTH_C40 = env->getStaticDoubleField(cls, "EIGEN5C_EARTH_C40");
          EIGEN5C_EARTH_C50 = env->getStaticDoubleField(cls, "EIGEN5C_EARTH_C50");
          EIGEN5C_EARTH_C60 = env->getStaticDoubleField(cls, "EIGEN5C_EARTH_C60");
          EIGEN5C_EARTH_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "EIGEN5C_EARTH_EQUATORIAL_RADIUS");
          EIGEN5C_EARTH_MU = env->getStaticDoubleField(cls, "EIGEN5C_EARTH_MU");
          G0_STANDARD_GRAVITY = env->getStaticDoubleField(cls, "G0_STANDARD_GRAVITY");
          GRIM5C1_EARTH_ANGULAR_VELOCITY = env->getStaticDoubleField(cls, "GRIM5C1_EARTH_ANGULAR_VELOCITY");
          GRIM5C1_EARTH_C20 = env->getStaticDoubleField(cls, "GRIM5C1_EARTH_C20");
          GRIM5C1_EARTH_C30 = env->getStaticDoubleField(cls, "GRIM5C1_EARTH_C30");
          GRIM5C1_EARTH_C40 = env->getStaticDoubleField(cls, "GRIM5C1_EARTH_C40");
          GRIM5C1_EARTH_C50 = env->getStaticDoubleField(cls, "GRIM5C1_EARTH_C50");
          GRIM5C1_EARTH_C60 = env->getStaticDoubleField(cls, "GRIM5C1_EARTH_C60");
          GRIM5C1_EARTH_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "GRIM5C1_EARTH_EQUATORIAL_RADIUS");
          GRIM5C1_EARTH_FLATTENING = env->getStaticDoubleField(cls, "GRIM5C1_EARTH_FLATTENING");
          GRIM5C1_EARTH_MU = env->getStaticDoubleField(cls, "GRIM5C1_EARTH_MU");
          GRS80_EARTH_ANGULAR_VELOCITY = env->getStaticDoubleField(cls, "GRS80_EARTH_ANGULAR_VELOCITY");
          GRS80_EARTH_C20 = env->getStaticDoubleField(cls, "GRS80_EARTH_C20");
          GRS80_EARTH_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "GRS80_EARTH_EQUATORIAL_RADIUS");
          GRS80_EARTH_FLATTENING = env->getStaticDoubleField(cls, "GRS80_EARTH_FLATTENING");
          GRS80_EARTH_MU = env->getStaticDoubleField(cls, "GRS80_EARTH_MU");
          IAU_2012_ASTRONOMICAL_UNIT = env->getStaticDoubleField(cls, "IAU_2012_ASTRONOMICAL_UNIT");
          IAU_2015_NOMINAL_EARTH_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "IAU_2015_NOMINAL_EARTH_EQUATORIAL_RADIUS");
          IAU_2015_NOMINAL_EARTH_GM = env->getStaticDoubleField(cls, "IAU_2015_NOMINAL_EARTH_GM");
          IAU_2015_NOMINAL_EARTH_POLAR_RADIUS = env->getStaticDoubleField(cls, "IAU_2015_NOMINAL_EARTH_POLAR_RADIUS");
          IAU_2015_NOMINAL_JUPITER_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "IAU_2015_NOMINAL_JUPITER_EQUATORIAL_RADIUS");
          IAU_2015_NOMINAL_JUPITER_GM = env->getStaticDoubleField(cls, "IAU_2015_NOMINAL_JUPITER_GM");
          IAU_2015_NOMINAL_JUPITER_POLAR_RADIUS = env->getStaticDoubleField(cls, "IAU_2015_NOMINAL_JUPITER_POLAR_RADIUS");
          IAU_2015_NOMINAL_SOLAR_RADIUS = env->getStaticDoubleField(cls, "IAU_2015_NOMINAL_SOLAR_RADIUS");
          IAU_2015_NOMINAL_SUN_GM = env->getStaticDoubleField(cls, "IAU_2015_NOMINAL_SUN_GM");
          IERS2003_EARTH_ANGULAR_VELOCITY = env->getStaticDoubleField(cls, "IERS2003_EARTH_ANGULAR_VELOCITY");
          IERS2003_EARTH_C20 = env->getStaticDoubleField(cls, "IERS2003_EARTH_C20");
          IERS2003_EARTH_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "IERS2003_EARTH_EQUATORIAL_RADIUS");
          IERS2003_EARTH_FLATTENING = env->getStaticDoubleField(cls, "IERS2003_EARTH_FLATTENING");
          IERS2003_EARTH_MU = env->getStaticDoubleField(cls, "IERS2003_EARTH_MU");
          IERS2010_EARTH_ANGULAR_VELOCITY = env->getStaticDoubleField(cls, "IERS2010_EARTH_ANGULAR_VELOCITY");
          IERS2010_EARTH_C20 = env->getStaticDoubleField(cls, "IERS2010_EARTH_C20");
          IERS2010_EARTH_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "IERS2010_EARTH_EQUATORIAL_RADIUS");
          IERS2010_EARTH_FLATTENING = env->getStaticDoubleField(cls, "IERS2010_EARTH_FLATTENING");
          IERS2010_EARTH_MU = env->getStaticDoubleField(cls, "IERS2010_EARTH_MU");
          IERS96_EARTH_ANGULAR_VELOCITY = env->getStaticDoubleField(cls, "IERS96_EARTH_ANGULAR_VELOCITY");
          IERS96_EARTH_C20 = env->getStaticDoubleField(cls, "IERS96_EARTH_C20");
          IERS96_EARTH_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "IERS96_EARTH_EQUATORIAL_RADIUS");
          IERS96_EARTH_FLATTENING = env->getStaticDoubleField(cls, "IERS96_EARTH_FLATTENING");
          IERS96_EARTH_MU = env->getStaticDoubleField(cls, "IERS96_EARTH_MU");
          JPL_SSD_ASTRONOMICAL_UNIT = env->getStaticDoubleField(cls, "JPL_SSD_ASTRONOMICAL_UNIT");
          JPL_SSD_EARTH_GM = env->getStaticDoubleField(cls, "JPL_SSD_EARTH_GM");
          JPL_SSD_EARTH_MOON_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_EARTH_MOON_MASS_RATIO");
          JPL_SSD_EARTH_PLUS_MOON_GM = env->getStaticDoubleField(cls, "JPL_SSD_EARTH_PLUS_MOON_GM");
          JPL_SSD_GAUSSIAN_GRAVITATIONAL_CONSTANT = env->getStaticDoubleField(cls, "JPL_SSD_GAUSSIAN_GRAVITATIONAL_CONSTANT");
          JPL_SSD_JUPITER_SYSTEM_GM = env->getStaticDoubleField(cls, "JPL_SSD_JUPITER_SYSTEM_GM");
          JPL_SSD_MARS_SYSTEM_GM = env->getStaticDoubleField(cls, "JPL_SSD_MARS_SYSTEM_GM");
          JPL_SSD_MERCURY_GM = env->getStaticDoubleField(cls, "JPL_SSD_MERCURY_GM");
          JPL_SSD_MOON_GM = env->getStaticDoubleField(cls, "JPL_SSD_MOON_GM");
          JPL_SSD_NEPTUNE_SYSTEM_GM = env->getStaticDoubleField(cls, "JPL_SSD_NEPTUNE_SYSTEM_GM");
          JPL_SSD_PLUTO_SYSTEM_GM = env->getStaticDoubleField(cls, "JPL_SSD_PLUTO_SYSTEM_GM");
          JPL_SSD_SATURN_SYSTEM_GM = env->getStaticDoubleField(cls, "JPL_SSD_SATURN_SYSTEM_GM");
          JPL_SSD_SUN_EARTH_PLUS_MOON_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_SUN_EARTH_PLUS_MOON_MASS_RATIO");
          JPL_SSD_SUN_GM = env->getStaticDoubleField(cls, "JPL_SSD_SUN_GM");
          JPL_SSD_SUN_JUPITER_SYSTEM_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_SUN_JUPITER_SYSTEM_MASS_RATIO");
          JPL_SSD_SUN_MARS_SYSTEM_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_SUN_MARS_SYSTEM_MASS_RATIO");
          JPL_SSD_SUN_MERCURY_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_SUN_MERCURY_MASS_RATIO");
          JPL_SSD_SUN_NEPTUNE_SYSTEM_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_SUN_NEPTUNE_SYSTEM_MASS_RATIO");
          JPL_SSD_SUN_PLUTO_SYSTEM_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_SUN_PLUTO_SYSTEM_MASS_RATIO");
          JPL_SSD_SUN_SATURN_SYSTEM_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_SUN_SATURN_SYSTEM_MASS_RATIO");
          JPL_SSD_SUN_URANUS_SYSTEM_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_SUN_URANUS_SYSTEM_MASS_RATIO");
          JPL_SSD_SUN_VENUS_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_SUN_VENUS_MASS_RATIO");
          JPL_SSD_URANUS_SYSTEM_GM = env->getStaticDoubleField(cls, "JPL_SSD_URANUS_SYSTEM_GM");
          JPL_SSD_VENUS_GM = env->getStaticDoubleField(cls, "JPL_SSD_VENUS_GM");
          JULIAN_CENTURY = env->getStaticDoubleField(cls, "JULIAN_CENTURY");
          JULIAN_DAY = env->getStaticDoubleField(cls, "JULIAN_DAY");
          JULIAN_YEAR = env->getStaticDoubleField(cls, "JULIAN_YEAR");
          MOON_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "MOON_EQUATORIAL_RADIUS");
          SPEED_OF_LIGHT = env->getStaticDoubleField(cls, "SPEED_OF_LIGHT");
          SUN_RADIUS = env->getStaticDoubleField(cls, "SUN_RADIUS");
          WGS84_EARTH_ANGULAR_VELOCITY = env->getStaticDoubleField(cls, "WGS84_EARTH_ANGULAR_VELOCITY");
          WGS84_EARTH_C20 = env->getStaticDoubleField(cls, "WGS84_EARTH_C20");
          WGS84_EARTH_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "WGS84_EARTH_EQUATORIAL_RADIUS");
          WGS84_EARTH_FLATTENING = env->getStaticDoubleField(cls, "WGS84_EARTH_FLATTENING");
          WGS84_EARTH_MU = env->getStaticDoubleField(cls, "WGS84_EARTH_MU");
          live$ = true;
        }
        return (jclass) class$->this$;
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_Constants_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Constants_instance_(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_Constants__methods_[] = {
        DECLARE_METHOD(t_Constants, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Constants, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Constants)[] = {
        { Py_tp_methods, t_Constants__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Constants)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Constants, t_Constants, Constants);

      void t_Constants::install(PyObject *module)
      {
        installType(&PY_TYPE(Constants), &PY_TYPE_DEF(Constants), module, "Constants", 0);
      }

      void t_Constants::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "class_", make_descriptor(Constants::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "wrapfn_", make_descriptor(t_Constants::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "boxfn_", make_descriptor(boxObject));
        env->getClass(Constants::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "ARC_SECONDS_TO_RADIANS", make_descriptor(Constants::ARC_SECONDS_TO_RADIANS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "BESSELIAN_YEAR", make_descriptor(Constants::BESSELIAN_YEAR));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EGM96_EARTH_C20", make_descriptor(Constants::EGM96_EARTH_C20));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EGM96_EARTH_C30", make_descriptor(Constants::EGM96_EARTH_C30));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EGM96_EARTH_C40", make_descriptor(Constants::EGM96_EARTH_C40));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EGM96_EARTH_C50", make_descriptor(Constants::EGM96_EARTH_C50));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EGM96_EARTH_C60", make_descriptor(Constants::EGM96_EARTH_C60));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EGM96_EARTH_EQUATORIAL_RADIUS", make_descriptor(Constants::EGM96_EARTH_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EGM96_EARTH_MU", make_descriptor(Constants::EGM96_EARTH_MU));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EIGEN5C_EARTH_C20", make_descriptor(Constants::EIGEN5C_EARTH_C20));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EIGEN5C_EARTH_C30", make_descriptor(Constants::EIGEN5C_EARTH_C30));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EIGEN5C_EARTH_C40", make_descriptor(Constants::EIGEN5C_EARTH_C40));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EIGEN5C_EARTH_C50", make_descriptor(Constants::EIGEN5C_EARTH_C50));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EIGEN5C_EARTH_C60", make_descriptor(Constants::EIGEN5C_EARTH_C60));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EIGEN5C_EARTH_EQUATORIAL_RADIUS", make_descriptor(Constants::EIGEN5C_EARTH_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EIGEN5C_EARTH_MU", make_descriptor(Constants::EIGEN5C_EARTH_MU));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "G0_STANDARD_GRAVITY", make_descriptor(Constants::G0_STANDARD_GRAVITY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRIM5C1_EARTH_ANGULAR_VELOCITY", make_descriptor(Constants::GRIM5C1_EARTH_ANGULAR_VELOCITY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRIM5C1_EARTH_C20", make_descriptor(Constants::GRIM5C1_EARTH_C20));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRIM5C1_EARTH_C30", make_descriptor(Constants::GRIM5C1_EARTH_C30));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRIM5C1_EARTH_C40", make_descriptor(Constants::GRIM5C1_EARTH_C40));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRIM5C1_EARTH_C50", make_descriptor(Constants::GRIM5C1_EARTH_C50));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRIM5C1_EARTH_C60", make_descriptor(Constants::GRIM5C1_EARTH_C60));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRIM5C1_EARTH_EQUATORIAL_RADIUS", make_descriptor(Constants::GRIM5C1_EARTH_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRIM5C1_EARTH_FLATTENING", make_descriptor(Constants::GRIM5C1_EARTH_FLATTENING));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRIM5C1_EARTH_MU", make_descriptor(Constants::GRIM5C1_EARTH_MU));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRS80_EARTH_ANGULAR_VELOCITY", make_descriptor(Constants::GRS80_EARTH_ANGULAR_VELOCITY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRS80_EARTH_C20", make_descriptor(Constants::GRS80_EARTH_C20));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRS80_EARTH_EQUATORIAL_RADIUS", make_descriptor(Constants::GRS80_EARTH_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRS80_EARTH_FLATTENING", make_descriptor(Constants::GRS80_EARTH_FLATTENING));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRS80_EARTH_MU", make_descriptor(Constants::GRS80_EARTH_MU));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IAU_2012_ASTRONOMICAL_UNIT", make_descriptor(Constants::IAU_2012_ASTRONOMICAL_UNIT));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IAU_2015_NOMINAL_EARTH_EQUATORIAL_RADIUS", make_descriptor(Constants::IAU_2015_NOMINAL_EARTH_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IAU_2015_NOMINAL_EARTH_GM", make_descriptor(Constants::IAU_2015_NOMINAL_EARTH_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IAU_2015_NOMINAL_EARTH_POLAR_RADIUS", make_descriptor(Constants::IAU_2015_NOMINAL_EARTH_POLAR_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IAU_2015_NOMINAL_JUPITER_EQUATORIAL_RADIUS", make_descriptor(Constants::IAU_2015_NOMINAL_JUPITER_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IAU_2015_NOMINAL_JUPITER_GM", make_descriptor(Constants::IAU_2015_NOMINAL_JUPITER_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IAU_2015_NOMINAL_JUPITER_POLAR_RADIUS", make_descriptor(Constants::IAU_2015_NOMINAL_JUPITER_POLAR_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IAU_2015_NOMINAL_SOLAR_RADIUS", make_descriptor(Constants::IAU_2015_NOMINAL_SOLAR_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IAU_2015_NOMINAL_SUN_GM", make_descriptor(Constants::IAU_2015_NOMINAL_SUN_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2003_EARTH_ANGULAR_VELOCITY", make_descriptor(Constants::IERS2003_EARTH_ANGULAR_VELOCITY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2003_EARTH_C20", make_descriptor(Constants::IERS2003_EARTH_C20));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2003_EARTH_EQUATORIAL_RADIUS", make_descriptor(Constants::IERS2003_EARTH_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2003_EARTH_FLATTENING", make_descriptor(Constants::IERS2003_EARTH_FLATTENING));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2003_EARTH_MU", make_descriptor(Constants::IERS2003_EARTH_MU));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2010_EARTH_ANGULAR_VELOCITY", make_descriptor(Constants::IERS2010_EARTH_ANGULAR_VELOCITY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2010_EARTH_C20", make_descriptor(Constants::IERS2010_EARTH_C20));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2010_EARTH_EQUATORIAL_RADIUS", make_descriptor(Constants::IERS2010_EARTH_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2010_EARTH_FLATTENING", make_descriptor(Constants::IERS2010_EARTH_FLATTENING));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2010_EARTH_MU", make_descriptor(Constants::IERS2010_EARTH_MU));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS96_EARTH_ANGULAR_VELOCITY", make_descriptor(Constants::IERS96_EARTH_ANGULAR_VELOCITY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS96_EARTH_C20", make_descriptor(Constants::IERS96_EARTH_C20));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS96_EARTH_EQUATORIAL_RADIUS", make_descriptor(Constants::IERS96_EARTH_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS96_EARTH_FLATTENING", make_descriptor(Constants::IERS96_EARTH_FLATTENING));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS96_EARTH_MU", make_descriptor(Constants::IERS96_EARTH_MU));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_ASTRONOMICAL_UNIT", make_descriptor(Constants::JPL_SSD_ASTRONOMICAL_UNIT));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_EARTH_GM", make_descriptor(Constants::JPL_SSD_EARTH_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_EARTH_MOON_MASS_RATIO", make_descriptor(Constants::JPL_SSD_EARTH_MOON_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_EARTH_PLUS_MOON_GM", make_descriptor(Constants::JPL_SSD_EARTH_PLUS_MOON_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_GAUSSIAN_GRAVITATIONAL_CONSTANT", make_descriptor(Constants::JPL_SSD_GAUSSIAN_GRAVITATIONAL_CONSTANT));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_JUPITER_SYSTEM_GM", make_descriptor(Constants::JPL_SSD_JUPITER_SYSTEM_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_MARS_SYSTEM_GM", make_descriptor(Constants::JPL_SSD_MARS_SYSTEM_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_MERCURY_GM", make_descriptor(Constants::JPL_SSD_MERCURY_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_MOON_GM", make_descriptor(Constants::JPL_SSD_MOON_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_NEPTUNE_SYSTEM_GM", make_descriptor(Constants::JPL_SSD_NEPTUNE_SYSTEM_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_PLUTO_SYSTEM_GM", make_descriptor(Constants::JPL_SSD_PLUTO_SYSTEM_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SATURN_SYSTEM_GM", make_descriptor(Constants::JPL_SSD_SATURN_SYSTEM_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_EARTH_PLUS_MOON_MASS_RATIO", make_descriptor(Constants::JPL_SSD_SUN_EARTH_PLUS_MOON_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_GM", make_descriptor(Constants::JPL_SSD_SUN_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_JUPITER_SYSTEM_MASS_RATIO", make_descriptor(Constants::JPL_SSD_SUN_JUPITER_SYSTEM_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_MARS_SYSTEM_MASS_RATIO", make_descriptor(Constants::JPL_SSD_SUN_MARS_SYSTEM_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_MERCURY_MASS_RATIO", make_descriptor(Constants::JPL_SSD_SUN_MERCURY_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_NEPTUNE_SYSTEM_MASS_RATIO", make_descriptor(Constants::JPL_SSD_SUN_NEPTUNE_SYSTEM_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_PLUTO_SYSTEM_MASS_RATIO", make_descriptor(Constants::JPL_SSD_SUN_PLUTO_SYSTEM_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_SATURN_SYSTEM_MASS_RATIO", make_descriptor(Constants::JPL_SSD_SUN_SATURN_SYSTEM_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_URANUS_SYSTEM_MASS_RATIO", make_descriptor(Constants::JPL_SSD_SUN_URANUS_SYSTEM_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_VENUS_MASS_RATIO", make_descriptor(Constants::JPL_SSD_SUN_VENUS_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_URANUS_SYSTEM_GM", make_descriptor(Constants::JPL_SSD_URANUS_SYSTEM_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_VENUS_GM", make_descriptor(Constants::JPL_SSD_VENUS_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JULIAN_CENTURY", make_descriptor(Constants::JULIAN_CENTURY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JULIAN_DAY", make_descriptor(Constants::JULIAN_DAY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JULIAN_YEAR", make_descriptor(Constants::JULIAN_YEAR));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "MOON_EQUATORIAL_RADIUS", make_descriptor(Constants::MOON_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "SPEED_OF_LIGHT", make_descriptor(Constants::SPEED_OF_LIGHT));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "SUN_RADIUS", make_descriptor(Constants::SUN_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "WGS84_EARTH_ANGULAR_VELOCITY", make_descriptor(Constants::WGS84_EARTH_ANGULAR_VELOCITY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "WGS84_EARTH_C20", make_descriptor(Constants::WGS84_EARTH_C20));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "WGS84_EARTH_EQUATORIAL_RADIUS", make_descriptor(Constants::WGS84_EARTH_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "WGS84_EARTH_FLATTENING", make_descriptor(Constants::WGS84_EARTH_FLATTENING));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "WGS84_EARTH_MU", make_descriptor(Constants::WGS84_EARTH_MU));
      }

      static PyObject *t_Constants_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Constants::initializeClass, 1)))
          return NULL;
        return t_Constants::wrap_Object(Constants(((t_Constants *) arg)->object.this$));
      }
      static PyObject *t_Constants_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Constants::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/filtering/kalman/KalmanFilter.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {

        ::java::lang::Class *KalmanFilter::class$ = NULL;
        jmethodID *KalmanFilter::mids$ = NULL;
        bool KalmanFilter::live$ = false;

        jclass KalmanFilter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/KalmanFilter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_estimationStep_de0fd16eb0d97034] = env->getMethodID(cls, "estimationStep", "(Lorg/hipparchus/filtering/kalman/Measurement;)Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
            mids$[mid_getCorrected_e37ac5ac73cc5311] = env->getMethodID(cls, "getCorrected", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
            mids$[mid_getPredicted_e37ac5ac73cc5311] = env->getMethodID(cls, "getPredicted", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::filtering::kalman::ProcessEstimate KalmanFilter::estimationStep(const ::org::hipparchus::filtering::kalman::Measurement & a0) const
        {
          return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_estimationStep_de0fd16eb0d97034], a0.this$));
        }

        ::org::hipparchus::filtering::kalman::ProcessEstimate KalmanFilter::getCorrected() const
        {
          return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getCorrected_e37ac5ac73cc5311]));
        }

        ::org::hipparchus::filtering::kalman::ProcessEstimate KalmanFilter::getPredicted() const
        {
          return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getPredicted_e37ac5ac73cc5311]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        static PyObject *t_KalmanFilter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanFilter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanFilter_of_(t_KalmanFilter *self, PyObject *args);
        static PyObject *t_KalmanFilter_estimationStep(t_KalmanFilter *self, PyObject *arg);
        static PyObject *t_KalmanFilter_getCorrected(t_KalmanFilter *self);
        static PyObject *t_KalmanFilter_getPredicted(t_KalmanFilter *self);
        static PyObject *t_KalmanFilter_get__corrected(t_KalmanFilter *self, void *data);
        static PyObject *t_KalmanFilter_get__predicted(t_KalmanFilter *self, void *data);
        static PyObject *t_KalmanFilter_get__parameters_(t_KalmanFilter *self, void *data);
        static PyGetSetDef t_KalmanFilter__fields_[] = {
          DECLARE_GET_FIELD(t_KalmanFilter, corrected),
          DECLARE_GET_FIELD(t_KalmanFilter, predicted),
          DECLARE_GET_FIELD(t_KalmanFilter, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_KalmanFilter__methods_[] = {
          DECLARE_METHOD(t_KalmanFilter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanFilter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanFilter, of_, METH_VARARGS),
          DECLARE_METHOD(t_KalmanFilter, estimationStep, METH_O),
          DECLARE_METHOD(t_KalmanFilter, getCorrected, METH_NOARGS),
          DECLARE_METHOD(t_KalmanFilter, getPredicted, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KalmanFilter)[] = {
          { Py_tp_methods, t_KalmanFilter__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_KalmanFilter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KalmanFilter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(KalmanFilter, t_KalmanFilter, KalmanFilter);
        PyObject *t_KalmanFilter::wrap_Object(const KalmanFilter& object, PyTypeObject *p0)
        {
          PyObject *obj = t_KalmanFilter::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_KalmanFilter *self = (t_KalmanFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_KalmanFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_KalmanFilter::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_KalmanFilter *self = (t_KalmanFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_KalmanFilter::install(PyObject *module)
        {
          installType(&PY_TYPE(KalmanFilter), &PY_TYPE_DEF(KalmanFilter), module, "KalmanFilter", 0);
        }

        void t_KalmanFilter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanFilter), "class_", make_descriptor(KalmanFilter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanFilter), "wrapfn_", make_descriptor(t_KalmanFilter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanFilter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KalmanFilter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KalmanFilter::initializeClass, 1)))
            return NULL;
          return t_KalmanFilter::wrap_Object(KalmanFilter(((t_KalmanFilter *) arg)->object.this$));
        }
        static PyObject *t_KalmanFilter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KalmanFilter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_KalmanFilter_of_(t_KalmanFilter *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_KalmanFilter_estimationStep(t_KalmanFilter *self, PyObject *arg)
        {
          ::org::hipparchus::filtering::kalman::Measurement a0((jobject) NULL);
          ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::filtering::kalman::Measurement::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.estimationStep(a0));
            return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "estimationStep", arg);
          return NULL;
        }

        static PyObject *t_KalmanFilter_getCorrected(t_KalmanFilter *self)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrected());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
        }

        static PyObject *t_KalmanFilter_getPredicted(t_KalmanFilter *self)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredicted());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
        }
        static PyObject *t_KalmanFilter_get__parameters_(t_KalmanFilter *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_KalmanFilter_get__corrected(t_KalmanFilter *self, void *data)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrected());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(value);
        }

        static PyObject *t_KalmanFilter_get__predicted(t_KalmanFilter *self, void *data)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredicted());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/StreamingOcmWriter$BlockWriter.h"
#include "org/orekit/propagation/sampling/OrekitFixedStepHandler.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/StreamingOcmWriter.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *StreamingOcmWriter$BlockWriter::class$ = NULL;
              jmethodID *StreamingOcmWriter$BlockWriter::mids$ = NULL;
              bool StreamingOcmWriter$BlockWriter::live$ = false;

              jclass StreamingOcmWriter$BlockWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/StreamingOcmWriter$BlockWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_49e1f27a144ceeb4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/StreamingOcmWriter;)V");
                  mids$[mid_finish_280c3390961e0a50] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
                  mids$[mid_handleStep_280c3390961e0a50] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/SpacecraftState;)V");
                  mids$[mid_init_3189c7446dbbb87e] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              StreamingOcmWriter$BlockWriter::StreamingOcmWriter$BlockWriter(const ::org::orekit::files::ccsds::ndm::odm::ocm::StreamingOcmWriter & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_49e1f27a144ceeb4, a0.this$)) {}

              void StreamingOcmWriter$BlockWriter::finish(const ::org::orekit::propagation::SpacecraftState & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_finish_280c3390961e0a50], a0.this$);
              }

              void StreamingOcmWriter$BlockWriter::handleStep(const ::org::orekit::propagation::SpacecraftState & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_handleStep_280c3390961e0a50], a0.this$);
              }

              void StreamingOcmWriter$BlockWriter::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
              {
                env->callVoidMethod(this$, mids$[mid_init_3189c7446dbbb87e], a0.this$, a1.this$, a2);
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              static PyObject *t_StreamingOcmWriter$BlockWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_StreamingOcmWriter$BlockWriter_instance_(PyTypeObject *type, PyObject *arg);
              static int t_StreamingOcmWriter$BlockWriter_init_(t_StreamingOcmWriter$BlockWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_StreamingOcmWriter$BlockWriter_finish(t_StreamingOcmWriter$BlockWriter *self, PyObject *arg);
              static PyObject *t_StreamingOcmWriter$BlockWriter_handleStep(t_StreamingOcmWriter$BlockWriter *self, PyObject *arg);
              static PyObject *t_StreamingOcmWriter$BlockWriter_init(t_StreamingOcmWriter$BlockWriter *self, PyObject *args);

              static PyMethodDef t_StreamingOcmWriter$BlockWriter__methods_[] = {
                DECLARE_METHOD(t_StreamingOcmWriter$BlockWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingOcmWriter$BlockWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingOcmWriter$BlockWriter, finish, METH_O),
                DECLARE_METHOD(t_StreamingOcmWriter$BlockWriter, handleStep, METH_O),
                DECLARE_METHOD(t_StreamingOcmWriter$BlockWriter, init, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(StreamingOcmWriter$BlockWriter)[] = {
                { Py_tp_methods, t_StreamingOcmWriter$BlockWriter__methods_ },
                { Py_tp_init, (void *) t_StreamingOcmWriter$BlockWriter_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(StreamingOcmWriter$BlockWriter)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(StreamingOcmWriter$BlockWriter, t_StreamingOcmWriter$BlockWriter, StreamingOcmWriter$BlockWriter);

              void t_StreamingOcmWriter$BlockWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(StreamingOcmWriter$BlockWriter), &PY_TYPE_DEF(StreamingOcmWriter$BlockWriter), module, "StreamingOcmWriter$BlockWriter", 0);
              }

              void t_StreamingOcmWriter$BlockWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOcmWriter$BlockWriter), "class_", make_descriptor(StreamingOcmWriter$BlockWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOcmWriter$BlockWriter), "wrapfn_", make_descriptor(t_StreamingOcmWriter$BlockWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOcmWriter$BlockWriter), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_StreamingOcmWriter$BlockWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, StreamingOcmWriter$BlockWriter::initializeClass, 1)))
                  return NULL;
                return t_StreamingOcmWriter$BlockWriter::wrap_Object(StreamingOcmWriter$BlockWriter(((t_StreamingOcmWriter$BlockWriter *) arg)->object.this$));
              }
              static PyObject *t_StreamingOcmWriter$BlockWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, StreamingOcmWriter$BlockWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_StreamingOcmWriter$BlockWriter_init_(t_StreamingOcmWriter$BlockWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::StreamingOcmWriter a0((jobject) NULL);
                StreamingOcmWriter$BlockWriter object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::files::ccsds::ndm::odm::ocm::StreamingOcmWriter::initializeClass, &a0))
                {
                  INT_CALL(object = StreamingOcmWriter$BlockWriter(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_StreamingOcmWriter$BlockWriter_finish(t_StreamingOcmWriter$BlockWriter *self, PyObject *arg)
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.finish(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "finish", arg);
                return NULL;
              }

              static PyObject *t_StreamingOcmWriter$BlockWriter_handleStep(t_StreamingOcmWriter$BlockWriter *self, PyObject *arg)
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.handleStep(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
                return NULL;
              }

              static PyObject *t_StreamingOcmWriter$BlockWriter_init(t_StreamingOcmWriter$BlockWriter *self, PyObject *args)
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                jdouble a2;

                if (!parseArgs(args, "kkD", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.init(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "init", args);
                return NULL;
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemMetadata.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *OemMetadataKey::class$ = NULL;
              jmethodID *OemMetadataKey::mids$ = NULL;
              bool OemMetadataKey::live$ = false;
              OemMetadataKey *OemMetadataKey::INTERPOLATION = NULL;
              OemMetadataKey *OemMetadataKey::INTERPOLATION_DEGREE = NULL;
              OemMetadataKey *OemMetadataKey::START_TIME = NULL;
              OemMetadataKey *OemMetadataKey::STOP_TIME = NULL;
              OemMetadataKey *OemMetadataKey::USEABLE_START_TIME = NULL;
              OemMetadataKey *OemMetadataKey::USEABLE_STOP_TIME = NULL;

              jclass OemMetadataKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_671436693dcd2bbc] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadata;)Z");
                  mids$[mid_valueOf_162b14d9961b6573] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey;");
                  mids$[mid_values_ac0ee5acbffc86e9] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  INTERPOLATION = new OemMetadataKey(env->getStaticObjectField(cls, "INTERPOLATION", "Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey;"));
                  INTERPOLATION_DEGREE = new OemMetadataKey(env->getStaticObjectField(cls, "INTERPOLATION_DEGREE", "Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey;"));
                  START_TIME = new OemMetadataKey(env->getStaticObjectField(cls, "START_TIME", "Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey;"));
                  STOP_TIME = new OemMetadataKey(env->getStaticObjectField(cls, "STOP_TIME", "Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey;"));
                  USEABLE_START_TIME = new OemMetadataKey(env->getStaticObjectField(cls, "USEABLE_START_TIME", "Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey;"));
                  USEABLE_STOP_TIME = new OemMetadataKey(env->getStaticObjectField(cls, "USEABLE_STOP_TIME", "Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean OemMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_671436693dcd2bbc], a0.this$, a1.this$, a2.this$);
              }

              OemMetadataKey OemMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OemMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_162b14d9961b6573], a0.this$));
              }

              JArray< OemMetadataKey > OemMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OemMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_ac0ee5acbffc86e9]));
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {
              static PyObject *t_OemMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemMetadataKey_of_(t_OemMetadataKey *self, PyObject *args);
              static PyObject *t_OemMetadataKey_process(t_OemMetadataKey *self, PyObject *args);
              static PyObject *t_OemMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OemMetadataKey_values(PyTypeObject *type);
              static PyObject *t_OemMetadataKey_get__parameters_(t_OemMetadataKey *self, void *data);
              static PyGetSetDef t_OemMetadataKey__fields_[] = {
                DECLARE_GET_FIELD(t_OemMetadataKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OemMetadataKey__methods_[] = {
                DECLARE_METHOD(t_OemMetadataKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemMetadataKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemMetadataKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_OemMetadataKey, process, METH_VARARGS),
                DECLARE_METHOD(t_OemMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OemMetadataKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OemMetadataKey)[] = {
                { Py_tp_methods, t_OemMetadataKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OemMetadataKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OemMetadataKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OemMetadataKey, t_OemMetadataKey, OemMetadataKey);
              PyObject *t_OemMetadataKey::wrap_Object(const OemMetadataKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OemMetadataKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OemMetadataKey *self = (t_OemMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OemMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OemMetadataKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OemMetadataKey *self = (t_OemMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OemMetadataKey::install(PyObject *module)
              {
                installType(&PY_TYPE(OemMetadataKey), &PY_TYPE_DEF(OemMetadataKey), module, "OemMetadataKey", 0);
              }

              void t_OemMetadataKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadataKey), "class_", make_descriptor(OemMetadataKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadataKey), "wrapfn_", make_descriptor(t_OemMetadataKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadataKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(OemMetadataKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadataKey), "INTERPOLATION", make_descriptor(t_OemMetadataKey::wrap_Object(*OemMetadataKey::INTERPOLATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadataKey), "INTERPOLATION_DEGREE", make_descriptor(t_OemMetadataKey::wrap_Object(*OemMetadataKey::INTERPOLATION_DEGREE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadataKey), "START_TIME", make_descriptor(t_OemMetadataKey::wrap_Object(*OemMetadataKey::START_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadataKey), "STOP_TIME", make_descriptor(t_OemMetadataKey::wrap_Object(*OemMetadataKey::STOP_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadataKey), "USEABLE_START_TIME", make_descriptor(t_OemMetadataKey::wrap_Object(*OemMetadataKey::USEABLE_START_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadataKey), "USEABLE_STOP_TIME", make_descriptor(t_OemMetadataKey::wrap_Object(*OemMetadataKey::USEABLE_STOP_TIME)));
              }

              static PyObject *t_OemMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OemMetadataKey::initializeClass, 1)))
                  return NULL;
                return t_OemMetadataKey::wrap_Object(OemMetadataKey(((t_OemMetadataKey *) arg)->object.this$));
              }
              static PyObject *t_OemMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OemMetadataKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OemMetadataKey_of_(t_OemMetadataKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OemMetadataKey_process(t_OemMetadataKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_OemMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OemMetadataKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadataKey::valueOf(a0));
                  return t_OemMetadataKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OemMetadataKey_values(PyTypeObject *type)
              {
                JArray< OemMetadataKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadataKey::values());
                return JArray<jobject>(result.this$).wrap(t_OemMetadataKey::wrap_jobject);
              }
              static PyObject *t_OemMetadataKey_get__parameters_(t_OemMetadataKey *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/ParametersController.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ParametersController::class$ = NULL;
      jmethodID *ParametersController::mids$ = NULL;
      bool ParametersController::live$ = false;

      jclass ParametersController::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ParametersController");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getParameter_a84f304e8cd7ce1b] = env->getMethodID(cls, "getParameter", "(Ljava/lang/String;)D");
          mids$[mid_setParameter_b7ec643e4edd96c5] = env->getMethodID(cls, "setParameter", "(Ljava/lang/String;D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble ParametersController::getParameter(const ::java::lang::String & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getParameter_a84f304e8cd7ce1b], a0.this$);
      }

      void ParametersController::setParameter(const ::java::lang::String & a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setParameter_b7ec643e4edd96c5], a0.this$, a1);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      static PyObject *t_ParametersController_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParametersController_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParametersController_getParameter(t_ParametersController *self, PyObject *arg);
      static PyObject *t_ParametersController_setParameter(t_ParametersController *self, PyObject *args);

      static PyMethodDef t_ParametersController__methods_[] = {
        DECLARE_METHOD(t_ParametersController, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParametersController, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParametersController, getParameter, METH_O),
        DECLARE_METHOD(t_ParametersController, setParameter, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ParametersController)[] = {
        { Py_tp_methods, t_ParametersController__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ParametersController)[] = {
        &PY_TYPE_DEF(::org::hipparchus::ode::Parameterizable),
        NULL
      };

      DEFINE_TYPE(ParametersController, t_ParametersController, ParametersController);

      void t_ParametersController::install(PyObject *module)
      {
        installType(&PY_TYPE(ParametersController), &PY_TYPE_DEF(ParametersController), module, "ParametersController", 0);
      }

      void t_ParametersController::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParametersController), "class_", make_descriptor(ParametersController::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParametersController), "wrapfn_", make_descriptor(t_ParametersController::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParametersController), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ParametersController_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ParametersController::initializeClass, 1)))
          return NULL;
        return t_ParametersController::wrap_Object(ParametersController(((t_ParametersController *) arg)->object.this$));
      }
      static PyObject *t_ParametersController_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ParametersController::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ParametersController_getParameter(t_ParametersController *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getParameter(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getParameter", arg);
        return NULL;
      }

      static PyObject *t_ParametersController_setParameter(t_ParametersController *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        jdouble a1;

        if (!parseArgs(args, "sD", &a0, &a1))
        {
          OBJ_CALL(self->object.setParameter(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setParameter", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/UniformRealDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *UniformRealDistribution::class$ = NULL;
        jmethodID *UniformRealDistribution::mids$ = NULL;
        bool UniformRealDistribution::live$ = false;

        jclass UniformRealDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/UniformRealDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_cumulativeProbability_04fd0666b613d2ab] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_04fd0666b613d2ab] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getNumericalMean_b74f83833fdad017] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_b74f83833fdad017] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_b74f83833fdad017] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_b74f83833fdad017] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_04fd0666b613d2ab] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_9ab94ac1dc23b105] = env->getMethodID(cls, "isSupportConnected", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UniformRealDistribution::UniformRealDistribution() : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        UniformRealDistribution::UniformRealDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

        jdouble UniformRealDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_04fd0666b613d2ab], a0);
        }

        jdouble UniformRealDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_04fd0666b613d2ab], a0);
        }

        jdouble UniformRealDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_b74f83833fdad017]);
        }

        jdouble UniformRealDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_b74f83833fdad017]);
        }

        jdouble UniformRealDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_b74f83833fdad017]);
        }

        jdouble UniformRealDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_b74f83833fdad017]);
        }

        jdouble UniformRealDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_04fd0666b613d2ab], a0);
        }

        jboolean UniformRealDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_9ab94ac1dc23b105]);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {
        static PyObject *t_UniformRealDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UniformRealDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_UniformRealDistribution_init_(t_UniformRealDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UniformRealDistribution_cumulativeProbability(t_UniformRealDistribution *self, PyObject *args);
        static PyObject *t_UniformRealDistribution_density(t_UniformRealDistribution *self, PyObject *args);
        static PyObject *t_UniformRealDistribution_getNumericalMean(t_UniformRealDistribution *self, PyObject *args);
        static PyObject *t_UniformRealDistribution_getNumericalVariance(t_UniformRealDistribution *self, PyObject *args);
        static PyObject *t_UniformRealDistribution_getSupportLowerBound(t_UniformRealDistribution *self, PyObject *args);
        static PyObject *t_UniformRealDistribution_getSupportUpperBound(t_UniformRealDistribution *self, PyObject *args);
        static PyObject *t_UniformRealDistribution_inverseCumulativeProbability(t_UniformRealDistribution *self, PyObject *args);
        static PyObject *t_UniformRealDistribution_isSupportConnected(t_UniformRealDistribution *self, PyObject *args);
        static PyObject *t_UniformRealDistribution_get__numericalMean(t_UniformRealDistribution *self, void *data);
        static PyObject *t_UniformRealDistribution_get__numericalVariance(t_UniformRealDistribution *self, void *data);
        static PyObject *t_UniformRealDistribution_get__supportConnected(t_UniformRealDistribution *self, void *data);
        static PyObject *t_UniformRealDistribution_get__supportLowerBound(t_UniformRealDistribution *self, void *data);
        static PyObject *t_UniformRealDistribution_get__supportUpperBound(t_UniformRealDistribution *self, void *data);
        static PyGetSetDef t_UniformRealDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_UniformRealDistribution, numericalMean),
          DECLARE_GET_FIELD(t_UniformRealDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_UniformRealDistribution, supportConnected),
          DECLARE_GET_FIELD(t_UniformRealDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_UniformRealDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UniformRealDistribution__methods_[] = {
          DECLARE_METHOD(t_UniformRealDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UniformRealDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UniformRealDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_UniformRealDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_UniformRealDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_UniformRealDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_UniformRealDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_UniformRealDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_UniformRealDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_UniformRealDistribution, isSupportConnected, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UniformRealDistribution)[] = {
          { Py_tp_methods, t_UniformRealDistribution__methods_ },
          { Py_tp_init, (void *) t_UniformRealDistribution_init_ },
          { Py_tp_getset, t_UniformRealDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UniformRealDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(UniformRealDistribution, t_UniformRealDistribution, UniformRealDistribution);

        void t_UniformRealDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(UniformRealDistribution), &PY_TYPE_DEF(UniformRealDistribution), module, "UniformRealDistribution", 0);
        }

        void t_UniformRealDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UniformRealDistribution), "class_", make_descriptor(UniformRealDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UniformRealDistribution), "wrapfn_", make_descriptor(t_UniformRealDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UniformRealDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UniformRealDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UniformRealDistribution::initializeClass, 1)))
            return NULL;
          return t_UniformRealDistribution::wrap_Object(UniformRealDistribution(((t_UniformRealDistribution *) arg)->object.this$));
        }
        static PyObject *t_UniformRealDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UniformRealDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_UniformRealDistribution_init_(t_UniformRealDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              UniformRealDistribution object((jobject) NULL);

              INT_CALL(object = UniformRealDistribution());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jdouble a1;
              UniformRealDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = UniformRealDistribution(a0, a1));
                self->object = object;
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_UniformRealDistribution_cumulativeProbability(t_UniformRealDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UniformRealDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_UniformRealDistribution_density(t_UniformRealDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UniformRealDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_UniformRealDistribution_getNumericalMean(t_UniformRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UniformRealDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_UniformRealDistribution_getNumericalVariance(t_UniformRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UniformRealDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_UniformRealDistribution_getSupportLowerBound(t_UniformRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UniformRealDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_UniformRealDistribution_getSupportUpperBound(t_UniformRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UniformRealDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_UniformRealDistribution_inverseCumulativeProbability(t_UniformRealDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UniformRealDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_UniformRealDistribution_isSupportConnected(t_UniformRealDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(UniformRealDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_UniformRealDistribution_get__numericalMean(t_UniformRealDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UniformRealDistribution_get__numericalVariance(t_UniformRealDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UniformRealDistribution_get__supportConnected(t_UniformRealDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_UniformRealDistribution_get__supportLowerBound(t_UniformRealDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UniformRealDistribution_get__supportUpperBound(t_UniformRealDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/ShapiroPhaseModifier.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *ShapiroPhaseModifier::class$ = NULL;
          jmethodID *ShapiroPhaseModifier::mids$ = NULL;
          bool ShapiroPhaseModifier::live$ = false;

          jclass ShapiroPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/ShapiroPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ShapiroPhaseModifier::ShapiroPhaseModifier(jdouble a0) : ::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

          ::java::util::List ShapiroPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          void ShapiroPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66], a0.this$);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {
          static PyObject *t_ShapiroPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ShapiroPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ShapiroPhaseModifier_init_(t_ShapiroPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ShapiroPhaseModifier_getParametersDrivers(t_ShapiroPhaseModifier *self);
          static PyObject *t_ShapiroPhaseModifier_modifyWithoutDerivatives(t_ShapiroPhaseModifier *self, PyObject *arg);
          static PyObject *t_ShapiroPhaseModifier_get__parametersDrivers(t_ShapiroPhaseModifier *self, void *data);
          static PyGetSetDef t_ShapiroPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_ShapiroPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ShapiroPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_ShapiroPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_ShapiroPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ShapiroPhaseModifier)[] = {
            { Py_tp_methods, t_ShapiroPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_ShapiroPhaseModifier_init_ },
            { Py_tp_getset, t_ShapiroPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ShapiroPhaseModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier),
            NULL
          };

          DEFINE_TYPE(ShapiroPhaseModifier, t_ShapiroPhaseModifier, ShapiroPhaseModifier);

          void t_ShapiroPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(ShapiroPhaseModifier), &PY_TYPE_DEF(ShapiroPhaseModifier), module, "ShapiroPhaseModifier", 0);
          }

          void t_ShapiroPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroPhaseModifier), "class_", make_descriptor(ShapiroPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroPhaseModifier), "wrapfn_", make_descriptor(t_ShapiroPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ShapiroPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ShapiroPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_ShapiroPhaseModifier::wrap_Object(ShapiroPhaseModifier(((t_ShapiroPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_ShapiroPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ShapiroPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ShapiroPhaseModifier_init_(t_ShapiroPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            ShapiroPhaseModifier object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = ShapiroPhaseModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ShapiroPhaseModifier_getParametersDrivers(t_ShapiroPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_ShapiroPhaseModifier_modifyWithoutDerivatives(t_ShapiroPhaseModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(self->object.modifyWithoutDerivatives(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modifyWithoutDerivatives", arg);
            return NULL;
          }

          static PyObject *t_ShapiroPhaseModifier_get__parametersDrivers(t_ShapiroPhaseModifier *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRDConfiguration$BaseConfiguration.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDConfiguration$BaseConfiguration::class$ = NULL;
        jmethodID *CRDConfiguration$BaseConfiguration::mids$ = NULL;
        bool CRDConfiguration$BaseConfiguration::live$ = false;

        jclass CRDConfiguration$BaseConfiguration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDConfiguration$BaseConfiguration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getConfigurationId_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getConfigurationId", "()Ljava/lang/String;");
            mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_setConfigurationId_734b91ac30d5f9b4] = env->getMethodID(cls, "setConfigurationId", "(Ljava/lang/String;)V");
            mids$[mid_toCrdString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration$BaseConfiguration::CRDConfiguration$BaseConfiguration() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jboolean CRDConfiguration$BaseConfiguration::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
        }

        ::java::lang::String CRDConfiguration$BaseConfiguration::getConfigurationId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getConfigurationId_1c1fa1e935d6cdcf]));
        }

        jint CRDConfiguration$BaseConfiguration::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
        }

        void CRDConfiguration$BaseConfiguration::setConfigurationId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setConfigurationId_734b91ac30d5f9b4], a0.this$);
        }

        ::java::lang::String CRDConfiguration$BaseConfiguration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_1c1fa1e935d6cdcf]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        static PyObject *t_CRDConfiguration$BaseConfiguration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDConfiguration$BaseConfiguration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDConfiguration$BaseConfiguration_init_(t_CRDConfiguration$BaseConfiguration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDConfiguration$BaseConfiguration_equals(t_CRDConfiguration$BaseConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$BaseConfiguration_getConfigurationId(t_CRDConfiguration$BaseConfiguration *self);
        static PyObject *t_CRDConfiguration$BaseConfiguration_hashCode(t_CRDConfiguration$BaseConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$BaseConfiguration_setConfigurationId(t_CRDConfiguration$BaseConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$BaseConfiguration_toCrdString(t_CRDConfiguration$BaseConfiguration *self);
        static PyObject *t_CRDConfiguration$BaseConfiguration_get__configurationId(t_CRDConfiguration$BaseConfiguration *self, void *data);
        static int t_CRDConfiguration$BaseConfiguration_set__configurationId(t_CRDConfiguration$BaseConfiguration *self, PyObject *arg, void *data);
        static PyGetSetDef t_CRDConfiguration$BaseConfiguration__fields_[] = {
          DECLARE_GETSET_FIELD(t_CRDConfiguration$BaseConfiguration, configurationId),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDConfiguration$BaseConfiguration__methods_[] = {
          DECLARE_METHOD(t_CRDConfiguration$BaseConfiguration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$BaseConfiguration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$BaseConfiguration, equals, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration$BaseConfiguration, getConfigurationId, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$BaseConfiguration, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration$BaseConfiguration, setConfigurationId, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$BaseConfiguration, toCrdString, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDConfiguration$BaseConfiguration)[] = {
          { Py_tp_methods, t_CRDConfiguration$BaseConfiguration__methods_ },
          { Py_tp_init, (void *) t_CRDConfiguration$BaseConfiguration_init_ },
          { Py_tp_getset, t_CRDConfiguration$BaseConfiguration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDConfiguration$BaseConfiguration)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRDConfiguration$BaseConfiguration, t_CRDConfiguration$BaseConfiguration, CRDConfiguration$BaseConfiguration);

        void t_CRDConfiguration$BaseConfiguration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDConfiguration$BaseConfiguration), &PY_TYPE_DEF(CRDConfiguration$BaseConfiguration), module, "CRDConfiguration$BaseConfiguration", 0);
        }

        void t_CRDConfiguration$BaseConfiguration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$BaseConfiguration), "class_", make_descriptor(CRDConfiguration$BaseConfiguration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$BaseConfiguration), "wrapfn_", make_descriptor(t_CRDConfiguration$BaseConfiguration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$BaseConfiguration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDConfiguration$BaseConfiguration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDConfiguration$BaseConfiguration::initializeClass, 1)))
            return NULL;
          return t_CRDConfiguration$BaseConfiguration::wrap_Object(CRDConfiguration$BaseConfiguration(((t_CRDConfiguration$BaseConfiguration *) arg)->object.this$));
        }
        static PyObject *t_CRDConfiguration$BaseConfiguration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDConfiguration$BaseConfiguration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDConfiguration$BaseConfiguration_init_(t_CRDConfiguration$BaseConfiguration *self, PyObject *args, PyObject *kwds)
        {
          CRDConfiguration$BaseConfiguration object((jobject) NULL);

          INT_CALL(object = CRDConfiguration$BaseConfiguration());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDConfiguration$BaseConfiguration_equals(t_CRDConfiguration$BaseConfiguration *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$BaseConfiguration), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_CRDConfiguration$BaseConfiguration_getConfigurationId(t_CRDConfiguration$BaseConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getConfigurationId());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$BaseConfiguration_hashCode(t_CRDConfiguration$BaseConfiguration *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$BaseConfiguration), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_CRDConfiguration$BaseConfiguration_setConfigurationId(t_CRDConfiguration$BaseConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setConfigurationId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setConfigurationId", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$BaseConfiguration_toCrdString(t_CRDConfiguration$BaseConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.toCrdString());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$BaseConfiguration_get__configurationId(t_CRDConfiguration$BaseConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getConfigurationId());
          return j2p(value);
        }
        static int t_CRDConfiguration$BaseConfiguration_set__configurationId(t_CRDConfiguration$BaseConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setConfigurationId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "configurationId", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/ODEState.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ODEState::class$ = NULL;
      jmethodID *ODEState::mids$ = NULL;
      bool ODEState::live$ = false;

      jclass ODEState::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ODEState");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d606d0c99c70c093] = env->getMethodID(cls, "<init>", "(D[D)V");
          mids$[mid_init$_f623356e6846cf02] = env->getMethodID(cls, "<init>", "(D[D[[D)V");
          mids$[mid_getCompleteState_25e1757a36c4dde2] = env->getMethodID(cls, "getCompleteState", "()[D");
          mids$[mid_getCompleteStateDimension_55546ef6a647f39b] = env->getMethodID(cls, "getCompleteStateDimension", "()I");
          mids$[mid_getNumberOfSecondaryStates_55546ef6a647f39b] = env->getMethodID(cls, "getNumberOfSecondaryStates", "()I");
          mids$[mid_getPrimaryState_25e1757a36c4dde2] = env->getMethodID(cls, "getPrimaryState", "()[D");
          mids$[mid_getPrimaryStateDimension_55546ef6a647f39b] = env->getMethodID(cls, "getPrimaryStateDimension", "()I");
          mids$[mid_getSecondaryState_bb2a44a76ad252f7] = env->getMethodID(cls, "getSecondaryState", "(I)[D");
          mids$[mid_getSecondaryStateDimension_0e7cf35192c3effe] = env->getMethodID(cls, "getSecondaryStateDimension", "(I)I");
          mids$[mid_getTime_b74f83833fdad017] = env->getMethodID(cls, "getTime", "()D");
          mids$[mid_copy_fa7294d53f56a3e3] = env->getMethodID(cls, "copy", "([[D)[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ODEState::ODEState(jdouble a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d606d0c99c70c093, a0, a1.this$)) {}

      ODEState::ODEState(jdouble a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f623356e6846cf02, a0, a1.this$, a2.this$)) {}

      JArray< jdouble > ODEState::getCompleteState() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCompleteState_25e1757a36c4dde2]));
      }

      jint ODEState::getCompleteStateDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getCompleteStateDimension_55546ef6a647f39b]);
      }

      jint ODEState::getNumberOfSecondaryStates() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumberOfSecondaryStates_55546ef6a647f39b]);
      }

      JArray< jdouble > ODEState::getPrimaryState() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getPrimaryState_25e1757a36c4dde2]));
      }

      jint ODEState::getPrimaryStateDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getPrimaryStateDimension_55546ef6a647f39b]);
      }

      JArray< jdouble > ODEState::getSecondaryState(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSecondaryState_bb2a44a76ad252f7], a0));
      }

      jint ODEState::getSecondaryStateDimension(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_getSecondaryStateDimension_0e7cf35192c3effe], a0);
      }

      jdouble ODEState::getTime() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getTime_b74f83833fdad017]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      static PyObject *t_ODEState_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ODEState_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ODEState_init_(t_ODEState *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ODEState_getCompleteState(t_ODEState *self);
      static PyObject *t_ODEState_getCompleteStateDimension(t_ODEState *self);
      static PyObject *t_ODEState_getNumberOfSecondaryStates(t_ODEState *self);
      static PyObject *t_ODEState_getPrimaryState(t_ODEState *self);
      static PyObject *t_ODEState_getPrimaryStateDimension(t_ODEState *self);
      static PyObject *t_ODEState_getSecondaryState(t_ODEState *self, PyObject *arg);
      static PyObject *t_ODEState_getSecondaryStateDimension(t_ODEState *self, PyObject *arg);
      static PyObject *t_ODEState_getTime(t_ODEState *self);
      static PyObject *t_ODEState_get__completeState(t_ODEState *self, void *data);
      static PyObject *t_ODEState_get__completeStateDimension(t_ODEState *self, void *data);
      static PyObject *t_ODEState_get__numberOfSecondaryStates(t_ODEState *self, void *data);
      static PyObject *t_ODEState_get__primaryState(t_ODEState *self, void *data);
      static PyObject *t_ODEState_get__primaryStateDimension(t_ODEState *self, void *data);
      static PyObject *t_ODEState_get__time(t_ODEState *self, void *data);
      static PyGetSetDef t_ODEState__fields_[] = {
        DECLARE_GET_FIELD(t_ODEState, completeState),
        DECLARE_GET_FIELD(t_ODEState, completeStateDimension),
        DECLARE_GET_FIELD(t_ODEState, numberOfSecondaryStates),
        DECLARE_GET_FIELD(t_ODEState, primaryState),
        DECLARE_GET_FIELD(t_ODEState, primaryStateDimension),
        DECLARE_GET_FIELD(t_ODEState, time),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ODEState__methods_[] = {
        DECLARE_METHOD(t_ODEState, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ODEState, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ODEState, getCompleteState, METH_NOARGS),
        DECLARE_METHOD(t_ODEState, getCompleteStateDimension, METH_NOARGS),
        DECLARE_METHOD(t_ODEState, getNumberOfSecondaryStates, METH_NOARGS),
        DECLARE_METHOD(t_ODEState, getPrimaryState, METH_NOARGS),
        DECLARE_METHOD(t_ODEState, getPrimaryStateDimension, METH_NOARGS),
        DECLARE_METHOD(t_ODEState, getSecondaryState, METH_O),
        DECLARE_METHOD(t_ODEState, getSecondaryStateDimension, METH_O),
        DECLARE_METHOD(t_ODEState, getTime, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ODEState)[] = {
        { Py_tp_methods, t_ODEState__methods_ },
        { Py_tp_init, (void *) t_ODEState_init_ },
        { Py_tp_getset, t_ODEState__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ODEState)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ODEState, t_ODEState, ODEState);

      void t_ODEState::install(PyObject *module)
      {
        installType(&PY_TYPE(ODEState), &PY_TYPE_DEF(ODEState), module, "ODEState", 0);
      }

      void t_ODEState::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEState), "class_", make_descriptor(ODEState::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEState), "wrapfn_", make_descriptor(t_ODEState::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEState), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ODEState_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ODEState::initializeClass, 1)))
          return NULL;
        return t_ODEState::wrap_Object(ODEState(((t_ODEState *) arg)->object.this$));
      }
      static PyObject *t_ODEState_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ODEState::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ODEState_init_(t_ODEState *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            JArray< jdouble > a1((jobject) NULL);
            ODEState object((jobject) NULL);

            if (!parseArgs(args, "D[D", &a0, &a1))
            {
              INT_CALL(object = ODEState(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jdouble a0;
            JArray< jdouble > a1((jobject) NULL);
            JArray< JArray< jdouble > > a2((jobject) NULL);
            ODEState object((jobject) NULL);

            if (!parseArgs(args, "D[D[[D", &a0, &a1, &a2))
            {
              INT_CALL(object = ODEState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ODEState_getCompleteState(t_ODEState *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getCompleteState());
        return result.wrap();
      }

      static PyObject *t_ODEState_getCompleteStateDimension(t_ODEState *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getCompleteStateDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ODEState_getNumberOfSecondaryStates(t_ODEState *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumberOfSecondaryStates());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ODEState_getPrimaryState(t_ODEState *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrimaryState());
        return result.wrap();
      }

      static PyObject *t_ODEState_getPrimaryStateDimension(t_ODEState *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getPrimaryStateDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ODEState_getSecondaryState(t_ODEState *self, PyObject *arg)
      {
        jint a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getSecondaryState(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getSecondaryState", arg);
        return NULL;
      }

      static PyObject *t_ODEState_getSecondaryStateDimension(t_ODEState *self, PyObject *arg)
      {
        jint a0;
        jint result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getSecondaryStateDimension(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getSecondaryStateDimension", arg);
        return NULL;
      }

      static PyObject *t_ODEState_getTime(t_ODEState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getTime());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ODEState_get__completeState(t_ODEState *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getCompleteState());
        return value.wrap();
      }

      static PyObject *t_ODEState_get__completeStateDimension(t_ODEState *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getCompleteStateDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ODEState_get__numberOfSecondaryStates(t_ODEState *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumberOfSecondaryStates());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ODEState_get__primaryState(t_ODEState *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrimaryState());
        return value.wrap();
      }

      static PyObject *t_ODEState_get__primaryStateDimension(t_ODEState *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getPrimaryStateDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ODEState_get__time(t_ODEState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getTime());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/util/function/Supplier.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/definitions/TimeSystem.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {

          ::java::lang::Class *ContextBinding::class$ = NULL;
          jmethodID *ContextBinding::mids$ = NULL;
          bool ContextBinding::live$ = false;

          jclass ContextBinding::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/ContextBinding");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getClockCount_b74f83833fdad017] = env->getMethodID(cls, "getClockCount", "()D");
              mids$[mid_getClockRate_b74f83833fdad017] = env->getMethodID(cls, "getClockRate", "()D");
              mids$[mid_getConventions_53aaf70620a914af] = env->getMethodID(cls, "getConventions", "()Lorg/orekit/utils/IERSConventions;");
              mids$[mid_getDataContext_687c2d3d1010744e] = env->getMethodID(cls, "getDataContext", "()Lorg/orekit/data/DataContext;");
              mids$[mid_getParsedUnitsBehavior_b86f6bf8371fab43] = env->getMethodID(cls, "getParsedUnitsBehavior", "()Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;");
              mids$[mid_getReferenceDate_c325492395d89b24] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTimeSystem_91b7f51e80ad440f] = env->getMethodID(cls, "getTimeSystem", "()Lorg/orekit/files/ccsds/definitions/TimeSystem;");
              mids$[mid_isSimpleEOP_9ab94ac1dc23b105] = env->getMethodID(cls, "isSimpleEOP", "()Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble ContextBinding::getClockCount() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getClockCount_b74f83833fdad017]);
          }

          jdouble ContextBinding::getClockRate() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getClockRate_b74f83833fdad017]);
          }

          ::org::orekit::utils::IERSConventions ContextBinding::getConventions() const
          {
            return ::org::orekit::utils::IERSConventions(env->callObjectMethod(this$, mids$[mid_getConventions_53aaf70620a914af]));
          }

          ::org::orekit::data::DataContext ContextBinding::getDataContext() const
          {
            return ::org::orekit::data::DataContext(env->callObjectMethod(this$, mids$[mid_getDataContext_687c2d3d1010744e]));
          }

          ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior ContextBinding::getParsedUnitsBehavior() const
          {
            return ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior(env->callObjectMethod(this$, mids$[mid_getParsedUnitsBehavior_b86f6bf8371fab43]));
          }

          ::org::orekit::time::AbsoluteDate ContextBinding::getReferenceDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceDate_c325492395d89b24]));
          }

          ::org::orekit::files::ccsds::definitions::TimeSystem ContextBinding::getTimeSystem() const
          {
            return ::org::orekit::files::ccsds::definitions::TimeSystem(env->callObjectMethod(this$, mids$[mid_getTimeSystem_91b7f51e80ad440f]));
          }

          jboolean ContextBinding::isSimpleEOP() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isSimpleEOP_9ab94ac1dc23b105]);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          static PyObject *t_ContextBinding_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ContextBinding_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ContextBinding_getClockCount(t_ContextBinding *self);
          static PyObject *t_ContextBinding_getClockRate(t_ContextBinding *self);
          static PyObject *t_ContextBinding_getConventions(t_ContextBinding *self);
          static PyObject *t_ContextBinding_getDataContext(t_ContextBinding *self);
          static PyObject *t_ContextBinding_getParsedUnitsBehavior(t_ContextBinding *self);
          static PyObject *t_ContextBinding_getReferenceDate(t_ContextBinding *self);
          static PyObject *t_ContextBinding_getTimeSystem(t_ContextBinding *self);
          static PyObject *t_ContextBinding_isSimpleEOP(t_ContextBinding *self);
          static PyObject *t_ContextBinding_get__clockCount(t_ContextBinding *self, void *data);
          static PyObject *t_ContextBinding_get__clockRate(t_ContextBinding *self, void *data);
          static PyObject *t_ContextBinding_get__conventions(t_ContextBinding *self, void *data);
          static PyObject *t_ContextBinding_get__dataContext(t_ContextBinding *self, void *data);
          static PyObject *t_ContextBinding_get__parsedUnitsBehavior(t_ContextBinding *self, void *data);
          static PyObject *t_ContextBinding_get__referenceDate(t_ContextBinding *self, void *data);
          static PyObject *t_ContextBinding_get__simpleEOP(t_ContextBinding *self, void *data);
          static PyObject *t_ContextBinding_get__timeSystem(t_ContextBinding *self, void *data);
          static PyGetSetDef t_ContextBinding__fields_[] = {
            DECLARE_GET_FIELD(t_ContextBinding, clockCount),
            DECLARE_GET_FIELD(t_ContextBinding, clockRate),
            DECLARE_GET_FIELD(t_ContextBinding, conventions),
            DECLARE_GET_FIELD(t_ContextBinding, dataContext),
            DECLARE_GET_FIELD(t_ContextBinding, parsedUnitsBehavior),
            DECLARE_GET_FIELD(t_ContextBinding, referenceDate),
            DECLARE_GET_FIELD(t_ContextBinding, simpleEOP),
            DECLARE_GET_FIELD(t_ContextBinding, timeSystem),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ContextBinding__methods_[] = {
            DECLARE_METHOD(t_ContextBinding, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ContextBinding, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ContextBinding, getClockCount, METH_NOARGS),
            DECLARE_METHOD(t_ContextBinding, getClockRate, METH_NOARGS),
            DECLARE_METHOD(t_ContextBinding, getConventions, METH_NOARGS),
            DECLARE_METHOD(t_ContextBinding, getDataContext, METH_NOARGS),
            DECLARE_METHOD(t_ContextBinding, getParsedUnitsBehavior, METH_NOARGS),
            DECLARE_METHOD(t_ContextBinding, getReferenceDate, METH_NOARGS),
            DECLARE_METHOD(t_ContextBinding, getTimeSystem, METH_NOARGS),
            DECLARE_METHOD(t_ContextBinding, isSimpleEOP, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ContextBinding)[] = {
            { Py_tp_methods, t_ContextBinding__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_ContextBinding__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ContextBinding)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ContextBinding, t_ContextBinding, ContextBinding);

          void t_ContextBinding::install(PyObject *module)
          {
            installType(&PY_TYPE(ContextBinding), &PY_TYPE_DEF(ContextBinding), module, "ContextBinding", 0);
          }

          void t_ContextBinding::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ContextBinding), "class_", make_descriptor(ContextBinding::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ContextBinding), "wrapfn_", make_descriptor(t_ContextBinding::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ContextBinding), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ContextBinding_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ContextBinding::initializeClass, 1)))
              return NULL;
            return t_ContextBinding::wrap_Object(ContextBinding(((t_ContextBinding *) arg)->object.this$));
          }
          static PyObject *t_ContextBinding_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ContextBinding::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ContextBinding_getClockCount(t_ContextBinding *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getClockCount());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_ContextBinding_getClockRate(t_ContextBinding *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getClockRate());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_ContextBinding_getConventions(t_ContextBinding *self)
          {
            ::org::orekit::utils::IERSConventions result((jobject) NULL);
            OBJ_CALL(result = self->object.getConventions());
            return ::org::orekit::utils::t_IERSConventions::wrap_Object(result);
          }

          static PyObject *t_ContextBinding_getDataContext(t_ContextBinding *self)
          {
            ::org::orekit::data::DataContext result((jobject) NULL);
            OBJ_CALL(result = self->object.getDataContext());
            return ::org::orekit::data::t_DataContext::wrap_Object(result);
          }

          static PyObject *t_ContextBinding_getParsedUnitsBehavior(t_ContextBinding *self)
          {
            ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior result((jobject) NULL);
            OBJ_CALL(result = self->object.getParsedUnitsBehavior());
            return ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::wrap_Object(result);
          }

          static PyObject *t_ContextBinding_getReferenceDate(t_ContextBinding *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_ContextBinding_getTimeSystem(t_ContextBinding *self)
          {
            ::org::orekit::files::ccsds::definitions::TimeSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getTimeSystem());
            return ::org::orekit::files::ccsds::definitions::t_TimeSystem::wrap_Object(result);
          }

          static PyObject *t_ContextBinding_isSimpleEOP(t_ContextBinding *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isSimpleEOP());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_ContextBinding_get__clockCount(t_ContextBinding *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getClockCount());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_ContextBinding_get__clockRate(t_ContextBinding *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getClockRate());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_ContextBinding_get__conventions(t_ContextBinding *self, void *data)
          {
            ::org::orekit::utils::IERSConventions value((jobject) NULL);
            OBJ_CALL(value = self->object.getConventions());
            return ::org::orekit::utils::t_IERSConventions::wrap_Object(value);
          }

          static PyObject *t_ContextBinding_get__dataContext(t_ContextBinding *self, void *data)
          {
            ::org::orekit::data::DataContext value((jobject) NULL);
            OBJ_CALL(value = self->object.getDataContext());
            return ::org::orekit::data::t_DataContext::wrap_Object(value);
          }

          static PyObject *t_ContextBinding_get__parsedUnitsBehavior(t_ContextBinding *self, void *data)
          {
            ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior value((jobject) NULL);
            OBJ_CALL(value = self->object.getParsedUnitsBehavior());
            return ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::wrap_Object(value);
          }

          static PyObject *t_ContextBinding_get__referenceDate(t_ContextBinding *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_ContextBinding_get__simpleEOP(t_ContextBinding *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isSimpleEOP());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_ContextBinding_get__timeSystem(t_ContextBinding *self, void *data)
          {
            ::org::orekit::files::ccsds::definitions::TimeSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getTimeSystem());
            return ::org::orekit::files::ccsds::definitions::t_TimeSystem::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/StatUtils.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {

      ::java::lang::Class *StatUtils::class$ = NULL;
      jmethodID *StatUtils::mids$ = NULL;
      bool StatUtils::live$ = false;

      jclass StatUtils::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/stat/StatUtils");

          mids$ = new jmethodID[max_mid];
          mids$[mid_geometricMean_b060e4326765ccf1] = env->getStaticMethodID(cls, "geometricMean", "([D)D");
          mids$[mid_geometricMean_1567a80062adb31b] = env->getStaticMethodID(cls, "geometricMean", "([DII)D");
          mids$[mid_max_b060e4326765ccf1] = env->getStaticMethodID(cls, "max", "([D)D");
          mids$[mid_max_1567a80062adb31b] = env->getStaticMethodID(cls, "max", "([DII)D");
          mids$[mid_mean_b060e4326765ccf1] = env->getStaticMethodID(cls, "mean", "([D)D");
          mids$[mid_mean_1567a80062adb31b] = env->getStaticMethodID(cls, "mean", "([DII)D");
          mids$[mid_meanDifference_3207f9c2ae7271d9] = env->getStaticMethodID(cls, "meanDifference", "([D[D)D");
          mids$[mid_min_b060e4326765ccf1] = env->getStaticMethodID(cls, "min", "([D)D");
          mids$[mid_min_1567a80062adb31b] = env->getStaticMethodID(cls, "min", "([DII)D");
          mids$[mid_mode_14dee4cb8cc3e959] = env->getStaticMethodID(cls, "mode", "([D)[D");
          mids$[mid_mode_4ab5393b410e04fc] = env->getStaticMethodID(cls, "mode", "([DII)[D");
          mids$[mid_normalize_14dee4cb8cc3e959] = env->getStaticMethodID(cls, "normalize", "([D)[D");
          mids$[mid_percentile_79e4db9e1e3d84c9] = env->getStaticMethodID(cls, "percentile", "([DD)D");
          mids$[mid_percentile_86463cae6c6d5697] = env->getStaticMethodID(cls, "percentile", "([DIID)D");
          mids$[mid_populationVariance_b060e4326765ccf1] = env->getStaticMethodID(cls, "populationVariance", "([D)D");
          mids$[mid_populationVariance_79e4db9e1e3d84c9] = env->getStaticMethodID(cls, "populationVariance", "([DD)D");
          mids$[mid_populationVariance_1567a80062adb31b] = env->getStaticMethodID(cls, "populationVariance", "([DII)D");
          mids$[mid_populationVariance_f09b11d2a075df86] = env->getStaticMethodID(cls, "populationVariance", "([DDII)D");
          mids$[mid_product_b060e4326765ccf1] = env->getStaticMethodID(cls, "product", "([D)D");
          mids$[mid_product_1567a80062adb31b] = env->getStaticMethodID(cls, "product", "([DII)D");
          mids$[mid_sum_b060e4326765ccf1] = env->getStaticMethodID(cls, "sum", "([D)D");
          mids$[mid_sum_1567a80062adb31b] = env->getStaticMethodID(cls, "sum", "([DII)D");
          mids$[mid_sumDifference_3207f9c2ae7271d9] = env->getStaticMethodID(cls, "sumDifference", "([D[D)D");
          mids$[mid_sumLog_b060e4326765ccf1] = env->getStaticMethodID(cls, "sumLog", "([D)D");
          mids$[mid_sumLog_1567a80062adb31b] = env->getStaticMethodID(cls, "sumLog", "([DII)D");
          mids$[mid_sumSq_b060e4326765ccf1] = env->getStaticMethodID(cls, "sumSq", "([D)D");
          mids$[mid_sumSq_1567a80062adb31b] = env->getStaticMethodID(cls, "sumSq", "([DII)D");
          mids$[mid_variance_b060e4326765ccf1] = env->getStaticMethodID(cls, "variance", "([D)D");
          mids$[mid_variance_79e4db9e1e3d84c9] = env->getStaticMethodID(cls, "variance", "([DD)D");
          mids$[mid_variance_1567a80062adb31b] = env->getStaticMethodID(cls, "variance", "([DII)D");
          mids$[mid_variance_f09b11d2a075df86] = env->getStaticMethodID(cls, "variance", "([DDII)D");
          mids$[mid_varianceDifference_5427cadc72cd59f7] = env->getStaticMethodID(cls, "varianceDifference", "([D[DD)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble StatUtils::geometricMean(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_geometricMean_b060e4326765ccf1], a0.this$);
      }

      jdouble StatUtils::geometricMean(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_geometricMean_1567a80062adb31b], a0.this$, a1, a2);
      }

      jdouble StatUtils::max$(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_max_b060e4326765ccf1], a0.this$);
      }

      jdouble StatUtils::max$(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_max_1567a80062adb31b], a0.this$, a1, a2);
      }

      jdouble StatUtils::mean$(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_mean_b060e4326765ccf1], a0.this$);
      }

      jdouble StatUtils::mean$(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_mean_1567a80062adb31b], a0.this$, a1, a2);
      }

      jdouble StatUtils::meanDifference(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_meanDifference_3207f9c2ae7271d9], a0.this$, a1.this$);
      }

      jdouble StatUtils::min$(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_min_b060e4326765ccf1], a0.this$);
      }

      jdouble StatUtils::min$(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_min_1567a80062adb31b], a0.this$, a1, a2);
      }

      JArray< jdouble > StatUtils::mode(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_mode_14dee4cb8cc3e959], a0.this$));
      }

      JArray< jdouble > StatUtils::mode(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_mode_4ab5393b410e04fc], a0.this$, a1, a2));
      }

      JArray< jdouble > StatUtils::normalize(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_normalize_14dee4cb8cc3e959], a0.this$));
      }

      jdouble StatUtils::percentile(const JArray< jdouble > & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_percentile_79e4db9e1e3d84c9], a0.this$, a1);
      }

      jdouble StatUtils::percentile(const JArray< jdouble > & a0, jint a1, jint a2, jdouble a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_percentile_86463cae6c6d5697], a0.this$, a1, a2, a3);
      }

      jdouble StatUtils::populationVariance(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_populationVariance_b060e4326765ccf1], a0.this$);
      }

      jdouble StatUtils::populationVariance(const JArray< jdouble > & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_populationVariance_79e4db9e1e3d84c9], a0.this$, a1);
      }

      jdouble StatUtils::populationVariance(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_populationVariance_1567a80062adb31b], a0.this$, a1, a2);
      }

      jdouble StatUtils::populationVariance(const JArray< jdouble > & a0, jdouble a1, jint a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_populationVariance_f09b11d2a075df86], a0.this$, a1, a2, a3);
      }

      jdouble StatUtils::product(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_product_b060e4326765ccf1], a0.this$);
      }

      jdouble StatUtils::product(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_product_1567a80062adb31b], a0.this$, a1, a2);
      }

      jdouble StatUtils::sum(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sum_b060e4326765ccf1], a0.this$);
      }

      jdouble StatUtils::sum(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sum_1567a80062adb31b], a0.this$, a1, a2);
      }

      jdouble StatUtils::sumDifference(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sumDifference_3207f9c2ae7271d9], a0.this$, a1.this$);
      }

      jdouble StatUtils::sumLog(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sumLog_b060e4326765ccf1], a0.this$);
      }

      jdouble StatUtils::sumLog(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sumLog_1567a80062adb31b], a0.this$, a1, a2);
      }

      jdouble StatUtils::sumSq(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sumSq_b060e4326765ccf1], a0.this$);
      }

      jdouble StatUtils::sumSq(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sumSq_1567a80062adb31b], a0.this$, a1, a2);
      }

      jdouble StatUtils::variance(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_variance_b060e4326765ccf1], a0.this$);
      }

      jdouble StatUtils::variance(const JArray< jdouble > & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_variance_79e4db9e1e3d84c9], a0.this$, a1);
      }

      jdouble StatUtils::variance(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_variance_1567a80062adb31b], a0.this$, a1, a2);
      }

      jdouble StatUtils::variance(const JArray< jdouble > & a0, jdouble a1, jint a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_variance_f09b11d2a075df86], a0.this$, a1, a2, a3);
      }

      jdouble StatUtils::varianceDifference(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_varianceDifference_5427cadc72cd59f7], a0.this$, a1.this$, a2);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      static PyObject *t_StatUtils_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StatUtils_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StatUtils_geometricMean(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_max(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_mean(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_meanDifference(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_min(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_mode(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_normalize(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StatUtils_percentile(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_populationVariance(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_product(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_sum(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_sumDifference(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_sumLog(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_sumSq(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_variance(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_varianceDifference(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_StatUtils__methods_[] = {
        DECLARE_METHOD(t_StatUtils, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, geometricMean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, max, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, mean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, meanDifference, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, min, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, mode, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, normalize, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, percentile, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, populationVariance, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, product, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, sum, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, sumDifference, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, sumLog, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, sumSq, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, variance, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, varianceDifference, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(StatUtils)[] = {
        { Py_tp_methods, t_StatUtils__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(StatUtils)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(StatUtils, t_StatUtils, StatUtils);

      void t_StatUtils::install(PyObject *module)
      {
        installType(&PY_TYPE(StatUtils), &PY_TYPE_DEF(StatUtils), module, "StatUtils", 0);
      }

      void t_StatUtils::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(StatUtils), "class_", make_descriptor(StatUtils::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StatUtils), "wrapfn_", make_descriptor(t_StatUtils::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StatUtils), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_StatUtils_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, StatUtils::initializeClass, 1)))
          return NULL;
        return t_StatUtils::wrap_Object(StatUtils(((t_StatUtils *) arg)->object.this$));
      }
      static PyObject *t_StatUtils_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, StatUtils::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_StatUtils_geometricMean(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::geometricMean(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::geometricMean(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "geometricMean", args);
        return NULL;
      }

      static PyObject *t_StatUtils_max(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::max$(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::max$(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "max", args);
        return NULL;
      }

      static PyObject *t_StatUtils_mean(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::mean$(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::mean$(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "mean", args);
        return NULL;
      }

      static PyObject *t_StatUtils_meanDifference(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "[D[D", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::meanDifference(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "meanDifference", args);
        return NULL;
      }

      static PyObject *t_StatUtils_min(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::min$(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::min$(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "min", args);
        return NULL;
      }

      static PyObject *t_StatUtils_mode(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::mode(a0));
              return result.wrap();
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::mode(a0, a1, a2));
              return result.wrap();
            }
          }
        }

        PyErr_SetArgsError(type, "mode", args);
        return NULL;
      }

      static PyObject *t_StatUtils_normalize(PyTypeObject *type, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::normalize(a0));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "normalize", arg);
        return NULL;
      }

      static PyObject *t_StatUtils_percentile(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "[DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::percentile(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 4:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble a3;
            jdouble result;

            if (!parseArgs(args, "[DIID", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::percentile(a0, a1, a2, a3));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "percentile", args);
        return NULL;
      }

      static PyObject *t_StatUtils_populationVariance(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::populationVariance(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "[DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::populationVariance(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::populationVariance(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 4:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble a1;
            jint a2;
            jint a3;
            jdouble result;

            if (!parseArgs(args, "[DDII", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::populationVariance(a0, a1, a2, a3));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "populationVariance", args);
        return NULL;
      }

      static PyObject *t_StatUtils_product(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::product(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::product(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "product", args);
        return NULL;
      }

      static PyObject *t_StatUtils_sum(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::sum(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::sum(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "sum", args);
        return NULL;
      }

      static PyObject *t_StatUtils_sumDifference(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "[D[D", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::sumDifference(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "sumDifference", args);
        return NULL;
      }

      static PyObject *t_StatUtils_sumLog(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::sumLog(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::sumLog(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "sumLog", args);
        return NULL;
      }

      static PyObject *t_StatUtils_sumSq(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::sumSq(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::sumSq(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "sumSq", args);
        return NULL;
      }

      static PyObject *t_StatUtils_variance(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::variance(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "[DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::variance(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::variance(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 4:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble a1;
            jint a2;
            jint a3;
            jdouble result;

            if (!parseArgs(args, "[DDII", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::variance(a0, a1, a2, a3));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "variance", args);
        return NULL;
      }

      static PyObject *t_StatUtils_varianceDifference(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "[D[DD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::varianceDifference(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "varianceDifference", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/discrete/BinomialDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {

        ::java::lang::Class *BinomialDistribution::class$ = NULL;
        jmethodID *BinomialDistribution::mids$ = NULL;
        bool BinomialDistribution::live$ = false;

        jclass BinomialDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/discrete/BinomialDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d5322b8b512aeb26] = env->getMethodID(cls, "<init>", "(ID)V");
            mids$[mid_cumulativeProbability_2afcbc21f4e57ab2] = env->getMethodID(cls, "cumulativeProbability", "(I)D");
            mids$[mid_getNumberOfTrials_55546ef6a647f39b] = env->getMethodID(cls, "getNumberOfTrials", "()I");
            mids$[mid_getNumericalMean_b74f83833fdad017] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_b74f83833fdad017] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getProbabilityOfSuccess_b74f83833fdad017] = env->getMethodID(cls, "getProbabilityOfSuccess", "()D");
            mids$[mid_getSupportLowerBound_55546ef6a647f39b] = env->getMethodID(cls, "getSupportLowerBound", "()I");
            mids$[mid_getSupportUpperBound_55546ef6a647f39b] = env->getMethodID(cls, "getSupportUpperBound", "()I");
            mids$[mid_isSupportConnected_9ab94ac1dc23b105] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logProbability_2afcbc21f4e57ab2] = env->getMethodID(cls, "logProbability", "(I)D");
            mids$[mid_probability_2afcbc21f4e57ab2] = env->getMethodID(cls, "probability", "(I)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BinomialDistribution::BinomialDistribution(jint a0, jdouble a1) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_d5322b8b512aeb26, a0, a1)) {}

        jdouble BinomialDistribution::cumulativeProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_2afcbc21f4e57ab2], a0);
        }

        jint BinomialDistribution::getNumberOfTrials() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberOfTrials_55546ef6a647f39b]);
        }

        jdouble BinomialDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_b74f83833fdad017]);
        }

        jdouble BinomialDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_b74f83833fdad017]);
        }

        jdouble BinomialDistribution::getProbabilityOfSuccess() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getProbabilityOfSuccess_b74f83833fdad017]);
        }

        jint BinomialDistribution::getSupportLowerBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportLowerBound_55546ef6a647f39b]);
        }

        jint BinomialDistribution::getSupportUpperBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportUpperBound_55546ef6a647f39b]);
        }

        jboolean BinomialDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_9ab94ac1dc23b105]);
        }

        jdouble BinomialDistribution::logProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logProbability_2afcbc21f4e57ab2], a0);
        }

        jdouble BinomialDistribution::probability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_2afcbc21f4e57ab2], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {
        static PyObject *t_BinomialDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BinomialDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BinomialDistribution_init_(t_BinomialDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BinomialDistribution_cumulativeProbability(t_BinomialDistribution *self, PyObject *args);
        static PyObject *t_BinomialDistribution_getNumberOfTrials(t_BinomialDistribution *self);
        static PyObject *t_BinomialDistribution_getNumericalMean(t_BinomialDistribution *self, PyObject *args);
        static PyObject *t_BinomialDistribution_getNumericalVariance(t_BinomialDistribution *self, PyObject *args);
        static PyObject *t_BinomialDistribution_getProbabilityOfSuccess(t_BinomialDistribution *self);
        static PyObject *t_BinomialDistribution_getSupportLowerBound(t_BinomialDistribution *self, PyObject *args);
        static PyObject *t_BinomialDistribution_getSupportUpperBound(t_BinomialDistribution *self, PyObject *args);
        static PyObject *t_BinomialDistribution_isSupportConnected(t_BinomialDistribution *self, PyObject *args);
        static PyObject *t_BinomialDistribution_logProbability(t_BinomialDistribution *self, PyObject *args);
        static PyObject *t_BinomialDistribution_probability(t_BinomialDistribution *self, PyObject *args);
        static PyObject *t_BinomialDistribution_get__numberOfTrials(t_BinomialDistribution *self, void *data);
        static PyObject *t_BinomialDistribution_get__numericalMean(t_BinomialDistribution *self, void *data);
        static PyObject *t_BinomialDistribution_get__numericalVariance(t_BinomialDistribution *self, void *data);
        static PyObject *t_BinomialDistribution_get__probabilityOfSuccess(t_BinomialDistribution *self, void *data);
        static PyObject *t_BinomialDistribution_get__supportConnected(t_BinomialDistribution *self, void *data);
        static PyObject *t_BinomialDistribution_get__supportLowerBound(t_BinomialDistribution *self, void *data);
        static PyObject *t_BinomialDistribution_get__supportUpperBound(t_BinomialDistribution *self, void *data);
        static PyGetSetDef t_BinomialDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_BinomialDistribution, numberOfTrials),
          DECLARE_GET_FIELD(t_BinomialDistribution, numericalMean),
          DECLARE_GET_FIELD(t_BinomialDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_BinomialDistribution, probabilityOfSuccess),
          DECLARE_GET_FIELD(t_BinomialDistribution, supportConnected),
          DECLARE_GET_FIELD(t_BinomialDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_BinomialDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BinomialDistribution__methods_[] = {
          DECLARE_METHOD(t_BinomialDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BinomialDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BinomialDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_BinomialDistribution, getNumberOfTrials, METH_NOARGS),
          DECLARE_METHOD(t_BinomialDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_BinomialDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_BinomialDistribution, getProbabilityOfSuccess, METH_NOARGS),
          DECLARE_METHOD(t_BinomialDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_BinomialDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_BinomialDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_BinomialDistribution, logProbability, METH_VARARGS),
          DECLARE_METHOD(t_BinomialDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BinomialDistribution)[] = {
          { Py_tp_methods, t_BinomialDistribution__methods_ },
          { Py_tp_init, (void *) t_BinomialDistribution_init_ },
          { Py_tp_getset, t_BinomialDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BinomialDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::discrete::AbstractIntegerDistribution),
          NULL
        };

        DEFINE_TYPE(BinomialDistribution, t_BinomialDistribution, BinomialDistribution);

        void t_BinomialDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(BinomialDistribution), &PY_TYPE_DEF(BinomialDistribution), module, "BinomialDistribution", 0);
        }

        void t_BinomialDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BinomialDistribution), "class_", make_descriptor(BinomialDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BinomialDistribution), "wrapfn_", make_descriptor(t_BinomialDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BinomialDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BinomialDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BinomialDistribution::initializeClass, 1)))
            return NULL;
          return t_BinomialDistribution::wrap_Object(BinomialDistribution(((t_BinomialDistribution *) arg)->object.this$));
        }
        static PyObject *t_BinomialDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BinomialDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BinomialDistribution_init_(t_BinomialDistribution *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jdouble a1;
          BinomialDistribution object((jobject) NULL);

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            INT_CALL(object = BinomialDistribution(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BinomialDistribution_cumulativeProbability(t_BinomialDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BinomialDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_BinomialDistribution_getNumberOfTrials(t_BinomialDistribution *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberOfTrials());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BinomialDistribution_getNumericalMean(t_BinomialDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BinomialDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_BinomialDistribution_getNumericalVariance(t_BinomialDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BinomialDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_BinomialDistribution_getProbabilityOfSuccess(t_BinomialDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getProbabilityOfSuccess());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BinomialDistribution_getSupportLowerBound(t_BinomialDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(BinomialDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_BinomialDistribution_getSupportUpperBound(t_BinomialDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(BinomialDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_BinomialDistribution_isSupportConnected(t_BinomialDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(BinomialDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_BinomialDistribution_logProbability(t_BinomialDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.logProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BinomialDistribution), (PyObject *) self, "logProbability", args, 2);
        }

        static PyObject *t_BinomialDistribution_probability(t_BinomialDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.probability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BinomialDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_BinomialDistribution_get__numberOfTrials(t_BinomialDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberOfTrials());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BinomialDistribution_get__numericalMean(t_BinomialDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BinomialDistribution_get__numericalVariance(t_BinomialDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BinomialDistribution_get__probabilityOfSuccess(t_BinomialDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getProbabilityOfSuccess());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BinomialDistribution_get__supportConnected(t_BinomialDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_BinomialDistribution_get__supportLowerBound(t_BinomialDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BinomialDistribution_get__supportUpperBound(t_BinomialDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/PythonGravityFields.h"
#include "java/util/List.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/forces/gravity/potential/OceanTidesWave.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/GravityFields.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *PythonGravityFields::class$ = NULL;
          jmethodID *PythonGravityFields::mids$ = NULL;
          bool PythonGravityFields::live$ = false;

          jclass PythonGravityFields::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/PythonGravityFields");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getConstantNormalizedProvider_405c10e81094d951] = env->getMethodID(cls, "getConstantNormalizedProvider", "(IILorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getConstantUnnormalizedProvider_3d381fbe1e441e33] = env->getMethodID(cls, "getConstantUnnormalizedProvider", "(IILorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
              mids$[mid_getNormalizedProvider_a686ea82e96d2c01] = env->getMethodID(cls, "getNormalizedProvider", "(II)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getOceanTidesWaves_39b43a702bd6611c] = env->getMethodID(cls, "getOceanTidesWaves", "(II)Ljava/util/List;");
              mids$[mid_getUnnormalizedProvider_fbbe2c197b102dc9] = env->getMethodID(cls, "getUnnormalizedProvider", "(II)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonGravityFields::PythonGravityFields() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void PythonGravityFields::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonGravityFields::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonGravityFields::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          static PyObject *t_PythonGravityFields_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonGravityFields_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonGravityFields_init_(t_PythonGravityFields *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonGravityFields_finalize(t_PythonGravityFields *self);
          static PyObject *t_PythonGravityFields_pythonExtension(t_PythonGravityFields *self, PyObject *args);
          static jobject JNICALL t_PythonGravityFields_getConstantNormalizedProvider0(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2);
          static jobject JNICALL t_PythonGravityFields_getConstantUnnormalizedProvider1(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2);
          static jobject JNICALL t_PythonGravityFields_getNormalizedProvider2(JNIEnv *jenv, jobject jobj, jint a0, jint a1);
          static jobject JNICALL t_PythonGravityFields_getOceanTidesWaves3(JNIEnv *jenv, jobject jobj, jint a0, jint a1);
          static jobject JNICALL t_PythonGravityFields_getUnnormalizedProvider4(JNIEnv *jenv, jobject jobj, jint a0, jint a1);
          static void JNICALL t_PythonGravityFields_pythonDecRef5(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonGravityFields_get__self(t_PythonGravityFields *self, void *data);
          static PyGetSetDef t_PythonGravityFields__fields_[] = {
            DECLARE_GET_FIELD(t_PythonGravityFields, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonGravityFields__methods_[] = {
            DECLARE_METHOD(t_PythonGravityFields, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonGravityFields, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonGravityFields, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonGravityFields, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonGravityFields)[] = {
            { Py_tp_methods, t_PythonGravityFields__methods_ },
            { Py_tp_init, (void *) t_PythonGravityFields_init_ },
            { Py_tp_getset, t_PythonGravityFields__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonGravityFields)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonGravityFields, t_PythonGravityFields, PythonGravityFields);

          void t_PythonGravityFields::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonGravityFields), &PY_TYPE_DEF(PythonGravityFields), module, "PythonGravityFields", 1);
          }

          void t_PythonGravityFields::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGravityFields), "class_", make_descriptor(PythonGravityFields::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGravityFields), "wrapfn_", make_descriptor(t_PythonGravityFields::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGravityFields), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonGravityFields::initializeClass);
            JNINativeMethod methods[] = {
              { "getConstantNormalizedProvider", "(IILorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;", (void *) t_PythonGravityFields_getConstantNormalizedProvider0 },
              { "getConstantUnnormalizedProvider", "(IILorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;", (void *) t_PythonGravityFields_getConstantUnnormalizedProvider1 },
              { "getNormalizedProvider", "(II)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;", (void *) t_PythonGravityFields_getNormalizedProvider2 },
              { "getOceanTidesWaves", "(II)Ljava/util/List;", (void *) t_PythonGravityFields_getOceanTidesWaves3 },
              { "getUnnormalizedProvider", "(II)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;", (void *) t_PythonGravityFields_getUnnormalizedProvider4 },
              { "pythonDecRef", "()V", (void *) t_PythonGravityFields_pythonDecRef5 },
            };
            env->registerNatives(cls, methods, 6);
          }

          static PyObject *t_PythonGravityFields_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonGravityFields::initializeClass, 1)))
              return NULL;
            return t_PythonGravityFields::wrap_Object(PythonGravityFields(((t_PythonGravityFields *) arg)->object.this$));
          }
          static PyObject *t_PythonGravityFields_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonGravityFields::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonGravityFields_init_(t_PythonGravityFields *self, PyObject *args, PyObject *kwds)
          {
            PythonGravityFields object((jobject) NULL);

            INT_CALL(object = PythonGravityFields());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonGravityFields_finalize(t_PythonGravityFields *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonGravityFields_pythonExtension(t_PythonGravityFields *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jlong result;
                OBJ_CALL(result = self->object.pythonExtension());
                return PyLong_FromLongLong((PY_LONG_LONG) result);
              }
              break;
             case 1:
              {
                jlong a0;

                if (!parseArgs(args, "J", &a0))
                {
                  OBJ_CALL(self->object.pythonExtension(a0));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
            return NULL;
          }

          static jobject JNICALL t_PythonGravityFields_getConstantNormalizedProvider0(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonGravityFields::mids$[PythonGravityFields::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider value((jobject) NULL);
            PyObject *o2 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a2));
            PyObject *result = PyObject_CallMethod(obj, "getConstantNormalizedProvider", "iiO", (int) a0, (int) a1, o2);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider::initializeClass, &value))
            {
              throwTypeError("getConstantNormalizedProvider", result);
              Py_DECREF(result);
            }
            else
            {
              jobj = jenv->NewLocalRef(value.this$);
              Py_DECREF(result);
              return jobj;
            }

            return (jobject) NULL;
          }

          static jobject JNICALL t_PythonGravityFields_getConstantUnnormalizedProvider1(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonGravityFields::mids$[PythonGravityFields::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider value((jobject) NULL);
            PyObject *o2 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a2));
            PyObject *result = PyObject_CallMethod(obj, "getConstantUnnormalizedProvider", "iiO", (int) a0, (int) a1, o2);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &value))
            {
              throwTypeError("getConstantUnnormalizedProvider", result);
              Py_DECREF(result);
            }
            else
            {
              jobj = jenv->NewLocalRef(value.this$);
              Py_DECREF(result);
              return jobj;
            }

            return (jobject) NULL;
          }

          static jobject JNICALL t_PythonGravityFields_getNormalizedProvider2(JNIEnv *jenv, jobject jobj, jint a0, jint a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonGravityFields::mids$[PythonGravityFields::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getNormalizedProvider", "ii", (int) a0, (int) a1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider::initializeClass, &value))
            {
              throwTypeError("getNormalizedProvider", result);
              Py_DECREF(result);
            }
            else
            {
              jobj = jenv->NewLocalRef(value.this$);
              Py_DECREF(result);
              return jobj;
            }

            return (jobject) NULL;
          }

          static jobject JNICALL t_PythonGravityFields_getOceanTidesWaves3(JNIEnv *jenv, jobject jobj, jint a0, jint a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonGravityFields::mids$[PythonGravityFields::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::List value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getOceanTidesWaves", "ii", (int) a0, (int) a1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
            {
              throwTypeError("getOceanTidesWaves", result);
              Py_DECREF(result);
            }
            else
            {
              jobj = jenv->NewLocalRef(value.this$);
              Py_DECREF(result);
              return jobj;
            }

            return (jobject) NULL;
          }

          static jobject JNICALL t_PythonGravityFields_getUnnormalizedProvider4(JNIEnv *jenv, jobject jobj, jint a0, jint a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonGravityFields::mids$[PythonGravityFields::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getUnnormalizedProvider", "ii", (int) a0, (int) a1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &value))
            {
              throwTypeError("getUnnormalizedProvider", result);
              Py_DECREF(result);
            }
            else
            {
              jobj = jenv->NewLocalRef(value.this$);
              Py_DECREF(result);
              return jobj;
            }

            return (jobject) NULL;
          }

          static void JNICALL t_PythonGravityFields_pythonDecRef5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonGravityFields::mids$[PythonGravityFields::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonGravityFields::mids$[PythonGravityFields::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonGravityFields_get__self(t_PythonGravityFields *self, void *data)
          {
            jlong ptr;
            OBJ_CALL(ptr = self->object.pythonExtension());
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              Py_INCREF(obj);
              return obj;
            }
            else
              Py_RETURN_NONE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockRangeModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/Range.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticJ2ClockRangeModifier::class$ = NULL;
          jmethodID *RelativisticJ2ClockRangeModifier::mids$ = NULL;
          bool RelativisticJ2ClockRangeModifier::live$ = false;

          jclass RelativisticJ2ClockRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b5167f35b2521627] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticJ2ClockRangeModifier::RelativisticJ2ClockRangeModifier(jdouble a0, jdouble a1, jdouble a2) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier(env->newObject(initializeClass, &mids$, mid_init$_b5167f35b2521627, a0, a1, a2)) {}

          ::java::util::List RelativisticJ2ClockRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          void RelativisticJ2ClockRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66], a0.this$);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {
          static PyObject *t_RelativisticJ2ClockRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticJ2ClockRangeModifier_init_(t_RelativisticJ2ClockRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticJ2ClockRangeModifier_getParametersDrivers(t_RelativisticJ2ClockRangeModifier *self);
          static PyObject *t_RelativisticJ2ClockRangeModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockRangeModifier *self, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockRangeModifier_get__parametersDrivers(t_RelativisticJ2ClockRangeModifier *self, void *data);
          static PyGetSetDef t_RelativisticJ2ClockRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticJ2ClockRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticJ2ClockRangeModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticJ2ClockRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticJ2ClockRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticJ2ClockRangeModifier)[] = {
            { Py_tp_methods, t_RelativisticJ2ClockRangeModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticJ2ClockRangeModifier_init_ },
            { Py_tp_getset, t_RelativisticJ2ClockRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticJ2ClockRangeModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticJ2ClockRangeModifier, t_RelativisticJ2ClockRangeModifier, RelativisticJ2ClockRangeModifier);

          void t_RelativisticJ2ClockRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticJ2ClockRangeModifier), &PY_TYPE_DEF(RelativisticJ2ClockRangeModifier), module, "RelativisticJ2ClockRangeModifier", 0);
          }

          void t_RelativisticJ2ClockRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockRangeModifier), "class_", make_descriptor(RelativisticJ2ClockRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockRangeModifier), "wrapfn_", make_descriptor(t_RelativisticJ2ClockRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticJ2ClockRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticJ2ClockRangeModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticJ2ClockRangeModifier::wrap_Object(RelativisticJ2ClockRangeModifier(((t_RelativisticJ2ClockRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticJ2ClockRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticJ2ClockRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticJ2ClockRangeModifier_init_(t_RelativisticJ2ClockRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            RelativisticJ2ClockRangeModifier object((jobject) NULL);

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              INT_CALL(object = RelativisticJ2ClockRangeModifier(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RelativisticJ2ClockRangeModifier_getParametersDrivers(t_RelativisticJ2ClockRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticJ2ClockRangeModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockRangeModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(self->object.modifyWithoutDerivatives(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modifyWithoutDerivatives", arg);
            return NULL;
          }

          static PyObject *t_RelativisticJ2ClockRangeModifier_get__parametersDrivers(t_RelativisticJ2ClockRangeModifier *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/Oem.h"
#include "java/util/List.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemSegment.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/data/DataContext.h"
#include "java/util/Map.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemSatelliteEphemeris.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *Oem::class$ = NULL;
              jmethodID *Oem::mids$ = NULL;
              bool Oem::live$ = false;
              ::java::lang::String *Oem::FORMAT_VERSION_KEY = NULL;
              ::java::lang::String *Oem::ROOT = NULL;

              jclass Oem::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/Oem");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_9639e27fba1a1f36] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;D)V");
                  mids$[mid_checkTimeSystems_a1fa5dae97ea5ed2] = env->getMethodID(cls, "checkTimeSystems", "()V");
                  mids$[mid_getSatellites_810bed48fafb0b9a] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  FORMAT_VERSION_KEY = new ::java::lang::String(env->getStaticObjectField(cls, "FORMAT_VERSION_KEY", "Ljava/lang/String;"));
                  ROOT = new ::java::lang::String(env->getStaticObjectField(cls, "ROOT", "Ljava/lang/String;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Oem::Oem(const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3, jdouble a4) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_9639e27fba1a1f36, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

              void Oem::checkTimeSystems() const
              {
                env->callVoidMethod(this$, mids$[mid_checkTimeSystems_a1fa5dae97ea5ed2]);
              }

              ::java::util::Map Oem::getSatellites() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_810bed48fafb0b9a]));
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {
              static PyObject *t_Oem_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Oem_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Oem_of_(t_Oem *self, PyObject *args);
              static int t_Oem_init_(t_Oem *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Oem_checkTimeSystems(t_Oem *self);
              static PyObject *t_Oem_getSatellites(t_Oem *self);
              static PyObject *t_Oem_get__satellites(t_Oem *self, void *data);
              static PyObject *t_Oem_get__parameters_(t_Oem *self, void *data);
              static PyGetSetDef t_Oem__fields_[] = {
                DECLARE_GET_FIELD(t_Oem, satellites),
                DECLARE_GET_FIELD(t_Oem, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Oem__methods_[] = {
                DECLARE_METHOD(t_Oem, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Oem, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Oem, of_, METH_VARARGS),
                DECLARE_METHOD(t_Oem, checkTimeSystems, METH_NOARGS),
                DECLARE_METHOD(t_Oem, getSatellites, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Oem)[] = {
                { Py_tp_methods, t_Oem__methods_ },
                { Py_tp_init, (void *) t_Oem_init_ },
                { Py_tp_getset, t_Oem__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Oem)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::NdmConstituent),
                NULL
              };

              DEFINE_TYPE(Oem, t_Oem, Oem);
              PyObject *t_Oem::wrap_Object(const Oem& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Oem::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Oem *self = (t_Oem *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Oem::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Oem::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Oem *self = (t_Oem *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Oem::install(PyObject *module)
              {
                installType(&PY_TYPE(Oem), &PY_TYPE_DEF(Oem), module, "Oem", 0);
              }

              void t_Oem::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Oem), "class_", make_descriptor(Oem::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Oem), "wrapfn_", make_descriptor(t_Oem::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Oem), "boxfn_", make_descriptor(boxObject));
                env->getClass(Oem::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(Oem), "FORMAT_VERSION_KEY", make_descriptor(j2p(*Oem::FORMAT_VERSION_KEY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Oem), "ROOT", make_descriptor(j2p(*Oem::ROOT)));
              }

              static PyObject *t_Oem_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Oem::initializeClass, 1)))
                  return NULL;
                return t_Oem::wrap_Object(Oem(((t_Oem *) arg)->object.this$));
              }
              static PyObject *t_Oem_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Oem::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Oem_of_(t_Oem *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Oem_init_(t_Oem *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::utils::IERSConventions a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::data::DataContext a3((jobject) NULL);
                jdouble a4;
                Oem object((jobject) NULL);

                if (!parseArgs(args, "kKKkD", ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3, &a4))
                {
                  INT_CALL(object = Oem(a0, a1, a2, a3, a4));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::odm::PY_TYPE(OdmHeader);
                  self->parameters[1] = ::org::orekit::files::ccsds::ndm::odm::oem::PY_TYPE(OemSegment);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_Oem_checkTimeSystems(t_Oem *self)
              {
                OBJ_CALL(self->object.checkTimeSystems());
                Py_RETURN_NONE;
              }

              static PyObject *t_Oem_getSatellites(t_Oem *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSatellites());
                return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::ndm::odm::oem::PY_TYPE(OemSatelliteEphemeris));
              }
              static PyObject *t_Oem_get__parameters_(t_Oem *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_Oem_get__satellites(t_Oem *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSatellites());
                return ::java::util::t_Map::wrap_Object(value);
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/AbstractMeasurementBuilder.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *AbstractMeasurementBuilder::class$ = NULL;
          jmethodID *AbstractMeasurementBuilder::mids$ = NULL;
          bool AbstractMeasurementBuilder::live$ = false;

          jclass AbstractMeasurementBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/AbstractMeasurementBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_addModifier_cb38ed914ba48f20] = env->getMethodID(cls, "addModifier", "(Lorg/orekit/estimation/measurements/EstimationModifier;)V");
              mids$[mid_getModifiers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getModifiers", "()Ljava/util/List;");
              mids$[mid_getSatellites_eb47c48e4fca882c] = env->getMethodID(cls, "getSatellites", "()[Lorg/orekit/estimation/measurements/ObservableSatellite;");
              mids$[mid_init_f89af00fc113b524] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_getStart_c325492395d89b24] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getEnd_c325492395d89b24] = env->getMethodID(cls, "getEnd", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTheoreticalStandardDeviation_25e1757a36c4dde2] = env->getMethodID(cls, "getTheoreticalStandardDeviation", "()[D");
              mids$[mid_getBaseWeight_25e1757a36c4dde2] = env->getMethodID(cls, "getBaseWeight", "()[D");
              mids$[mid_getNoise_25e1757a36c4dde2] = env->getMethodID(cls, "getNoise", "()[D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void AbstractMeasurementBuilder::addModifier(const ::org::orekit::estimation::measurements::EstimationModifier & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addModifier_cb38ed914ba48f20], a0.this$);
          }

          ::java::util::List AbstractMeasurementBuilder::getModifiers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getModifiers_e62d3bb06d56d7e3]));
          }

          JArray< ::org::orekit::estimation::measurements::ObservableSatellite > AbstractMeasurementBuilder::getSatellites() const
          {
            return JArray< ::org::orekit::estimation::measurements::ObservableSatellite >(env->callObjectMethod(this$, mids$[mid_getSatellites_eb47c48e4fca882c]));
          }

          void AbstractMeasurementBuilder::init(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_f89af00fc113b524], a0.this$, a1.this$);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {
          static PyObject *t_AbstractMeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractMeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractMeasurementBuilder_of_(t_AbstractMeasurementBuilder *self, PyObject *args);
          static PyObject *t_AbstractMeasurementBuilder_addModifier(t_AbstractMeasurementBuilder *self, PyObject *arg);
          static PyObject *t_AbstractMeasurementBuilder_getModifiers(t_AbstractMeasurementBuilder *self);
          static PyObject *t_AbstractMeasurementBuilder_getSatellites(t_AbstractMeasurementBuilder *self);
          static PyObject *t_AbstractMeasurementBuilder_init(t_AbstractMeasurementBuilder *self, PyObject *args);
          static PyObject *t_AbstractMeasurementBuilder_get__modifiers(t_AbstractMeasurementBuilder *self, void *data);
          static PyObject *t_AbstractMeasurementBuilder_get__satellites(t_AbstractMeasurementBuilder *self, void *data);
          static PyObject *t_AbstractMeasurementBuilder_get__parameters_(t_AbstractMeasurementBuilder *self, void *data);
          static PyGetSetDef t_AbstractMeasurementBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_AbstractMeasurementBuilder, modifiers),
            DECLARE_GET_FIELD(t_AbstractMeasurementBuilder, satellites),
            DECLARE_GET_FIELD(t_AbstractMeasurementBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AbstractMeasurementBuilder__methods_[] = {
            DECLARE_METHOD(t_AbstractMeasurementBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractMeasurementBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractMeasurementBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_AbstractMeasurementBuilder, addModifier, METH_O),
            DECLARE_METHOD(t_AbstractMeasurementBuilder, getModifiers, METH_NOARGS),
            DECLARE_METHOD(t_AbstractMeasurementBuilder, getSatellites, METH_NOARGS),
            DECLARE_METHOD(t_AbstractMeasurementBuilder, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractMeasurementBuilder)[] = {
            { Py_tp_methods, t_AbstractMeasurementBuilder__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_AbstractMeasurementBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractMeasurementBuilder)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractMeasurementBuilder, t_AbstractMeasurementBuilder, AbstractMeasurementBuilder);
          PyObject *t_AbstractMeasurementBuilder::wrap_Object(const AbstractMeasurementBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AbstractMeasurementBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AbstractMeasurementBuilder *self = (t_AbstractMeasurementBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_AbstractMeasurementBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AbstractMeasurementBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AbstractMeasurementBuilder *self = (t_AbstractMeasurementBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_AbstractMeasurementBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractMeasurementBuilder), &PY_TYPE_DEF(AbstractMeasurementBuilder), module, "AbstractMeasurementBuilder", 0);
          }

          void t_AbstractMeasurementBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMeasurementBuilder), "class_", make_descriptor(AbstractMeasurementBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMeasurementBuilder), "wrapfn_", make_descriptor(t_AbstractMeasurementBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMeasurementBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractMeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractMeasurementBuilder::initializeClass, 1)))
              return NULL;
            return t_AbstractMeasurementBuilder::wrap_Object(AbstractMeasurementBuilder(((t_AbstractMeasurementBuilder *) arg)->object.this$));
          }
          static PyObject *t_AbstractMeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractMeasurementBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AbstractMeasurementBuilder_of_(t_AbstractMeasurementBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_AbstractMeasurementBuilder_addModifier(t_AbstractMeasurementBuilder *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimationModifier a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimationModifier::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimationModifier::parameters_))
            {
              OBJ_CALL(self->object.addModifier(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addModifier", arg);
            return NULL;
          }

          static PyObject *t_AbstractMeasurementBuilder_getModifiers(t_AbstractMeasurementBuilder *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getModifiers());
            return ::java::util::t_List::wrap_Object(result);
          }

          static PyObject *t_AbstractMeasurementBuilder_getSatellites(t_AbstractMeasurementBuilder *self)
          {
            JArray< ::org::orekit::estimation::measurements::ObservableSatellite > result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatellites());
            return JArray<jobject>(result.this$).wrap(::org::orekit::estimation::measurements::t_ObservableSatellite::wrap_jobject);
          }

          static PyObject *t_AbstractMeasurementBuilder_init(t_AbstractMeasurementBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.init(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }
          static PyObject *t_AbstractMeasurementBuilder_get__parameters_(t_AbstractMeasurementBuilder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_AbstractMeasurementBuilder_get__modifiers(t_AbstractMeasurementBuilder *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getModifiers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_AbstractMeasurementBuilder_get__satellites(t_AbstractMeasurementBuilder *self, void *data)
          {
            JArray< ::org::orekit::estimation::measurements::ObservableSatellite > value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatellites());
            return JArray<jobject>(value.this$).wrap(::org::orekit::estimation::measurements::t_ObservableSatellite::wrap_jobject);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Max.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Max::class$ = NULL;
        jmethodID *Max::mids$ = NULL;
        bool Max::live$ = false;

        jclass Max::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Max");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_99e3200dafc19573] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Max::Max() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jdouble Max::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_99e3200dafc19573], a0, a1);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Max_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Max_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Max_init_(t_Max *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Max_value(t_Max *self, PyObject *args);

        static PyMethodDef t_Max__methods_[] = {
          DECLARE_METHOD(t_Max, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Max, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Max, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Max)[] = {
          { Py_tp_methods, t_Max__methods_ },
          { Py_tp_init, (void *) t_Max_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Max)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Max, t_Max, Max);

        void t_Max::install(PyObject *module)
        {
          installType(&PY_TYPE(Max), &PY_TYPE_DEF(Max), module, "Max", 0);
        }

        void t_Max::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Max), "class_", make_descriptor(Max::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Max), "wrapfn_", make_descriptor(t_Max::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Max), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Max_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Max::initializeClass, 1)))
            return NULL;
          return t_Max::wrap_Object(Max(((t_Max *) arg)->object.this$));
        }
        static PyObject *t_Max_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Max::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Max_init_(t_Max *self, PyObject *args, PyObject *kwds)
        {
          Max object((jobject) NULL);

          INT_CALL(object = Max());
          self->object = object;

          return 0;
        }

        static PyObject *t_Max_value(t_Max *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.value(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/GPSCivilianNavigationMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GPSCivilianNavigationMessage::class$ = NULL;
            jmethodID *GPSCivilianNavigationMessage::mids$ = NULL;
            bool GPSCivilianNavigationMessage::live$ = false;

            jclass GPSCivilianNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GPSCivilianNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_fcb96c98de6fad04] = env->getMethodID(cls, "<init>", "(Z)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GPSCivilianNavigationMessage::GPSCivilianNavigationMessage(jboolean a0) : ::org::orekit::propagation::analytical::gnss::data::CivilianNavigationMessage(env->newObject(initializeClass, &mids$, mid_init$_fcb96c98de6fad04, a0)) {}
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            static PyObject *t_GPSCivilianNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GPSCivilianNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GPSCivilianNavigationMessage_init_(t_GPSCivilianNavigationMessage *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_GPSCivilianNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_GPSCivilianNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GPSCivilianNavigationMessage, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GPSCivilianNavigationMessage)[] = {
              { Py_tp_methods, t_GPSCivilianNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_GPSCivilianNavigationMessage_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GPSCivilianNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::CivilianNavigationMessage),
              NULL
            };

            DEFINE_TYPE(GPSCivilianNavigationMessage, t_GPSCivilianNavigationMessage, GPSCivilianNavigationMessage);

            void t_GPSCivilianNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(GPSCivilianNavigationMessage), &PY_TYPE_DEF(GPSCivilianNavigationMessage), module, "GPSCivilianNavigationMessage", 0);
            }

            void t_GPSCivilianNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GPSCivilianNavigationMessage), "class_", make_descriptor(GPSCivilianNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GPSCivilianNavigationMessage), "wrapfn_", make_descriptor(t_GPSCivilianNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GPSCivilianNavigationMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GPSCivilianNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GPSCivilianNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_GPSCivilianNavigationMessage::wrap_Object(GPSCivilianNavigationMessage(((t_GPSCivilianNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_GPSCivilianNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GPSCivilianNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GPSCivilianNavigationMessage_init_(t_GPSCivilianNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              jboolean a0;
              GPSCivilianNavigationMessage object((jobject) NULL);

              if (!parseArgs(args, "Z", &a0))
              {
                INT_CALL(object = GPSCivilianNavigationMessage(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {

          ::java::lang::Class *FileFormat::class$ = NULL;
          jmethodID *FileFormat::mids$ = NULL;
          bool FileFormat::live$ = false;
          FileFormat *FileFormat::KVN = NULL;
          FileFormat *FileFormat::XML = NULL;

          jclass FileFormat::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/FileFormat");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_947af617501dda22] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/utils/FileFormat;");
              mids$[mid_values_7ce347067462f023] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/utils/FileFormat;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              KVN = new FileFormat(env->getStaticObjectField(cls, "KVN", "Lorg/orekit/files/ccsds/utils/FileFormat;"));
              XML = new FileFormat(env->getStaticObjectField(cls, "XML", "Lorg/orekit/files/ccsds/utils/FileFormat;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FileFormat FileFormat::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FileFormat(env->callStaticObjectMethod(cls, mids$[mid_valueOf_947af617501dda22], a0.this$));
          }

          JArray< FileFormat > FileFormat::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< FileFormat >(env->callStaticObjectMethod(cls, mids$[mid_values_7ce347067462f023]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          static PyObject *t_FileFormat_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FileFormat_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FileFormat_of_(t_FileFormat *self, PyObject *args);
          static PyObject *t_FileFormat_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_FileFormat_values(PyTypeObject *type);
          static PyObject *t_FileFormat_get__parameters_(t_FileFormat *self, void *data);
          static PyGetSetDef t_FileFormat__fields_[] = {
            DECLARE_GET_FIELD(t_FileFormat, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FileFormat__methods_[] = {
            DECLARE_METHOD(t_FileFormat, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FileFormat, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FileFormat, of_, METH_VARARGS),
            DECLARE_METHOD(t_FileFormat, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FileFormat, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FileFormat)[] = {
            { Py_tp_methods, t_FileFormat__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FileFormat__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FileFormat)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(FileFormat, t_FileFormat, FileFormat);
          PyObject *t_FileFormat::wrap_Object(const FileFormat& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FileFormat::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FileFormat *self = (t_FileFormat *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FileFormat::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FileFormat::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FileFormat *self = (t_FileFormat *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FileFormat::install(PyObject *module)
          {
            installType(&PY_TYPE(FileFormat), &PY_TYPE_DEF(FileFormat), module, "FileFormat", 0);
          }

          void t_FileFormat::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FileFormat), "class_", make_descriptor(FileFormat::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FileFormat), "wrapfn_", make_descriptor(t_FileFormat::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FileFormat), "boxfn_", make_descriptor(boxObject));
            env->getClass(FileFormat::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(FileFormat), "KVN", make_descriptor(t_FileFormat::wrap_Object(*FileFormat::KVN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FileFormat), "XML", make_descriptor(t_FileFormat::wrap_Object(*FileFormat::XML)));
          }

          static PyObject *t_FileFormat_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FileFormat::initializeClass, 1)))
              return NULL;
            return t_FileFormat::wrap_Object(FileFormat(((t_FileFormat *) arg)->object.this$));
          }
          static PyObject *t_FileFormat_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FileFormat::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FileFormat_of_(t_FileFormat *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FileFormat_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            FileFormat result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::utils::FileFormat::valueOf(a0));
              return t_FileFormat::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_FileFormat_values(PyTypeObject *type)
          {
            JArray< FileFormat > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::utils::FileFormat::values());
            return JArray<jobject>(result.this$).wrap(t_FileFormat::wrap_jobject);
          }
          static PyObject *t_FileFormat_get__parameters_(t_FileFormat *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemSatelliteEphemeris.h"
#include "java/util/List.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemSegment.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$SatelliteAttitudeEphemeris.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *AemSatelliteEphemeris::class$ = NULL;
              jmethodID *AemSatelliteEphemeris::mids$ = NULL;
              bool AemSatelliteEphemeris::live$ = false;

              jclass AemSatelliteEphemeris::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/AemSatelliteEphemeris");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_9c78226ca1e428f3] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/util/List;)V");
                  mids$[mid_getId_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
                  mids$[mid_getSegments_e62d3bb06d56d7e3] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
                  mids$[mid_getStart_c325492395d89b24] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStop_c325492395d89b24] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AemSatelliteEphemeris::AemSatelliteEphemeris(const ::java::lang::String & a0, const ::java::util::List & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9c78226ca1e428f3, a0.this$, a1.this$)) {}

              ::java::lang::String AemSatelliteEphemeris::getId() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_1c1fa1e935d6cdcf]));
              }

              ::java::util::List AemSatelliteEphemeris::getSegments() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_e62d3bb06d56d7e3]));
              }

              ::org::orekit::time::AbsoluteDate AemSatelliteEphemeris::getStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_c325492395d89b24]));
              }

              ::org::orekit::time::AbsoluteDate AemSatelliteEphemeris::getStop() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_c325492395d89b24]));
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {
              static PyObject *t_AemSatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemSatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AemSatelliteEphemeris_init_(t_AemSatelliteEphemeris *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AemSatelliteEphemeris_getId(t_AemSatelliteEphemeris *self);
              static PyObject *t_AemSatelliteEphemeris_getSegments(t_AemSatelliteEphemeris *self);
              static PyObject *t_AemSatelliteEphemeris_getStart(t_AemSatelliteEphemeris *self);
              static PyObject *t_AemSatelliteEphemeris_getStop(t_AemSatelliteEphemeris *self);
              static PyObject *t_AemSatelliteEphemeris_get__id(t_AemSatelliteEphemeris *self, void *data);
              static PyObject *t_AemSatelliteEphemeris_get__segments(t_AemSatelliteEphemeris *self, void *data);
              static PyObject *t_AemSatelliteEphemeris_get__start(t_AemSatelliteEphemeris *self, void *data);
              static PyObject *t_AemSatelliteEphemeris_get__stop(t_AemSatelliteEphemeris *self, void *data);
              static PyGetSetDef t_AemSatelliteEphemeris__fields_[] = {
                DECLARE_GET_FIELD(t_AemSatelliteEphemeris, id),
                DECLARE_GET_FIELD(t_AemSatelliteEphemeris, segments),
                DECLARE_GET_FIELD(t_AemSatelliteEphemeris, start),
                DECLARE_GET_FIELD(t_AemSatelliteEphemeris, stop),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AemSatelliteEphemeris__methods_[] = {
                DECLARE_METHOD(t_AemSatelliteEphemeris, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemSatelliteEphemeris, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemSatelliteEphemeris, getId, METH_NOARGS),
                DECLARE_METHOD(t_AemSatelliteEphemeris, getSegments, METH_NOARGS),
                DECLARE_METHOD(t_AemSatelliteEphemeris, getStart, METH_NOARGS),
                DECLARE_METHOD(t_AemSatelliteEphemeris, getStop, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AemSatelliteEphemeris)[] = {
                { Py_tp_methods, t_AemSatelliteEphemeris__methods_ },
                { Py_tp_init, (void *) t_AemSatelliteEphemeris_init_ },
                { Py_tp_getset, t_AemSatelliteEphemeris__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AemSatelliteEphemeris)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(AemSatelliteEphemeris, t_AemSatelliteEphemeris, AemSatelliteEphemeris);

              void t_AemSatelliteEphemeris::install(PyObject *module)
              {
                installType(&PY_TYPE(AemSatelliteEphemeris), &PY_TYPE_DEF(AemSatelliteEphemeris), module, "AemSatelliteEphemeris", 0);
              }

              void t_AemSatelliteEphemeris::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemSatelliteEphemeris), "class_", make_descriptor(AemSatelliteEphemeris::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemSatelliteEphemeris), "wrapfn_", make_descriptor(t_AemSatelliteEphemeris::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemSatelliteEphemeris), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AemSatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AemSatelliteEphemeris::initializeClass, 1)))
                  return NULL;
                return t_AemSatelliteEphemeris::wrap_Object(AemSatelliteEphemeris(((t_AemSatelliteEphemeris *) arg)->object.this$));
              }
              static PyObject *t_AemSatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AemSatelliteEphemeris::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AemSatelliteEphemeris_init_(t_AemSatelliteEphemeris *self, PyObject *args, PyObject *kwds)
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                AemSatelliteEphemeris object((jobject) NULL);

                if (!parseArgs(args, "sK", ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = AemSatelliteEphemeris(a0, a1));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AemSatelliteEphemeris_getId(t_AemSatelliteEphemeris *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getId());
                return j2p(result);
              }

              static PyObject *t_AemSatelliteEphemeris_getSegments(t_AemSatelliteEphemeris *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getSegments());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::adm::aem::PY_TYPE(AemSegment));
              }

              static PyObject *t_AemSatelliteEphemeris_getStart(t_AemSatelliteEphemeris *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AemSatelliteEphemeris_getStop(t_AemSatelliteEphemeris *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AemSatelliteEphemeris_get__id(t_AemSatelliteEphemeris *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getId());
                return j2p(value);
              }

              static PyObject *t_AemSatelliteEphemeris_get__segments(t_AemSatelliteEphemeris *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getSegments());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_AemSatelliteEphemeris_get__start(t_AemSatelliteEphemeris *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_AemSatelliteEphemeris_get__stop(t_AemSatelliteEphemeris *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/UnivariateVectorFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *UnivariateVectorFunction::class$ = NULL;
      jmethodID *UnivariateVectorFunction::mids$ = NULL;
      bool UnivariateVectorFunction::live$ = false;

      jclass UnivariateVectorFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/UnivariateVectorFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_e3ef0e966b8bf11e] = env->getMethodID(cls, "value", "(D)[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > UnivariateVectorFunction::value(jdouble a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_e3ef0e966b8bf11e], a0));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      static PyObject *t_UnivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnivariateVectorFunction_value(t_UnivariateVectorFunction *self, PyObject *arg);

      static PyMethodDef t_UnivariateVectorFunction__methods_[] = {
        DECLARE_METHOD(t_UnivariateVectorFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnivariateVectorFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnivariateVectorFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UnivariateVectorFunction)[] = {
        { Py_tp_methods, t_UnivariateVectorFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UnivariateVectorFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UnivariateVectorFunction, t_UnivariateVectorFunction, UnivariateVectorFunction);

      void t_UnivariateVectorFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(UnivariateVectorFunction), &PY_TYPE_DEF(UnivariateVectorFunction), module, "UnivariateVectorFunction", 0);
      }

      void t_UnivariateVectorFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateVectorFunction), "class_", make_descriptor(UnivariateVectorFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateVectorFunction), "wrapfn_", make_descriptor(t_UnivariateVectorFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateVectorFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UnivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UnivariateVectorFunction::initializeClass, 1)))
          return NULL;
        return t_UnivariateVectorFunction::wrap_Object(UnivariateVectorFunction(((t_UnivariateVectorFunction *) arg)->object.this$));
      }
      static PyObject *t_UnivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UnivariateVectorFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_UnivariateVectorFunction_value(t_UnivariateVectorFunction *self, PyObject *arg)
      {
        jdouble a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.value(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/PythonAbstractBuilder.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/data/DataContext.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *PythonAbstractBuilder::class$ = NULL;
          jmethodID *PythonAbstractBuilder::mids$ = NULL;
          bool PythonAbstractBuilder::live$ = false;

          jclass PythonAbstractBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/PythonAbstractBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d9f8a46c51e6c39c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;DDLorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)V");
              mids$[mid_create_c9fe7425468bb64c] = env->getMethodID(cls, "create", "(Lorg/orekit/utils/IERSConventions;DDLorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)Lorg/orekit/files/ccsds/ndm/AbstractBuilder;");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractBuilder::PythonAbstractBuilder(const ::org::orekit::utils::IERSConventions & a0, jdouble a1, jdouble a2, const ::org::orekit::data::DataContext & a3, const ::org::orekit::time::AbsoluteDate & a4, const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter & a5) : ::org::orekit::files::ccsds::ndm::AbstractBuilder(env->newObject(initializeClass, &mids$, mid_init$_d9f8a46c51e6c39c, a0.this$, a1, a2, a3.this$, a4.this$, a5.this$)) {}

          void PythonAbstractBuilder::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonAbstractBuilder::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonAbstractBuilder::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          static PyObject *t_PythonAbstractBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractBuilder_of_(t_PythonAbstractBuilder *self, PyObject *args);
          static int t_PythonAbstractBuilder_init_(t_PythonAbstractBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractBuilder_finalize(t_PythonAbstractBuilder *self);
          static PyObject *t_PythonAbstractBuilder_pythonExtension(t_PythonAbstractBuilder *self, PyObject *args);
          static jobject JNICALL t_PythonAbstractBuilder_create0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jdouble a2, jobject a3, jobject a4, jobject a5);
          static void JNICALL t_PythonAbstractBuilder_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractBuilder_get__self(t_PythonAbstractBuilder *self, void *data);
          static PyObject *t_PythonAbstractBuilder_get__parameters_(t_PythonAbstractBuilder *self, void *data);
          static PyGetSetDef t_PythonAbstractBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractBuilder, self),
            DECLARE_GET_FIELD(t_PythonAbstractBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractBuilder__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonAbstractBuilder, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractBuilder, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractBuilder)[] = {
            { Py_tp_methods, t_PythonAbstractBuilder__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractBuilder_init_ },
            { Py_tp_getset, t_PythonAbstractBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::AbstractBuilder),
            NULL
          };

          DEFINE_TYPE(PythonAbstractBuilder, t_PythonAbstractBuilder, PythonAbstractBuilder);
          PyObject *t_PythonAbstractBuilder::wrap_Object(const PythonAbstractBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonAbstractBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonAbstractBuilder *self = (t_PythonAbstractBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonAbstractBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonAbstractBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonAbstractBuilder *self = (t_PythonAbstractBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonAbstractBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractBuilder), &PY_TYPE_DEF(PythonAbstractBuilder), module, "PythonAbstractBuilder", 1);
          }

          void t_PythonAbstractBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractBuilder), "class_", make_descriptor(PythonAbstractBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractBuilder), "wrapfn_", make_descriptor(t_PythonAbstractBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractBuilder), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractBuilder::initializeClass);
            JNINativeMethod methods[] = {
              { "create", "(Lorg/orekit/utils/IERSConventions;DDLorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)Lorg/orekit/files/ccsds/ndm/AbstractBuilder;", (void *) t_PythonAbstractBuilder_create0 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractBuilder_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonAbstractBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractBuilder::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractBuilder::wrap_Object(PythonAbstractBuilder(((t_PythonAbstractBuilder *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonAbstractBuilder_of_(t_PythonAbstractBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonAbstractBuilder_init_(t_PythonAbstractBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            jdouble a2;
            ::org::orekit::data::DataContext a3((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a4((jobject) NULL);
            ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter a5((jobject) NULL);
            PythonAbstractBuilder object((jobject) NULL);

            if (!parseArgs(args, "KDDkkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = PythonAbstractBuilder(a0, a1, a2, a3, a4, a5));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonAbstractBuilder_finalize(t_PythonAbstractBuilder *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractBuilder_pythonExtension(t_PythonAbstractBuilder *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jlong result;
                OBJ_CALL(result = self->object.pythonExtension());
                return PyLong_FromLongLong((PY_LONG_LONG) result);
              }
              break;
             case 1:
              {
                jlong a0;

                if (!parseArgs(args, "J", &a0))
                {
                  OBJ_CALL(self->object.pythonExtension(a0));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
            return NULL;
          }

          static jobject JNICALL t_PythonAbstractBuilder_create0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jdouble a2, jobject a3, jobject a4, jobject a5)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBuilder::mids$[PythonAbstractBuilder::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::files::ccsds::ndm::AbstractBuilder value((jobject) NULL);
            PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
            PyObject *o3 = ::org::orekit::data::t_DataContext::wrap_Object(::org::orekit::data::DataContext(a3));
            PyObject *o4 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a4));
            PyObject *o5 = ::org::orekit::files::ccsds::ndm::tdm::t_RangeUnitsConverter::wrap_Object(::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter(a5));
            PyObject *result = PyObject_CallMethod(obj, "create", "OddOOO", o0, (double) a1, (double) a2, o3, o4, o5);
            Py_DECREF(o0);
            Py_DECREF(o3);
            Py_DECREF(o4);
            Py_DECREF(o5);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::files::ccsds::ndm::AbstractBuilder::initializeClass, &value))
            {
              throwTypeError("create", result);
              Py_DECREF(result);
            }
            else
            {
              jobj = jenv->NewLocalRef(value.this$);
              Py_DECREF(result);
              return jobj;
            }

            return (jobject) NULL;
          }

          static void JNICALL t_PythonAbstractBuilder_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBuilder::mids$[PythonAbstractBuilder::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractBuilder::mids$[PythonAbstractBuilder::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAbstractBuilder_get__self(t_PythonAbstractBuilder *self, void *data)
          {
            jlong ptr;
            OBJ_CALL(ptr = self->object.pythonExtension());
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              Py_INCREF(obj);
              return obj;
            }
            else
              Py_RETURN_NONE;
          }
          static PyObject *t_PythonAbstractBuilder_get__parameters_(t_PythonAbstractBuilder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/ODEEventDetector.h"
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver.h"
#include "org/hipparchus/ode/events/ODEEventHandler.h"
#include "org/hipparchus/ode/events/AdaptableInterval.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *ODEEventDetector::class$ = NULL;
        jmethodID *ODEEventDetector::mids$ = NULL;
        bool ODEEventDetector::live$ = false;

        jclass ODEEventDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/ODEEventDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_g_038ef328b98483a2] = env->getMethodID(cls, "g", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)D");
            mids$[mid_getHandler_7cbaa83091baafae] = env->getMethodID(cls, "getHandler", "()Lorg/hipparchus/ode/events/ODEEventHandler;");
            mids$[mid_getMaxCheckInterval_ba458ca302d83bff] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/hipparchus/ode/events/AdaptableInterval;");
            mids$[mid_getMaxIterationCount_55546ef6a647f39b] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getSolver_18aebf44ec9df73a] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver;");
            mids$[mid_init_a7556bd72cab73f1] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble ODEEventDetector::g(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_038ef328b98483a2], a0.this$);
        }

        ::org::hipparchus::ode::events::ODEEventHandler ODEEventDetector::getHandler() const
        {
          return ::org::hipparchus::ode::events::ODEEventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_7cbaa83091baafae]));
        }

        ::org::hipparchus::ode::events::AdaptableInterval ODEEventDetector::getMaxCheckInterval() const
        {
          return ::org::hipparchus::ode::events::AdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_ba458ca302d83bff]));
        }

        jint ODEEventDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_55546ef6a647f39b]);
        }

        ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver ODEEventDetector::getSolver() const
        {
          return ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver(env->callObjectMethod(this$, mids$[mid_getSolver_18aebf44ec9df73a]));
        }

        void ODEEventDetector::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_a7556bd72cab73f1], a0.this$, a1);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {
        static PyObject *t_ODEEventDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEEventDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEEventDetector_g(t_ODEEventDetector *self, PyObject *arg);
        static PyObject *t_ODEEventDetector_getHandler(t_ODEEventDetector *self);
        static PyObject *t_ODEEventDetector_getMaxCheckInterval(t_ODEEventDetector *self);
        static PyObject *t_ODEEventDetector_getMaxIterationCount(t_ODEEventDetector *self);
        static PyObject *t_ODEEventDetector_getSolver(t_ODEEventDetector *self);
        static PyObject *t_ODEEventDetector_init(t_ODEEventDetector *self, PyObject *args);
        static PyObject *t_ODEEventDetector_get__handler(t_ODEEventDetector *self, void *data);
        static PyObject *t_ODEEventDetector_get__maxCheckInterval(t_ODEEventDetector *self, void *data);
        static PyObject *t_ODEEventDetector_get__maxIterationCount(t_ODEEventDetector *self, void *data);
        static PyObject *t_ODEEventDetector_get__solver(t_ODEEventDetector *self, void *data);
        static PyGetSetDef t_ODEEventDetector__fields_[] = {
          DECLARE_GET_FIELD(t_ODEEventDetector, handler),
          DECLARE_GET_FIELD(t_ODEEventDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_ODEEventDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_ODEEventDetector, solver),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ODEEventDetector__methods_[] = {
          DECLARE_METHOD(t_ODEEventDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEEventDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEEventDetector, g, METH_O),
          DECLARE_METHOD(t_ODEEventDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_ODEEventDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_ODEEventDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_ODEEventDetector, getSolver, METH_NOARGS),
          DECLARE_METHOD(t_ODEEventDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ODEEventDetector)[] = {
          { Py_tp_methods, t_ODEEventDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_ODEEventDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ODEEventDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ODEEventDetector, t_ODEEventDetector, ODEEventDetector);

        void t_ODEEventDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(ODEEventDetector), &PY_TYPE_DEF(ODEEventDetector), module, "ODEEventDetector", 0);
        }

        void t_ODEEventDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEEventDetector), "class_", make_descriptor(ODEEventDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEEventDetector), "wrapfn_", make_descriptor(t_ODEEventDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEEventDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ODEEventDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ODEEventDetector::initializeClass, 1)))
            return NULL;
          return t_ODEEventDetector::wrap_Object(ODEEventDetector(((t_ODEEventDetector *) arg)->object.this$));
        }
        static PyObject *t_ODEEventDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ODEEventDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ODEEventDetector_g(t_ODEEventDetector *self, PyObject *arg)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", arg);
          return NULL;
        }

        static PyObject *t_ODEEventDetector_getHandler(t_ODEEventDetector *self)
        {
          ::org::hipparchus::ode::events::ODEEventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_ODEEventHandler::wrap_Object(result);
        }

        static PyObject *t_ODEEventDetector_getMaxCheckInterval(t_ODEEventDetector *self)
        {
          ::org::hipparchus::ode::events::AdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::hipparchus::ode::events::t_AdaptableInterval::wrap_Object(result);
        }

        static PyObject *t_ODEEventDetector_getMaxIterationCount(t_ODEEventDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_ODEEventDetector_getSolver(t_ODEEventDetector *self)
        {
          ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver result((jobject) NULL);
          OBJ_CALL(result = self->object.getSolver());
          return ::org::hipparchus::analysis::solvers::t_BracketedUnivariateSolver::wrap_Object(result, ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction));
        }

        static PyObject *t_ODEEventDetector_init(t_ODEEventDetector *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "kD", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_ODEEventDetector_get__handler(t_ODEEventDetector *self, void *data)
        {
          ::org::hipparchus::ode::events::ODEEventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_ODEEventHandler::wrap_Object(value);
        }

        static PyObject *t_ODEEventDetector_get__maxCheckInterval(t_ODEEventDetector *self, void *data)
        {
          ::org::hipparchus::ode::events::AdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::hipparchus::ode::events::t_AdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_ODEEventDetector_get__maxIterationCount(t_ODEEventDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_ODEEventDetector_get__solver(t_ODEEventDetector *self, void *data)
        {
          ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver value((jobject) NULL);
          OBJ_CALL(value = self->object.getSolver());
          return ::org::hipparchus::analysis::solvers::t_BracketedUnivariateSolver::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/PositionBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "java/util/Map.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/Position.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *PositionBuilder::class$ = NULL;
          jmethodID *PositionBuilder::mids$ = NULL;
          bool PositionBuilder::live$ = false;

          jclass PositionBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/PositionBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d09d78436196ce11] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_142e7d4ebe4773b3] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/Position;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PositionBuilder::PositionBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, jdouble a1, jdouble a2, const ::org::orekit::estimation::measurements::ObservableSatellite & a3) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_d09d78436196ce11, a0.this$, a1, a2, a3.this$)) {}

          ::org::orekit::estimation::measurements::Position PositionBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::Position(env->callObjectMethod(this$, mids$[mid_build_142e7d4ebe4773b3], a0.this$, a1.this$));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {
          static PyObject *t_PositionBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PositionBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PositionBuilder_of_(t_PositionBuilder *self, PyObject *args);
          static int t_PositionBuilder_init_(t_PositionBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PositionBuilder_build(t_PositionBuilder *self, PyObject *args);
          static PyObject *t_PositionBuilder_get__parameters_(t_PositionBuilder *self, void *data);
          static PyGetSetDef t_PositionBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_PositionBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PositionBuilder__methods_[] = {
            DECLARE_METHOD(t_PositionBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PositionBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PositionBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_PositionBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PositionBuilder)[] = {
            { Py_tp_methods, t_PositionBuilder__methods_ },
            { Py_tp_init, (void *) t_PositionBuilder_init_ },
            { Py_tp_getset, t_PositionBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PositionBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(PositionBuilder, t_PositionBuilder, PositionBuilder);
          PyObject *t_PositionBuilder::wrap_Object(const PositionBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PositionBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PositionBuilder *self = (t_PositionBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PositionBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PositionBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PositionBuilder *self = (t_PositionBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PositionBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(PositionBuilder), &PY_TYPE_DEF(PositionBuilder), module, "PositionBuilder", 0);
          }

          void t_PositionBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PositionBuilder), "class_", make_descriptor(PositionBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PositionBuilder), "wrapfn_", make_descriptor(t_PositionBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PositionBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PositionBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PositionBuilder::initializeClass, 1)))
              return NULL;
            return t_PositionBuilder::wrap_Object(PositionBuilder(((t_PositionBuilder *) arg)->object.this$));
          }
          static PyObject *t_PositionBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PositionBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PositionBuilder_of_(t_PositionBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PositionBuilder_init_(t_PositionBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            jdouble a1;
            jdouble a2;
            ::org::orekit::estimation::measurements::ObservableSatellite a3((jobject) NULL);
            PositionBuilder object((jobject) NULL);

            if (!parseArgs(args, "kDDk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = PositionBuilder(a0, a1, a2, a3));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(Position);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PositionBuilder_build(t_PositionBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::Position result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_Position::wrap_Object(result);
            }

            return callSuper(PY_TYPE(PositionBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_PositionBuilder_get__parameters_(t_PositionBuilder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/TreeSet.h"
#include "java/util/Iterator.h"
#include "java/util/Comparator.h"
#include "java/util/Spliterator.h"
#include "java/util/NavigableSet.h"
#include "java/io/Serializable.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/Cloneable.h"
#include "java/util/SortedSet.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *TreeSet::class$ = NULL;
    jmethodID *TreeSet::mids$ = NULL;
    bool TreeSet::live$ = false;

    jclass TreeSet::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/TreeSet");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_7d8f123763cd893c] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;)V");
        mids$[mid_init$_2c01874c65d2ef2f] = env->getMethodID(cls, "<init>", "(Ljava/util/Comparator;)V");
        mids$[mid_init$_fdbe1a9b1da328d7] = env->getMethodID(cls, "<init>", "(Ljava/util/SortedSet;)V");
        mids$[mid_add_460c5e2d9d51c6cc] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_addAll_801a92d34e44726e] = env->getMethodID(cls, "addAll", "(Ljava/util/Collection;)Z");
        mids$[mid_ceiling_5804c890f94a02b6] = env->getMethodID(cls, "ceiling", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_clone_541690f9ee81d3ad] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_comparator_127b1bec8b0c3ae1] = env->getMethodID(cls, "comparator", "()Ljava/util/Comparator;");
        mids$[mid_contains_460c5e2d9d51c6cc] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_descendingIterator_fc7780bc5d5b73b0] = env->getMethodID(cls, "descendingIterator", "()Ljava/util/Iterator;");
        mids$[mid_descendingSet_ea2f3a2f5483365c] = env->getMethodID(cls, "descendingSet", "()Ljava/util/NavigableSet;");
        mids$[mid_first_541690f9ee81d3ad] = env->getMethodID(cls, "first", "()Ljava/lang/Object;");
        mids$[mid_floor_5804c890f94a02b6] = env->getMethodID(cls, "floor", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_headSet_15bf8d17699caf41] = env->getMethodID(cls, "headSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;");
        mids$[mid_headSet_6fb332cca18e073d] = env->getMethodID(cls, "headSet", "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;");
        mids$[mid_higher_5804c890f94a02b6] = env->getMethodID(cls, "higher", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_isEmpty_9ab94ac1dc23b105] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_iterator_fc7780bc5d5b73b0] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_last_541690f9ee81d3ad] = env->getMethodID(cls, "last", "()Ljava/lang/Object;");
        mids$[mid_lower_5804c890f94a02b6] = env->getMethodID(cls, "lower", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_pollFirst_541690f9ee81d3ad] = env->getMethodID(cls, "pollFirst", "()Ljava/lang/Object;");
        mids$[mid_pollLast_541690f9ee81d3ad] = env->getMethodID(cls, "pollLast", "()Ljava/lang/Object;");
        mids$[mid_remove_460c5e2d9d51c6cc] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Z");
        mids$[mid_size_55546ef6a647f39b] = env->getMethodID(cls, "size", "()I");
        mids$[mid_spliterator_fe8f811ebd6e639a] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator;");
        mids$[mid_subSet_4e206fa37c57fda5] = env->getMethodID(cls, "subSet", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedSet;");
        mids$[mid_subSet_04d25a3c1eb67588] = env->getMethodID(cls, "subSet", "(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableSet;");
        mids$[mid_tailSet_15bf8d17699caf41] = env->getMethodID(cls, "tailSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;");
        mids$[mid_tailSet_6fb332cca18e073d] = env->getMethodID(cls, "tailSet", "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    TreeSet::TreeSet() : ::java::util::AbstractSet(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

    TreeSet::TreeSet(const ::java::util::Collection & a0) : ::java::util::AbstractSet(env->newObject(initializeClass, &mids$, mid_init$_7d8f123763cd893c, a0.this$)) {}

    TreeSet::TreeSet(const ::java::util::Comparator & a0) : ::java::util::AbstractSet(env->newObject(initializeClass, &mids$, mid_init$_2c01874c65d2ef2f, a0.this$)) {}

    TreeSet::TreeSet(const ::java::util::SortedSet & a0) : ::java::util::AbstractSet(env->newObject(initializeClass, &mids$, mid_init$_fdbe1a9b1da328d7, a0.this$)) {}

    jboolean TreeSet::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_460c5e2d9d51c6cc], a0.this$);
    }

    jboolean TreeSet::addAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_801a92d34e44726e], a0.this$);
    }

    ::java::lang::Object TreeSet::ceiling(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_ceiling_5804c890f94a02b6], a0.this$));
    }

    void TreeSet::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
    }

    ::java::lang::Object TreeSet::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_541690f9ee81d3ad]));
    }

    ::java::util::Comparator TreeSet::comparator() const
    {
      return ::java::util::Comparator(env->callObjectMethod(this$, mids$[mid_comparator_127b1bec8b0c3ae1]));
    }

    jboolean TreeSet::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_460c5e2d9d51c6cc], a0.this$);
    }

    ::java::util::Iterator TreeSet::descendingIterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_descendingIterator_fc7780bc5d5b73b0]));
    }

    ::java::util::NavigableSet TreeSet::descendingSet() const
    {
      return ::java::util::NavigableSet(env->callObjectMethod(this$, mids$[mid_descendingSet_ea2f3a2f5483365c]));
    }

    ::java::lang::Object TreeSet::first() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_first_541690f9ee81d3ad]));
    }

    ::java::lang::Object TreeSet::floor(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_floor_5804c890f94a02b6], a0.this$));
    }

    ::java::util::SortedSet TreeSet::headSet(const ::java::lang::Object & a0) const
    {
      return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_headSet_15bf8d17699caf41], a0.this$));
    }

    ::java::util::NavigableSet TreeSet::headSet(const ::java::lang::Object & a0, jboolean a1) const
    {
      return ::java::util::NavigableSet(env->callObjectMethod(this$, mids$[mid_headSet_6fb332cca18e073d], a0.this$, a1));
    }

    ::java::lang::Object TreeSet::higher(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_higher_5804c890f94a02b6], a0.this$));
    }

    jboolean TreeSet::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_9ab94ac1dc23b105]);
    }

    ::java::util::Iterator TreeSet::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_fc7780bc5d5b73b0]));
    }

    ::java::lang::Object TreeSet::last() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_last_541690f9ee81d3ad]));
    }

    ::java::lang::Object TreeSet::lower(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_lower_5804c890f94a02b6], a0.this$));
    }

    ::java::lang::Object TreeSet::pollFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pollFirst_541690f9ee81d3ad]));
    }

    ::java::lang::Object TreeSet::pollLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pollLast_541690f9ee81d3ad]));
    }

    jboolean TreeSet::remove(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_460c5e2d9d51c6cc], a0.this$);
    }

    jint TreeSet::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_55546ef6a647f39b]);
    }

    ::java::util::Spliterator TreeSet::spliterator() const
    {
      return ::java::util::Spliterator(env->callObjectMethod(this$, mids$[mid_spliterator_fe8f811ebd6e639a]));
    }

    ::java::util::SortedSet TreeSet::subSet(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_subSet_4e206fa37c57fda5], a0.this$, a1.this$));
    }

    ::java::util::NavigableSet TreeSet::subSet(const ::java::lang::Object & a0, jboolean a1, const ::java::lang::Object & a2, jboolean a3) const
    {
      return ::java::util::NavigableSet(env->callObjectMethod(this$, mids$[mid_subSet_04d25a3c1eb67588], a0.this$, a1, a2.this$, a3));
    }

    ::java::util::SortedSet TreeSet::tailSet(const ::java::lang::Object & a0) const
    {
      return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_tailSet_15bf8d17699caf41], a0.this$));
    }

    ::java::util::NavigableSet TreeSet::tailSet(const ::java::lang::Object & a0, jboolean a1) const
    {
      return ::java::util::NavigableSet(env->callObjectMethod(this$, mids$[mid_tailSet_6fb332cca18e073d], a0.this$, a1));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_TreeSet_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_TreeSet_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_TreeSet_of_(t_TreeSet *self, PyObject *args);
    static int t_TreeSet_init_(t_TreeSet *self, PyObject *args, PyObject *kwds);
    static PyObject *t_TreeSet_add(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_addAll(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_ceiling(t_TreeSet *self, PyObject *arg);
    static PyObject *t_TreeSet_clear(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_clone(t_TreeSet *self);
    static PyObject *t_TreeSet_comparator(t_TreeSet *self);
    static PyObject *t_TreeSet_contains(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_descendingIterator(t_TreeSet *self);
    static PyObject *t_TreeSet_descendingSet(t_TreeSet *self);
    static PyObject *t_TreeSet_first(t_TreeSet *self);
    static PyObject *t_TreeSet_floor(t_TreeSet *self, PyObject *arg);
    static PyObject *t_TreeSet_headSet(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_higher(t_TreeSet *self, PyObject *arg);
    static PyObject *t_TreeSet_isEmpty(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_iterator(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_last(t_TreeSet *self);
    static PyObject *t_TreeSet_lower(t_TreeSet *self, PyObject *arg);
    static PyObject *t_TreeSet_pollFirst(t_TreeSet *self);
    static PyObject *t_TreeSet_pollLast(t_TreeSet *self);
    static PyObject *t_TreeSet_remove(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_size(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_spliterator(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_subSet(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_tailSet(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_get__empty(t_TreeSet *self, void *data);
    static PyObject *t_TreeSet_get__parameters_(t_TreeSet *self, void *data);
    static PyGetSetDef t_TreeSet__fields_[] = {
      DECLARE_GET_FIELD(t_TreeSet, empty),
      DECLARE_GET_FIELD(t_TreeSet, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_TreeSet__methods_[] = {
      DECLARE_METHOD(t_TreeSet, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_TreeSet, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_TreeSet, of_, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, add, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, addAll, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, ceiling, METH_O),
      DECLARE_METHOD(t_TreeSet, clear, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, clone, METH_NOARGS),
      DECLARE_METHOD(t_TreeSet, comparator, METH_NOARGS),
      DECLARE_METHOD(t_TreeSet, contains, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, descendingIterator, METH_NOARGS),
      DECLARE_METHOD(t_TreeSet, descendingSet, METH_NOARGS),
      DECLARE_METHOD(t_TreeSet, first, METH_NOARGS),
      DECLARE_METHOD(t_TreeSet, floor, METH_O),
      DECLARE_METHOD(t_TreeSet, headSet, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, higher, METH_O),
      DECLARE_METHOD(t_TreeSet, isEmpty, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, iterator, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, last, METH_NOARGS),
      DECLARE_METHOD(t_TreeSet, lower, METH_O),
      DECLARE_METHOD(t_TreeSet, pollFirst, METH_NOARGS),
      DECLARE_METHOD(t_TreeSet, pollLast, METH_NOARGS),
      DECLARE_METHOD(t_TreeSet, remove, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, size, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, spliterator, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, subSet, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, tailSet, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(TreeSet)[] = {
      { Py_tp_methods, t_TreeSet__methods_ },
      { Py_tp_init, (void *) t_TreeSet_init_ },
      { Py_tp_getset, t_TreeSet__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_TreeSet *)) get_generic_iterator< t_TreeSet >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(TreeSet)[] = {
      &PY_TYPE_DEF(::java::util::AbstractSet),
      NULL
    };

    DEFINE_TYPE(TreeSet, t_TreeSet, TreeSet);
    PyObject *t_TreeSet::wrap_Object(const TreeSet& object, PyTypeObject *p0)
    {
      PyObject *obj = t_TreeSet::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_TreeSet *self = (t_TreeSet *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_TreeSet::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_TreeSet::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_TreeSet *self = (t_TreeSet *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_TreeSet::install(PyObject *module)
    {
      installType(&PY_TYPE(TreeSet), &PY_TYPE_DEF(TreeSet), module, "TreeSet", 0);
    }

    void t_TreeSet::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(TreeSet), "class_", make_descriptor(TreeSet::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(TreeSet), "wrapfn_", make_descriptor(t_TreeSet::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(TreeSet), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_TreeSet_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, TreeSet::initializeClass, 1)))
        return NULL;
      return t_TreeSet::wrap_Object(TreeSet(((t_TreeSet *) arg)->object.this$));
    }
    static PyObject *t_TreeSet_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, TreeSet::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_TreeSet_of_(t_TreeSet *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static int t_TreeSet_init_(t_TreeSet *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          TreeSet object((jobject) NULL);

          INT_CALL(object = TreeSet());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          TreeSet object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            INT_CALL(object = TreeSet(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::util::Comparator a0((jobject) NULL);
          PyTypeObject **p0;
          TreeSet object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
          {
            INT_CALL(object = TreeSet(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::util::SortedSet a0((jobject) NULL);
          PyTypeObject **p0;
          TreeSet object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::SortedSet::initializeClass, &a0, &p0, ::java::util::t_SortedSet::parameters_))
          {
            INT_CALL(object = TreeSet(a0));
            self->object = object;
            break;
          }
        }
       default:
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_TreeSet_add(t_TreeSet *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.add(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(TreeSet), (PyObject *) self, "add", args, 2);
    }

    static PyObject *t_TreeSet_addAll(t_TreeSet *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.addAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(TreeSet), (PyObject *) self, "addAll", args, 2);
    }

    static PyObject *t_TreeSet_ceiling(t_TreeSet *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.ceiling(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "ceiling", arg);
      return NULL;
    }

    static PyObject *t_TreeSet_clear(t_TreeSet *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(TreeSet), (PyObject *) self, "clear", args, 2);
    }

    static PyObject *t_TreeSet_clone(t_TreeSet *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_TreeSet_comparator(t_TreeSet *self)
    {
      ::java::util::Comparator result((jobject) NULL);
      OBJ_CALL(result = self->object.comparator());
      return ::java::util::t_Comparator::wrap_Object(result);
    }

    static PyObject *t_TreeSet_contains(t_TreeSet *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(TreeSet), (PyObject *) self, "contains", args, 2);
    }

    static PyObject *t_TreeSet_descendingIterator(t_TreeSet *self)
    {
      ::java::util::Iterator result((jobject) NULL);
      OBJ_CALL(result = self->object.descendingIterator());
      return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_TreeSet_descendingSet(t_TreeSet *self)
    {
      ::java::util::NavigableSet result((jobject) NULL);
      OBJ_CALL(result = self->object.descendingSet());
      return ::java::util::t_NavigableSet::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_TreeSet_first(t_TreeSet *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.first());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_TreeSet_floor(t_TreeSet *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.floor(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "floor", arg);
      return NULL;
    }

    static PyObject *t_TreeSet_headSet(t_TreeSet *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::util::SortedSet result((jobject) NULL);

          if (!parseArgs(args, "O", self->parameters[0], &a0))
          {
            OBJ_CALL(result = self->object.headSet(a0));
            return ::java::util::t_SortedSet::wrap_Object(result, self->parameters[0]);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean a1;
          ::java::util::NavigableSet result((jobject) NULL);

          if (!parseArgs(args, "OZ", self->parameters[0], &a0, &a1))
          {
            OBJ_CALL(result = self->object.headSet(a0, a1));
            return ::java::util::t_NavigableSet::wrap_Object(result, self->parameters[0]);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "headSet", args);
      return NULL;
    }

    static PyObject *t_TreeSet_higher(t_TreeSet *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.higher(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "higher", arg);
      return NULL;
    }

    static PyObject *t_TreeSet_isEmpty(t_TreeSet *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.isEmpty());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(TreeSet), (PyObject *) self, "isEmpty", args, 2);
    }

    static PyObject *t_TreeSet_iterator(t_TreeSet *self, PyObject *args)
    {
      ::java::util::Iterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(TreeSet), (PyObject *) self, "iterator", args, 2);
    }

    static PyObject *t_TreeSet_last(t_TreeSet *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.last());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_TreeSet_lower(t_TreeSet *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.lower(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "lower", arg);
      return NULL;
    }

    static PyObject *t_TreeSet_pollFirst(t_TreeSet *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.pollFirst());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_TreeSet_pollLast(t_TreeSet *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.pollLast());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_TreeSet_remove(t_TreeSet *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.remove(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(TreeSet), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_TreeSet_size(t_TreeSet *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(TreeSet), (PyObject *) self, "size", args, 2);
    }

    static PyObject *t_TreeSet_spliterator(t_TreeSet *self, PyObject *args)
    {
      ::java::util::Spliterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.spliterator());
        return ::java::util::t_Spliterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(TreeSet), (PyObject *) self, "spliterator", args, 2);
    }

    static PyObject *t_TreeSet_subSet(t_TreeSet *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::util::SortedSet result((jobject) NULL);

          if (!parseArgs(args, "OO", self->parameters[0], self->parameters[0], &a0, &a1))
          {
            OBJ_CALL(result = self->object.subSet(a0, a1));
            return ::java::util::t_SortedSet::wrap_Object(result, self->parameters[0]);
          }
        }
        break;
       case 4:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean a1;
          ::java::lang::Object a2((jobject) NULL);
          jboolean a3;
          ::java::util::NavigableSet result((jobject) NULL);

          if (!parseArgs(args, "OZOZ", self->parameters[0], self->parameters[0], &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.subSet(a0, a1, a2, a3));
            return ::java::util::t_NavigableSet::wrap_Object(result, self->parameters[0]);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "subSet", args);
      return NULL;
    }

    static PyObject *t_TreeSet_tailSet(t_TreeSet *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::util::SortedSet result((jobject) NULL);

          if (!parseArgs(args, "O", self->parameters[0], &a0))
          {
            OBJ_CALL(result = self->object.tailSet(a0));
            return ::java::util::t_SortedSet::wrap_Object(result, self->parameters[0]);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean a1;
          ::java::util::NavigableSet result((jobject) NULL);

          if (!parseArgs(args, "OZ", self->parameters[0], &a0, &a1))
          {
            OBJ_CALL(result = self->object.tailSet(a0, a1));
            return ::java::util::t_NavigableSet::wrap_Object(result, self->parameters[0]);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "tailSet", args);
      return NULL;
    }
    static PyObject *t_TreeSet_get__parameters_(t_TreeSet *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_TreeSet_get__empty(t_TreeSet *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/ArrayFieldVector.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/linear/ArrayFieldVector.h"
#include "org/hipparchus/linear/FieldVectorPreservingVisitor.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/linear/FieldVectorChangingVisitor.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/String.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *ArrayFieldVector::class$ = NULL;
      jmethodID *ArrayFieldVector::mids$ = NULL;
      bool ArrayFieldVector::live$ = false;

      jclass ArrayFieldVector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/ArrayFieldVector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_17c98b43bf9b6f78] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_02ab84aa7626616d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
          mids$[mid_init$_a8d98eabf09c8ea2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_init$_1486600bdee8133c] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/FieldElement;[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_481de9c265f62927] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/FieldVector;[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_9b3d853322fd9fe9] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/FieldElement;Z)V");
          mids$[mid_init$_725c6c034d3c6989] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/FieldElement;Lorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_init$_a1e449a87301face] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_3eaa072375f129cf] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/ArrayFieldVector;Z)V");
          mids$[mid_init$_3e5e9beae9eb3b27] = env->getMethodID(cls, "<init>", "(ILorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_9127f23cedcce237] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;I)V");
          mids$[mid_init$_60da158123e92bc0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/FieldVector;Lorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_init$_a09aa6877659ff5b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;[Lorg/hipparchus/FieldElement;[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_0076bcc9a075d436] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;[Lorg/hipparchus/FieldElement;Z)V");
          mids$[mid_init$_33f797f484c0333b] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/FieldElement;II)V");
          mids$[mid_init$_e9bbcf3500fc779d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;[Lorg/hipparchus/FieldElement;II)V");
          mids$[mid_add_0875bb37f8462e6f] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/ArrayFieldVector;)Lorg/hipparchus/linear/ArrayFieldVector;");
          mids$[mid_add_0c912ec1e9dd9ed7] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_append_0875bb37f8462e6f] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/ArrayFieldVector;)Lorg/hipparchus/linear/ArrayFieldVector;");
          mids$[mid_append_9105020ef45172b7] = env->getMethodID(cls, "append", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_append_0c912ec1e9dd9ed7] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_copy_b8b88195d3642875] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_dotProduct_ecb2c24e32602813] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/linear/ArrayFieldVector;)Lorg/hipparchus/FieldElement;");
          mids$[mid_dotProduct_8b189f525aa86de4] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/FieldElement;");
          mids$[mid_ebeDivide_0875bb37f8462e6f] = env->getMethodID(cls, "ebeDivide", "(Lorg/hipparchus/linear/ArrayFieldVector;)Lorg/hipparchus/linear/ArrayFieldVector;");
          mids$[mid_ebeDivide_0c912ec1e9dd9ed7] = env->getMethodID(cls, "ebeDivide", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_ebeMultiply_0875bb37f8462e6f] = env->getMethodID(cls, "ebeMultiply", "(Lorg/hipparchus/linear/ArrayFieldVector;)Lorg/hipparchus/linear/ArrayFieldVector;");
          mids$[mid_ebeMultiply_0c912ec1e9dd9ed7] = env->getMethodID(cls, "ebeMultiply", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getDataRef_ae860dc2d782e386] = env->getMethodID(cls, "getDataRef", "()[Lorg/hipparchus/FieldElement;");
          mids$[mid_getDimension_55546ef6a647f39b] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getEntry_6c5caf579ccf9ce5] = env->getMethodID(cls, "getEntry", "(I)Lorg/hipparchus/FieldElement;");
          mids$[mid_getField_04d1f63e17d5c5d4] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getSubVector_b42960a5471f10ed] = env->getMethodID(cls, "getSubVector", "(II)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_mapAdd_9105020ef45172b7] = env->getMethodID(cls, "mapAdd", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapAddToSelf_9105020ef45172b7] = env->getMethodID(cls, "mapAddToSelf", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapDivide_9105020ef45172b7] = env->getMethodID(cls, "mapDivide", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapDivideToSelf_9105020ef45172b7] = env->getMethodID(cls, "mapDivideToSelf", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapInv_b8b88195d3642875] = env->getMethodID(cls, "mapInv", "()Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapInvToSelf_b8b88195d3642875] = env->getMethodID(cls, "mapInvToSelf", "()Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapMultiply_9105020ef45172b7] = env->getMethodID(cls, "mapMultiply", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapMultiplyToSelf_9105020ef45172b7] = env->getMethodID(cls, "mapMultiplyToSelf", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapSubtract_9105020ef45172b7] = env->getMethodID(cls, "mapSubtract", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapSubtractToSelf_9105020ef45172b7] = env->getMethodID(cls, "mapSubtractToSelf", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_outerProduct_6b83ce54dd732da9] = env->getMethodID(cls, "outerProduct", "(Lorg/hipparchus/linear/ArrayFieldVector;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_outerProduct_8dfd3dc5a728ee60] = env->getMethodID(cls, "outerProduct", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_projection_0875bb37f8462e6f] = env->getMethodID(cls, "projection", "(Lorg/hipparchus/linear/ArrayFieldVector;)Lorg/hipparchus/linear/ArrayFieldVector;");
          mids$[mid_projection_0c912ec1e9dd9ed7] = env->getMethodID(cls, "projection", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_set_8d8d85cc6e14d2f7] = env->getMethodID(cls, "set", "(Lorg/hipparchus/FieldElement;)V");
          mids$[mid_set_5ca7010e88d42feb] = env->getMethodID(cls, "set", "(ILorg/hipparchus/linear/ArrayFieldVector;)V");
          mids$[mid_setEntry_3e5e9beae9eb3b27] = env->getMethodID(cls, "setEntry", "(ILorg/hipparchus/FieldElement;)V");
          mids$[mid_setSubVector_cd62bfbc5992c85f] = env->getMethodID(cls, "setSubVector", "(ILorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_subtract_0875bb37f8462e6f] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/ArrayFieldVector;)Lorg/hipparchus/linear/ArrayFieldVector;");
          mids$[mid_subtract_0c912ec1e9dd9ed7] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_toArray_ae860dc2d782e386] = env->getMethodID(cls, "toArray", "()[Lorg/hipparchus/FieldElement;");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_walkInDefaultOrder_902d02ebed1c011e] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/FieldVectorChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInDefaultOrder_7d08c02ef3ca9df3] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/FieldVectorPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInDefaultOrder_07dcd460c79c870d] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/FieldVectorChangingVisitor;II)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInDefaultOrder_5b32a72c59f76929] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/FieldVectorPreservingVisitor;II)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_902d02ebed1c011e] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldVectorChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_7d08c02ef3ca9df3] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldVectorPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_07dcd460c79c870d] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldVectorChangingVisitor;II)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_5b32a72c59f76929] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldVectorPreservingVisitor;II)Lorg/hipparchus/FieldElement;");
          mids$[mid_checkVectorDimensions_44ed599e93e8a30c] = env->getMethodID(cls, "checkVectorDimensions", "(I)V");
          mids$[mid_checkVectorDimensions_a8d98eabf09c8ea2] = env->getMethodID(cls, "checkVectorDimensions", "(Lorg/hipparchus/linear/FieldVector;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ArrayFieldVector::ArrayFieldVector(const JArray< ::org::hipparchus::FieldElement > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_17c98b43bf9b6f78, a0.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const ::org::hipparchus::Field & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_02ab84aa7626616d, a0.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const ::org::hipparchus::linear::FieldVector & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a8d98eabf09c8ea2, a0.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const JArray< ::org::hipparchus::FieldElement > & a0, const JArray< ::org::hipparchus::FieldElement > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1486600bdee8133c, a0.this$, a1.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const ::org::hipparchus::linear::FieldVector & a0, const JArray< ::org::hipparchus::FieldElement > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_481de9c265f62927, a0.this$, a1.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const JArray< ::org::hipparchus::FieldElement > & a0, jboolean a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9b3d853322fd9fe9, a0.this$, a1)) {}

      ArrayFieldVector::ArrayFieldVector(const JArray< ::org::hipparchus::FieldElement > & a0, const ::org::hipparchus::linear::FieldVector & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_725c6c034d3c6989, a0.this$, a1.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const ::org::hipparchus::Field & a0, const JArray< ::org::hipparchus::FieldElement > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1e449a87301face, a0.this$, a1.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const ArrayFieldVector & a0, jboolean a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3eaa072375f129cf, a0.this$, a1)) {}

      ArrayFieldVector::ArrayFieldVector(jint a0, const ::org::hipparchus::FieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3e5e9beae9eb3b27, a0, a1.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const ::org::hipparchus::Field & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9127f23cedcce237, a0.this$, a1)) {}

      ArrayFieldVector::ArrayFieldVector(const ::org::hipparchus::linear::FieldVector & a0, const ::org::hipparchus::linear::FieldVector & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_60da158123e92bc0, a0.this$, a1.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const ::org::hipparchus::Field & a0, const JArray< ::org::hipparchus::FieldElement > & a1, const JArray< ::org::hipparchus::FieldElement > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a09aa6877659ff5b, a0.this$, a1.this$, a2.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const ::org::hipparchus::Field & a0, const JArray< ::org::hipparchus::FieldElement > & a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0076bcc9a075d436, a0.this$, a1.this$, a2)) {}

      ArrayFieldVector::ArrayFieldVector(const JArray< ::org::hipparchus::FieldElement > & a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_33f797f484c0333b, a0.this$, a1, a2)) {}

      ArrayFieldVector::ArrayFieldVector(const ::org::hipparchus::Field & a0, const JArray< ::org::hipparchus::FieldElement > & a1, jint a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e9bbcf3500fc779d, a0.this$, a1.this$, a2, a3)) {}

      ArrayFieldVector ArrayFieldVector::add(const ArrayFieldVector & a0) const
      {
        return ArrayFieldVector(env->callObjectMethod(this$, mids$[mid_add_0875bb37f8462e6f], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::add(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_add_0c912ec1e9dd9ed7], a0.this$));
      }

      ArrayFieldVector ArrayFieldVector::append(const ArrayFieldVector & a0) const
      {
        return ArrayFieldVector(env->callObjectMethod(this$, mids$[mid_append_0875bb37f8462e6f], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::append(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_append_9105020ef45172b7], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::append(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_append_0c912ec1e9dd9ed7], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::copy() const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_copy_b8b88195d3642875]));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::dotProduct(const ArrayFieldVector & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_dotProduct_ecb2c24e32602813], a0.this$));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::dotProduct(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_dotProduct_8b189f525aa86de4], a0.this$));
      }

      ArrayFieldVector ArrayFieldVector::ebeDivide(const ArrayFieldVector & a0) const
      {
        return ArrayFieldVector(env->callObjectMethod(this$, mids$[mid_ebeDivide_0875bb37f8462e6f], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::ebeDivide(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_ebeDivide_0c912ec1e9dd9ed7], a0.this$));
      }

      ArrayFieldVector ArrayFieldVector::ebeMultiply(const ArrayFieldVector & a0) const
      {
        return ArrayFieldVector(env->callObjectMethod(this$, mids$[mid_ebeMultiply_0875bb37f8462e6f], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::ebeMultiply(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_ebeMultiply_0c912ec1e9dd9ed7], a0.this$));
      }

      jboolean ArrayFieldVector::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
      }

      JArray< ::org::hipparchus::FieldElement > ArrayFieldVector::getDataRef() const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_getDataRef_ae860dc2d782e386]));
      }

      jint ArrayFieldVector::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_55546ef6a647f39b]);
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::getEntry(jint a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getEntry_6c5caf579ccf9ce5], a0));
      }

      ::org::hipparchus::Field ArrayFieldVector::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_04d1f63e17d5c5d4]));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::getSubVector(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getSubVector_b42960a5471f10ed], a0, a1));
      }

      jint ArrayFieldVector::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapAdd(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapAdd_9105020ef45172b7], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapAddToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapAddToSelf_9105020ef45172b7], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapDivide(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapDivide_9105020ef45172b7], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapDivideToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapDivideToSelf_9105020ef45172b7], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapInv() const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapInv_b8b88195d3642875]));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapInvToSelf() const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapInvToSelf_b8b88195d3642875]));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapMultiply(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapMultiply_9105020ef45172b7], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapMultiplyToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapMultiplyToSelf_9105020ef45172b7], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapSubtract(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapSubtract_9105020ef45172b7], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapSubtractToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapSubtractToSelf_9105020ef45172b7], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix ArrayFieldVector::outerProduct(const ArrayFieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_outerProduct_6b83ce54dd732da9], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix ArrayFieldVector::outerProduct(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_outerProduct_8dfd3dc5a728ee60], a0.this$));
      }

      ArrayFieldVector ArrayFieldVector::projection(const ArrayFieldVector & a0) const
      {
        return ArrayFieldVector(env->callObjectMethod(this$, mids$[mid_projection_0875bb37f8462e6f], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::projection(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_projection_0c912ec1e9dd9ed7], a0.this$));
      }

      void ArrayFieldVector::set(const ::org::hipparchus::FieldElement & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_set_8d8d85cc6e14d2f7], a0.this$);
      }

      void ArrayFieldVector::set(jint a0, const ArrayFieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_set_5ca7010e88d42feb], a0, a1.this$);
      }

      void ArrayFieldVector::setEntry(jint a0, const ::org::hipparchus::FieldElement & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_3e5e9beae9eb3b27], a0, a1.this$);
      }

      void ArrayFieldVector::setSubVector(jint a0, const ::org::hipparchus::linear::FieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubVector_cd62bfbc5992c85f], a0, a1.this$);
      }

      ArrayFieldVector ArrayFieldVector::subtract(const ArrayFieldVector & a0) const
      {
        return ArrayFieldVector(env->callObjectMethod(this$, mids$[mid_subtract_0875bb37f8462e6f], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::subtract(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_subtract_0c912ec1e9dd9ed7], a0.this$));
      }

      JArray< ::org::hipparchus::FieldElement > ArrayFieldVector::toArray() const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_toArray_ae860dc2d782e386]));
      }

      ::java::lang::String ArrayFieldVector::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::walkInDefaultOrder(const ::org::hipparchus::linear::FieldVectorChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInDefaultOrder_902d02ebed1c011e], a0.this$));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::walkInDefaultOrder(const ::org::hipparchus::linear::FieldVectorPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInDefaultOrder_7d08c02ef3ca9df3], a0.this$));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::walkInDefaultOrder(const ::org::hipparchus::linear::FieldVectorChangingVisitor & a0, jint a1, jint a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInDefaultOrder_07dcd460c79c870d], a0.this$, a1, a2));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::walkInDefaultOrder(const ::org::hipparchus::linear::FieldVectorPreservingVisitor & a0, jint a1, jint a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInDefaultOrder_5b32a72c59f76929], a0.this$, a1, a2));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldVectorChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_902d02ebed1c011e], a0.this$));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldVectorPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_7d08c02ef3ca9df3], a0.this$));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldVectorChangingVisitor & a0, jint a1, jint a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_07dcd460c79c870d], a0.this$, a1, a2));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldVectorPreservingVisitor & a0, jint a1, jint a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_5b32a72c59f76929], a0.this$, a1, a2));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_ArrayFieldVector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ArrayFieldVector_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ArrayFieldVector_of_(t_ArrayFieldVector *self, PyObject *args);
      static int t_ArrayFieldVector_init_(t_ArrayFieldVector *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ArrayFieldVector_add(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_append(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_copy(t_ArrayFieldVector *self);
      static PyObject *t_ArrayFieldVector_dotProduct(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_ebeDivide(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_ebeMultiply(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_equals(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_getDataRef(t_ArrayFieldVector *self);
      static PyObject *t_ArrayFieldVector_getDimension(t_ArrayFieldVector *self);
      static PyObject *t_ArrayFieldVector_getEntry(t_ArrayFieldVector *self, PyObject *arg);
      static PyObject *t_ArrayFieldVector_getField(t_ArrayFieldVector *self);
      static PyObject *t_ArrayFieldVector_getSubVector(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_hashCode(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_mapAdd(t_ArrayFieldVector *self, PyObject *arg);
      static PyObject *t_ArrayFieldVector_mapAddToSelf(t_ArrayFieldVector *self, PyObject *arg);
      static PyObject *t_ArrayFieldVector_mapDivide(t_ArrayFieldVector *self, PyObject *arg);
      static PyObject *t_ArrayFieldVector_mapDivideToSelf(t_ArrayFieldVector *self, PyObject *arg);
      static PyObject *t_ArrayFieldVector_mapInv(t_ArrayFieldVector *self);
      static PyObject *t_ArrayFieldVector_mapInvToSelf(t_ArrayFieldVector *self);
      static PyObject *t_ArrayFieldVector_mapMultiply(t_ArrayFieldVector *self, PyObject *arg);
      static PyObject *t_ArrayFieldVector_mapMultiplyToSelf(t_ArrayFieldVector *self, PyObject *arg);
      static PyObject *t_ArrayFieldVector_mapSubtract(t_ArrayFieldVector *self, PyObject *arg);
      static PyObject *t_ArrayFieldVector_mapSubtractToSelf(t_ArrayFieldVector *self, PyObject *arg);
      static PyObject *t_ArrayFieldVector_outerProduct(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_projection(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_set(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_setEntry(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_setSubVector(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_subtract(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_toArray(t_ArrayFieldVector *self);
      static PyObject *t_ArrayFieldVector_toString(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_walkInDefaultOrder(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_walkInOptimizedOrder(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_get__dataRef(t_ArrayFieldVector *self, void *data);
      static PyObject *t_ArrayFieldVector_get__dimension(t_ArrayFieldVector *self, void *data);
      static PyObject *t_ArrayFieldVector_get__field(t_ArrayFieldVector *self, void *data);
      static PyObject *t_ArrayFieldVector_get__parameters_(t_ArrayFieldVector *self, void *data);
      static PyGetSetDef t_ArrayFieldVector__fields_[] = {
        DECLARE_GET_FIELD(t_ArrayFieldVector, dataRef),
        DECLARE_GET_FIELD(t_ArrayFieldVector, dimension),
        DECLARE_GET_FIELD(t_ArrayFieldVector, field),
        DECLARE_GET_FIELD(t_ArrayFieldVector, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ArrayFieldVector__methods_[] = {
        DECLARE_METHOD(t_ArrayFieldVector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ArrayFieldVector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ArrayFieldVector, of_, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, add, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, append, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, copy, METH_NOARGS),
        DECLARE_METHOD(t_ArrayFieldVector, dotProduct, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, ebeDivide, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, ebeMultiply, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, equals, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, getDataRef, METH_NOARGS),
        DECLARE_METHOD(t_ArrayFieldVector, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_ArrayFieldVector, getEntry, METH_O),
        DECLARE_METHOD(t_ArrayFieldVector, getField, METH_NOARGS),
        DECLARE_METHOD(t_ArrayFieldVector, getSubVector, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, mapAdd, METH_O),
        DECLARE_METHOD(t_ArrayFieldVector, mapAddToSelf, METH_O),
        DECLARE_METHOD(t_ArrayFieldVector, mapDivide, METH_O),
        DECLARE_METHOD(t_ArrayFieldVector, mapDivideToSelf, METH_O),
        DECLARE_METHOD(t_ArrayFieldVector, mapInv, METH_NOARGS),
        DECLARE_METHOD(t_ArrayFieldVector, mapInvToSelf, METH_NOARGS),
        DECLARE_METHOD(t_ArrayFieldVector, mapMultiply, METH_O),
        DECLARE_METHOD(t_ArrayFieldVector, mapMultiplyToSelf, METH_O),
        DECLARE_METHOD(t_ArrayFieldVector, mapSubtract, METH_O),
        DECLARE_METHOD(t_ArrayFieldVector, mapSubtractToSelf, METH_O),
        DECLARE_METHOD(t_ArrayFieldVector, outerProduct, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, projection, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, set, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, setSubVector, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, subtract, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, toArray, METH_NOARGS),
        DECLARE_METHOD(t_ArrayFieldVector, toString, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, walkInDefaultOrder, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, walkInOptimizedOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ArrayFieldVector)[] = {
        { Py_tp_methods, t_ArrayFieldVector__methods_ },
        { Py_tp_init, (void *) t_ArrayFieldVector_init_ },
        { Py_tp_getset, t_ArrayFieldVector__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ArrayFieldVector)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ArrayFieldVector, t_ArrayFieldVector, ArrayFieldVector);
      PyObject *t_ArrayFieldVector::wrap_Object(const ArrayFieldVector& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ArrayFieldVector::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ArrayFieldVector *self = (t_ArrayFieldVector *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_ArrayFieldVector::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ArrayFieldVector::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ArrayFieldVector *self = (t_ArrayFieldVector *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_ArrayFieldVector::install(PyObject *module)
      {
        installType(&PY_TYPE(ArrayFieldVector), &PY_TYPE_DEF(ArrayFieldVector), module, "ArrayFieldVector", 0);
      }

      void t_ArrayFieldVector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayFieldVector), "class_", make_descriptor(ArrayFieldVector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayFieldVector), "wrapfn_", make_descriptor(t_ArrayFieldVector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayFieldVector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ArrayFieldVector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ArrayFieldVector::initializeClass, 1)))
          return NULL;
        return t_ArrayFieldVector::wrap_Object(ArrayFieldVector(((t_ArrayFieldVector *) arg)->object.this$));
      }
      static PyObject *t_ArrayFieldVector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ArrayFieldVector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ArrayFieldVector_of_(t_ArrayFieldVector *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_ArrayFieldVector_init_(t_ArrayFieldVector *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "[K[K", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "K[K", ::org::hipparchus::linear::FieldVector::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "[KZ", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector a1((jobject) NULL);
            PyTypeObject **p1;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "[KK", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &p1, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "K[K", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ArrayFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "KZ", ArrayFieldVector::initializeClass, &a0, &p0, t_ArrayFieldVector::parameters_, &a1))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            ::org::hipparchus::FieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "IK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "KI", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector a1((jobject) NULL);
            PyTypeObject **p1;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::linear::FieldVector::initializeClass, ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_, &a1, &p1, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< ::org::hipparchus::FieldElement > a2((jobject) NULL);
            PyTypeObject **p2;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "K[K[K", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "K[KZ", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "[KII", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &a2))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            jint a3;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "K[KII", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2, &a3))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ArrayFieldVector_add(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ArrayFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ArrayFieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ArrayFieldVector::initializeClass, &a0, &p0, t_ArrayFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_ArrayFieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_append(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ArrayFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ArrayFieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ArrayFieldVector::initializeClass, &a0, &p0, t_ArrayFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.append(a0));
              return t_ArrayFieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::FieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.append(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.append(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "append", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_copy(t_ArrayFieldVector *self)
      {
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);
        OBJ_CALL(result = self->object.copy());
        return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_ArrayFieldVector_dotProduct(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ArrayFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ArrayFieldVector::initializeClass, &a0, &p0, t_ArrayFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.dotProduct(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.dotProduct(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "dotProduct", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_ebeDivide(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ArrayFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ArrayFieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ArrayFieldVector::initializeClass, &a0, &p0, t_ArrayFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.ebeDivide(a0));
              return t_ArrayFieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.ebeDivide(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "ebeDivide", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_ebeMultiply(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ArrayFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ArrayFieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ArrayFieldVector::initializeClass, &a0, &p0, t_ArrayFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.ebeMultiply(a0));
              return t_ArrayFieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.ebeMultiply(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "ebeMultiply", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_equals(t_ArrayFieldVector *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(ArrayFieldVector), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_ArrayFieldVector_getDataRef(t_ArrayFieldVector *self)
      {
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);
        OBJ_CALL(result = self->object.getDataRef());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
      }

      static PyObject *t_ArrayFieldVector_getDimension(t_ArrayFieldVector *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ArrayFieldVector_getEntry(t_ArrayFieldVector *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEntry(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEntry", arg);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_getField(t_ArrayFieldVector *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_ArrayFieldVector_getSubVector(t_ArrayFieldVector *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getSubVector(a0, a1));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getSubVector", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_hashCode(t_ArrayFieldVector *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(ArrayFieldVector), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_ArrayFieldVector_mapAdd(t_ArrayFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapAdd(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapAdd", arg);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_mapAddToSelf(t_ArrayFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapAddToSelf(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapAddToSelf", arg);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_mapDivide(t_ArrayFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapDivide(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapDivide", arg);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_mapDivideToSelf(t_ArrayFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapDivideToSelf(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapDivideToSelf", arg);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_mapInv(t_ArrayFieldVector *self)
      {
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);
        OBJ_CALL(result = self->object.mapInv());
        return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_ArrayFieldVector_mapInvToSelf(t_ArrayFieldVector *self)
      {
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);
        OBJ_CALL(result = self->object.mapInvToSelf());
        return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_ArrayFieldVector_mapMultiply(t_ArrayFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapMultiply(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapMultiply", arg);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_mapMultiplyToSelf(t_ArrayFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapMultiplyToSelf(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapMultiplyToSelf", arg);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_mapSubtract(t_ArrayFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapSubtract(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapSubtract", arg);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_mapSubtractToSelf(t_ArrayFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapSubtractToSelf(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapSubtractToSelf", arg);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_outerProduct(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ArrayFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ArrayFieldVector::initializeClass, &a0, &p0, t_ArrayFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.outerProduct(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.outerProduct(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "outerProduct", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_projection(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ArrayFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ArrayFieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ArrayFieldVector::initializeClass, &a0, &p0, t_ArrayFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.projection(a0));
              return t_ArrayFieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.projection(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "projection", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_set(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::FieldElement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(self->object.set(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 2:
          {
            jint a0;
            ArrayFieldVector a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "IK", ArrayFieldVector::initializeClass, &a0, &a1, &p1, t_ArrayFieldVector::parameters_))
            {
              OBJ_CALL(self->object.set(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "set", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_setEntry(t_ArrayFieldVector *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::FieldElement a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setEntry(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setEntry", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_setSubVector(t_ArrayFieldVector *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(self->object.setSubVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setSubVector", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_subtract(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ArrayFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ArrayFieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ArrayFieldVector::initializeClass, &a0, &p0, t_ArrayFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_ArrayFieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_toArray(t_ArrayFieldVector *self)
      {
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);
        OBJ_CALL(result = self->object.toArray());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
      }

      static PyObject *t_ArrayFieldVector_toString(t_ArrayFieldVector *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(ArrayFieldVector), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_ArrayFieldVector_walkInDefaultOrder(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldVectorChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVectorChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldVectorPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVectorPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::FieldVectorChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::linear::FieldVectorChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorChangingVisitor::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0, a1, a2));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldVectorPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::linear::FieldVectorPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorPreservingVisitor::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0, a1, a2));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInDefaultOrder", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_walkInOptimizedOrder(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldVectorChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVectorChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldVectorPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVectorPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::FieldVectorChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::linear::FieldVectorChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorChangingVisitor::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldVectorPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::linear::FieldVectorPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorPreservingVisitor::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInOptimizedOrder", args);
        return NULL;
      }
      static PyObject *t_ArrayFieldVector_get__parameters_(t_ArrayFieldVector *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_ArrayFieldVector_get__dataRef(t_ArrayFieldVector *self, void *data)
      {
        JArray< ::org::hipparchus::FieldElement > value((jobject) NULL);
        OBJ_CALL(value = self->object.getDataRef());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
      }

      static PyObject *t_ArrayFieldVector_get__dimension(t_ArrayFieldVector *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ArrayFieldVector_get__field(t_ArrayFieldVector *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TAIUTCDatFilesLoader.h"
#include "java/util/List.h"
#include "org/orekit/time/OffsetModel.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/time/UTCTAIOffsetsLoader.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TAIUTCDatFilesLoader::class$ = NULL;
      jmethodID *TAIUTCDatFilesLoader::mids$ = NULL;
      bool TAIUTCDatFilesLoader::live$ = false;
      ::java::lang::String *TAIUTCDatFilesLoader::DEFAULT_SUPPORTED_NAMES = NULL;

      jclass TAIUTCDatFilesLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TAIUTCDatFilesLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_0343d25c5af74eca] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");
          mids$[mid_loadOffsets_e62d3bb06d56d7e3] = env->getMethodID(cls, "loadOffsets", "()Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUPPORTED_NAMES", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TAIUTCDatFilesLoader::TAIUTCDatFilesLoader(const ::java::lang::String & a0) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

      TAIUTCDatFilesLoader::TAIUTCDatFilesLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_0343d25c5af74eca, a0.this$, a1.this$)) {}

      ::java::util::List TAIUTCDatFilesLoader::loadOffsets() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_loadOffsets_e62d3bb06d56d7e3]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/time/TAIUTCDatFilesLoader$Parser.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_TAIUTCDatFilesLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TAIUTCDatFilesLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TAIUTCDatFilesLoader_init_(t_TAIUTCDatFilesLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TAIUTCDatFilesLoader_loadOffsets(t_TAIUTCDatFilesLoader *self);

      static PyMethodDef t_TAIUTCDatFilesLoader__methods_[] = {
        DECLARE_METHOD(t_TAIUTCDatFilesLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TAIUTCDatFilesLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TAIUTCDatFilesLoader, loadOffsets, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TAIUTCDatFilesLoader)[] = {
        { Py_tp_methods, t_TAIUTCDatFilesLoader__methods_ },
        { Py_tp_init, (void *) t_TAIUTCDatFilesLoader_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TAIUTCDatFilesLoader)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
        NULL
      };

      DEFINE_TYPE(TAIUTCDatFilesLoader, t_TAIUTCDatFilesLoader, TAIUTCDatFilesLoader);

      void t_TAIUTCDatFilesLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(TAIUTCDatFilesLoader), &PY_TYPE_DEF(TAIUTCDatFilesLoader), module, "TAIUTCDatFilesLoader", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(TAIUTCDatFilesLoader), "Parser", make_descriptor(&PY_TYPE_DEF(TAIUTCDatFilesLoader$Parser)));
      }

      void t_TAIUTCDatFilesLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TAIUTCDatFilesLoader), "class_", make_descriptor(TAIUTCDatFilesLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TAIUTCDatFilesLoader), "wrapfn_", make_descriptor(t_TAIUTCDatFilesLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TAIUTCDatFilesLoader), "boxfn_", make_descriptor(boxObject));
        env->getClass(TAIUTCDatFilesLoader::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(TAIUTCDatFilesLoader), "DEFAULT_SUPPORTED_NAMES", make_descriptor(j2p(*TAIUTCDatFilesLoader::DEFAULT_SUPPORTED_NAMES)));
      }

      static PyObject *t_TAIUTCDatFilesLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TAIUTCDatFilesLoader::initializeClass, 1)))
          return NULL;
        return t_TAIUTCDatFilesLoader::wrap_Object(TAIUTCDatFilesLoader(((t_TAIUTCDatFilesLoader *) arg)->object.this$));
      }
      static PyObject *t_TAIUTCDatFilesLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TAIUTCDatFilesLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TAIUTCDatFilesLoader_init_(t_TAIUTCDatFilesLoader *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            TAIUTCDatFilesLoader object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = TAIUTCDatFilesLoader(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
            TAIUTCDatFilesLoader object((jobject) NULL);

            if (!parseArgs(args, "sk", ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1))
            {
              INT_CALL(object = TAIUTCDatFilesLoader(a0, a1));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_TAIUTCDatFilesLoader_loadOffsets(t_TAIUTCDatFilesLoader *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.loadOffsets());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(OffsetModel));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/EulerIntegratorBuilder.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *EulerIntegratorBuilder::class$ = NULL;
        jmethodID *EulerIntegratorBuilder::mids$ = NULL;
        bool EulerIntegratorBuilder::live$ = false;

        jclass EulerIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/EulerIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_buildIntegrator_916fa199ca08d656] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EulerIntegratorBuilder::EulerIntegratorBuilder(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        ::org::hipparchus::ode::AbstractIntegrator EulerIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_916fa199ca08d656], a0.this$, a1.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {
        static PyObject *t_EulerIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EulerIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EulerIntegratorBuilder_init_(t_EulerIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EulerIntegratorBuilder_buildIntegrator(t_EulerIntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_EulerIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_EulerIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EulerIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EulerIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EulerIntegratorBuilder)[] = {
          { Py_tp_methods, t_EulerIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_EulerIntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EulerIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EulerIntegratorBuilder, t_EulerIntegratorBuilder, EulerIntegratorBuilder);

        void t_EulerIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(EulerIntegratorBuilder), &PY_TYPE_DEF(EulerIntegratorBuilder), module, "EulerIntegratorBuilder", 0);
        }

        void t_EulerIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerIntegratorBuilder), "class_", make_descriptor(EulerIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerIntegratorBuilder), "wrapfn_", make_descriptor(t_EulerIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EulerIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EulerIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_EulerIntegratorBuilder::wrap_Object(EulerIntegratorBuilder(((t_EulerIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_EulerIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EulerIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EulerIntegratorBuilder_init_(t_EulerIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          EulerIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = EulerIntegratorBuilder(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EulerIntegratorBuilder_buildIntegrator(t_EulerIntegratorBuilder *self, PyObject *args)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);
          ::org::orekit::orbits::OrbitType a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::ode::AbstractIntegrator result((jobject) NULL);

          if (!parseArgs(args, "kK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1));
            return ::org::hipparchus::ode::t_AbstractIntegrator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "buildIntegrator", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/GNSSPropagatorBuilder.h"
#include "org/orekit/frames/Frames.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSOrbitalElements.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/analytical/gnss/GNSSPropagatorBuilder.h"
#include "org/orekit/propagation/analytical/gnss/GNSSPropagator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {

          ::java::lang::Class *GNSSPropagatorBuilder::class$ = NULL;
          jmethodID *GNSSPropagatorBuilder::mids$ = NULL;
          bool GNSSPropagatorBuilder::live$ = false;

          jclass GNSSPropagatorBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/GNSSPropagatorBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ceb2ea47ff26bdd1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/gnss/data/GNSSOrbitalElements;)V");
              mids$[mid_init$_859fd1cc240fae53] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/gnss/data/GNSSOrbitalElements;Lorg/orekit/frames/Frames;)V");
              mids$[mid_attitudeProvider_b7f49a5813c61806] = env->getMethodID(cls, "attitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)Lorg/orekit/propagation/analytical/gnss/GNSSPropagatorBuilder;");
              mids$[mid_build_8528f550d471e3fb] = env->getMethodID(cls, "build", "()Lorg/orekit/propagation/analytical/gnss/GNSSPropagator;");
              mids$[mid_ecef_4cd46368b47fb66d] = env->getMethodID(cls, "ecef", "(Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/analytical/gnss/GNSSPropagatorBuilder;");
              mids$[mid_eci_4cd46368b47fb66d] = env->getMethodID(cls, "eci", "(Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/analytical/gnss/GNSSPropagatorBuilder;");
              mids$[mid_mass_bbe098d1d86d30b6] = env->getMethodID(cls, "mass", "(D)Lorg/orekit/propagation/analytical/gnss/GNSSPropagatorBuilder;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GNSSPropagatorBuilder::GNSSPropagatorBuilder(const ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ceb2ea47ff26bdd1, a0.this$)) {}

          GNSSPropagatorBuilder::GNSSPropagatorBuilder(const ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements & a0, const ::org::orekit::frames::Frames & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_859fd1cc240fae53, a0.this$, a1.this$)) {}

          GNSSPropagatorBuilder GNSSPropagatorBuilder::attitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
          {
            return GNSSPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_attitudeProvider_b7f49a5813c61806], a0.this$));
          }

          ::org::orekit::propagation::analytical::gnss::GNSSPropagator GNSSPropagatorBuilder::build() const
          {
            return ::org::orekit::propagation::analytical::gnss::GNSSPropagator(env->callObjectMethod(this$, mids$[mid_build_8528f550d471e3fb]));
          }

          GNSSPropagatorBuilder GNSSPropagatorBuilder::ecef(const ::org::orekit::frames::Frame & a0) const
          {
            return GNSSPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_ecef_4cd46368b47fb66d], a0.this$));
          }

          GNSSPropagatorBuilder GNSSPropagatorBuilder::eci(const ::org::orekit::frames::Frame & a0) const
          {
            return GNSSPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_eci_4cd46368b47fb66d], a0.this$));
          }

          GNSSPropagatorBuilder GNSSPropagatorBuilder::mass(jdouble a0) const
          {
            return GNSSPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_mass_bbe098d1d86d30b6], a0));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          static PyObject *t_GNSSPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GNSSPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GNSSPropagatorBuilder_init_(t_GNSSPropagatorBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GNSSPropagatorBuilder_attitudeProvider(t_GNSSPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_GNSSPropagatorBuilder_build(t_GNSSPropagatorBuilder *self);
          static PyObject *t_GNSSPropagatorBuilder_ecef(t_GNSSPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_GNSSPropagatorBuilder_eci(t_GNSSPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_GNSSPropagatorBuilder_mass(t_GNSSPropagatorBuilder *self, PyObject *arg);

          static PyMethodDef t_GNSSPropagatorBuilder__methods_[] = {
            DECLARE_METHOD(t_GNSSPropagatorBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GNSSPropagatorBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GNSSPropagatorBuilder, attitudeProvider, METH_O),
            DECLARE_METHOD(t_GNSSPropagatorBuilder, build, METH_NOARGS),
            DECLARE_METHOD(t_GNSSPropagatorBuilder, ecef, METH_O),
            DECLARE_METHOD(t_GNSSPropagatorBuilder, eci, METH_O),
            DECLARE_METHOD(t_GNSSPropagatorBuilder, mass, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GNSSPropagatorBuilder)[] = {
            { Py_tp_methods, t_GNSSPropagatorBuilder__methods_ },
            { Py_tp_init, (void *) t_GNSSPropagatorBuilder_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GNSSPropagatorBuilder)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GNSSPropagatorBuilder, t_GNSSPropagatorBuilder, GNSSPropagatorBuilder);

          void t_GNSSPropagatorBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(GNSSPropagatorBuilder), &PY_TYPE_DEF(GNSSPropagatorBuilder), module, "GNSSPropagatorBuilder", 0);
          }

          void t_GNSSPropagatorBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSPropagatorBuilder), "class_", make_descriptor(GNSSPropagatorBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSPropagatorBuilder), "wrapfn_", make_descriptor(t_GNSSPropagatorBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GNSSPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GNSSPropagatorBuilder::initializeClass, 1)))
              return NULL;
            return t_GNSSPropagatorBuilder::wrap_Object(GNSSPropagatorBuilder(((t_GNSSPropagatorBuilder *) arg)->object.this$));
          }
          static PyObject *t_GNSSPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GNSSPropagatorBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GNSSPropagatorBuilder_init_(t_GNSSPropagatorBuilder *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements a0((jobject) NULL);
                GNSSPropagatorBuilder object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements::initializeClass, &a0))
                {
                  INT_CALL(object = GNSSPropagatorBuilder(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements a0((jobject) NULL);
                ::org::orekit::frames::Frames a1((jobject) NULL);
                GNSSPropagatorBuilder object((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements::initializeClass, ::org::orekit::frames::Frames::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = GNSSPropagatorBuilder(a0, a1));
                  self->object = object;
                  break;
                }
              }
             default:
             err:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_GNSSPropagatorBuilder_attitudeProvider(t_GNSSPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
            GNSSPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.attitudeProvider(a0));
              return t_GNSSPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "attitudeProvider", arg);
            return NULL;
          }

          static PyObject *t_GNSSPropagatorBuilder_build(t_GNSSPropagatorBuilder *self)
          {
            ::org::orekit::propagation::analytical::gnss::GNSSPropagator result((jobject) NULL);
            OBJ_CALL(result = self->object.build());
            return ::org::orekit::propagation::analytical::gnss::t_GNSSPropagator::wrap_Object(result);
          }

          static PyObject *t_GNSSPropagatorBuilder_ecef(t_GNSSPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            GNSSPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.ecef(a0));
              return t_GNSSPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "ecef", arg);
            return NULL;
          }

          static PyObject *t_GNSSPropagatorBuilder_eci(t_GNSSPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            GNSSPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.eci(a0));
              return t_GNSSPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eci", arg);
            return NULL;
          }

          static PyObject *t_GNSSPropagatorBuilder_mass(t_GNSSPropagatorBuilder *self, PyObject *arg)
          {
            jdouble a0;
            GNSSPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.mass(a0));
              return t_GNSSPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "mass", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *FieldDSSTJ2SquaredClosedFormContext::class$ = NULL;
            jmethodID *FieldDSSTJ2SquaredClosedFormContext::mids$ = NULL;
            bool FieldDSSTJ2SquaredClosedFormContext::live$ = false;

            jclass FieldDSSTJ2SquaredClosedFormContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_3951bdd3b9659811] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
                mids$[mid_getA4_81520b552cb3fa26] = env->getMethodID(cls, "getA4", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getAlpha4_b74f83833fdad017] = env->getMethodID(cls, "getAlpha4", "()D");
                mids$[mid_getC_81520b552cb3fa26] = env->getMethodID(cls, "getC", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getEta_81520b552cb3fa26] = env->getMethodID(cls, "getEta", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getS2_81520b552cb3fa26] = env->getMethodID(cls, "getS2", "()Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldDSSTJ2SquaredClosedFormContext::FieldDSSTJ2SquaredClosedFormContext(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1) : ::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext(env->newObject(initializeClass, &mids$, mid_init$_3951bdd3b9659811, a0.this$, a1.this$)) {}

            ::org::hipparchus::CalculusFieldElement FieldDSSTJ2SquaredClosedFormContext::getA4() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA4_81520b552cb3fa26]));
            }

            jdouble FieldDSSTJ2SquaredClosedFormContext::getAlpha4() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAlpha4_b74f83833fdad017]);
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTJ2SquaredClosedFormContext::getC() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getC_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTJ2SquaredClosedFormContext::getEta() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEta_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTJ2SquaredClosedFormContext::getS2() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getS2_81520b552cb3fa26]));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_of_(t_FieldDSSTJ2SquaredClosedFormContext *self, PyObject *args);
            static int t_FieldDSSTJ2SquaredClosedFormContext_init_(t_FieldDSSTJ2SquaredClosedFormContext *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getA4(t_FieldDSSTJ2SquaredClosedFormContext *self);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getAlpha4(t_FieldDSSTJ2SquaredClosedFormContext *self);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getC(t_FieldDSSTJ2SquaredClosedFormContext *self);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getEta(t_FieldDSSTJ2SquaredClosedFormContext *self);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getS2(t_FieldDSSTJ2SquaredClosedFormContext *self);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__a4(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__alpha4(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__c(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__eta(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__s2(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__parameters_(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data);
            static PyGetSetDef t_FieldDSSTJ2SquaredClosedFormContext__fields_[] = {
              DECLARE_GET_FIELD(t_FieldDSSTJ2SquaredClosedFormContext, a4),
              DECLARE_GET_FIELD(t_FieldDSSTJ2SquaredClosedFormContext, alpha4),
              DECLARE_GET_FIELD(t_FieldDSSTJ2SquaredClosedFormContext, c),
              DECLARE_GET_FIELD(t_FieldDSSTJ2SquaredClosedFormContext, eta),
              DECLARE_GET_FIELD(t_FieldDSSTJ2SquaredClosedFormContext, s2),
              DECLARE_GET_FIELD(t_FieldDSSTJ2SquaredClosedFormContext, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldDSSTJ2SquaredClosedFormContext__methods_[] = {
              DECLARE_METHOD(t_FieldDSSTJ2SquaredClosedFormContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldDSSTJ2SquaredClosedFormContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldDSSTJ2SquaredClosedFormContext, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldDSSTJ2SquaredClosedFormContext, getA4, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTJ2SquaredClosedFormContext, getAlpha4, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTJ2SquaredClosedFormContext, getC, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTJ2SquaredClosedFormContext, getEta, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTJ2SquaredClosedFormContext, getS2, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldDSSTJ2SquaredClosedFormContext)[] = {
              { Py_tp_methods, t_FieldDSSTJ2SquaredClosedFormContext__methods_ },
              { Py_tp_init, (void *) t_FieldDSSTJ2SquaredClosedFormContext_init_ },
              { Py_tp_getset, t_FieldDSSTJ2SquaredClosedFormContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldDSSTJ2SquaredClosedFormContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext),
              NULL
            };

            DEFINE_TYPE(FieldDSSTJ2SquaredClosedFormContext, t_FieldDSSTJ2SquaredClosedFormContext, FieldDSSTJ2SquaredClosedFormContext);
            PyObject *t_FieldDSSTJ2SquaredClosedFormContext::wrap_Object(const FieldDSSTJ2SquaredClosedFormContext& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldDSSTJ2SquaredClosedFormContext::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldDSSTJ2SquaredClosedFormContext *self = (t_FieldDSSTJ2SquaredClosedFormContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldDSSTJ2SquaredClosedFormContext::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldDSSTJ2SquaredClosedFormContext::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldDSSTJ2SquaredClosedFormContext *self = (t_FieldDSSTJ2SquaredClosedFormContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldDSSTJ2SquaredClosedFormContext::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldDSSTJ2SquaredClosedFormContext), &PY_TYPE_DEF(FieldDSSTJ2SquaredClosedFormContext), module, "FieldDSSTJ2SquaredClosedFormContext", 0);
            }

            void t_FieldDSSTJ2SquaredClosedFormContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTJ2SquaredClosedFormContext), "class_", make_descriptor(FieldDSSTJ2SquaredClosedFormContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTJ2SquaredClosedFormContext), "wrapfn_", make_descriptor(t_FieldDSSTJ2SquaredClosedFormContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTJ2SquaredClosedFormContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldDSSTJ2SquaredClosedFormContext::initializeClass, 1)))
                return NULL;
              return t_FieldDSSTJ2SquaredClosedFormContext::wrap_Object(FieldDSSTJ2SquaredClosedFormContext(((t_FieldDSSTJ2SquaredClosedFormContext *) arg)->object.this$));
            }
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldDSSTJ2SquaredClosedFormContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_of_(t_FieldDSSTJ2SquaredClosedFormContext *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldDSSTJ2SquaredClosedFormContext_init_(t_FieldDSSTJ2SquaredClosedFormContext *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              FieldDSSTJ2SquaredClosedFormContext object((jobject) NULL);

              if (!parseArgs(args, "Kk", ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &p0, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a1))
              {
                INT_CALL(object = FieldDSSTJ2SquaredClosedFormContext(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getA4(t_FieldDSSTJ2SquaredClosedFormContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getA4());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getAlpha4(t_FieldDSSTJ2SquaredClosedFormContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAlpha4());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getC(t_FieldDSSTJ2SquaredClosedFormContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getC());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getEta(t_FieldDSSTJ2SquaredClosedFormContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getEta());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getS2(t_FieldDSSTJ2SquaredClosedFormContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getS2());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__parameters_(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__a4(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getA4());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__alpha4(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAlpha4());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__c(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getC());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__eta(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getEta());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__s2(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getS2());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadata.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeCovarianceHistoryMetadata::class$ = NULL;
              jmethodID *AttitudeCovarianceHistoryMetadata::mids$ = NULL;
              bool AttitudeCovarianceHistoryMetadata::live$ = false;

              jclass AttitudeCovarianceHistoryMetadata::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadata");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getCovBasis_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getCovBasis", "()Ljava/lang/String;");
                  mids$[mid_getCovBasisID_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getCovBasisID", "()Ljava/lang/String;");
                  mids$[mid_getCovID_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getCovID", "()Ljava/lang/String;");
                  mids$[mid_getCovPrevID_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getCovPrevID", "()Ljava/lang/String;");
                  mids$[mid_getCovReferenceFrame_69d8be1b6b0a1a94] = env->getMethodID(cls, "getCovReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getCovType_49fb04b3e4992396] = env->getMethodID(cls, "getCovType", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;");
                  mids$[mid_setCovBasis_734b91ac30d5f9b4] = env->getMethodID(cls, "setCovBasis", "(Ljava/lang/String;)V");
                  mids$[mid_setCovBasisID_734b91ac30d5f9b4] = env->getMethodID(cls, "setCovBasisID", "(Ljava/lang/String;)V");
                  mids$[mid_setCovID_734b91ac30d5f9b4] = env->getMethodID(cls, "setCovID", "(Ljava/lang/String;)V");
                  mids$[mid_setCovPrevID_734b91ac30d5f9b4] = env->getMethodID(cls, "setCovPrevID", "(Ljava/lang/String;)V");
                  mids$[mid_setCovReferenceFrame_4755133c5c4c59be] = env->getMethodID(cls, "setCovReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setCovType_8563e2f42c19e56b] = env->getMethodID(cls, "setCovType", "(Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;)V");
                  mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeCovarianceHistoryMetadata::AttitudeCovarianceHistoryMetadata() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              ::java::lang::String AttitudeCovarianceHistoryMetadata::getCovBasis() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovBasis_1c1fa1e935d6cdcf]));
              }

              ::java::lang::String AttitudeCovarianceHistoryMetadata::getCovBasisID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovBasisID_1c1fa1e935d6cdcf]));
              }

              ::java::lang::String AttitudeCovarianceHistoryMetadata::getCovID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovID_1c1fa1e935d6cdcf]));
              }

              ::java::lang::String AttitudeCovarianceHistoryMetadata::getCovPrevID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovPrevID_1c1fa1e935d6cdcf]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade AttitudeCovarianceHistoryMetadata::getCovReferenceFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getCovReferenceFrame_69d8be1b6b0a1a94]));
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType AttitudeCovarianceHistoryMetadata::getCovType() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType(env->callObjectMethod(this$, mids$[mid_getCovType_49fb04b3e4992396]));
              }

              void AttitudeCovarianceHistoryMetadata::setCovBasis(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovBasis_734b91ac30d5f9b4], a0.this$);
              }

              void AttitudeCovarianceHistoryMetadata::setCovBasisID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovBasisID_734b91ac30d5f9b4], a0.this$);
              }

              void AttitudeCovarianceHistoryMetadata::setCovID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovID_734b91ac30d5f9b4], a0.this$);
              }

              void AttitudeCovarianceHistoryMetadata::setCovPrevID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovPrevID_734b91ac30d5f9b4], a0.this$);
              }

              void AttitudeCovarianceHistoryMetadata::setCovReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovReferenceFrame_4755133c5c4c59be], a0.this$);
              }

              void AttitudeCovarianceHistoryMetadata::setCovType(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovType_8563e2f42c19e56b], a0.this$);
              }

              void AttitudeCovarianceHistoryMetadata::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_8ba9fe7a847cecad], a0);
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {
              static PyObject *t_AttitudeCovarianceHistoryMetadata_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudeCovarianceHistoryMetadata_init_(t_AttitudeCovarianceHistoryMetadata *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovBasis(t_AttitudeCovarianceHistoryMetadata *self);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovBasisID(t_AttitudeCovarianceHistoryMetadata *self);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovID(t_AttitudeCovarianceHistoryMetadata *self);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovPrevID(t_AttitudeCovarianceHistoryMetadata *self);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovReferenceFrame(t_AttitudeCovarianceHistoryMetadata *self);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovType(t_AttitudeCovarianceHistoryMetadata *self);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovBasis(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovBasisID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovPrevID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovReferenceFrame(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovType(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_validate(t_AttitudeCovarianceHistoryMetadata *self, PyObject *args);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covBasis(t_AttitudeCovarianceHistoryMetadata *self, void *data);
              static int t_AttitudeCovarianceHistoryMetadata_set__covBasis(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covBasisID(t_AttitudeCovarianceHistoryMetadata *self, void *data);
              static int t_AttitudeCovarianceHistoryMetadata_set__covBasisID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covID(t_AttitudeCovarianceHistoryMetadata *self, void *data);
              static int t_AttitudeCovarianceHistoryMetadata_set__covID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covPrevID(t_AttitudeCovarianceHistoryMetadata *self, void *data);
              static int t_AttitudeCovarianceHistoryMetadata_set__covPrevID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covReferenceFrame(t_AttitudeCovarianceHistoryMetadata *self, void *data);
              static int t_AttitudeCovarianceHistoryMetadata_set__covReferenceFrame(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covType(t_AttitudeCovarianceHistoryMetadata *self, void *data);
              static int t_AttitudeCovarianceHistoryMetadata_set__covType(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyGetSetDef t_AttitudeCovarianceHistoryMetadata__fields_[] = {
                DECLARE_GETSET_FIELD(t_AttitudeCovarianceHistoryMetadata, covBasis),
                DECLARE_GETSET_FIELD(t_AttitudeCovarianceHistoryMetadata, covBasisID),
                DECLARE_GETSET_FIELD(t_AttitudeCovarianceHistoryMetadata, covID),
                DECLARE_GETSET_FIELD(t_AttitudeCovarianceHistoryMetadata, covPrevID),
                DECLARE_GETSET_FIELD(t_AttitudeCovarianceHistoryMetadata, covReferenceFrame),
                DECLARE_GETSET_FIELD(t_AttitudeCovarianceHistoryMetadata, covType),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeCovarianceHistoryMetadata__methods_[] = {
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, getCovBasis, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, getCovBasisID, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, getCovID, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, getCovPrevID, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, getCovReferenceFrame, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, getCovType, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, setCovBasis, METH_O),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, setCovBasisID, METH_O),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, setCovID, METH_O),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, setCovPrevID, METH_O),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, setCovReferenceFrame, METH_O),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, setCovType, METH_O),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeCovarianceHistoryMetadata)[] = {
                { Py_tp_methods, t_AttitudeCovarianceHistoryMetadata__methods_ },
                { Py_tp_init, (void *) t_AttitudeCovarianceHistoryMetadata_init_ },
                { Py_tp_getset, t_AttitudeCovarianceHistoryMetadata__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeCovarianceHistoryMetadata)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(AttitudeCovarianceHistoryMetadata, t_AttitudeCovarianceHistoryMetadata, AttitudeCovarianceHistoryMetadata);

              void t_AttitudeCovarianceHistoryMetadata::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeCovarianceHistoryMetadata), &PY_TYPE_DEF(AttitudeCovarianceHistoryMetadata), module, "AttitudeCovarianceHistoryMetadata", 0);
              }

              void t_AttitudeCovarianceHistoryMetadata::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadata), "class_", make_descriptor(AttitudeCovarianceHistoryMetadata::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadata), "wrapfn_", make_descriptor(t_AttitudeCovarianceHistoryMetadata::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadata), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeCovarianceHistoryMetadata::initializeClass, 1)))
                  return NULL;
                return t_AttitudeCovarianceHistoryMetadata::wrap_Object(AttitudeCovarianceHistoryMetadata(((t_AttitudeCovarianceHistoryMetadata *) arg)->object.this$));
              }
              static PyObject *t_AttitudeCovarianceHistoryMetadata_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeCovarianceHistoryMetadata::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudeCovarianceHistoryMetadata_init_(t_AttitudeCovarianceHistoryMetadata *self, PyObject *args, PyObject *kwds)
              {
                AttitudeCovarianceHistoryMetadata object((jobject) NULL);

                INT_CALL(object = AttitudeCovarianceHistoryMetadata());
                self->object = object;

                return 0;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovBasis(t_AttitudeCovarianceHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovBasis());
                return j2p(result);
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovBasisID(t_AttitudeCovarianceHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovBasisID());
                return j2p(result);
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovID(t_AttitudeCovarianceHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovID());
                return j2p(result);
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovPrevID(t_AttitudeCovarianceHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovPrevID());
                return j2p(result);
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovReferenceFrame(t_AttitudeCovarianceHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovType(t_AttitudeCovarianceHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceType::wrap_Object(result);
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovBasis(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCovBasis(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovBasis", arg);
                return NULL;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovBasisID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCovBasisID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovBasisID", arg);
                return NULL;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCovID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovID", arg);
                return NULL;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovPrevID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCovPrevID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovPrevID", arg);
                return NULL;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovReferenceFrame(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setCovReferenceFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovReferenceFrame", arg);
                return NULL;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovType(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceType::parameters_))
                {
                  OBJ_CALL(self->object.setCovType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovType", arg);
                return NULL;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_validate(t_AttitudeCovarianceHistoryMetadata *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AttitudeCovarianceHistoryMetadata), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covBasis(t_AttitudeCovarianceHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovBasis());
                return j2p(value);
              }
              static int t_AttitudeCovarianceHistoryMetadata_set__covBasis(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCovBasis(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covBasis", arg);
                return -1;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covBasisID(t_AttitudeCovarianceHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovBasisID());
                return j2p(value);
              }
              static int t_AttitudeCovarianceHistoryMetadata_set__covBasisID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCovBasisID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covBasisID", arg);
                return -1;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covID(t_AttitudeCovarianceHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovID());
                return j2p(value);
              }
              static int t_AttitudeCovarianceHistoryMetadata_set__covID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCovID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covID", arg);
                return -1;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covPrevID(t_AttitudeCovarianceHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovPrevID());
                return j2p(value);
              }
              static int t_AttitudeCovarianceHistoryMetadata_set__covPrevID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCovPrevID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covPrevID", arg);
                return -1;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covReferenceFrame(t_AttitudeCovarianceHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_AttitudeCovarianceHistoryMetadata_set__covReferenceFrame(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCovReferenceFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covReferenceFrame", arg);
                return -1;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covType(t_AttitudeCovarianceHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceType::wrap_Object(value);
              }
              static int t_AttitudeCovarianceHistoryMetadata_set__covType(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCovType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covType", arg);
                return -1;
              }
            }
          }
        }
      }
    }
  }
}
