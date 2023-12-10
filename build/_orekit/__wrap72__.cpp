#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/FieldChronologicalComparator.h"
#include "java/util/Comparator.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *FieldChronologicalComparator::class$ = NULL;
      jmethodID *FieldChronologicalComparator::mids$ = NULL;
      bool FieldChronologicalComparator::live$ = false;

      jclass FieldChronologicalComparator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/FieldChronologicalComparator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_compare_210e9114cb8bd64e] = env->getMethodID(cls, "compare", "(Lorg/orekit/time/FieldTimeStamped;Lorg/orekit/time/FieldTimeStamped;)I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldChronologicalComparator::FieldChronologicalComparator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      jint FieldChronologicalComparator::compare(const ::org::orekit::time::FieldTimeStamped & a0, const ::org::orekit::time::FieldTimeStamped & a1) const
      {
        return env->callIntMethod(this$, mids$[mid_compare_210e9114cb8bd64e], a0.this$, a1.this$);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_FieldChronologicalComparator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldChronologicalComparator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldChronologicalComparator_of_(t_FieldChronologicalComparator *self, PyObject *args);
      static int t_FieldChronologicalComparator_init_(t_FieldChronologicalComparator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldChronologicalComparator_compare(t_FieldChronologicalComparator *self, PyObject *args);
      static PyObject *t_FieldChronologicalComparator_get__parameters_(t_FieldChronologicalComparator *self, void *data);
      static PyGetSetDef t_FieldChronologicalComparator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldChronologicalComparator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldChronologicalComparator__methods_[] = {
        DECLARE_METHOD(t_FieldChronologicalComparator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldChronologicalComparator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldChronologicalComparator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldChronologicalComparator, compare, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldChronologicalComparator)[] = {
        { Py_tp_methods, t_FieldChronologicalComparator__methods_ },
        { Py_tp_init, (void *) t_FieldChronologicalComparator_init_ },
        { Py_tp_getset, t_FieldChronologicalComparator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldChronologicalComparator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldChronologicalComparator, t_FieldChronologicalComparator, FieldChronologicalComparator);
      PyObject *t_FieldChronologicalComparator::wrap_Object(const FieldChronologicalComparator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldChronologicalComparator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldChronologicalComparator *self = (t_FieldChronologicalComparator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldChronologicalComparator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldChronologicalComparator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldChronologicalComparator *self = (t_FieldChronologicalComparator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldChronologicalComparator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldChronologicalComparator), &PY_TYPE_DEF(FieldChronologicalComparator), module, "FieldChronologicalComparator", 0);
      }

      void t_FieldChronologicalComparator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldChronologicalComparator), "class_", make_descriptor(FieldChronologicalComparator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldChronologicalComparator), "wrapfn_", make_descriptor(t_FieldChronologicalComparator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldChronologicalComparator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldChronologicalComparator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldChronologicalComparator::initializeClass, 1)))
          return NULL;
        return t_FieldChronologicalComparator::wrap_Object(FieldChronologicalComparator(((t_FieldChronologicalComparator *) arg)->object.this$));
      }
      static PyObject *t_FieldChronologicalComparator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldChronologicalComparator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldChronologicalComparator_of_(t_FieldChronologicalComparator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldChronologicalComparator_init_(t_FieldChronologicalComparator *self, PyObject *args, PyObject *kwds)
      {
        FieldChronologicalComparator object((jobject) NULL);

        INT_CALL(object = FieldChronologicalComparator());
        self->object = object;

        return 0;
      }

      static PyObject *t_FieldChronologicalComparator_compare(t_FieldChronologicalComparator *self, PyObject *args)
      {
        ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::time::FieldTimeStamped a1((jobject) NULL);
        PyTypeObject **p1;
        jint result;

        if (!parseArgs(args, "KK", ::org::orekit::time::FieldTimeStamped::initializeClass, ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_, &a1, &p1, ::org::orekit::time::t_FieldTimeStamped::parameters_))
        {
          OBJ_CALL(result = self->object.compare(a0, a1));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compare", args);
        return NULL;
      }
      static PyObject *t_FieldChronologicalComparator_get__parameters_(t_FieldChronologicalComparator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/time/FieldTimeShiftable.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *FieldOrbit::class$ = NULL;
      jmethodID *FieldOrbit::mids$ = NULL;
      bool FieldOrbit::live$ = false;

      jclass FieldOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/FieldOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addKeplerContribution_72af0bc419feab2f] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getA_e6d4d3215c30992a] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getADot_e6d4d3215c30992a] = env->getMethodID(cls, "getADot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getDate_09b0a926600dfc14] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getE_e6d4d3215c30992a] = env->getMethodID(cls, "getE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEDot_e6d4d3215c30992a] = env->getMethodID(cls, "getEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEx_e6d4d3215c30992a] = env->getMethodID(cls, "getEquinoctialEx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialExDot_e6d4d3215c30992a] = env->getMethodID(cls, "getEquinoctialExDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEy_e6d4d3215c30992a] = env->getMethodID(cls, "getEquinoctialEy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEyDot_e6d4d3215c30992a] = env->getMethodID(cls, "getEquinoctialEyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getHx_e6d4d3215c30992a] = env->getMethodID(cls, "getHx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHxDot_e6d4d3215c30992a] = env->getMethodID(cls, "getHxDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHy_e6d4d3215c30992a] = env->getMethodID(cls, "getHy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHyDot_e6d4d3215c30992a] = env->getMethodID(cls, "getHyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getI_e6d4d3215c30992a] = env->getMethodID(cls, "getI", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getIDot_e6d4d3215c30992a] = env->getMethodID(cls, "getIDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getJacobianWrtCartesian_735986f1c175cb9c] = env->getMethodID(cls, "getJacobianWrtCartesian", "(Lorg/orekit/orbits/PositionAngleType;[[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getJacobianWrtParameters_735986f1c175cb9c] = env->getMethodID(cls, "getJacobianWrtParameters", "(Lorg/orekit/orbits/PositionAngleType;[[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getKeplerianMeanMotion_e6d4d3215c30992a] = env->getMethodID(cls, "getKeplerianMeanMotion", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getKeplerianPeriod_e6d4d3215c30992a] = env->getMethodID(cls, "getKeplerianPeriod", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLE_e6d4d3215c30992a] = env->getMethodID(cls, "getLE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLEDot_e6d4d3215c30992a] = env->getMethodID(cls, "getLEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLM_e6d4d3215c30992a] = env->getMethodID(cls, "getLM", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLMDot_e6d4d3215c30992a] = env->getMethodID(cls, "getLMDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLv_e6d4d3215c30992a] = env->getMethodID(cls, "getLv", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLvDot_e6d4d3215c30992a] = env->getMethodID(cls, "getLvDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getMeanAnomalyDotWrtA_e6d4d3215c30992a] = env->getMethodID(cls, "getMeanAnomalyDotWrtA", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getMu_e6d4d3215c30992a] = env->getMethodID(cls, "getMu", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getPVCoordinates_26447a781aafdb9e] = env->getMethodID(cls, "getPVCoordinates", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPVCoordinates_485af6605091d545] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPVCoordinates_0e277b7d6a64b75a] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPosition_5791f80683b5227e] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getPosition_863ec0d27d7d92bb] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getType_63ea5cd020bf7bf1] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasDerivatives_e470b6d9e0d979db] = env->getMethodID(cls, "hasDerivatives", "()Z");
          mids$[mid_isElliptical_e470b6d9e0d979db] = env->getMethodID(cls, "isElliptical", "()Z");
          mids$[mid_shiftedBy_4e9ac94c2e56d753] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldOrbit;");
          mids$[mid_toOrbit_551bf685780e3c1f] = env->getMethodID(cls, "toOrbit", "()Lorg/orekit/orbits/Orbit;");
          mids$[mid_getZero_e6d4d3215c30992a] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getOne_e6d4d3215c30992a] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_hasNonKeplerianAcceleration_b3066411f99fe7fe] = env->getStaticMethodID(cls, "hasNonKeplerianAcceleration", "(Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;)Z");
          mids$[mid_initPosition_5791f80683b5227e] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_initPVCoordinates_26447a781aafdb9e] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_computeJacobianMeanWrtCartesian_dd8485a0eb2e2903] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianEccentricWrtCartesian_dd8485a0eb2e2903] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianTrueWrtCartesian_dd8485a0eb2e2903] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_fillHalfRow_46c78b1cd96bec90] = env->getMethodID(cls, "fillHalfRow", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;I)V");
          mids$[mid_fillHalfRow_3ec90180ba5921ad] = env->getMethodID(cls, "fillHalfRow", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;I)V");
          mids$[mid_fillHalfRow_aab0ef02198719d8] = env->getMethodID(cls, "fillHalfRow", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;I)V");
          mids$[mid_fillHalfRow_372e0525ef0744f2] = env->getMethodID(cls, "fillHalfRow", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;I)V");
          mids$[mid_fillHalfRow_d68efc51185ceb32] = env->getMethodID(cls, "fillHalfRow", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;I)V");
          mids$[mid_fillHalfRow_9f8a79d5d428449b] = env->getMethodID(cls, "fillHalfRow", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;I)V");
          mids$[mid_getField_70b4bbd3fa378d6b] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void FieldOrbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, const ::org::hipparchus::CalculusFieldElement & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_72af0bc419feab2f], a0.this$, a1.this$, a2.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getA() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getADot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getADot_e6d4d3215c30992a]));
      }

      ::org::orekit::time::FieldAbsoluteDate FieldOrbit::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_09b0a926600dfc14]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getE_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getEquinoctialEx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEx_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getEquinoctialExDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialExDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getEquinoctialEy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEy_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getEquinoctialEyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEyDot_e6d4d3215c30992a]));
      }

      ::org::orekit::frames::Frame FieldOrbit::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getHx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHx_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getHxDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHxDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getHy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHy_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getHyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHyDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getI() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getI_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getIDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getIDot_e6d4d3215c30992a]));
      }

      void FieldOrbit::getJacobianWrtCartesian(const ::org::orekit::orbits::PositionAngleType & a0, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_getJacobianWrtCartesian_735986f1c175cb9c], a0.this$, a1.this$);
      }

      void FieldOrbit::getJacobianWrtParameters(const ::org::orekit::orbits::PositionAngleType & a0, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_getJacobianWrtParameters_735986f1c175cb9c], a0.this$, a1.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getKeplerianMeanMotion() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getKeplerianMeanMotion_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getKeplerianPeriod() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getKeplerianPeriod_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getLE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLE_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getLEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLEDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getLM() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLM_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getLMDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLMDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getLv() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLv_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getLvDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLvDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getMeanAnomalyDotWrtA() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanAnomalyDotWrtA_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getMu() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMu_e6d4d3215c30992a]));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldOrbit::getPVCoordinates() const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_26447a781aafdb9e]));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldOrbit::getPVCoordinates(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_485af6605091d545], a0.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldOrbit::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_0e277b7d6a64b75a], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldOrbit::getPosition() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getPosition_5791f80683b5227e]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldOrbit::getPosition(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getPosition_863ec0d27d7d92bb], a0.this$));
      }

      ::org::orekit::orbits::OrbitType FieldOrbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_63ea5cd020bf7bf1]));
      }

      jboolean FieldOrbit::hasDerivatives() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasDerivatives_e470b6d9e0d979db]);
      }

      jboolean FieldOrbit::isElliptical() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isElliptical_e470b6d9e0d979db]);
      }

      FieldOrbit FieldOrbit::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_4e9ac94c2e56d753], a0.this$));
      }

      ::org::orekit::orbits::Orbit FieldOrbit::toOrbit() const
      {
        return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_toOrbit_551bf685780e3c1f]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_FieldOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldOrbit_of_(t_FieldOrbit *self, PyObject *args);
      static PyObject *t_FieldOrbit_addKeplerContribution(t_FieldOrbit *self, PyObject *args);
      static PyObject *t_FieldOrbit_getA(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getADot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getDate(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getE(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getEDot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getEquinoctialEx(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getEquinoctialExDot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getEquinoctialEy(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getEquinoctialEyDot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getFrame(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getHx(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getHxDot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getHy(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getHyDot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getI(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getIDot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getJacobianWrtCartesian(t_FieldOrbit *self, PyObject *args);
      static PyObject *t_FieldOrbit_getJacobianWrtParameters(t_FieldOrbit *self, PyObject *args);
      static PyObject *t_FieldOrbit_getKeplerianMeanMotion(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getKeplerianPeriod(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getLE(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getLEDot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getLM(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getLMDot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getLv(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getLvDot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getMeanAnomalyDotWrtA(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getMu(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getPVCoordinates(t_FieldOrbit *self, PyObject *args);
      static PyObject *t_FieldOrbit_getPosition(t_FieldOrbit *self, PyObject *args);
      static PyObject *t_FieldOrbit_getType(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_hasDerivatives(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_isElliptical(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_shiftedBy(t_FieldOrbit *self, PyObject *arg);
      static PyObject *t_FieldOrbit_toOrbit(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_get__a(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__aDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__date(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__e(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__eDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__elliptical(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__equinoctialEx(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__equinoctialExDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__equinoctialEy(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__equinoctialEyDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__frame(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__hx(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__hxDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__hy(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__hyDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__i(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__iDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__keplerianMeanMotion(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__keplerianPeriod(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__lE(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__lEDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__lM(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__lMDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__lv(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__lvDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__meanAnomalyDotWrtA(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__mu(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__pVCoordinates(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__position(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__type(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__parameters_(t_FieldOrbit *self, void *data);
      static PyGetSetDef t_FieldOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_FieldOrbit, a),
        DECLARE_GET_FIELD(t_FieldOrbit, aDot),
        DECLARE_GET_FIELD(t_FieldOrbit, date),
        DECLARE_GET_FIELD(t_FieldOrbit, e),
        DECLARE_GET_FIELD(t_FieldOrbit, eDot),
        DECLARE_GET_FIELD(t_FieldOrbit, elliptical),
        DECLARE_GET_FIELD(t_FieldOrbit, equinoctialEx),
        DECLARE_GET_FIELD(t_FieldOrbit, equinoctialExDot),
        DECLARE_GET_FIELD(t_FieldOrbit, equinoctialEy),
        DECLARE_GET_FIELD(t_FieldOrbit, equinoctialEyDot),
        DECLARE_GET_FIELD(t_FieldOrbit, frame),
        DECLARE_GET_FIELD(t_FieldOrbit, hx),
        DECLARE_GET_FIELD(t_FieldOrbit, hxDot),
        DECLARE_GET_FIELD(t_FieldOrbit, hy),
        DECLARE_GET_FIELD(t_FieldOrbit, hyDot),
        DECLARE_GET_FIELD(t_FieldOrbit, i),
        DECLARE_GET_FIELD(t_FieldOrbit, iDot),
        DECLARE_GET_FIELD(t_FieldOrbit, keplerianMeanMotion),
        DECLARE_GET_FIELD(t_FieldOrbit, keplerianPeriod),
        DECLARE_GET_FIELD(t_FieldOrbit, lE),
        DECLARE_GET_FIELD(t_FieldOrbit, lEDot),
        DECLARE_GET_FIELD(t_FieldOrbit, lM),
        DECLARE_GET_FIELD(t_FieldOrbit, lMDot),
        DECLARE_GET_FIELD(t_FieldOrbit, lv),
        DECLARE_GET_FIELD(t_FieldOrbit, lvDot),
        DECLARE_GET_FIELD(t_FieldOrbit, meanAnomalyDotWrtA),
        DECLARE_GET_FIELD(t_FieldOrbit, mu),
        DECLARE_GET_FIELD(t_FieldOrbit, pVCoordinates),
        DECLARE_GET_FIELD(t_FieldOrbit, position),
        DECLARE_GET_FIELD(t_FieldOrbit, type),
        DECLARE_GET_FIELD(t_FieldOrbit, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldOrbit__methods_[] = {
        DECLARE_METHOD(t_FieldOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldOrbit, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrbit, addKeplerContribution, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrbit, getA, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getADot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getE, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getEDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getEquinoctialEx, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getEquinoctialExDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getEquinoctialEy, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getEquinoctialEyDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getHx, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getHxDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getHy, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getHyDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getI, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getIDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getJacobianWrtCartesian, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrbit, getJacobianWrtParameters, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrbit, getKeplerianMeanMotion, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getKeplerianPeriod, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getLE, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getLEDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getLM, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getLMDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getLv, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getLvDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getMeanAnomalyDotWrtA, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getMu, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrbit, getPosition, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrbit, getType, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, hasDerivatives, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, isElliptical, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, shiftedBy, METH_O),
        DECLARE_METHOD(t_FieldOrbit, toOrbit, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldOrbit)[] = {
        { Py_tp_methods, t_FieldOrbit__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldOrbit)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldOrbit, t_FieldOrbit, FieldOrbit);
      PyObject *t_FieldOrbit::wrap_Object(const FieldOrbit& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldOrbit::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldOrbit *self = (t_FieldOrbit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldOrbit::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldOrbit::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldOrbit *self = (t_FieldOrbit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldOrbit), &PY_TYPE_DEF(FieldOrbit), module, "FieldOrbit", 0);
      }

      void t_FieldOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrbit), "class_", make_descriptor(FieldOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrbit), "wrapfn_", make_descriptor(t_FieldOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldOrbit::initializeClass, 1)))
          return NULL;
        return t_FieldOrbit::wrap_Object(FieldOrbit(((t_FieldOrbit *) arg)->object.this$));
      }
      static PyObject *t_FieldOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldOrbit_of_(t_FieldOrbit *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldOrbit_addKeplerContribution(t_FieldOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "KK[K", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.addKeplerContribution(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addKeplerContribution", args);
        return NULL;
      }

      static PyObject *t_FieldOrbit_getA(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getA());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getADot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getADot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getDate(t_FieldOrbit *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldOrbit_getE(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getE());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getEDot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getEDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getEquinoctialEx(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getEquinoctialEx());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getEquinoctialExDot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getEquinoctialExDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getEquinoctialEy(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getEquinoctialEy());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getEquinoctialEyDot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getEquinoctialEyDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getFrame(t_FieldOrbit *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getHx(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getHx());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getHxDot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getHxDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getHy(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getHy());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getHyDot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getHyDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getI(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getI());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getIDot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getIDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getJacobianWrtCartesian(t_FieldOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "K[[K", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.getJacobianWrtCartesian(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "getJacobianWrtCartesian", args);
        return NULL;
      }

      static PyObject *t_FieldOrbit_getJacobianWrtParameters(t_FieldOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "K[[K", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.getJacobianWrtParameters(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "getJacobianWrtParameters", args);
        return NULL;
      }

      static PyObject *t_FieldOrbit_getKeplerianMeanMotion(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getKeplerianMeanMotion());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getKeplerianPeriod(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getKeplerianPeriod());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getLE(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLE());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getLEDot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLEDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getLM(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLM());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getLMDot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLMDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getLv(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLv());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getLvDot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLvDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getMeanAnomalyDotWrtA(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getMeanAnomalyDotWrtA());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getMu(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getMu());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getPVCoordinates(t_FieldOrbit *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);
            OBJ_CALL(result = self->object.getPVCoordinates());
            return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
          }
          break;
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_FieldOrbit_getPosition(t_FieldOrbit *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getPosition());
            return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
          }
          break;
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPosition(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPosition", args);
        return NULL;
      }

      static PyObject *t_FieldOrbit_getType(t_FieldOrbit *self)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);
        OBJ_CALL(result = self->object.getType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_hasDerivatives(t_FieldOrbit *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasDerivatives());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldOrbit_isElliptical(t_FieldOrbit *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isElliptical());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldOrbit_shiftedBy(t_FieldOrbit *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldOrbit result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_FieldOrbit::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", arg);
        return NULL;
      }

      static PyObject *t_FieldOrbit_toOrbit(t_FieldOrbit *self)
      {
        ::org::orekit::orbits::Orbit result((jobject) NULL);
        OBJ_CALL(result = self->object.toOrbit());
        return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
      }
      static PyObject *t_FieldOrbit_get__parameters_(t_FieldOrbit *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldOrbit_get__a(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getA());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__aDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getADot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__date(t_FieldOrbit *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__e(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__eDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__elliptical(t_FieldOrbit *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isElliptical());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_FieldOrbit_get__equinoctialEx(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__equinoctialExDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialExDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__equinoctialEy(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__equinoctialEyDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__frame(t_FieldOrbit *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__hx(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__hxDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHxDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__hy(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__hyDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__i(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getI());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__iDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getIDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__keplerianMeanMotion(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getKeplerianMeanMotion());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__keplerianPeriod(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getKeplerianPeriod());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__lE(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__lEDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__lM(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLM());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__lMDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLMDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__lv(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLv());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__lvDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLvDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__meanAnomalyDotWrtA(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getMeanAnomalyDotWrtA());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__mu(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getMu());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__pVCoordinates(t_FieldOrbit *self, void *data)
      {
        ::org::orekit::utils::TimeStampedFieldPVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getPVCoordinates());
        return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__position(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getPosition());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__type(t_FieldOrbit *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/UnivariateIntegrator.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *UnivariateIntegrator::class$ = NULL;
        jmethodID *UnivariateIntegrator::mids$ = NULL;
        bool UnivariateIntegrator::live$ = false;

        jclass UnivariateIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/UnivariateIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAbsoluteAccuracy_456d9a2f64d6b28d] = env->getMethodID(cls, "getAbsoluteAccuracy", "()D");
            mids$[mid_getEvaluations_f2f64475e4580546] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getIterations_f2f64475e4580546] = env->getMethodID(cls, "getIterations", "()I");
            mids$[mid_getMaximalIterationCount_f2f64475e4580546] = env->getMethodID(cls, "getMaximalIterationCount", "()I");
            mids$[mid_getMinimalIterationCount_f2f64475e4580546] = env->getMethodID(cls, "getMinimalIterationCount", "()I");
            mids$[mid_getRelativeAccuracy_456d9a2f64d6b28d] = env->getMethodID(cls, "getRelativeAccuracy", "()D");
            mids$[mid_integrate_5e6ae88ca7503288] = env->getMethodID(cls, "integrate", "(ILorg/hipparchus/analysis/UnivariateFunction;DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble UnivariateIntegrator::getAbsoluteAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAbsoluteAccuracy_456d9a2f64d6b28d]);
        }

        jint UnivariateIntegrator::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_f2f64475e4580546]);
        }

        jint UnivariateIntegrator::getIterations() const
        {
          return env->callIntMethod(this$, mids$[mid_getIterations_f2f64475e4580546]);
        }

        jint UnivariateIntegrator::getMaximalIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaximalIterationCount_f2f64475e4580546]);
        }

        jint UnivariateIntegrator::getMinimalIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMinimalIterationCount_f2f64475e4580546]);
        }

        jdouble UnivariateIntegrator::getRelativeAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRelativeAccuracy_456d9a2f64d6b28d]);
        }

        jdouble UnivariateIntegrator::integrate(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_integrate_5e6ae88ca7503288], a0, a1.this$, a2, a3);
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
      namespace integration {
        static PyObject *t_UnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateIntegrator_getAbsoluteAccuracy(t_UnivariateIntegrator *self);
        static PyObject *t_UnivariateIntegrator_getEvaluations(t_UnivariateIntegrator *self);
        static PyObject *t_UnivariateIntegrator_getIterations(t_UnivariateIntegrator *self);
        static PyObject *t_UnivariateIntegrator_getMaximalIterationCount(t_UnivariateIntegrator *self);
        static PyObject *t_UnivariateIntegrator_getMinimalIterationCount(t_UnivariateIntegrator *self);
        static PyObject *t_UnivariateIntegrator_getRelativeAccuracy(t_UnivariateIntegrator *self);
        static PyObject *t_UnivariateIntegrator_integrate(t_UnivariateIntegrator *self, PyObject *args);
        static PyObject *t_UnivariateIntegrator_get__absoluteAccuracy(t_UnivariateIntegrator *self, void *data);
        static PyObject *t_UnivariateIntegrator_get__evaluations(t_UnivariateIntegrator *self, void *data);
        static PyObject *t_UnivariateIntegrator_get__iterations(t_UnivariateIntegrator *self, void *data);
        static PyObject *t_UnivariateIntegrator_get__maximalIterationCount(t_UnivariateIntegrator *self, void *data);
        static PyObject *t_UnivariateIntegrator_get__minimalIterationCount(t_UnivariateIntegrator *self, void *data);
        static PyObject *t_UnivariateIntegrator_get__relativeAccuracy(t_UnivariateIntegrator *self, void *data);
        static PyGetSetDef t_UnivariateIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_UnivariateIntegrator, absoluteAccuracy),
          DECLARE_GET_FIELD(t_UnivariateIntegrator, evaluations),
          DECLARE_GET_FIELD(t_UnivariateIntegrator, iterations),
          DECLARE_GET_FIELD(t_UnivariateIntegrator, maximalIterationCount),
          DECLARE_GET_FIELD(t_UnivariateIntegrator, minimalIterationCount),
          DECLARE_GET_FIELD(t_UnivariateIntegrator, relativeAccuracy),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnivariateIntegrator__methods_[] = {
          DECLARE_METHOD(t_UnivariateIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateIntegrator, getAbsoluteAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateIntegrator, getEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateIntegrator, getIterations, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateIntegrator, getMaximalIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateIntegrator, getMinimalIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateIntegrator, getRelativeAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateIntegrator, integrate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateIntegrator)[] = {
          { Py_tp_methods, t_UnivariateIntegrator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_UnivariateIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateIntegrator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariateIntegrator, t_UnivariateIntegrator, UnivariateIntegrator);

        void t_UnivariateIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateIntegrator), &PY_TYPE_DEF(UnivariateIntegrator), module, "UnivariateIntegrator", 0);
        }

        void t_UnivariateIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateIntegrator), "class_", make_descriptor(UnivariateIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateIntegrator), "wrapfn_", make_descriptor(t_UnivariateIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateIntegrator::initializeClass, 1)))
            return NULL;
          return t_UnivariateIntegrator::wrap_Object(UnivariateIntegrator(((t_UnivariateIntegrator *) arg)->object.this$));
        }
        static PyObject *t_UnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateIntegrator_getAbsoluteAccuracy(t_UnivariateIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_UnivariateIntegrator_getEvaluations(t_UnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_UnivariateIntegrator_getIterations(t_UnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getIterations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_UnivariateIntegrator_getMaximalIterationCount(t_UnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaximalIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_UnivariateIntegrator_getMinimalIterationCount(t_UnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMinimalIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_UnivariateIntegrator_getRelativeAccuracy(t_UnivariateIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_UnivariateIntegrator_integrate(t_UnivariateIntegrator *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
          jdouble a2;
          jdouble a3;
          jdouble result;

          if (!parseArgs(args, "IkDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1, a2, a3));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "integrate", args);
          return NULL;
        }

        static PyObject *t_UnivariateIntegrator_get__absoluteAccuracy(t_UnivariateIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UnivariateIntegrator_get__evaluations(t_UnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_UnivariateIntegrator_get__iterations(t_UnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getIterations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_UnivariateIntegrator_get__maximalIterationCount(t_UnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaximalIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_UnivariateIntegrator_get__minimalIterationCount(t_UnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMinimalIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_UnivariateIntegrator_get__relativeAccuracy(t_UnivariateIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/SEMParser.h"
#include "java/io/IOException.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/errors/OrekitException.h"
#include "java/util/List.h"
#include "java/lang/Integer.h"
#include "java/io/InputStream.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/propagation/analytical/gnss/data/GPSAlmanac.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataLoader.h"
#include "java/text/ParseException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *SEMParser::class$ = NULL;
      jmethodID *SEMParser::mids$ = NULL;
      bool SEMParser::live$ = false;

      jclass SEMParser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/SEMParser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_4573d2669211524d] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScales;)V");
          mids$[mid_getAlmanacs_a6156df500549a58] = env->getMethodID(cls, "getAlmanacs", "()Ljava/util/List;");
          mids$[mid_getPRNNumbers_a6156df500549a58] = env->getMethodID(cls, "getPRNNumbers", "()Ljava/util/List;");
          mids$[mid_getSupportedNames_0090f7797e403f43] = env->getMethodID(cls, "getSupportedNames", "()Ljava/lang/String;");
          mids$[mid_loadData_7ae3461a92a43152] = env->getMethodID(cls, "loadData", "()V");
          mids$[mid_loadData_ec60cb5f4b3de555] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
          mids$[mid_stillAcceptsData_e470b6d9e0d979db] = env->getMethodID(cls, "stillAcceptsData", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SEMParser::SEMParser(const ::java::lang::String & a0) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

      SEMParser::SEMParser(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1, const ::org::orekit::time::TimeScales & a2) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_4573d2669211524d, a0.this$, a1.this$, a2.this$)) {}

      ::java::util::List SEMParser::getAlmanacs() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAlmanacs_a6156df500549a58]));
      }

      ::java::util::List SEMParser::getPRNNumbers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getPRNNumbers_a6156df500549a58]));
      }

      ::java::lang::String SEMParser::getSupportedNames() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSupportedNames_0090f7797e403f43]));
      }

      void SEMParser::loadData() const
      {
        env->callVoidMethod(this$, mids$[mid_loadData_7ae3461a92a43152]);
      }

      void SEMParser::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_loadData_ec60cb5f4b3de555], a0.this$, a1.this$);
      }

      jboolean SEMParser::stillAcceptsData() const
      {
        return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_e470b6d9e0d979db]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      static PyObject *t_SEMParser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SEMParser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SEMParser_init_(t_SEMParser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SEMParser_getAlmanacs(t_SEMParser *self);
      static PyObject *t_SEMParser_getPRNNumbers(t_SEMParser *self);
      static PyObject *t_SEMParser_getSupportedNames(t_SEMParser *self);
      static PyObject *t_SEMParser_loadData(t_SEMParser *self, PyObject *args);
      static PyObject *t_SEMParser_stillAcceptsData(t_SEMParser *self);
      static PyObject *t_SEMParser_get__almanacs(t_SEMParser *self, void *data);
      static PyObject *t_SEMParser_get__pRNNumbers(t_SEMParser *self, void *data);
      static PyObject *t_SEMParser_get__supportedNames(t_SEMParser *self, void *data);
      static PyGetSetDef t_SEMParser__fields_[] = {
        DECLARE_GET_FIELD(t_SEMParser, almanacs),
        DECLARE_GET_FIELD(t_SEMParser, pRNNumbers),
        DECLARE_GET_FIELD(t_SEMParser, supportedNames),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SEMParser__methods_[] = {
        DECLARE_METHOD(t_SEMParser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SEMParser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SEMParser, getAlmanacs, METH_NOARGS),
        DECLARE_METHOD(t_SEMParser, getPRNNumbers, METH_NOARGS),
        DECLARE_METHOD(t_SEMParser, getSupportedNames, METH_NOARGS),
        DECLARE_METHOD(t_SEMParser, loadData, METH_VARARGS),
        DECLARE_METHOD(t_SEMParser, stillAcceptsData, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SEMParser)[] = {
        { Py_tp_methods, t_SEMParser__methods_ },
        { Py_tp_init, (void *) t_SEMParser_init_ },
        { Py_tp_getset, t_SEMParser__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SEMParser)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
        NULL
      };

      DEFINE_TYPE(SEMParser, t_SEMParser, SEMParser);

      void t_SEMParser::install(PyObject *module)
      {
        installType(&PY_TYPE(SEMParser), &PY_TYPE_DEF(SEMParser), module, "SEMParser", 0);
      }

      void t_SEMParser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SEMParser), "class_", make_descriptor(SEMParser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SEMParser), "wrapfn_", make_descriptor(t_SEMParser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SEMParser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SEMParser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SEMParser::initializeClass, 1)))
          return NULL;
        return t_SEMParser::wrap_Object(SEMParser(((t_SEMParser *) arg)->object.this$));
      }
      static PyObject *t_SEMParser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SEMParser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SEMParser_init_(t_SEMParser *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            SEMParser object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = SEMParser(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
            ::org::orekit::time::TimeScales a2((jobject) NULL);
            SEMParser object((jobject) NULL);

            if (!parseArgs(args, "skk", ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = SEMParser(a0, a1, a2));
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

      static PyObject *t_SEMParser_getAlmanacs(t_SEMParser *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getAlmanacs());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(GPSAlmanac));
      }

      static PyObject *t_SEMParser_getPRNNumbers(t_SEMParser *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getPRNNumbers());
        return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(Integer));
      }

      static PyObject *t_SEMParser_getSupportedNames(t_SEMParser *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSupportedNames());
        return j2p(result);
      }

      static PyObject *t_SEMParser_loadData(t_SEMParser *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            OBJ_CALL(self->object.loadData());
            Py_RETURN_NONE;
          }
          break;
         case 2:
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "loadData", args);
        return NULL;
      }

      static PyObject *t_SEMParser_stillAcceptsData(t_SEMParser *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.stillAcceptsData());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_SEMParser_get__almanacs(t_SEMParser *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getAlmanacs());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_SEMParser_get__pRNNumbers(t_SEMParser *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getPRNNumbers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_SEMParser_get__supportedNames(t_SEMParser *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSupportedNames());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/sampling/FieldODEFixedStepHandler.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *FieldODEFixedStepHandler::class$ = NULL;
        jmethodID *FieldODEFixedStepHandler::mids$ = NULL;
        bool FieldODEFixedStepHandler::live$ = false;

        jclass FieldODEFixedStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/FieldODEFixedStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_handleStep_13050c2cae3dabdf] = env->getMethodID(cls, "handleStep", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Z)V");
            mids$[mid_init_e6d23212b178b64e] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void FieldODEFixedStepHandler::handleStep(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, jboolean a1) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_13050c2cae3dabdf], a0.this$, a1);
        }

        void FieldODEFixedStepHandler::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_e6d23212b178b64e], a0.this$, a1.this$);
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
      namespace sampling {
        static PyObject *t_FieldODEFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEFixedStepHandler_of_(t_FieldODEFixedStepHandler *self, PyObject *args);
        static PyObject *t_FieldODEFixedStepHandler_handleStep(t_FieldODEFixedStepHandler *self, PyObject *args);
        static PyObject *t_FieldODEFixedStepHandler_init(t_FieldODEFixedStepHandler *self, PyObject *args);
        static PyObject *t_FieldODEFixedStepHandler_get__parameters_(t_FieldODEFixedStepHandler *self, void *data);
        static PyGetSetDef t_FieldODEFixedStepHandler__fields_[] = {
          DECLARE_GET_FIELD(t_FieldODEFixedStepHandler, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldODEFixedStepHandler__methods_[] = {
          DECLARE_METHOD(t_FieldODEFixedStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEFixedStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEFixedStepHandler, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEFixedStepHandler, handleStep, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEFixedStepHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldODEFixedStepHandler)[] = {
          { Py_tp_methods, t_FieldODEFixedStepHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldODEFixedStepHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldODEFixedStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldODEFixedStepHandler, t_FieldODEFixedStepHandler, FieldODEFixedStepHandler);
        PyObject *t_FieldODEFixedStepHandler::wrap_Object(const FieldODEFixedStepHandler& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEFixedStepHandler::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEFixedStepHandler *self = (t_FieldODEFixedStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldODEFixedStepHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEFixedStepHandler::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEFixedStepHandler *self = (t_FieldODEFixedStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldODEFixedStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldODEFixedStepHandler), &PY_TYPE_DEF(FieldODEFixedStepHandler), module, "FieldODEFixedStepHandler", 0);
        }

        void t_FieldODEFixedStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEFixedStepHandler), "class_", make_descriptor(FieldODEFixedStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEFixedStepHandler), "wrapfn_", make_descriptor(t_FieldODEFixedStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEFixedStepHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldODEFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldODEFixedStepHandler::initializeClass, 1)))
            return NULL;
          return t_FieldODEFixedStepHandler::wrap_Object(FieldODEFixedStepHandler(((t_FieldODEFixedStepHandler *) arg)->object.this$));
        }
        static PyObject *t_FieldODEFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldODEFixedStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldODEFixedStepHandler_of_(t_FieldODEFixedStepHandler *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldODEFixedStepHandler_handleStep(t_FieldODEFixedStepHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean a1;

          if (!parseArgs(args, "KZ", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1))
          {
            OBJ_CALL(self->object.handleStep(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", args);
          return NULL;
        }

        static PyObject *t_FieldODEFixedStepHandler_init(t_FieldODEFixedStepHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
        static PyObject *t_FieldODEFixedStepHandler_get__parameters_(t_FieldODEFixedStepHandler *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/DSSTPropagatorBuilder.h"
#include "org/orekit/propagation/conversion/DSSTPropagatorBuilder.h"
#include "java/util/List.h"
#include "org/orekit/estimation/leastsquares/DSSTBatchLSModel.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "java/lang/Object.h"
#include "org/orekit/propagation/semianalytical/dsst/DSSTPropagator.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *DSSTPropagatorBuilder::class$ = NULL;
        jmethodID *DSSTPropagatorBuilder::mids$ = NULL;
        bool DSSTPropagatorBuilder::live$ = false;

        jclass DSSTPropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/DSSTPropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_721a71466591879d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/conversion/ODEIntegratorBuilder;DLorg/orekit/propagation/PropagationType;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_init$_3ce276d088f69fd4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/conversion/ODEIntegratorBuilder;DLorg/orekit/propagation/PropagationType;Lorg/orekit/propagation/PropagationType;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_addForceModel_868bb92ba9b91af7] = env->getMethodID(cls, "addForceModel", "(Lorg/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel;)V");
            mids$[mid_buildLeastSquaresModel_97549aab335354c0] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/DSSTBatchLSModel;");
            mids$[mid_buildPropagator_45be81d8f3d0b476] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/semianalytical/dsst/DSSTPropagator;");
            mids$[mid_copy_39e7c31de2b3474f] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/DSSTPropagatorBuilder;");
            mids$[mid_getAllForceModels_a6156df500549a58] = env->getMethodID(cls, "getAllForceModels", "()Ljava/util/List;");
            mids$[mid_getIntegratorBuilder_0a8021b0a6e4c616] = env->getMethodID(cls, "getIntegratorBuilder", "()Lorg/orekit/propagation/conversion/ODEIntegratorBuilder;");
            mids$[mid_getMass_456d9a2f64d6b28d] = env->getMethodID(cls, "getMass", "()D");
            mids$[mid_getPropagationType_cb6f177f3e3f8613] = env->getMethodID(cls, "getPropagationType", "()Lorg/orekit/propagation/PropagationType;");
            mids$[mid_getStateType_cb6f177f3e3f8613] = env->getMethodID(cls, "getStateType", "()Lorg/orekit/propagation/PropagationType;");
            mids$[mid_resetOrbit_730ccdf0a47896e3] = env->getMethodID(cls, "resetOrbit", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_setMass_77e0f9a1f260e2e5] = env->getMethodID(cls, "setMass", "(D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DSSTPropagatorBuilder::DSSTPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::conversion::ODEIntegratorBuilder & a1, jdouble a2, const ::org::orekit::propagation::PropagationType & a3, const ::org::orekit::propagation::PropagationType & a4) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_721a71466591879d, a0.this$, a1.this$, a2, a3.this$, a4.this$)) {}

        DSSTPropagatorBuilder::DSSTPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::conversion::ODEIntegratorBuilder & a1, jdouble a2, const ::org::orekit::propagation::PropagationType & a3, const ::org::orekit::propagation::PropagationType & a4, const ::org::orekit::attitudes::AttitudeProvider & a5) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_3ce276d088f69fd4, a0.this$, a1.this$, a2, a3.this$, a4.this$, a5.this$)) {}

        void DSSTPropagatorBuilder::addForceModel(const ::org::orekit::propagation::semianalytical::dsst::forces::DSSTForceModel & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addForceModel_868bb92ba9b91af7], a0.this$);
        }

        ::org::orekit::estimation::leastsquares::DSSTBatchLSModel DSSTPropagatorBuilder::buildLeastSquaresModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) const
        {
          return ::org::orekit::estimation::leastsquares::DSSTBatchLSModel(env->callObjectMethod(this$, mids$[mid_buildLeastSquaresModel_97549aab335354c0], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator DSSTPropagatorBuilder::buildPropagator(const JArray< jdouble > & a0) const
        {
          return ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator(env->callObjectMethod(this$, mids$[mid_buildPropagator_45be81d8f3d0b476], a0.this$));
        }

        DSSTPropagatorBuilder DSSTPropagatorBuilder::copy() const
        {
          return DSSTPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_copy_39e7c31de2b3474f]));
        }

        ::java::util::List DSSTPropagatorBuilder::getAllForceModels() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAllForceModels_a6156df500549a58]));
        }

        ::org::orekit::propagation::conversion::ODEIntegratorBuilder DSSTPropagatorBuilder::getIntegratorBuilder() const
        {
          return ::org::orekit::propagation::conversion::ODEIntegratorBuilder(env->callObjectMethod(this$, mids$[mid_getIntegratorBuilder_0a8021b0a6e4c616]));
        }

        jdouble DSSTPropagatorBuilder::getMass() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMass_456d9a2f64d6b28d]);
        }

        ::org::orekit::propagation::PropagationType DSSTPropagatorBuilder::getPropagationType() const
        {
          return ::org::orekit::propagation::PropagationType(env->callObjectMethod(this$, mids$[mid_getPropagationType_cb6f177f3e3f8613]));
        }

        ::org::orekit::propagation::PropagationType DSSTPropagatorBuilder::getStateType() const
        {
          return ::org::orekit::propagation::PropagationType(env->callObjectMethod(this$, mids$[mid_getStateType_cb6f177f3e3f8613]));
        }

        void DSSTPropagatorBuilder::resetOrbit(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::PropagationType & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_resetOrbit_730ccdf0a47896e3], a0.this$, a1.this$);
        }

        void DSSTPropagatorBuilder::setMass(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMass_77e0f9a1f260e2e5], a0);
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
        static PyObject *t_DSSTPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DSSTPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DSSTPropagatorBuilder_init_(t_DSSTPropagatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DSSTPropagatorBuilder_addForceModel(t_DSSTPropagatorBuilder *self, PyObject *arg);
        static PyObject *t_DSSTPropagatorBuilder_buildLeastSquaresModel(t_DSSTPropagatorBuilder *self, PyObject *args);
        static PyObject *t_DSSTPropagatorBuilder_buildPropagator(t_DSSTPropagatorBuilder *self, PyObject *args);
        static PyObject *t_DSSTPropagatorBuilder_copy(t_DSSTPropagatorBuilder *self, PyObject *args);
        static PyObject *t_DSSTPropagatorBuilder_getAllForceModels(t_DSSTPropagatorBuilder *self);
        static PyObject *t_DSSTPropagatorBuilder_getIntegratorBuilder(t_DSSTPropagatorBuilder *self);
        static PyObject *t_DSSTPropagatorBuilder_getMass(t_DSSTPropagatorBuilder *self);
        static PyObject *t_DSSTPropagatorBuilder_getPropagationType(t_DSSTPropagatorBuilder *self);
        static PyObject *t_DSSTPropagatorBuilder_getStateType(t_DSSTPropagatorBuilder *self);
        static PyObject *t_DSSTPropagatorBuilder_resetOrbit(t_DSSTPropagatorBuilder *self, PyObject *args);
        static PyObject *t_DSSTPropagatorBuilder_setMass(t_DSSTPropagatorBuilder *self, PyObject *arg);
        static PyObject *t_DSSTPropagatorBuilder_get__allForceModels(t_DSSTPropagatorBuilder *self, void *data);
        static PyObject *t_DSSTPropagatorBuilder_get__integratorBuilder(t_DSSTPropagatorBuilder *self, void *data);
        static PyObject *t_DSSTPropagatorBuilder_get__mass(t_DSSTPropagatorBuilder *self, void *data);
        static int t_DSSTPropagatorBuilder_set__mass(t_DSSTPropagatorBuilder *self, PyObject *arg, void *data);
        static PyObject *t_DSSTPropagatorBuilder_get__propagationType(t_DSSTPropagatorBuilder *self, void *data);
        static PyObject *t_DSSTPropagatorBuilder_get__stateType(t_DSSTPropagatorBuilder *self, void *data);
        static PyGetSetDef t_DSSTPropagatorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_DSSTPropagatorBuilder, allForceModels),
          DECLARE_GET_FIELD(t_DSSTPropagatorBuilder, integratorBuilder),
          DECLARE_GETSET_FIELD(t_DSSTPropagatorBuilder, mass),
          DECLARE_GET_FIELD(t_DSSTPropagatorBuilder, propagationType),
          DECLARE_GET_FIELD(t_DSSTPropagatorBuilder, stateType),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DSSTPropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_DSSTPropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, addForceModel, METH_O),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, buildLeastSquaresModel, METH_VARARGS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, buildPropagator, METH_VARARGS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, copy, METH_VARARGS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, getAllForceModels, METH_NOARGS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, getIntegratorBuilder, METH_NOARGS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, getMass, METH_NOARGS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, getPropagationType, METH_NOARGS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, getStateType, METH_NOARGS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, resetOrbit, METH_VARARGS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, setMass, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DSSTPropagatorBuilder)[] = {
          { Py_tp_methods, t_DSSTPropagatorBuilder__methods_ },
          { Py_tp_init, (void *) t_DSSTPropagatorBuilder_init_ },
          { Py_tp_getset, t_DSSTPropagatorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DSSTPropagatorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorBuilder),
          NULL
        };

        DEFINE_TYPE(DSSTPropagatorBuilder, t_DSSTPropagatorBuilder, DSSTPropagatorBuilder);

        void t_DSSTPropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(DSSTPropagatorBuilder), &PY_TYPE_DEF(DSSTPropagatorBuilder), module, "DSSTPropagatorBuilder", 0);
        }

        void t_DSSTPropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTPropagatorBuilder), "class_", make_descriptor(DSSTPropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTPropagatorBuilder), "wrapfn_", make_descriptor(t_DSSTPropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DSSTPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DSSTPropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_DSSTPropagatorBuilder::wrap_Object(DSSTPropagatorBuilder(((t_DSSTPropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_DSSTPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DSSTPropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DSSTPropagatorBuilder_init_(t_DSSTPropagatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::propagation::conversion::ODEIntegratorBuilder a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::propagation::PropagationType a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::propagation::PropagationType a4((jobject) NULL);
              PyTypeObject **p4;
              DSSTPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kkDKK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::conversion::ODEIntegratorBuilder::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::propagation::t_PropagationType::parameters_, &a4, &p4, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                INT_CALL(object = DSSTPropagatorBuilder(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            goto err;
           case 6:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::propagation::conversion::ODEIntegratorBuilder a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::propagation::PropagationType a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::propagation::PropagationType a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::orekit::attitudes::AttitudeProvider a5((jobject) NULL);
              DSSTPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kkDKKk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::conversion::ODEIntegratorBuilder::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::propagation::t_PropagationType::parameters_, &a4, &p4, ::org::orekit::propagation::t_PropagationType::parameters_, &a5))
              {
                INT_CALL(object = DSSTPropagatorBuilder(a0, a1, a2, a3, a4, a5));
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

        static PyObject *t_DSSTPropagatorBuilder_addForceModel(t_DSSTPropagatorBuilder *self, PyObject *arg)
        {
          ::org::orekit::propagation::semianalytical::dsst::forces::DSSTForceModel a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::semianalytical::dsst::forces::DSSTForceModel::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addForceModel(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addForceModel", arg);
          return NULL;
        }

        static PyObject *t_DSSTPropagatorBuilder_buildLeastSquaresModel(t_DSSTPropagatorBuilder *self, PyObject *args)
        {
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::leastsquares::ModelObserver a3((jobject) NULL);
          ::org::orekit::estimation::leastsquares::DSSTBatchLSModel result((jobject) NULL);

          if (!parseArgs(args, "[kKkk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::leastsquares::ModelObserver::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
          {
            OBJ_CALL(result = self->object.buildLeastSquaresModel(a0, a1, a2, a3));
            return ::org::orekit::estimation::leastsquares::t_DSSTBatchLSModel::wrap_Object(result);
          }

          return callSuper(PY_TYPE(DSSTPropagatorBuilder), (PyObject *) self, "buildLeastSquaresModel", args, 2);
        }

        static PyObject *t_DSSTPropagatorBuilder_buildPropagator(t_DSSTPropagatorBuilder *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.buildPropagator(a0));
            return ::org::orekit::propagation::semianalytical::dsst::t_DSSTPropagator::wrap_Object(result);
          }

          return callSuper(PY_TYPE(DSSTPropagatorBuilder), (PyObject *) self, "buildPropagator", args, 2);
        }

        static PyObject *t_DSSTPropagatorBuilder_copy(t_DSSTPropagatorBuilder *self, PyObject *args)
        {
          DSSTPropagatorBuilder result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.copy());
            return t_DSSTPropagatorBuilder::wrap_Object(result);
          }

          return callSuper(PY_TYPE(DSSTPropagatorBuilder), (PyObject *) self, "copy", args, 2);
        }

        static PyObject *t_DSSTPropagatorBuilder_getAllForceModels(t_DSSTPropagatorBuilder *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getAllForceModels());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::semianalytical::dsst::forces::PY_TYPE(DSSTForceModel));
        }

        static PyObject *t_DSSTPropagatorBuilder_getIntegratorBuilder(t_DSSTPropagatorBuilder *self)
        {
          ::org::orekit::propagation::conversion::ODEIntegratorBuilder result((jobject) NULL);
          OBJ_CALL(result = self->object.getIntegratorBuilder());
          return ::org::orekit::propagation::conversion::t_ODEIntegratorBuilder::wrap_Object(result);
        }

        static PyObject *t_DSSTPropagatorBuilder_getMass(t_DSSTPropagatorBuilder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMass());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DSSTPropagatorBuilder_getPropagationType(t_DSSTPropagatorBuilder *self)
        {
          ::org::orekit::propagation::PropagationType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPropagationType());
          return ::org::orekit::propagation::t_PropagationType::wrap_Object(result);
        }

        static PyObject *t_DSSTPropagatorBuilder_getStateType(t_DSSTPropagatorBuilder *self)
        {
          ::org::orekit::propagation::PropagationType result((jobject) NULL);
          OBJ_CALL(result = self->object.getStateType());
          return ::org::orekit::propagation::t_PropagationType::wrap_Object(result);
        }

        static PyObject *t_DSSTPropagatorBuilder_resetOrbit(t_DSSTPropagatorBuilder *self, PyObject *args)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);
          ::org::orekit::propagation::PropagationType a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "kK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_))
          {
            OBJ_CALL(self->object.resetOrbit(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(DSSTPropagatorBuilder), (PyObject *) self, "resetOrbit", args, 2);
        }

        static PyObject *t_DSSTPropagatorBuilder_setMass(t_DSSTPropagatorBuilder *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setMass(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMass", arg);
          return NULL;
        }

        static PyObject *t_DSSTPropagatorBuilder_get__allForceModels(t_DSSTPropagatorBuilder *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getAllForceModels());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_DSSTPropagatorBuilder_get__integratorBuilder(t_DSSTPropagatorBuilder *self, void *data)
        {
          ::org::orekit::propagation::conversion::ODEIntegratorBuilder value((jobject) NULL);
          OBJ_CALL(value = self->object.getIntegratorBuilder());
          return ::org::orekit::propagation::conversion::t_ODEIntegratorBuilder::wrap_Object(value);
        }

        static PyObject *t_DSSTPropagatorBuilder_get__mass(t_DSSTPropagatorBuilder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMass());
          return PyFloat_FromDouble((double) value);
        }
        static int t_DSSTPropagatorBuilder_set__mass(t_DSSTPropagatorBuilder *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setMass(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "mass", arg);
          return -1;
        }

        static PyObject *t_DSSTPropagatorBuilder_get__propagationType(t_DSSTPropagatorBuilder *self, void *data)
        {
          ::org::orekit::propagation::PropagationType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagationType());
          return ::org::orekit::propagation::t_PropagationType::wrap_Object(value);
        }

        static PyObject *t_DSSTPropagatorBuilder_get__stateType(t_DSSTPropagatorBuilder *self, void *data)
        {
          ::org::orekit::propagation::PropagationType value((jobject) NULL);
          OBJ_CALL(value = self->object.getStateType());
          return ::org::orekit::propagation::t_PropagationType::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/CelestialBodyFactory.h"
#include "org/orekit/bodies/CelestialBodyLoader.h"
#include "org/orekit/bodies/LazyLoadedCelestialBodies.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *CelestialBodyFactory::class$ = NULL;
      jmethodID *CelestialBodyFactory::mids$ = NULL;
      bool CelestialBodyFactory::live$ = false;
      ::java::lang::String *CelestialBodyFactory::EARTH = NULL;
      ::java::lang::String *CelestialBodyFactory::EARTH_MOON = NULL;
      ::java::lang::String *CelestialBodyFactory::JUPITER = NULL;
      ::java::lang::String *CelestialBodyFactory::MARS = NULL;
      ::java::lang::String *CelestialBodyFactory::MERCURY = NULL;
      ::java::lang::String *CelestialBodyFactory::MOON = NULL;
      ::java::lang::String *CelestialBodyFactory::NEPTUNE = NULL;
      ::java::lang::String *CelestialBodyFactory::PLUTO = NULL;
      ::java::lang::String *CelestialBodyFactory::SATURN = NULL;
      ::java::lang::String *CelestialBodyFactory::SOLAR_SYSTEM_BARYCENTER = NULL;
      ::java::lang::String *CelestialBodyFactory::SUN = NULL;
      ::java::lang::String *CelestialBodyFactory::URANUS = NULL;
      ::java::lang::String *CelestialBodyFactory::VENUS = NULL;

      jclass CelestialBodyFactory::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/CelestialBodyFactory");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addCelestialBodyLoader_6d7aad336ec9f802] = env->getStaticMethodID(cls, "addCelestialBodyLoader", "(Ljava/lang/String;Lorg/orekit/bodies/CelestialBodyLoader;)V");
          mids$[mid_addDefaultCelestialBodyLoader_e939c6558ae8d313] = env->getStaticMethodID(cls, "addDefaultCelestialBodyLoader", "(Ljava/lang/String;)V");
          mids$[mid_addDefaultCelestialBodyLoader_96073c87872b7a97] = env->getStaticMethodID(cls, "addDefaultCelestialBodyLoader", "(Ljava/lang/String;Ljava/lang/String;)V");
          mids$[mid_clearCelestialBodyCache_7ae3461a92a43152] = env->getStaticMethodID(cls, "clearCelestialBodyCache", "()V");
          mids$[mid_clearCelestialBodyCache_e939c6558ae8d313] = env->getStaticMethodID(cls, "clearCelestialBodyCache", "(Ljava/lang/String;)V");
          mids$[mid_clearCelestialBodyLoaders_7ae3461a92a43152] = env->getStaticMethodID(cls, "clearCelestialBodyLoaders", "()V");
          mids$[mid_clearCelestialBodyLoaders_e939c6558ae8d313] = env->getStaticMethodID(cls, "clearCelestialBodyLoaders", "(Ljava/lang/String;)V");
          mids$[mid_getBody_29f199e59c05cc68] = env->getStaticMethodID(cls, "getBody", "(Ljava/lang/String;)Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getCelestialBodies_f685d2a163f9f12b] = env->getStaticMethodID(cls, "getCelestialBodies", "()Lorg/orekit/bodies/LazyLoadedCelestialBodies;");
          mids$[mid_getEarth_798caa59db6076aa] = env->getStaticMethodID(cls, "getEarth", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getEarthMoonBarycenter_798caa59db6076aa] = env->getStaticMethodID(cls, "getEarthMoonBarycenter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getJupiter_798caa59db6076aa] = env->getStaticMethodID(cls, "getJupiter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMars_798caa59db6076aa] = env->getStaticMethodID(cls, "getMars", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMercury_798caa59db6076aa] = env->getStaticMethodID(cls, "getMercury", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMoon_798caa59db6076aa] = env->getStaticMethodID(cls, "getMoon", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getNeptune_798caa59db6076aa] = env->getStaticMethodID(cls, "getNeptune", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getPluto_798caa59db6076aa] = env->getStaticMethodID(cls, "getPluto", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSaturn_798caa59db6076aa] = env->getStaticMethodID(cls, "getSaturn", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSolarSystemBarycenter_798caa59db6076aa] = env->getStaticMethodID(cls, "getSolarSystemBarycenter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSun_798caa59db6076aa] = env->getStaticMethodID(cls, "getSun", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getUranus_798caa59db6076aa] = env->getStaticMethodID(cls, "getUranus", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getVenus_798caa59db6076aa] = env->getStaticMethodID(cls, "getVenus", "()Lorg/orekit/bodies/CelestialBody;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          EARTH = new ::java::lang::String(env->getStaticObjectField(cls, "EARTH", "Ljava/lang/String;"));
          EARTH_MOON = new ::java::lang::String(env->getStaticObjectField(cls, "EARTH_MOON", "Ljava/lang/String;"));
          JUPITER = new ::java::lang::String(env->getStaticObjectField(cls, "JUPITER", "Ljava/lang/String;"));
          MARS = new ::java::lang::String(env->getStaticObjectField(cls, "MARS", "Ljava/lang/String;"));
          MERCURY = new ::java::lang::String(env->getStaticObjectField(cls, "MERCURY", "Ljava/lang/String;"));
          MOON = new ::java::lang::String(env->getStaticObjectField(cls, "MOON", "Ljava/lang/String;"));
          NEPTUNE = new ::java::lang::String(env->getStaticObjectField(cls, "NEPTUNE", "Ljava/lang/String;"));
          PLUTO = new ::java::lang::String(env->getStaticObjectField(cls, "PLUTO", "Ljava/lang/String;"));
          SATURN = new ::java::lang::String(env->getStaticObjectField(cls, "SATURN", "Ljava/lang/String;"));
          SOLAR_SYSTEM_BARYCENTER = new ::java::lang::String(env->getStaticObjectField(cls, "SOLAR_SYSTEM_BARYCENTER", "Ljava/lang/String;"));
          SUN = new ::java::lang::String(env->getStaticObjectField(cls, "SUN", "Ljava/lang/String;"));
          URANUS = new ::java::lang::String(env->getStaticObjectField(cls, "URANUS", "Ljava/lang/String;"));
          VENUS = new ::java::lang::String(env->getStaticObjectField(cls, "VENUS", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void CelestialBodyFactory::addCelestialBodyLoader(const ::java::lang::String & a0, const ::org::orekit::bodies::CelestialBodyLoader & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_addCelestialBodyLoader_6d7aad336ec9f802], a0.this$, a1.this$);
      }

      void CelestialBodyFactory::addDefaultCelestialBodyLoader(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_addDefaultCelestialBodyLoader_e939c6558ae8d313], a0.this$);
      }

      void CelestialBodyFactory::addDefaultCelestialBodyLoader(const ::java::lang::String & a0, const ::java::lang::String & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_addDefaultCelestialBodyLoader_96073c87872b7a97], a0.this$, a1.this$);
      }

      void CelestialBodyFactory::clearCelestialBodyCache()
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_clearCelestialBodyCache_7ae3461a92a43152]);
      }

      void CelestialBodyFactory::clearCelestialBodyCache(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_clearCelestialBodyCache_e939c6558ae8d313], a0.this$);
      }

      void CelestialBodyFactory::clearCelestialBodyLoaders()
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_clearCelestialBodyLoaders_7ae3461a92a43152]);
      }

      void CelestialBodyFactory::clearCelestialBodyLoaders(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_clearCelestialBodyLoaders_e939c6558ae8d313], a0.this$);
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getBody(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getBody_29f199e59c05cc68], a0.this$));
      }

      ::org::orekit::bodies::LazyLoadedCelestialBodies CelestialBodyFactory::getCelestialBodies()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::LazyLoadedCelestialBodies(env->callStaticObjectMethod(cls, mids$[mid_getCelestialBodies_f685d2a163f9f12b]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getEarth()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getEarth_798caa59db6076aa]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getEarthMoonBarycenter()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getEarthMoonBarycenter_798caa59db6076aa]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getJupiter()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getJupiter_798caa59db6076aa]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getMars()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getMars_798caa59db6076aa]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getMercury()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getMercury_798caa59db6076aa]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getMoon()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getMoon_798caa59db6076aa]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getNeptune()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getNeptune_798caa59db6076aa]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getPluto()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getPluto_798caa59db6076aa]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getSaturn()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getSaturn_798caa59db6076aa]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getSolarSystemBarycenter()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getSolarSystemBarycenter_798caa59db6076aa]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getSun()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getSun_798caa59db6076aa]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getUranus()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getUranus_798caa59db6076aa]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getVenus()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getVenus_798caa59db6076aa]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace bodies {
      static PyObject *t_CelestialBodyFactory_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CelestialBodyFactory_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CelestialBodyFactory_addCelestialBodyLoader(PyTypeObject *type, PyObject *args);
      static PyObject *t_CelestialBodyFactory_addDefaultCelestialBodyLoader(PyTypeObject *type, PyObject *args);
      static PyObject *t_CelestialBodyFactory_clearCelestialBodyCache(PyTypeObject *type, PyObject *args);
      static PyObject *t_CelestialBodyFactory_clearCelestialBodyLoaders(PyTypeObject *type, PyObject *args);
      static PyObject *t_CelestialBodyFactory_getBody(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CelestialBodyFactory_getCelestialBodies(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getEarth(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getEarthMoonBarycenter(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getJupiter(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getMars(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getMercury(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getMoon(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getNeptune(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getPluto(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getSaturn(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getSolarSystemBarycenter(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getSun(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getUranus(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getVenus(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_get__celestialBodies(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__earth(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__earthMoonBarycenter(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__jupiter(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__mars(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__mercury(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__moon(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__neptune(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__pluto(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__saturn(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__solarSystemBarycenter(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__sun(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__uranus(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__venus(t_CelestialBodyFactory *self, void *data);
      static PyGetSetDef t_CelestialBodyFactory__fields_[] = {
        DECLARE_GET_FIELD(t_CelestialBodyFactory, celestialBodies),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, earth),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, earthMoonBarycenter),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, jupiter),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, mars),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, mercury),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, moon),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, neptune),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, pluto),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, saturn),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, solarSystemBarycenter),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, sun),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, uranus),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, venus),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CelestialBodyFactory__methods_[] = {
        DECLARE_METHOD(t_CelestialBodyFactory, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, addCelestialBodyLoader, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, addDefaultCelestialBodyLoader, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, clearCelestialBodyCache, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, clearCelestialBodyLoaders, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getBody, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getCelestialBodies, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getEarth, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getEarthMoonBarycenter, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getJupiter, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getMars, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getMercury, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getMoon, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getNeptune, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getPluto, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getSaturn, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getSolarSystemBarycenter, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getSun, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getUranus, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getVenus, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CelestialBodyFactory)[] = {
        { Py_tp_methods, t_CelestialBodyFactory__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CelestialBodyFactory__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CelestialBodyFactory)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CelestialBodyFactory, t_CelestialBodyFactory, CelestialBodyFactory);

      void t_CelestialBodyFactory::install(PyObject *module)
      {
        installType(&PY_TYPE(CelestialBodyFactory), &PY_TYPE_DEF(CelestialBodyFactory), module, "CelestialBodyFactory", 0);
      }

      void t_CelestialBodyFactory::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "class_", make_descriptor(CelestialBodyFactory::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "wrapfn_", make_descriptor(t_CelestialBodyFactory::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "boxfn_", make_descriptor(boxObject));
        env->getClass(CelestialBodyFactory::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "EARTH", make_descriptor(j2p(*CelestialBodyFactory::EARTH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "EARTH_MOON", make_descriptor(j2p(*CelestialBodyFactory::EARTH_MOON)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "JUPITER", make_descriptor(j2p(*CelestialBodyFactory::JUPITER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "MARS", make_descriptor(j2p(*CelestialBodyFactory::MARS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "MERCURY", make_descriptor(j2p(*CelestialBodyFactory::MERCURY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "MOON", make_descriptor(j2p(*CelestialBodyFactory::MOON)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "NEPTUNE", make_descriptor(j2p(*CelestialBodyFactory::NEPTUNE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "PLUTO", make_descriptor(j2p(*CelestialBodyFactory::PLUTO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "SATURN", make_descriptor(j2p(*CelestialBodyFactory::SATURN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "SOLAR_SYSTEM_BARYCENTER", make_descriptor(j2p(*CelestialBodyFactory::SOLAR_SYSTEM_BARYCENTER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "SUN", make_descriptor(j2p(*CelestialBodyFactory::SUN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "URANUS", make_descriptor(j2p(*CelestialBodyFactory::URANUS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "VENUS", make_descriptor(j2p(*CelestialBodyFactory::VENUS)));
      }

      static PyObject *t_CelestialBodyFactory_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CelestialBodyFactory::initializeClass, 1)))
          return NULL;
        return t_CelestialBodyFactory::wrap_Object(CelestialBodyFactory(((t_CelestialBodyFactory *) arg)->object.this$));
      }
      static PyObject *t_CelestialBodyFactory_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CelestialBodyFactory::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CelestialBodyFactory_addCelestialBodyLoader(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBodyLoader a1((jobject) NULL);

        if (!parseArgs(args, "sk", ::org::orekit::bodies::CelestialBodyLoader::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::orekit::bodies::CelestialBodyFactory::addCelestialBodyLoader(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "addCelestialBodyLoader", args);
        return NULL;
      }

      static PyObject *t_CelestialBodyFactory_addDefaultCelestialBodyLoader(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(::org::orekit::bodies::CelestialBodyFactory::addDefaultCelestialBodyLoader(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ss", &a0, &a1))
            {
              OBJ_CALL(::org::orekit::bodies::CelestialBodyFactory::addDefaultCelestialBodyLoader(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "addDefaultCelestialBodyLoader", args);
        return NULL;
      }

      static PyObject *t_CelestialBodyFactory_clearCelestialBodyCache(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            OBJ_CALL(::org::orekit::bodies::CelestialBodyFactory::clearCelestialBodyCache());
            Py_RETURN_NONE;
          }
          break;
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(::org::orekit::bodies::CelestialBodyFactory::clearCelestialBodyCache(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "clearCelestialBodyCache", args);
        return NULL;
      }

      static PyObject *t_CelestialBodyFactory_clearCelestialBodyLoaders(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            OBJ_CALL(::org::orekit::bodies::CelestialBodyFactory::clearCelestialBodyLoaders());
            Py_RETURN_NONE;
          }
          break;
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(::org::orekit::bodies::CelestialBodyFactory::clearCelestialBodyLoaders(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "clearCelestialBodyLoaders", args);
        return NULL;
      }

      static PyObject *t_CelestialBodyFactory_getBody(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getBody(a0));
          return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getBody", arg);
        return NULL;
      }

      static PyObject *t_CelestialBodyFactory_getCelestialBodies(PyTypeObject *type)
      {
        ::org::orekit::bodies::LazyLoadedCelestialBodies result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getCelestialBodies());
        return ::org::orekit::bodies::t_LazyLoadedCelestialBodies::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getEarth(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getEarth());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getEarthMoonBarycenter(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getEarthMoonBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getJupiter(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getJupiter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getMars(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getMars());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getMercury(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getMercury());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getMoon(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getMoon());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getNeptune(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getNeptune());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getPluto(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getPluto());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getSaturn(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getSaturn());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getSolarSystemBarycenter(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getSolarSystemBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getSun(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getSun());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getUranus(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getUranus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getVenus(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getVenus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_get__celestialBodies(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::LazyLoadedCelestialBodies value((jobject) NULL);
        OBJ_CALL(value = self->object.getCelestialBodies());
        return ::org::orekit::bodies::t_LazyLoadedCelestialBodies::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__earth(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarth());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__earthMoonBarycenter(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarthMoonBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__jupiter(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getJupiter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__mars(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getMars());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__mercury(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getMercury());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__moon(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getMoon());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__neptune(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getNeptune());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__pluto(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getPluto());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__saturn(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSaturn());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__solarSystemBarycenter(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolarSystemBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__sun(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSun());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__uranus(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getUranus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__venus(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getVenus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {

        ::java::lang::Class *AlgorithmId::class$ = NULL;
        jmethodID *AlgorithmId::mids$ = NULL;
        bool AlgorithmId::live$ = false;
        AlgorithmId *AlgorithmId::BASIC_SLOW_EXHAUSTIVE_SCAN_FOR_TESTS_ONLY = NULL;
        AlgorithmId *AlgorithmId::CONSTANT_ELEVATION_OVER_ELLIPSOID = NULL;
        AlgorithmId *AlgorithmId::DUVENHAGE = NULL;
        AlgorithmId *AlgorithmId::DUVENHAGE_FLAT_BODY = NULL;
        AlgorithmId *AlgorithmId::IGNORE_DEM_USE_ELLIPSOID = NULL;

        jclass AlgorithmId::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/api/AlgorithmId");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_c1f6e6651cab9726] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/rugged/api/AlgorithmId;");
            mids$[mid_values_786683000205d5bb] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/rugged/api/AlgorithmId;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            BASIC_SLOW_EXHAUSTIVE_SCAN_FOR_TESTS_ONLY = new AlgorithmId(env->getStaticObjectField(cls, "BASIC_SLOW_EXHAUSTIVE_SCAN_FOR_TESTS_ONLY", "Lorg/orekit/rugged/api/AlgorithmId;"));
            CONSTANT_ELEVATION_OVER_ELLIPSOID = new AlgorithmId(env->getStaticObjectField(cls, "CONSTANT_ELEVATION_OVER_ELLIPSOID", "Lorg/orekit/rugged/api/AlgorithmId;"));
            DUVENHAGE = new AlgorithmId(env->getStaticObjectField(cls, "DUVENHAGE", "Lorg/orekit/rugged/api/AlgorithmId;"));
            DUVENHAGE_FLAT_BODY = new AlgorithmId(env->getStaticObjectField(cls, "DUVENHAGE_FLAT_BODY", "Lorg/orekit/rugged/api/AlgorithmId;"));
            IGNORE_DEM_USE_ELLIPSOID = new AlgorithmId(env->getStaticObjectField(cls, "IGNORE_DEM_USE_ELLIPSOID", "Lorg/orekit/rugged/api/AlgorithmId;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AlgorithmId AlgorithmId::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return AlgorithmId(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c1f6e6651cab9726], a0.this$));
        }

        JArray< AlgorithmId > AlgorithmId::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< AlgorithmId >(env->callStaticObjectMethod(cls, mids$[mid_values_786683000205d5bb]));
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
    namespace rugged {
      namespace api {
        static PyObject *t_AlgorithmId_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AlgorithmId_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AlgorithmId_of_(t_AlgorithmId *self, PyObject *args);
        static PyObject *t_AlgorithmId_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_AlgorithmId_values(PyTypeObject *type);
        static PyObject *t_AlgorithmId_get__parameters_(t_AlgorithmId *self, void *data);
        static PyGetSetDef t_AlgorithmId__fields_[] = {
          DECLARE_GET_FIELD(t_AlgorithmId, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AlgorithmId__methods_[] = {
          DECLARE_METHOD(t_AlgorithmId, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AlgorithmId, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AlgorithmId, of_, METH_VARARGS),
          DECLARE_METHOD(t_AlgorithmId, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_AlgorithmId, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AlgorithmId)[] = {
          { Py_tp_methods, t_AlgorithmId__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AlgorithmId__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AlgorithmId)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(AlgorithmId, t_AlgorithmId, AlgorithmId);
        PyObject *t_AlgorithmId::wrap_Object(const AlgorithmId& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AlgorithmId::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AlgorithmId *self = (t_AlgorithmId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AlgorithmId::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AlgorithmId::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AlgorithmId *self = (t_AlgorithmId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AlgorithmId::install(PyObject *module)
        {
          installType(&PY_TYPE(AlgorithmId), &PY_TYPE_DEF(AlgorithmId), module, "AlgorithmId", 0);
        }

        void t_AlgorithmId::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlgorithmId), "class_", make_descriptor(AlgorithmId::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlgorithmId), "wrapfn_", make_descriptor(t_AlgorithmId::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlgorithmId), "boxfn_", make_descriptor(boxObject));
          env->getClass(AlgorithmId::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlgorithmId), "BASIC_SLOW_EXHAUSTIVE_SCAN_FOR_TESTS_ONLY", make_descriptor(t_AlgorithmId::wrap_Object(*AlgorithmId::BASIC_SLOW_EXHAUSTIVE_SCAN_FOR_TESTS_ONLY)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlgorithmId), "CONSTANT_ELEVATION_OVER_ELLIPSOID", make_descriptor(t_AlgorithmId::wrap_Object(*AlgorithmId::CONSTANT_ELEVATION_OVER_ELLIPSOID)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlgorithmId), "DUVENHAGE", make_descriptor(t_AlgorithmId::wrap_Object(*AlgorithmId::DUVENHAGE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlgorithmId), "DUVENHAGE_FLAT_BODY", make_descriptor(t_AlgorithmId::wrap_Object(*AlgorithmId::DUVENHAGE_FLAT_BODY)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlgorithmId), "IGNORE_DEM_USE_ELLIPSOID", make_descriptor(t_AlgorithmId::wrap_Object(*AlgorithmId::IGNORE_DEM_USE_ELLIPSOID)));
        }

        static PyObject *t_AlgorithmId_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AlgorithmId::initializeClass, 1)))
            return NULL;
          return t_AlgorithmId::wrap_Object(AlgorithmId(((t_AlgorithmId *) arg)->object.this$));
        }
        static PyObject *t_AlgorithmId_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AlgorithmId::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AlgorithmId_of_(t_AlgorithmId *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AlgorithmId_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          AlgorithmId result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::rugged::api::AlgorithmId::valueOf(a0));
            return t_AlgorithmId::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_AlgorithmId_values(PyTypeObject *type)
        {
          JArray< AlgorithmId > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::api::AlgorithmId::values());
          return JArray<jobject>(result.this$).wrap(t_AlgorithmId::wrap_jobject);
        }
        static PyObject *t_AlgorithmId_get__parameters_(t_AlgorithmId *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/PointVectorValuePair.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *PointVectorValuePair::class$ = NULL;
      jmethodID *PointVectorValuePair::mids$ = NULL;
      bool PointVectorValuePair::live$ = false;

      jclass PointVectorValuePair::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/PointVectorValuePair");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0d03c8a1d7f56f02] = env->getMethodID(cls, "<init>", "([D[D)V");
          mids$[mid_init$_85d26ec3c1274525] = env->getMethodID(cls, "<init>", "([D[DZ)V");
          mids$[mid_getPoint_7cdc325af0834901] = env->getMethodID(cls, "getPoint", "()[D");
          mids$[mid_getPointRef_7cdc325af0834901] = env->getMethodID(cls, "getPointRef", "()[D");
          mids$[mid_getValue_7cdc325af0834901] = env->getMethodID(cls, "getValue", "()[D");
          mids$[mid_getValueRef_7cdc325af0834901] = env->getMethodID(cls, "getValueRef", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PointVectorValuePair::PointVectorValuePair(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::org::hipparchus::util::Pair(env->newObject(initializeClass, &mids$, mid_init$_0d03c8a1d7f56f02, a0.this$, a1.this$)) {}

      PointVectorValuePair::PointVectorValuePair(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jboolean a2) : ::org::hipparchus::util::Pair(env->newObject(initializeClass, &mids$, mid_init$_85d26ec3c1274525, a0.this$, a1.this$, a2)) {}

      JArray< jdouble > PointVectorValuePair::getPoint() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getPoint_7cdc325af0834901]));
      }

      JArray< jdouble > PointVectorValuePair::getPointRef() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getPointRef_7cdc325af0834901]));
      }

      JArray< jdouble > PointVectorValuePair::getValue() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getValue_7cdc325af0834901]));
      }

      JArray< jdouble > PointVectorValuePair::getValueRef() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getValueRef_7cdc325af0834901]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      static PyObject *t_PointVectorValuePair_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PointVectorValuePair_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PointVectorValuePair_of_(t_PointVectorValuePair *self, PyObject *args);
      static int t_PointVectorValuePair_init_(t_PointVectorValuePair *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PointVectorValuePair_getPoint(t_PointVectorValuePair *self);
      static PyObject *t_PointVectorValuePair_getPointRef(t_PointVectorValuePair *self);
      static PyObject *t_PointVectorValuePair_getValue(t_PointVectorValuePair *self, PyObject *args);
      static PyObject *t_PointVectorValuePair_getValueRef(t_PointVectorValuePair *self);
      static PyObject *t_PointVectorValuePair_get__point(t_PointVectorValuePair *self, void *data);
      static PyObject *t_PointVectorValuePair_get__pointRef(t_PointVectorValuePair *self, void *data);
      static PyObject *t_PointVectorValuePair_get__value(t_PointVectorValuePair *self, void *data);
      static PyObject *t_PointVectorValuePair_get__valueRef(t_PointVectorValuePair *self, void *data);
      static PyObject *t_PointVectorValuePair_get__parameters_(t_PointVectorValuePair *self, void *data);
      static PyGetSetDef t_PointVectorValuePair__fields_[] = {
        DECLARE_GET_FIELD(t_PointVectorValuePair, point),
        DECLARE_GET_FIELD(t_PointVectorValuePair, pointRef),
        DECLARE_GET_FIELD(t_PointVectorValuePair, value),
        DECLARE_GET_FIELD(t_PointVectorValuePair, valueRef),
        DECLARE_GET_FIELD(t_PointVectorValuePair, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PointVectorValuePair__methods_[] = {
        DECLARE_METHOD(t_PointVectorValuePair, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PointVectorValuePair, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PointVectorValuePair, of_, METH_VARARGS),
        DECLARE_METHOD(t_PointVectorValuePair, getPoint, METH_NOARGS),
        DECLARE_METHOD(t_PointVectorValuePair, getPointRef, METH_NOARGS),
        DECLARE_METHOD(t_PointVectorValuePair, getValue, METH_VARARGS),
        DECLARE_METHOD(t_PointVectorValuePair, getValueRef, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PointVectorValuePair)[] = {
        { Py_tp_methods, t_PointVectorValuePair__methods_ },
        { Py_tp_init, (void *) t_PointVectorValuePair_init_ },
        { Py_tp_getset, t_PointVectorValuePair__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PointVectorValuePair)[] = {
        &PY_TYPE_DEF(::org::hipparchus::util::Pair),
        NULL
      };

      DEFINE_TYPE(PointVectorValuePair, t_PointVectorValuePair, PointVectorValuePair);
      PyObject *t_PointVectorValuePair::wrap_Object(const PointVectorValuePair& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PointVectorValuePair::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PointVectorValuePair *self = (t_PointVectorValuePair *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_PointVectorValuePair::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PointVectorValuePair::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PointVectorValuePair *self = (t_PointVectorValuePair *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_PointVectorValuePair::install(PyObject *module)
      {
        installType(&PY_TYPE(PointVectorValuePair), &PY_TYPE_DEF(PointVectorValuePair), module, "PointVectorValuePair", 0);
      }

      void t_PointVectorValuePair::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PointVectorValuePair), "class_", make_descriptor(PointVectorValuePair::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PointVectorValuePair), "wrapfn_", make_descriptor(t_PointVectorValuePair::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PointVectorValuePair), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PointVectorValuePair_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PointVectorValuePair::initializeClass, 1)))
          return NULL;
        return t_PointVectorValuePair::wrap_Object(PointVectorValuePair(((t_PointVectorValuePair *) arg)->object.this$));
      }
      static PyObject *t_PointVectorValuePair_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PointVectorValuePair::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PointVectorValuePair_of_(t_PointVectorValuePair *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PointVectorValuePair_init_(t_PointVectorValuePair *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            PointVectorValuePair object((jobject) NULL);

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              INT_CALL(object = PointVectorValuePair(a0, a1));
              self->object = object;
              self->parameters[0] = PY_TYPE(JArrayDouble);
              self->parameters[1] = PY_TYPE(JArrayDouble);
              break;
            }
          }
          goto err;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jboolean a2;
            PointVectorValuePair object((jobject) NULL);

            if (!parseArgs(args, "[D[DZ", &a0, &a1, &a2))
            {
              INT_CALL(object = PointVectorValuePair(a0, a1, a2));
              self->object = object;
              self->parameters[0] = PY_TYPE(JArrayDouble);
              self->parameters[1] = PY_TYPE(JArrayDouble);
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

      static PyObject *t_PointVectorValuePair_getPoint(t_PointVectorValuePair *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPoint());
        return result.wrap();
      }

      static PyObject *t_PointVectorValuePair_getPointRef(t_PointVectorValuePair *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPointRef());
        return result.wrap();
      }

      static PyObject *t_PointVectorValuePair_getValue(t_PointVectorValuePair *self, PyObject *args)
      {
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getValue());
          return result.wrap();
        }

        return callSuper(PY_TYPE(PointVectorValuePair), (PyObject *) self, "getValue", args, 2);
      }

      static PyObject *t_PointVectorValuePair_getValueRef(t_PointVectorValuePair *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getValueRef());
        return result.wrap();
      }
      static PyObject *t_PointVectorValuePair_get__parameters_(t_PointVectorValuePair *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_PointVectorValuePair_get__point(t_PointVectorValuePair *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPoint());
        return value.wrap();
      }

      static PyObject *t_PointVectorValuePair_get__pointRef(t_PointVectorValuePair *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPointRef());
        return value.wrap();
      }

      static PyObject *t_PointVectorValuePair_get__value(t_PointVectorValuePair *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getValue());
        return value.wrap();
      }

      static PyObject *t_PointVectorValuePair_get__valueRef(t_PointVectorValuePair *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getValueRef());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/complex/FieldComplexUnivariateIntegrator.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/integration/FieldUnivariateIntegrator.h"
#include "org/hipparchus/complex/FieldComplex.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *FieldComplexUnivariateIntegrator::class$ = NULL;
      jmethodID *FieldComplexUnivariateIntegrator::mids$ = NULL;
      bool FieldComplexUnivariateIntegrator::live$ = false;

      jclass FieldComplexUnivariateIntegrator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/FieldComplexUnivariateIntegrator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7b01cd591079bb05] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/integration/FieldUnivariateIntegrator;)V");
          mids$[mid_integrate_ba734aee7b0a9e23] = env->getMethodID(cls, "integrate", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/complex/FieldComplex;[Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_integrate_fd376b551cf3a026] = env->getMethodID(cls, "integrate", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldComplexUnivariateIntegrator::FieldComplexUnivariateIntegrator(const ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7b01cd591079bb05, a0.this$)) {}

      ::org::hipparchus::complex::FieldComplex FieldComplexUnivariateIntegrator::integrate(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::complex::FieldComplex & a2, const JArray< ::org::hipparchus::complex::FieldComplex > & a3) const
      {
        return ::org::hipparchus::complex::FieldComplex(env->callObjectMethod(this$, mids$[mid_integrate_ba734aee7b0a9e23], a0, a1.this$, a2.this$, a3.this$));
      }

      ::org::hipparchus::complex::FieldComplex FieldComplexUnivariateIntegrator::integrate(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::complex::FieldComplex & a2, const ::org::hipparchus::complex::FieldComplex & a3) const
      {
        return ::org::hipparchus::complex::FieldComplex(env->callObjectMethod(this$, mids$[mid_integrate_fd376b551cf3a026], a0, a1.this$, a2.this$, a3.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace complex {
      static PyObject *t_FieldComplexUnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplexUnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplexUnivariateIntegrator_of_(t_FieldComplexUnivariateIntegrator *self, PyObject *args);
      static int t_FieldComplexUnivariateIntegrator_init_(t_FieldComplexUnivariateIntegrator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldComplexUnivariateIntegrator_integrate(t_FieldComplexUnivariateIntegrator *self, PyObject *args);
      static PyObject *t_FieldComplexUnivariateIntegrator_get__parameters_(t_FieldComplexUnivariateIntegrator *self, void *data);
      static PyGetSetDef t_FieldComplexUnivariateIntegrator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldComplexUnivariateIntegrator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldComplexUnivariateIntegrator__methods_[] = {
        DECLARE_METHOD(t_FieldComplexUnivariateIntegrator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplexUnivariateIntegrator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplexUnivariateIntegrator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplexUnivariateIntegrator, integrate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldComplexUnivariateIntegrator)[] = {
        { Py_tp_methods, t_FieldComplexUnivariateIntegrator__methods_ },
        { Py_tp_init, (void *) t_FieldComplexUnivariateIntegrator_init_ },
        { Py_tp_getset, t_FieldComplexUnivariateIntegrator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldComplexUnivariateIntegrator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldComplexUnivariateIntegrator, t_FieldComplexUnivariateIntegrator, FieldComplexUnivariateIntegrator);
      PyObject *t_FieldComplexUnivariateIntegrator::wrap_Object(const FieldComplexUnivariateIntegrator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldComplexUnivariateIntegrator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldComplexUnivariateIntegrator *self = (t_FieldComplexUnivariateIntegrator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldComplexUnivariateIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldComplexUnivariateIntegrator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldComplexUnivariateIntegrator *self = (t_FieldComplexUnivariateIntegrator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldComplexUnivariateIntegrator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldComplexUnivariateIntegrator), &PY_TYPE_DEF(FieldComplexUnivariateIntegrator), module, "FieldComplexUnivariateIntegrator", 0);
      }

      void t_FieldComplexUnivariateIntegrator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldComplexUnivariateIntegrator), "class_", make_descriptor(FieldComplexUnivariateIntegrator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldComplexUnivariateIntegrator), "wrapfn_", make_descriptor(t_FieldComplexUnivariateIntegrator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldComplexUnivariateIntegrator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldComplexUnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldComplexUnivariateIntegrator::initializeClass, 1)))
          return NULL;
        return t_FieldComplexUnivariateIntegrator::wrap_Object(FieldComplexUnivariateIntegrator(((t_FieldComplexUnivariateIntegrator *) arg)->object.this$));
      }
      static PyObject *t_FieldComplexUnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldComplexUnivariateIntegrator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldComplexUnivariateIntegrator_of_(t_FieldComplexUnivariateIntegrator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldComplexUnivariateIntegrator_init_(t_FieldComplexUnivariateIntegrator *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplexUnivariateIntegrator object((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator::initializeClass, &a0, &p0, ::org::hipparchus::analysis::integration::t_FieldUnivariateIntegrator::parameters_))
        {
          INT_CALL(object = FieldComplexUnivariateIntegrator(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldComplexUnivariateIntegrator_integrate(t_FieldComplexUnivariateIntegrator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            jint a0;
            ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::complex::FieldComplex a2((jobject) NULL);
            PyTypeObject **p2;
            JArray< ::org::hipparchus::complex::FieldComplex > a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "IKK[K", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a3, &p3, ::org::hipparchus::complex::t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.integrate(a0, a1, a2, a3));
              return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jint a0;
            ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::complex::FieldComplex a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::complex::FieldComplex a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "IKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a3, &p3, ::org::hipparchus::complex::t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.integrate(a0, a1, a2, a3));
              return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "integrate", args);
        return NULL;
      }
      static PyObject *t_FieldComplexUnivariateIntegrator_get__parameters_(t_FieldComplexUnivariateIntegrator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/UnscentedKalmanModel.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/sequential/KalmanEstimation.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedProcess.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedEvolution.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/estimation/sequential/MeasurementDecorator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *UnscentedKalmanModel::class$ = NULL;
        jmethodID *UnscentedKalmanModel::mids$ = NULL;
        bool UnscentedKalmanModel::live$ = false;

        jclass UnscentedKalmanModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/UnscentedKalmanModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finalizeEstimation_7cf22bbe05cd26dc] = env->getMethodID(cls, "finalizeEstimation", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/hipparchus/filtering/kalman/ProcessEstimate;)V");
            mids$[mid_getCorrectedMeasurement_164e77faf6b1d416] = env->getMethodID(cls, "getCorrectedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getCorrectedSpacecraftStates_a4eb258dd7a1e164] = env->getMethodID(cls, "getCorrectedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getCurrentDate_aaa854c403487cf3] = env->getMethodID(cls, "getCurrentDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getCurrentMeasurementNumber_f2f64475e4580546] = env->getMethodID(cls, "getCurrentMeasurementNumber", "()I");
            mids$[mid_getEstimate_3d891496bfc9091e] = env->getMethodID(cls, "getEstimate", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
            mids$[mid_getEstimatedMeasurementsParameters_eb9e6df280c6daa0] = env->getMethodID(cls, "getEstimatedMeasurementsParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedOrbitalParameters_eb9e6df280c6daa0] = env->getMethodID(cls, "getEstimatedOrbitalParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagationParameters_eb9e6df280c6daa0] = env->getMethodID(cls, "getEstimatedPropagationParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagators_bba03978f79693ea] = env->getMethodID(cls, "getEstimatedPropagators", "()[Lorg/orekit/propagation/Propagator;");
            mids$[mid_getEvolution_09fa99e5e4cb69dd] = env->getMethodID(cls, "getEvolution", "(D[Lorg/hipparchus/linear/RealVector;Lorg/orekit/estimation/sequential/MeasurementDecorator;)Lorg/hipparchus/filtering/kalman/unscented/UnscentedEvolution;");
            mids$[mid_getInnovation_13f09da4e5cee032] = env->getMethodID(cls, "getInnovation", "(Lorg/orekit/estimation/sequential/MeasurementDecorator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPhysicalEstimatedCovarianceMatrix_7116bbecdd8ceb21] = env->getMethodID(cls, "getPhysicalEstimatedCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalEstimatedState_6d9adf1d5b463928] = env->getMethodID(cls, "getPhysicalEstimatedState", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPhysicalInnovationCovarianceMatrix_7116bbecdd8ceb21] = env->getMethodID(cls, "getPhysicalInnovationCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalKalmanGain_7116bbecdd8ceb21] = env->getMethodID(cls, "getPhysicalKalmanGain", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalMeasurementJacobian_7116bbecdd8ceb21] = env->getMethodID(cls, "getPhysicalMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalStateTransitionMatrix_7116bbecdd8ceb21] = env->getMethodID(cls, "getPhysicalStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPredictedMeasurement_164e77faf6b1d416] = env->getMethodID(cls, "getPredictedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getPredictedMeasurements_f5983387fce0dad8] = env->getMethodID(cls, "getPredictedMeasurements", "([Lorg/hipparchus/linear/RealVector;Lorg/orekit/estimation/sequential/MeasurementDecorator;)[Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPredictedSpacecraftStates_a4eb258dd7a1e164] = env->getMethodID(cls, "getPredictedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void UnscentedKalmanModel::finalizeEstimation(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::hipparchus::filtering::kalman::ProcessEstimate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_finalizeEstimation_7cf22bbe05cd26dc], a0.this$, a1.this$);
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement UnscentedKalmanModel::getCorrectedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getCorrectedMeasurement_164e77faf6b1d416]));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > UnscentedKalmanModel::getCorrectedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getCorrectedSpacecraftStates_a4eb258dd7a1e164]));
        }

        ::org::orekit::time::AbsoluteDate UnscentedKalmanModel::getCurrentDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCurrentDate_aaa854c403487cf3]));
        }

        jint UnscentedKalmanModel::getCurrentMeasurementNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getCurrentMeasurementNumber_f2f64475e4580546]);
        }

        ::org::hipparchus::filtering::kalman::ProcessEstimate UnscentedKalmanModel::getEstimate() const
        {
          return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getEstimate_3d891496bfc9091e]));
        }

        ::org::orekit::utils::ParameterDriversList UnscentedKalmanModel::getEstimatedMeasurementsParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedMeasurementsParameters_eb9e6df280c6daa0]));
        }

        ::org::orekit::utils::ParameterDriversList UnscentedKalmanModel::getEstimatedOrbitalParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedOrbitalParameters_eb9e6df280c6daa0]));
        }

        ::org::orekit::utils::ParameterDriversList UnscentedKalmanModel::getEstimatedPropagationParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedPropagationParameters_eb9e6df280c6daa0]));
        }

        JArray< ::org::orekit::propagation::Propagator > UnscentedKalmanModel::getEstimatedPropagators() const
        {
          return JArray< ::org::orekit::propagation::Propagator >(env->callObjectMethod(this$, mids$[mid_getEstimatedPropagators_bba03978f79693ea]));
        }

        ::org::hipparchus::filtering::kalman::unscented::UnscentedEvolution UnscentedKalmanModel::getEvolution(jdouble a0, const JArray< ::org::hipparchus::linear::RealVector > & a1, const ::org::orekit::estimation::sequential::MeasurementDecorator & a2) const
        {
          return ::org::hipparchus::filtering::kalman::unscented::UnscentedEvolution(env->callObjectMethod(this$, mids$[mid_getEvolution_09fa99e5e4cb69dd], a0, a1.this$, a2.this$));
        }

        ::org::hipparchus::linear::RealVector UnscentedKalmanModel::getInnovation(const ::org::orekit::estimation::sequential::MeasurementDecorator & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealMatrix & a3) const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getInnovation_13f09da4e5cee032], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::hipparchus::linear::RealMatrix UnscentedKalmanModel::getPhysicalEstimatedCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedCovarianceMatrix_7116bbecdd8ceb21]));
        }

        ::org::hipparchus::linear::RealVector UnscentedKalmanModel::getPhysicalEstimatedState() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedState_6d9adf1d5b463928]));
        }

        ::org::hipparchus::linear::RealMatrix UnscentedKalmanModel::getPhysicalInnovationCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalInnovationCovarianceMatrix_7116bbecdd8ceb21]));
        }

        ::org::hipparchus::linear::RealMatrix UnscentedKalmanModel::getPhysicalKalmanGain() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalKalmanGain_7116bbecdd8ceb21]));
        }

        ::org::hipparchus::linear::RealMatrix UnscentedKalmanModel::getPhysicalMeasurementJacobian() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalMeasurementJacobian_7116bbecdd8ceb21]));
        }

        ::org::hipparchus::linear::RealMatrix UnscentedKalmanModel::getPhysicalStateTransitionMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalStateTransitionMatrix_7116bbecdd8ceb21]));
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement UnscentedKalmanModel::getPredictedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getPredictedMeasurement_164e77faf6b1d416]));
        }

        JArray< ::org::hipparchus::linear::RealVector > UnscentedKalmanModel::getPredictedMeasurements(const JArray< ::org::hipparchus::linear::RealVector > & a0, const ::org::orekit::estimation::sequential::MeasurementDecorator & a1) const
        {
          return JArray< ::org::hipparchus::linear::RealVector >(env->callObjectMethod(this$, mids$[mid_getPredictedMeasurements_f5983387fce0dad8], a0.this$, a1.this$));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > UnscentedKalmanModel::getPredictedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getPredictedSpacecraftStates_a4eb258dd7a1e164]));
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
      namespace sequential {
        static PyObject *t_UnscentedKalmanModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnscentedKalmanModel_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnscentedKalmanModel_finalizeEstimation(t_UnscentedKalmanModel *self, PyObject *args);
        static PyObject *t_UnscentedKalmanModel_getCorrectedMeasurement(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getCorrectedSpacecraftStates(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getCurrentDate(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getCurrentMeasurementNumber(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getEstimate(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getEstimatedMeasurementsParameters(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getEstimatedOrbitalParameters(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getEstimatedPropagationParameters(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getEstimatedPropagators(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getEvolution(t_UnscentedKalmanModel *self, PyObject *args);
        static PyObject *t_UnscentedKalmanModel_getInnovation(t_UnscentedKalmanModel *self, PyObject *args);
        static PyObject *t_UnscentedKalmanModel_getPhysicalEstimatedCovarianceMatrix(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getPhysicalEstimatedState(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getPhysicalInnovationCovarianceMatrix(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getPhysicalKalmanGain(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getPhysicalMeasurementJacobian(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getPhysicalStateTransitionMatrix(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getPredictedMeasurement(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getPredictedMeasurements(t_UnscentedKalmanModel *self, PyObject *args);
        static PyObject *t_UnscentedKalmanModel_getPredictedSpacecraftStates(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_get__correctedMeasurement(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__correctedSpacecraftStates(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__currentDate(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__currentMeasurementNumber(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__estimate(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__estimatedMeasurementsParameters(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__estimatedOrbitalParameters(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__estimatedPropagationParameters(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__estimatedPropagators(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__physicalEstimatedCovarianceMatrix(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__physicalEstimatedState(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__physicalInnovationCovarianceMatrix(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__physicalKalmanGain(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__physicalMeasurementJacobian(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__physicalStateTransitionMatrix(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__predictedMeasurement(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__predictedSpacecraftStates(t_UnscentedKalmanModel *self, void *data);
        static PyGetSetDef t_UnscentedKalmanModel__fields_[] = {
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, correctedMeasurement),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, correctedSpacecraftStates),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, currentDate),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, currentMeasurementNumber),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, estimate),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, estimatedMeasurementsParameters),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, estimatedOrbitalParameters),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, estimatedPropagationParameters),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, estimatedPropagators),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, physicalEstimatedCovarianceMatrix),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, physicalEstimatedState),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, physicalInnovationCovarianceMatrix),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, physicalKalmanGain),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, physicalMeasurementJacobian),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, physicalStateTransitionMatrix),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, predictedMeasurement),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, predictedSpacecraftStates),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnscentedKalmanModel__methods_[] = {
          DECLARE_METHOD(t_UnscentedKalmanModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnscentedKalmanModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnscentedKalmanModel, finalizeEstimation, METH_VARARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getCorrectedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getCorrectedSpacecraftStates, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getCurrentDate, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getCurrentMeasurementNumber, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getEstimate, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getEstimatedMeasurementsParameters, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getEstimatedOrbitalParameters, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getEstimatedPropagationParameters, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getEstimatedPropagators, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getEvolution, METH_VARARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getInnovation, METH_VARARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getPhysicalEstimatedCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getPhysicalEstimatedState, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getPhysicalInnovationCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getPhysicalKalmanGain, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getPhysicalMeasurementJacobian, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getPhysicalStateTransitionMatrix, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getPredictedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getPredictedMeasurements, METH_VARARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getPredictedSpacecraftStates, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnscentedKalmanModel)[] = {
          { Py_tp_methods, t_UnscentedKalmanModel__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_UnscentedKalmanModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnscentedKalmanModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnscentedKalmanModel, t_UnscentedKalmanModel, UnscentedKalmanModel);

        void t_UnscentedKalmanModel::install(PyObject *module)
        {
          installType(&PY_TYPE(UnscentedKalmanModel), &PY_TYPE_DEF(UnscentedKalmanModel), module, "UnscentedKalmanModel", 0);
        }

        void t_UnscentedKalmanModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanModel), "class_", make_descriptor(UnscentedKalmanModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanModel), "wrapfn_", make_descriptor(t_UnscentedKalmanModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnscentedKalmanModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnscentedKalmanModel::initializeClass, 1)))
            return NULL;
          return t_UnscentedKalmanModel::wrap_Object(UnscentedKalmanModel(((t_UnscentedKalmanModel *) arg)->object.this$));
        }
        static PyObject *t_UnscentedKalmanModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnscentedKalmanModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnscentedKalmanModel_finalizeEstimation(t_UnscentedKalmanModel *self, PyObject *args)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::filtering::kalman::ProcessEstimate a1((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::hipparchus::filtering::kalman::ProcessEstimate::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1))
          {
            OBJ_CALL(self->object.finalizeEstimation(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finalizeEstimation", args);
          return NULL;
        }

        static PyObject *t_UnscentedKalmanModel_getCorrectedMeasurement(t_UnscentedKalmanModel *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrectedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getCorrectedSpacecraftStates(t_UnscentedKalmanModel *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrectedSpacecraftStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_UnscentedKalmanModel_getCurrentDate(t_UnscentedKalmanModel *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getCurrentMeasurementNumber(t_UnscentedKalmanModel *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_UnscentedKalmanModel_getEstimate(t_UnscentedKalmanModel *self)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimate());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getEstimatedMeasurementsParameters(t_UnscentedKalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getEstimatedOrbitalParameters(t_UnscentedKalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedOrbitalParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getEstimatedPropagationParameters(t_UnscentedKalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedPropagationParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getEstimatedPropagators(t_UnscentedKalmanModel *self)
        {
          JArray< ::org::orekit::propagation::Propagator > result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedPropagators());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
        }

        static PyObject *t_UnscentedKalmanModel_getEvolution(t_UnscentedKalmanModel *self, PyObject *args)
        {
          jdouble a0;
          JArray< ::org::hipparchus::linear::RealVector > a1((jobject) NULL);
          ::org::orekit::estimation::sequential::MeasurementDecorator a2((jobject) NULL);
          ::org::hipparchus::filtering::kalman::unscented::UnscentedEvolution result((jobject) NULL);

          if (!parseArgs(args, "D[kk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::orekit::estimation::sequential::MeasurementDecorator::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.getEvolution(a0, a1, a2));
            return ::org::hipparchus::filtering::kalman::unscented::t_UnscentedEvolution::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getEvolution", args);
          return NULL;
        }

        static PyObject *t_UnscentedKalmanModel_getInnovation(t_UnscentedKalmanModel *self, PyObject *args)
        {
          ::org::orekit::estimation::sequential::MeasurementDecorator a0((jobject) NULL);
          ::org::hipparchus::linear::RealVector a1((jobject) NULL);
          ::org::hipparchus::linear::RealVector a2((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
          ::org::hipparchus::linear::RealVector result((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::orekit::estimation::sequential::MeasurementDecorator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.getInnovation(a0, a1, a2, a3));
            return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getInnovation", args);
          return NULL;
        }

        static PyObject *t_UnscentedKalmanModel_getPhysicalEstimatedCovarianceMatrix(t_UnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getPhysicalEstimatedState(t_UnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getPhysicalInnovationCovarianceMatrix(t_UnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalInnovationCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getPhysicalKalmanGain(t_UnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getPhysicalMeasurementJacobian(t_UnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getPhysicalStateTransitionMatrix(t_UnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getPredictedMeasurement(t_UnscentedKalmanModel *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getPredictedMeasurements(t_UnscentedKalmanModel *self, PyObject *args)
        {
          JArray< ::org::hipparchus::linear::RealVector > a0((jobject) NULL);
          ::org::orekit::estimation::sequential::MeasurementDecorator a1((jobject) NULL);
          JArray< ::org::hipparchus::linear::RealVector > result((jobject) NULL);

          if (!parseArgs(args, "[kk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::orekit::estimation::sequential::MeasurementDecorator::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getPredictedMeasurements(a0, a1));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::linear::t_RealVector::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "getPredictedMeasurements", args);
          return NULL;
        }

        static PyObject *t_UnscentedKalmanModel_getPredictedSpacecraftStates(t_UnscentedKalmanModel *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictedSpacecraftStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_UnscentedKalmanModel_get__correctedMeasurement(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrectedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__correctedSpacecraftStates(t_UnscentedKalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrectedSpacecraftStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_UnscentedKalmanModel_get__currentDate(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__currentMeasurementNumber(t_UnscentedKalmanModel *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_UnscentedKalmanModel_get__estimate(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimate());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__estimatedMeasurementsParameters(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__estimatedOrbitalParameters(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedOrbitalParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__estimatedPropagationParameters(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedPropagationParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__estimatedPropagators(t_UnscentedKalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::Propagator > value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedPropagators());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
        }

        static PyObject *t_UnscentedKalmanModel_get__physicalEstimatedCovarianceMatrix(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__physicalEstimatedState(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__physicalInnovationCovarianceMatrix(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalInnovationCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__physicalKalmanGain(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__physicalMeasurementJacobian(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__physicalStateTransitionMatrix(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__predictedMeasurement(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__predictedSpacecraftStates(t_UnscentedKalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictedSpacecraftStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/numerical/EpochDerivativesEquations.h"
#include "org/orekit/propagation/integration/CombinedDerivatives.h"
#include "org/orekit/propagation/numerical/NumericalPropagator.h"
#include "org/orekit/propagation/integration/AdditionalDerivativesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *EpochDerivativesEquations::class$ = NULL;
        jmethodID *EpochDerivativesEquations::mids$ = NULL;
        bool EpochDerivativesEquations::live$ = false;
        jint EpochDerivativesEquations::STATE_DIMENSION = (jint) 0;

        jclass EpochDerivativesEquations::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/EpochDerivativesEquations");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_350898734686d48f] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/propagation/numerical/NumericalPropagator;)V");
            mids$[mid_combinedDerivatives_32bde69742c0babb] = env->getMethodID(cls, "combinedDerivatives", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/integration/CombinedDerivatives;");
            mids$[mid_getDimension_f2f64475e4580546] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_setInitialJacobians_81fc6fb6078d2aa7] = env->getMethodID(cls, "setInitialJacobians", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_setInitialJacobians_8538f9cd1fca7aa5] = env->getMethodID(cls, "setInitialJacobians", "(Lorg/orekit/propagation/SpacecraftState;[[D[[D)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_setInitialJacobians_5602b631022d36a7] = env->getMethodID(cls, "setInitialJacobians", "(Lorg/orekit/propagation/SpacecraftState;[[D[[D[D)V");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            STATE_DIMENSION = env->getStaticIntField(cls, "STATE_DIMENSION");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EpochDerivativesEquations::EpochDerivativesEquations(const ::java::lang::String & a0, const ::org::orekit::propagation::numerical::NumericalPropagator & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_350898734686d48f, a0.this$, a1.this$)) {}

        ::org::orekit::propagation::integration::CombinedDerivatives EpochDerivativesEquations::combinedDerivatives(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::orekit::propagation::integration::CombinedDerivatives(env->callObjectMethod(this$, mids$[mid_combinedDerivatives_32bde69742c0babb], a0.this$));
        }

        jint EpochDerivativesEquations::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_f2f64475e4580546]);
        }

        ::java::lang::String EpochDerivativesEquations::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
        }

        ::org::orekit::propagation::SpacecraftState EpochDerivativesEquations::setInitialJacobians(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_setInitialJacobians_81fc6fb6078d2aa7], a0.this$));
        }

        ::org::orekit::propagation::SpacecraftState EpochDerivativesEquations::setInitialJacobians(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< JArray< jdouble > > & a1, const JArray< JArray< jdouble > > & a2) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_setInitialJacobians_8538f9cd1fca7aa5], a0.this$, a1.this$, a2.this$));
        }

        void EpochDerivativesEquations::setInitialJacobians(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< JArray< jdouble > > & a1, const JArray< JArray< jdouble > > & a2, const JArray< jdouble > & a3) const
        {
          env->callVoidMethod(this$, mids$[mid_setInitialJacobians_5602b631022d36a7], a0.this$, a1.this$, a2.this$, a3.this$);
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
      namespace numerical {
        static PyObject *t_EpochDerivativesEquations_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EpochDerivativesEquations_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EpochDerivativesEquations_init_(t_EpochDerivativesEquations *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EpochDerivativesEquations_combinedDerivatives(t_EpochDerivativesEquations *self, PyObject *arg);
        static PyObject *t_EpochDerivativesEquations_getDimension(t_EpochDerivativesEquations *self);
        static PyObject *t_EpochDerivativesEquations_getName(t_EpochDerivativesEquations *self);
        static PyObject *t_EpochDerivativesEquations_setInitialJacobians(t_EpochDerivativesEquations *self, PyObject *args);
        static PyObject *t_EpochDerivativesEquations_get__dimension(t_EpochDerivativesEquations *self, void *data);
        static int t_EpochDerivativesEquations_set__initialJacobians(t_EpochDerivativesEquations *self, PyObject *arg, void *data);
        static PyObject *t_EpochDerivativesEquations_get__name(t_EpochDerivativesEquations *self, void *data);
        static PyGetSetDef t_EpochDerivativesEquations__fields_[] = {
          DECLARE_GET_FIELD(t_EpochDerivativesEquations, dimension),
          DECLARE_SET_FIELD(t_EpochDerivativesEquations, initialJacobians),
          DECLARE_GET_FIELD(t_EpochDerivativesEquations, name),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EpochDerivativesEquations__methods_[] = {
          DECLARE_METHOD(t_EpochDerivativesEquations, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EpochDerivativesEquations, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EpochDerivativesEquations, combinedDerivatives, METH_O),
          DECLARE_METHOD(t_EpochDerivativesEquations, getDimension, METH_NOARGS),
          DECLARE_METHOD(t_EpochDerivativesEquations, getName, METH_NOARGS),
          DECLARE_METHOD(t_EpochDerivativesEquations, setInitialJacobians, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EpochDerivativesEquations)[] = {
          { Py_tp_methods, t_EpochDerivativesEquations__methods_ },
          { Py_tp_init, (void *) t_EpochDerivativesEquations_init_ },
          { Py_tp_getset, t_EpochDerivativesEquations__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EpochDerivativesEquations)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EpochDerivativesEquations, t_EpochDerivativesEquations, EpochDerivativesEquations);

        void t_EpochDerivativesEquations::install(PyObject *module)
        {
          installType(&PY_TYPE(EpochDerivativesEquations), &PY_TYPE_DEF(EpochDerivativesEquations), module, "EpochDerivativesEquations", 0);
        }

        void t_EpochDerivativesEquations::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EpochDerivativesEquations), "class_", make_descriptor(EpochDerivativesEquations::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EpochDerivativesEquations), "wrapfn_", make_descriptor(t_EpochDerivativesEquations::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EpochDerivativesEquations), "boxfn_", make_descriptor(boxObject));
          env->getClass(EpochDerivativesEquations::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EpochDerivativesEquations), "STATE_DIMENSION", make_descriptor(EpochDerivativesEquations::STATE_DIMENSION));
        }

        static PyObject *t_EpochDerivativesEquations_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EpochDerivativesEquations::initializeClass, 1)))
            return NULL;
          return t_EpochDerivativesEquations::wrap_Object(EpochDerivativesEquations(((t_EpochDerivativesEquations *) arg)->object.this$));
        }
        static PyObject *t_EpochDerivativesEquations_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EpochDerivativesEquations::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EpochDerivativesEquations_init_(t_EpochDerivativesEquations *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::propagation::numerical::NumericalPropagator a1((jobject) NULL);
          EpochDerivativesEquations object((jobject) NULL);

          if (!parseArgs(args, "sk", ::org::orekit::propagation::numerical::NumericalPropagator::initializeClass, &a0, &a1))
          {
            INT_CALL(object = EpochDerivativesEquations(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EpochDerivativesEquations_combinedDerivatives(t_EpochDerivativesEquations *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::propagation::integration::CombinedDerivatives result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.combinedDerivatives(a0));
            return ::org::orekit::propagation::integration::t_CombinedDerivatives::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "combinedDerivatives", arg);
          return NULL;
        }

        static PyObject *t_EpochDerivativesEquations_getDimension(t_EpochDerivativesEquations *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_EpochDerivativesEquations_getName(t_EpochDerivativesEquations *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_EpochDerivativesEquations_setInitialJacobians(t_EpochDerivativesEquations *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.setInitialJacobians(a0));
                return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< JArray< jdouble > > a1((jobject) NULL);
              JArray< JArray< jdouble > > a2((jobject) NULL);
              ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "k[[D[[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.setInitialJacobians(a0, a1, a2));
                return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< JArray< jdouble > > a1((jobject) NULL);
              JArray< JArray< jdouble > > a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);

              if (!parseArgs(args, "k[[D[[D[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.setInitialJacobians(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "setInitialJacobians", args);
          return NULL;
        }

        static PyObject *t_EpochDerivativesEquations_get__dimension(t_EpochDerivativesEquations *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDimension());
          return PyLong_FromLong((long) value);
        }

        static int t_EpochDerivativesEquations_set__initialJacobians(t_EpochDerivativesEquations *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
            {
              INT_CALL(self->object.setInitialJacobians(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "initialJacobians", arg);
          return -1;
        }

        static PyObject *t_EpochDerivativesEquations_get__name(t_EpochDerivativesEquations *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/discrete/PascalDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {

        ::java::lang::Class *PascalDistribution::class$ = NULL;
        jmethodID *PascalDistribution::mids$ = NULL;
        bool PascalDistribution::live$ = false;

        jclass PascalDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/discrete/PascalDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_987a5fb872043b12] = env->getMethodID(cls, "<init>", "(ID)V");
            mids$[mid_cumulativeProbability_b772323fc98b7293] = env->getMethodID(cls, "cumulativeProbability", "(I)D");
            mids$[mid_getNumberOfSuccesses_f2f64475e4580546] = env->getMethodID(cls, "getNumberOfSuccesses", "()I");
            mids$[mid_getNumericalMean_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getProbabilityOfSuccess_456d9a2f64d6b28d] = env->getMethodID(cls, "getProbabilityOfSuccess", "()D");
            mids$[mid_getSupportLowerBound_f2f64475e4580546] = env->getMethodID(cls, "getSupportLowerBound", "()I");
            mids$[mid_getSupportUpperBound_f2f64475e4580546] = env->getMethodID(cls, "getSupportUpperBound", "()I");
            mids$[mid_isSupportConnected_e470b6d9e0d979db] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logProbability_b772323fc98b7293] = env->getMethodID(cls, "logProbability", "(I)D");
            mids$[mid_probability_b772323fc98b7293] = env->getMethodID(cls, "probability", "(I)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PascalDistribution::PascalDistribution(jint a0, jdouble a1) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_987a5fb872043b12, a0, a1)) {}

        jdouble PascalDistribution::cumulativeProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_b772323fc98b7293], a0);
        }

        jint PascalDistribution::getNumberOfSuccesses() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberOfSuccesses_f2f64475e4580546]);
        }

        jdouble PascalDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_456d9a2f64d6b28d]);
        }

        jdouble PascalDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_456d9a2f64d6b28d]);
        }

        jdouble PascalDistribution::getProbabilityOfSuccess() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getProbabilityOfSuccess_456d9a2f64d6b28d]);
        }

        jint PascalDistribution::getSupportLowerBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportLowerBound_f2f64475e4580546]);
        }

        jint PascalDistribution::getSupportUpperBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportUpperBound_f2f64475e4580546]);
        }

        jboolean PascalDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_e470b6d9e0d979db]);
        }

        jdouble PascalDistribution::logProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logProbability_b772323fc98b7293], a0);
        }

        jdouble PascalDistribution::probability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_b772323fc98b7293], a0);
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
        static PyObject *t_PascalDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PascalDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PascalDistribution_init_(t_PascalDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PascalDistribution_cumulativeProbability(t_PascalDistribution *self, PyObject *args);
        static PyObject *t_PascalDistribution_getNumberOfSuccesses(t_PascalDistribution *self);
        static PyObject *t_PascalDistribution_getNumericalMean(t_PascalDistribution *self, PyObject *args);
        static PyObject *t_PascalDistribution_getNumericalVariance(t_PascalDistribution *self, PyObject *args);
        static PyObject *t_PascalDistribution_getProbabilityOfSuccess(t_PascalDistribution *self);
        static PyObject *t_PascalDistribution_getSupportLowerBound(t_PascalDistribution *self, PyObject *args);
        static PyObject *t_PascalDistribution_getSupportUpperBound(t_PascalDistribution *self, PyObject *args);
        static PyObject *t_PascalDistribution_isSupportConnected(t_PascalDistribution *self, PyObject *args);
        static PyObject *t_PascalDistribution_logProbability(t_PascalDistribution *self, PyObject *args);
        static PyObject *t_PascalDistribution_probability(t_PascalDistribution *self, PyObject *args);
        static PyObject *t_PascalDistribution_get__numberOfSuccesses(t_PascalDistribution *self, void *data);
        static PyObject *t_PascalDistribution_get__numericalMean(t_PascalDistribution *self, void *data);
        static PyObject *t_PascalDistribution_get__numericalVariance(t_PascalDistribution *self, void *data);
        static PyObject *t_PascalDistribution_get__probabilityOfSuccess(t_PascalDistribution *self, void *data);
        static PyObject *t_PascalDistribution_get__supportConnected(t_PascalDistribution *self, void *data);
        static PyObject *t_PascalDistribution_get__supportLowerBound(t_PascalDistribution *self, void *data);
        static PyObject *t_PascalDistribution_get__supportUpperBound(t_PascalDistribution *self, void *data);
        static PyGetSetDef t_PascalDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_PascalDistribution, numberOfSuccesses),
          DECLARE_GET_FIELD(t_PascalDistribution, numericalMean),
          DECLARE_GET_FIELD(t_PascalDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_PascalDistribution, probabilityOfSuccess),
          DECLARE_GET_FIELD(t_PascalDistribution, supportConnected),
          DECLARE_GET_FIELD(t_PascalDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_PascalDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PascalDistribution__methods_[] = {
          DECLARE_METHOD(t_PascalDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PascalDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PascalDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_PascalDistribution, getNumberOfSuccesses, METH_NOARGS),
          DECLARE_METHOD(t_PascalDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_PascalDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_PascalDistribution, getProbabilityOfSuccess, METH_NOARGS),
          DECLARE_METHOD(t_PascalDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_PascalDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_PascalDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_PascalDistribution, logProbability, METH_VARARGS),
          DECLARE_METHOD(t_PascalDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PascalDistribution)[] = {
          { Py_tp_methods, t_PascalDistribution__methods_ },
          { Py_tp_init, (void *) t_PascalDistribution_init_ },
          { Py_tp_getset, t_PascalDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PascalDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::discrete::AbstractIntegerDistribution),
          NULL
        };

        DEFINE_TYPE(PascalDistribution, t_PascalDistribution, PascalDistribution);

        void t_PascalDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(PascalDistribution), &PY_TYPE_DEF(PascalDistribution), module, "PascalDistribution", 0);
        }

        void t_PascalDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PascalDistribution), "class_", make_descriptor(PascalDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PascalDistribution), "wrapfn_", make_descriptor(t_PascalDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PascalDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PascalDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PascalDistribution::initializeClass, 1)))
            return NULL;
          return t_PascalDistribution::wrap_Object(PascalDistribution(((t_PascalDistribution *) arg)->object.this$));
        }
        static PyObject *t_PascalDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PascalDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PascalDistribution_init_(t_PascalDistribution *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jdouble a1;
          PascalDistribution object((jobject) NULL);

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            INT_CALL(object = PascalDistribution(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_PascalDistribution_cumulativeProbability(t_PascalDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PascalDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_PascalDistribution_getNumberOfSuccesses(t_PascalDistribution *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberOfSuccesses());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_PascalDistribution_getNumericalMean(t_PascalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PascalDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_PascalDistribution_getNumericalVariance(t_PascalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PascalDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_PascalDistribution_getProbabilityOfSuccess(t_PascalDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getProbabilityOfSuccess());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_PascalDistribution_getSupportLowerBound(t_PascalDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(PascalDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_PascalDistribution_getSupportUpperBound(t_PascalDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(PascalDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_PascalDistribution_isSupportConnected(t_PascalDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(PascalDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_PascalDistribution_logProbability(t_PascalDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.logProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PascalDistribution), (PyObject *) self, "logProbability", args, 2);
        }

        static PyObject *t_PascalDistribution_probability(t_PascalDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.probability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PascalDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_PascalDistribution_get__numberOfSuccesses(t_PascalDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberOfSuccesses());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_PascalDistribution_get__numericalMean(t_PascalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_PascalDistribution_get__numericalVariance(t_PascalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_PascalDistribution_get__probabilityOfSuccess(t_PascalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getProbabilityOfSuccess());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_PascalDistribution_get__supportConnected(t_PascalDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_PascalDistribution_get__supportLowerBound(t_PascalDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_PascalDistribution_get__supportUpperBound(t_PascalDistribution *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalProperties.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudePhysicalPropertiesKey::class$ = NULL;
              jmethodID *AttitudePhysicalPropertiesKey::mids$ = NULL;
              bool AttitudePhysicalPropertiesKey::live$ = false;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::COMMENT = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::CP = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::CP_REF_FRAME = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::DRAG_COEFF = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::DRY_MASS = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::INERTIA_REF_FRAME = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::IXX = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::IXY = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::IXZ = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::IYY = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::IYZ = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::IZZ = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::WET_MASS = NULL;

              jclass AttitudePhysicalPropertiesKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_148781495778b93e] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalProperties;)Z");
                  mids$[mid_valueOf_da7e4aa20ec90f11] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;");
                  mids$[mid_values_1e6e203e04323b0c] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COMMENT = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  CP = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "CP", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  CP_REF_FRAME = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "CP_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  DRAG_COEFF = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "DRAG_COEFF", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  DRY_MASS = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "DRY_MASS", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  INERTIA_REF_FRAME = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "INERTIA_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  IXX = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "IXX", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  IXY = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "IXY", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  IXZ = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "IXZ", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  IYY = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "IYY", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  IYZ = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "IYZ", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  IZZ = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "IZZ", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  WET_MASS = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "WET_MASS", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AttitudePhysicalPropertiesKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_148781495778b93e], a0.this$, a1.this$, a2.this$);
              }

              AttitudePhysicalPropertiesKey AttitudePhysicalPropertiesKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AttitudePhysicalPropertiesKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_da7e4aa20ec90f11], a0.this$));
              }

              JArray< AttitudePhysicalPropertiesKey > AttitudePhysicalPropertiesKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AttitudePhysicalPropertiesKey >(env->callStaticObjectMethod(cls, mids$[mid_values_1e6e203e04323b0c]));
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
              static PyObject *t_AttitudePhysicalPropertiesKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudePhysicalPropertiesKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudePhysicalPropertiesKey_of_(t_AttitudePhysicalPropertiesKey *self, PyObject *args);
              static PyObject *t_AttitudePhysicalPropertiesKey_process(t_AttitudePhysicalPropertiesKey *self, PyObject *args);
              static PyObject *t_AttitudePhysicalPropertiesKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AttitudePhysicalPropertiesKey_values(PyTypeObject *type);
              static PyObject *t_AttitudePhysicalPropertiesKey_get__parameters_(t_AttitudePhysicalPropertiesKey *self, void *data);
              static PyGetSetDef t_AttitudePhysicalPropertiesKey__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudePhysicalPropertiesKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudePhysicalPropertiesKey__methods_[] = {
                DECLARE_METHOD(t_AttitudePhysicalPropertiesKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudePhysicalPropertiesKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudePhysicalPropertiesKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AttitudePhysicalPropertiesKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AttitudePhysicalPropertiesKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AttitudePhysicalPropertiesKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudePhysicalPropertiesKey)[] = {
                { Py_tp_methods, t_AttitudePhysicalPropertiesKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AttitudePhysicalPropertiesKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudePhysicalPropertiesKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AttitudePhysicalPropertiesKey, t_AttitudePhysicalPropertiesKey, AttitudePhysicalPropertiesKey);
              PyObject *t_AttitudePhysicalPropertiesKey::wrap_Object(const AttitudePhysicalPropertiesKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudePhysicalPropertiesKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudePhysicalPropertiesKey *self = (t_AttitudePhysicalPropertiesKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AttitudePhysicalPropertiesKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudePhysicalPropertiesKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudePhysicalPropertiesKey *self = (t_AttitudePhysicalPropertiesKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AttitudePhysicalPropertiesKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudePhysicalPropertiesKey), &PY_TYPE_DEF(AttitudePhysicalPropertiesKey), module, "AttitudePhysicalPropertiesKey", 0);
              }

              void t_AttitudePhysicalPropertiesKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "class_", make_descriptor(AttitudePhysicalPropertiesKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "wrapfn_", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AttitudePhysicalPropertiesKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "COMMENT", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "CP", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::CP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "CP_REF_FRAME", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::CP_REF_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "DRAG_COEFF", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::DRAG_COEFF)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "DRY_MASS", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::DRY_MASS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "INERTIA_REF_FRAME", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::INERTIA_REF_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "IXX", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::IXX)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "IXY", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::IXY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "IXZ", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::IXZ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "IYY", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::IYY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "IYZ", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::IYZ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "IZZ", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::IZZ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "WET_MASS", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::WET_MASS)));
              }

              static PyObject *t_AttitudePhysicalPropertiesKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudePhysicalPropertiesKey::initializeClass, 1)))
                  return NULL;
                return t_AttitudePhysicalPropertiesKey::wrap_Object(AttitudePhysicalPropertiesKey(((t_AttitudePhysicalPropertiesKey *) arg)->object.this$));
              }
              static PyObject *t_AttitudePhysicalPropertiesKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudePhysicalPropertiesKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AttitudePhysicalPropertiesKey_of_(t_AttitudePhysicalPropertiesKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AttitudePhysicalPropertiesKey_process(t_AttitudePhysicalPropertiesKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AttitudePhysicalPropertiesKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AttitudePhysicalPropertiesKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalPropertiesKey::valueOf(a0));
                  return t_AttitudePhysicalPropertiesKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AttitudePhysicalPropertiesKey_values(PyTypeObject *type)
              {
                JArray< AttitudePhysicalPropertiesKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalPropertiesKey::values());
                return JArray<jobject>(result.this$).wrap(t_AttitudePhysicalPropertiesKey::wrap_jobject);
              }
              static PyObject *t_AttitudePhysicalPropertiesKey_get__parameters_(t_AttitudePhysicalPropertiesKey *self, void *data)
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
#include "org/hipparchus/analysis/solvers/BracketingNthOrderBrentSolver.h"
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *BracketingNthOrderBrentSolver::class$ = NULL;
        jmethodID *BracketingNthOrderBrentSolver::mids$ = NULL;
        bool BracketingNthOrderBrentSolver::live$ = false;

        jclass BracketingNthOrderBrentSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/BracketingNthOrderBrentSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_18b1ce6f78e2ded3] = env->getMethodID(cls, "<init>", "(DI)V");
            mids$[mid_init$_b05c288d5068eccb] = env->getMethodID(cls, "<init>", "(DDI)V");
            mids$[mid_init$_906d8abc315447ea] = env->getMethodID(cls, "<init>", "(DDDI)V");
            mids$[mid_getMaximalOrder_f2f64475e4580546] = env->getMethodID(cls, "getMaximalOrder", "()I");
            mids$[mid_solve_0c4af17577847ef5] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DDLorg/hipparchus/analysis/solvers/AllowedSolution;)D");
            mids$[mid_solve_d096fb40d6053e92] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DDDLorg/hipparchus/analysis/solvers/AllowedSolution;)D");
            mids$[mid_solveInterval_f22794092f257ec3] = env->getMethodID(cls, "solveInterval", "(ILorg/hipparchus/analysis/UnivariateFunction;DDD)Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval;");
            mids$[mid_doSolve_456d9a2f64d6b28d] = env->getMethodID(cls, "doSolve", "()D");
            mids$[mid_doSolveInterval_315a1f5b2b06e1be] = env->getMethodID(cls, "doSolveInterval", "()Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BracketingNthOrderBrentSolver::BracketingNthOrderBrentSolver() : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        BracketingNthOrderBrentSolver::BracketingNthOrderBrentSolver(jdouble a0, jint a1) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_18b1ce6f78e2ded3, a0, a1)) {}

        BracketingNthOrderBrentSolver::BracketingNthOrderBrentSolver(jdouble a0, jdouble a1, jint a2) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_b05c288d5068eccb, a0, a1, a2)) {}

        BracketingNthOrderBrentSolver::BracketingNthOrderBrentSolver(jdouble a0, jdouble a1, jdouble a2, jint a3) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_906d8abc315447ea, a0, a1, a2, a3)) {}

        jint BracketingNthOrderBrentSolver::getMaximalOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaximalOrder_f2f64475e4580546]);
        }

        jdouble BracketingNthOrderBrentSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, const ::org::hipparchus::analysis::solvers::AllowedSolution & a4) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_0c4af17577847ef5], a0, a1.this$, a2, a3, a4.this$);
        }

        jdouble BracketingNthOrderBrentSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, jdouble a4, const ::org::hipparchus::analysis::solvers::AllowedSolution & a5) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_d096fb40d6053e92], a0, a1.this$, a2, a3, a4, a5.this$);
        }

        ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval BracketingNthOrderBrentSolver::solveInterval(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, jdouble a4) const
        {
          return ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval(env->callObjectMethod(this$, mids$[mid_solveInterval_f22794092f257ec3], a0, a1.this$, a2, a3, a4));
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
      namespace solvers {
        static PyObject *t_BracketingNthOrderBrentSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketingNthOrderBrentSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketingNthOrderBrentSolver_of_(t_BracketingNthOrderBrentSolver *self, PyObject *args);
        static int t_BracketingNthOrderBrentSolver_init_(t_BracketingNthOrderBrentSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BracketingNthOrderBrentSolver_getMaximalOrder(t_BracketingNthOrderBrentSolver *self);
        static PyObject *t_BracketingNthOrderBrentSolver_solve(t_BracketingNthOrderBrentSolver *self, PyObject *args);
        static PyObject *t_BracketingNthOrderBrentSolver_solveInterval(t_BracketingNthOrderBrentSolver *self, PyObject *args);
        static PyObject *t_BracketingNthOrderBrentSolver_get__maximalOrder(t_BracketingNthOrderBrentSolver *self, void *data);
        static PyObject *t_BracketingNthOrderBrentSolver_get__parameters_(t_BracketingNthOrderBrentSolver *self, void *data);
        static PyGetSetDef t_BracketingNthOrderBrentSolver__fields_[] = {
          DECLARE_GET_FIELD(t_BracketingNthOrderBrentSolver, maximalOrder),
          DECLARE_GET_FIELD(t_BracketingNthOrderBrentSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BracketingNthOrderBrentSolver__methods_[] = {
          DECLARE_METHOD(t_BracketingNthOrderBrentSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketingNthOrderBrentSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketingNthOrderBrentSolver, of_, METH_VARARGS),
          DECLARE_METHOD(t_BracketingNthOrderBrentSolver, getMaximalOrder, METH_NOARGS),
          DECLARE_METHOD(t_BracketingNthOrderBrentSolver, solve, METH_VARARGS),
          DECLARE_METHOD(t_BracketingNthOrderBrentSolver, solveInterval, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BracketingNthOrderBrentSolver)[] = {
          { Py_tp_methods, t_BracketingNthOrderBrentSolver__methods_ },
          { Py_tp_init, (void *) t_BracketingNthOrderBrentSolver_init_ },
          { Py_tp_getset, t_BracketingNthOrderBrentSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BracketingNthOrderBrentSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::AbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(BracketingNthOrderBrentSolver, t_BracketingNthOrderBrentSolver, BracketingNthOrderBrentSolver);
        PyObject *t_BracketingNthOrderBrentSolver::wrap_Object(const BracketingNthOrderBrentSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BracketingNthOrderBrentSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BracketingNthOrderBrentSolver *self = (t_BracketingNthOrderBrentSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BracketingNthOrderBrentSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BracketingNthOrderBrentSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BracketingNthOrderBrentSolver *self = (t_BracketingNthOrderBrentSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BracketingNthOrderBrentSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(BracketingNthOrderBrentSolver), &PY_TYPE_DEF(BracketingNthOrderBrentSolver), module, "BracketingNthOrderBrentSolver", 0);
        }

        void t_BracketingNthOrderBrentSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketingNthOrderBrentSolver), "class_", make_descriptor(BracketingNthOrderBrentSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketingNthOrderBrentSolver), "wrapfn_", make_descriptor(t_BracketingNthOrderBrentSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketingNthOrderBrentSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BracketingNthOrderBrentSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BracketingNthOrderBrentSolver::initializeClass, 1)))
            return NULL;
          return t_BracketingNthOrderBrentSolver::wrap_Object(BracketingNthOrderBrentSolver(((t_BracketingNthOrderBrentSolver *) arg)->object.this$));
        }
        static PyObject *t_BracketingNthOrderBrentSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BracketingNthOrderBrentSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BracketingNthOrderBrentSolver_of_(t_BracketingNthOrderBrentSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_BracketingNthOrderBrentSolver_init_(t_BracketingNthOrderBrentSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              BracketingNthOrderBrentSolver object((jobject) NULL);

              INT_CALL(object = BracketingNthOrderBrentSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
              break;
            }
           case 2:
            {
              jdouble a0;
              jint a1;
              BracketingNthOrderBrentSolver object((jobject) NULL);

              if (!parseArgs(args, "DI", &a0, &a1))
              {
                INT_CALL(object = BracketingNthOrderBrentSolver(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jint a2;
              BracketingNthOrderBrentSolver object((jobject) NULL);

              if (!parseArgs(args, "DDI", &a0, &a1, &a2))
              {
                INT_CALL(object = BracketingNthOrderBrentSolver(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jint a3;
              BracketingNthOrderBrentSolver object((jobject) NULL);

              if (!parseArgs(args, "DDDI", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = BracketingNthOrderBrentSolver(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
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

        static PyObject *t_BracketingNthOrderBrentSolver_getMaximalOrder(t_BracketingNthOrderBrentSolver *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaximalOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BracketingNthOrderBrentSolver_solve(t_BracketingNthOrderBrentSolver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              ::org::hipparchus::analysis::solvers::AllowedSolution a4((jobject) NULL);
              PyTypeObject **p4;
              jdouble result;

              if (!parseArgs(args, "IkDDK", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 6:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              ::org::hipparchus::analysis::solvers::AllowedSolution a5((jobject) NULL);
              PyTypeObject **p5;
              jdouble result;

              if (!parseArgs(args, "IkDDDK", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &p5, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4, a5));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          return callSuper(PY_TYPE(BracketingNthOrderBrentSolver), (PyObject *) self, "solve", args, 2);
        }

        static PyObject *t_BracketingNthOrderBrentSolver_solveInterval(t_BracketingNthOrderBrentSolver *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
          jdouble a2;
          jdouble a3;
          jdouble a4;
          ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval result((jobject) NULL);

          if (!parseArgs(args, "IkDDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            OBJ_CALL(result = self->object.solveInterval(a0, a1, a2, a3, a4));
            return ::org::hipparchus::analysis::solvers::t_BracketedUnivariateSolver$Interval::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "solveInterval", args);
          return NULL;
        }
        static PyObject *t_BracketingNthOrderBrentSolver_get__parameters_(t_BracketingNthOrderBrentSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BracketingNthOrderBrentSolver_get__maximalOrder(t_BracketingNthOrderBrentSolver *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaximalOrder());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Iterator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Iterator::class$ = NULL;
    jmethodID *Iterator::mids$ = NULL;
    bool Iterator::live$ = false;

    jclass Iterator::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Iterator");

        mids$ = new jmethodID[max_mid];
        mids$[mid_hasNext_e470b6d9e0d979db] = env->getMethodID(cls, "hasNext", "()Z");
        mids$[mid_next_dfd7647d9110ac9f] = env->getMethodID(cls, "next", "()Ljava/lang/Object;");
        mids$[mid_remove_7ae3461a92a43152] = env->getMethodID(cls, "remove", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean Iterator::hasNext() const
    {
      return env->callBooleanMethod(this$, mids$[mid_hasNext_e470b6d9e0d979db]);
    }

    ::java::lang::Object Iterator::next() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_next_dfd7647d9110ac9f]));
    }

    void Iterator::remove() const
    {
      env->callVoidMethod(this$, mids$[mid_remove_7ae3461a92a43152]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Iterator_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Iterator_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Iterator_of_(t_Iterator *self, PyObject *args);
    static PyObject *t_Iterator_hasNext(t_Iterator *self);
    static PyObject *t_Iterator_next(t_Iterator *self);
    static PyObject *t_Iterator_remove(t_Iterator *self);
    static PyObject *t_Iterator_get__parameters_(t_Iterator *self, void *data);
    static PyGetSetDef t_Iterator__fields_[] = {
      DECLARE_GET_FIELD(t_Iterator, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Iterator__methods_[] = {
      DECLARE_METHOD(t_Iterator, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Iterator, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Iterator, of_, METH_VARARGS),
      DECLARE_METHOD(t_Iterator, hasNext, METH_NOARGS),
      DECLARE_METHOD(t_Iterator, next, METH_NOARGS),
      DECLARE_METHOD(t_Iterator, remove, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Iterator)[] = {
      { Py_tp_methods, t_Iterator__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Iterator__fields_ },
      { Py_tp_iter, (void *) PyObject_SelfIter },
      { Py_tp_iternext, (void *) ((PyObject *(*)(::java::util::t_Iterator *)) get_generic_iterator_next< ::java::util::t_Iterator,::java::lang::t_Object >) },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Iterator)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Iterator, t_Iterator, Iterator);
    PyObject *t_Iterator::wrap_Object(const Iterator& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Iterator::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Iterator *self = (t_Iterator *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Iterator::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Iterator::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Iterator *self = (t_Iterator *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Iterator::install(PyObject *module)
    {
      installType(&PY_TYPE(Iterator), &PY_TYPE_DEF(Iterator), module, "Iterator", 0);
    }

    void t_Iterator::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Iterator), "class_", make_descriptor(Iterator::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Iterator), "wrapfn_", make_descriptor(t_Iterator::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Iterator), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Iterator_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Iterator::initializeClass, 1)))
        return NULL;
      return t_Iterator::wrap_Object(Iterator(((t_Iterator *) arg)->object.this$));
    }
    static PyObject *t_Iterator_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Iterator::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Iterator_of_(t_Iterator *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Iterator_hasNext(t_Iterator *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.hasNext());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Iterator_next(t_Iterator *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.next());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Iterator_remove(t_Iterator *self)
    {
      OBJ_CALL(self->object.remove());
      Py_RETURN_NONE;
    }
    static PyObject *t_Iterator_get__parameters_(t_Iterator *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/PythonCelestialBodyLoader.h"
#include "org/orekit/bodies/CelestialBodyLoader.h"
#include "java/lang/Throwable.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *PythonCelestialBodyLoader::class$ = NULL;
      jmethodID *PythonCelestialBodyLoader::mids$ = NULL;
      bool PythonCelestialBodyLoader::live$ = false;

      jclass PythonCelestialBodyLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/PythonCelestialBodyLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_loadCelestialBody_29f199e59c05cc68] = env->getMethodID(cls, "loadCelestialBody", "(Ljava/lang/String;)Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonCelestialBodyLoader::PythonCelestialBodyLoader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonCelestialBodyLoader::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonCelestialBodyLoader::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonCelestialBodyLoader::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace bodies {
      static PyObject *t_PythonCelestialBodyLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonCelestialBodyLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonCelestialBodyLoader_init_(t_PythonCelestialBodyLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonCelestialBodyLoader_finalize(t_PythonCelestialBodyLoader *self);
      static PyObject *t_PythonCelestialBodyLoader_pythonExtension(t_PythonCelestialBodyLoader *self, PyObject *args);
      static jobject JNICALL t_PythonCelestialBodyLoader_loadCelestialBody0(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonCelestialBodyLoader_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonCelestialBodyLoader_get__self(t_PythonCelestialBodyLoader *self, void *data);
      static PyGetSetDef t_PythonCelestialBodyLoader__fields_[] = {
        DECLARE_GET_FIELD(t_PythonCelestialBodyLoader, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonCelestialBodyLoader__methods_[] = {
        DECLARE_METHOD(t_PythonCelestialBodyLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonCelestialBodyLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonCelestialBodyLoader, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonCelestialBodyLoader, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonCelestialBodyLoader)[] = {
        { Py_tp_methods, t_PythonCelestialBodyLoader__methods_ },
        { Py_tp_init, (void *) t_PythonCelestialBodyLoader_init_ },
        { Py_tp_getset, t_PythonCelestialBodyLoader__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonCelestialBodyLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonCelestialBodyLoader, t_PythonCelestialBodyLoader, PythonCelestialBodyLoader);

      void t_PythonCelestialBodyLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonCelestialBodyLoader), &PY_TYPE_DEF(PythonCelestialBodyLoader), module, "PythonCelestialBodyLoader", 1);
      }

      void t_PythonCelestialBodyLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCelestialBodyLoader), "class_", make_descriptor(PythonCelestialBodyLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCelestialBodyLoader), "wrapfn_", make_descriptor(t_PythonCelestialBodyLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCelestialBodyLoader), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonCelestialBodyLoader::initializeClass);
        JNINativeMethod methods[] = {
          { "loadCelestialBody", "(Ljava/lang/String;)Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodyLoader_loadCelestialBody0 },
          { "pythonDecRef", "()V", (void *) t_PythonCelestialBodyLoader_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonCelestialBodyLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonCelestialBodyLoader::initializeClass, 1)))
          return NULL;
        return t_PythonCelestialBodyLoader::wrap_Object(PythonCelestialBodyLoader(((t_PythonCelestialBodyLoader *) arg)->object.this$));
      }
      static PyObject *t_PythonCelestialBodyLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonCelestialBodyLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonCelestialBodyLoader_init_(t_PythonCelestialBodyLoader *self, PyObject *args, PyObject *kwds)
      {
        PythonCelestialBodyLoader object((jobject) NULL);

        INT_CALL(object = PythonCelestialBodyLoader());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonCelestialBodyLoader_finalize(t_PythonCelestialBodyLoader *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonCelestialBodyLoader_pythonExtension(t_PythonCelestialBodyLoader *self, PyObject *args)
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

      static jobject JNICALL t_PythonCelestialBodyLoader_loadCelestialBody0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodyLoader::mids$[PythonCelestialBodyLoader::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *o0 = env->fromJString((jstring) a0, 0);
        PyObject *result = PyObject_CallMethod(obj, "loadCelestialBody", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("loadCelestialBody", result);
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

      static void JNICALL t_PythonCelestialBodyLoader_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodyLoader::mids$[PythonCelestialBodyLoader::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonCelestialBodyLoader::mids$[PythonCelestialBodyLoader::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonCelestialBodyLoader_get__self(t_PythonCelestialBodyLoader *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/common/ClockCorrection.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            ::java::lang::Class *ClockCorrection::class$ = NULL;
            jmethodID *ClockCorrection::mids$ = NULL;
            bool ClockCorrection::live$ = false;

            jclass ClockCorrection::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/common/ClockCorrection");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_d0d6094fbd7015c5] = env->getMethodID(cls, "<init>", "(DDD)V");
                mids$[mid_getDeltaClockC0_456d9a2f64d6b28d] = env->getMethodID(cls, "getDeltaClockC0", "()D");
                mids$[mid_getDeltaClockC1_456d9a2f64d6b28d] = env->getMethodID(cls, "getDeltaClockC1", "()D");
                mids$[mid_getDeltaClockC2_456d9a2f64d6b28d] = env->getMethodID(cls, "getDeltaClockC2", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ClockCorrection::ClockCorrection(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0d6094fbd7015c5, a0, a1, a2)) {}

            jdouble ClockCorrection::getDeltaClockC0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaClockC0_456d9a2f64d6b28d]);
            }

            jdouble ClockCorrection::getDeltaClockC1() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaClockC1_456d9a2f64d6b28d]);
            }

            jdouble ClockCorrection::getDeltaClockC2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaClockC2_456d9a2f64d6b28d]);
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
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {
            static PyObject *t_ClockCorrection_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ClockCorrection_instance_(PyTypeObject *type, PyObject *arg);
            static int t_ClockCorrection_init_(t_ClockCorrection *self, PyObject *args, PyObject *kwds);
            static PyObject *t_ClockCorrection_getDeltaClockC0(t_ClockCorrection *self);
            static PyObject *t_ClockCorrection_getDeltaClockC1(t_ClockCorrection *self);
            static PyObject *t_ClockCorrection_getDeltaClockC2(t_ClockCorrection *self);
            static PyObject *t_ClockCorrection_get__deltaClockC0(t_ClockCorrection *self, void *data);
            static PyObject *t_ClockCorrection_get__deltaClockC1(t_ClockCorrection *self, void *data);
            static PyObject *t_ClockCorrection_get__deltaClockC2(t_ClockCorrection *self, void *data);
            static PyGetSetDef t_ClockCorrection__fields_[] = {
              DECLARE_GET_FIELD(t_ClockCorrection, deltaClockC0),
              DECLARE_GET_FIELD(t_ClockCorrection, deltaClockC1),
              DECLARE_GET_FIELD(t_ClockCorrection, deltaClockC2),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ClockCorrection__methods_[] = {
              DECLARE_METHOD(t_ClockCorrection, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ClockCorrection, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ClockCorrection, getDeltaClockC0, METH_NOARGS),
              DECLARE_METHOD(t_ClockCorrection, getDeltaClockC1, METH_NOARGS),
              DECLARE_METHOD(t_ClockCorrection, getDeltaClockC2, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ClockCorrection)[] = {
              { Py_tp_methods, t_ClockCorrection__methods_ },
              { Py_tp_init, (void *) t_ClockCorrection_init_ },
              { Py_tp_getset, t_ClockCorrection__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ClockCorrection)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ClockCorrection, t_ClockCorrection, ClockCorrection);

            void t_ClockCorrection::install(PyObject *module)
            {
              installType(&PY_TYPE(ClockCorrection), &PY_TYPE_DEF(ClockCorrection), module, "ClockCorrection", 0);
            }

            void t_ClockCorrection::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ClockCorrection), "class_", make_descriptor(ClockCorrection::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ClockCorrection), "wrapfn_", make_descriptor(t_ClockCorrection::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ClockCorrection), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ClockCorrection_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ClockCorrection::initializeClass, 1)))
                return NULL;
              return t_ClockCorrection::wrap_Object(ClockCorrection(((t_ClockCorrection *) arg)->object.this$));
            }
            static PyObject *t_ClockCorrection_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ClockCorrection::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_ClockCorrection_init_(t_ClockCorrection *self, PyObject *args, PyObject *kwds)
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              ClockCorrection object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = ClockCorrection(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_ClockCorrection_getDeltaClockC0(t_ClockCorrection *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaClockC0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_ClockCorrection_getDeltaClockC1(t_ClockCorrection *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaClockC1());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_ClockCorrection_getDeltaClockC2(t_ClockCorrection *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaClockC2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_ClockCorrection_get__deltaClockC0(t_ClockCorrection *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaClockC0());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_ClockCorrection_get__deltaClockC1(t_ClockCorrection *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaClockC1());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_ClockCorrection_get__deltaClockC2(t_ClockCorrection *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaClockC2());
              return PyFloat_FromDouble((double) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/EarthStandardAtmosphereRefraction.h"
#include "java/lang/Class.h"
#include "org/orekit/models/AtmosphericRefractionModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *EarthStandardAtmosphereRefraction::class$ = NULL;
        jmethodID *EarthStandardAtmosphereRefraction::mids$ = NULL;
        bool EarthStandardAtmosphereRefraction::live$ = false;
        jdouble EarthStandardAtmosphereRefraction::DEFAULT_CORRECTION_FACTOR = (jdouble) 0;
        jdouble EarthStandardAtmosphereRefraction::DEFAULT_PRESSURE = (jdouble) 0;
        jdouble EarthStandardAtmosphereRefraction::DEFAULT_TEMPERATURE = (jdouble) 0;
        jdouble EarthStandardAtmosphereRefraction::STANDARD_ATM_PRESSURE = (jdouble) 0;
        jdouble EarthStandardAtmosphereRefraction::STANDARD_ATM_TEMPERATURE = (jdouble) 0;

        jclass EarthStandardAtmosphereRefraction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/EarthStandardAtmosphereRefraction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_getPressure_456d9a2f64d6b28d] = env->getMethodID(cls, "getPressure", "()D");
            mids$[mid_getRefraction_0ba5fed9597b693e] = env->getMethodID(cls, "getRefraction", "(D)D");
            mids$[mid_getTemperature_456d9a2f64d6b28d] = env->getMethodID(cls, "getTemperature", "()D");
            mids$[mid_setPressure_77e0f9a1f260e2e5] = env->getMethodID(cls, "setPressure", "(D)V");
            mids$[mid_setTemperature_77e0f9a1f260e2e5] = env->getMethodID(cls, "setTemperature", "(D)V");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_CORRECTION_FACTOR = env->getStaticDoubleField(cls, "DEFAULT_CORRECTION_FACTOR");
            DEFAULT_PRESSURE = env->getStaticDoubleField(cls, "DEFAULT_PRESSURE");
            DEFAULT_TEMPERATURE = env->getStaticDoubleField(cls, "DEFAULT_TEMPERATURE");
            STANDARD_ATM_PRESSURE = env->getStaticDoubleField(cls, "STANDARD_ATM_PRESSURE");
            STANDARD_ATM_TEMPERATURE = env->getStaticDoubleField(cls, "STANDARD_ATM_TEMPERATURE");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EarthStandardAtmosphereRefraction::EarthStandardAtmosphereRefraction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        EarthStandardAtmosphereRefraction::EarthStandardAtmosphereRefraction(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

        jdouble EarthStandardAtmosphereRefraction::getPressure() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPressure_456d9a2f64d6b28d]);
        }

        jdouble EarthStandardAtmosphereRefraction::getRefraction(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRefraction_0ba5fed9597b693e], a0);
        }

        jdouble EarthStandardAtmosphereRefraction::getTemperature() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTemperature_456d9a2f64d6b28d]);
        }

        void EarthStandardAtmosphereRefraction::setPressure(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPressure_77e0f9a1f260e2e5], a0);
        }

        void EarthStandardAtmosphereRefraction::setTemperature(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTemperature_77e0f9a1f260e2e5], a0);
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
        static PyObject *t_EarthStandardAtmosphereRefraction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EarthStandardAtmosphereRefraction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EarthStandardAtmosphereRefraction_init_(t_EarthStandardAtmosphereRefraction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EarthStandardAtmosphereRefraction_getPressure(t_EarthStandardAtmosphereRefraction *self);
        static PyObject *t_EarthStandardAtmosphereRefraction_getRefraction(t_EarthStandardAtmosphereRefraction *self, PyObject *arg);
        static PyObject *t_EarthStandardAtmosphereRefraction_getTemperature(t_EarthStandardAtmosphereRefraction *self);
        static PyObject *t_EarthStandardAtmosphereRefraction_setPressure(t_EarthStandardAtmosphereRefraction *self, PyObject *arg);
        static PyObject *t_EarthStandardAtmosphereRefraction_setTemperature(t_EarthStandardAtmosphereRefraction *self, PyObject *arg);
        static PyObject *t_EarthStandardAtmosphereRefraction_get__pressure(t_EarthStandardAtmosphereRefraction *self, void *data);
        static int t_EarthStandardAtmosphereRefraction_set__pressure(t_EarthStandardAtmosphereRefraction *self, PyObject *arg, void *data);
        static PyObject *t_EarthStandardAtmosphereRefraction_get__temperature(t_EarthStandardAtmosphereRefraction *self, void *data);
        static int t_EarthStandardAtmosphereRefraction_set__temperature(t_EarthStandardAtmosphereRefraction *self, PyObject *arg, void *data);
        static PyGetSetDef t_EarthStandardAtmosphereRefraction__fields_[] = {
          DECLARE_GETSET_FIELD(t_EarthStandardAtmosphereRefraction, pressure),
          DECLARE_GETSET_FIELD(t_EarthStandardAtmosphereRefraction, temperature),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EarthStandardAtmosphereRefraction__methods_[] = {
          DECLARE_METHOD(t_EarthStandardAtmosphereRefraction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EarthStandardAtmosphereRefraction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EarthStandardAtmosphereRefraction, getPressure, METH_NOARGS),
          DECLARE_METHOD(t_EarthStandardAtmosphereRefraction, getRefraction, METH_O),
          DECLARE_METHOD(t_EarthStandardAtmosphereRefraction, getTemperature, METH_NOARGS),
          DECLARE_METHOD(t_EarthStandardAtmosphereRefraction, setPressure, METH_O),
          DECLARE_METHOD(t_EarthStandardAtmosphereRefraction, setTemperature, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EarthStandardAtmosphereRefraction)[] = {
          { Py_tp_methods, t_EarthStandardAtmosphereRefraction__methods_ },
          { Py_tp_init, (void *) t_EarthStandardAtmosphereRefraction_init_ },
          { Py_tp_getset, t_EarthStandardAtmosphereRefraction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EarthStandardAtmosphereRefraction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EarthStandardAtmosphereRefraction, t_EarthStandardAtmosphereRefraction, EarthStandardAtmosphereRefraction);

        void t_EarthStandardAtmosphereRefraction::install(PyObject *module)
        {
          installType(&PY_TYPE(EarthStandardAtmosphereRefraction), &PY_TYPE_DEF(EarthStandardAtmosphereRefraction), module, "EarthStandardAtmosphereRefraction", 0);
        }

        void t_EarthStandardAtmosphereRefraction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthStandardAtmosphereRefraction), "class_", make_descriptor(EarthStandardAtmosphereRefraction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthStandardAtmosphereRefraction), "wrapfn_", make_descriptor(t_EarthStandardAtmosphereRefraction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthStandardAtmosphereRefraction), "boxfn_", make_descriptor(boxObject));
          env->getClass(EarthStandardAtmosphereRefraction::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthStandardAtmosphereRefraction), "DEFAULT_CORRECTION_FACTOR", make_descriptor(EarthStandardAtmosphereRefraction::DEFAULT_CORRECTION_FACTOR));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthStandardAtmosphereRefraction), "DEFAULT_PRESSURE", make_descriptor(EarthStandardAtmosphereRefraction::DEFAULT_PRESSURE));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthStandardAtmosphereRefraction), "DEFAULT_TEMPERATURE", make_descriptor(EarthStandardAtmosphereRefraction::DEFAULT_TEMPERATURE));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthStandardAtmosphereRefraction), "STANDARD_ATM_PRESSURE", make_descriptor(EarthStandardAtmosphereRefraction::STANDARD_ATM_PRESSURE));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthStandardAtmosphereRefraction), "STANDARD_ATM_TEMPERATURE", make_descriptor(EarthStandardAtmosphereRefraction::STANDARD_ATM_TEMPERATURE));
        }

        static PyObject *t_EarthStandardAtmosphereRefraction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EarthStandardAtmosphereRefraction::initializeClass, 1)))
            return NULL;
          return t_EarthStandardAtmosphereRefraction::wrap_Object(EarthStandardAtmosphereRefraction(((t_EarthStandardAtmosphereRefraction *) arg)->object.this$));
        }
        static PyObject *t_EarthStandardAtmosphereRefraction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EarthStandardAtmosphereRefraction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EarthStandardAtmosphereRefraction_init_(t_EarthStandardAtmosphereRefraction *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              EarthStandardAtmosphereRefraction object((jobject) NULL);

              INT_CALL(object = EarthStandardAtmosphereRefraction());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jdouble a1;
              EarthStandardAtmosphereRefraction object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = EarthStandardAtmosphereRefraction(a0, a1));
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

        static PyObject *t_EarthStandardAtmosphereRefraction_getPressure(t_EarthStandardAtmosphereRefraction *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPressure());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EarthStandardAtmosphereRefraction_getRefraction(t_EarthStandardAtmosphereRefraction *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getRefraction(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getRefraction", arg);
          return NULL;
        }

        static PyObject *t_EarthStandardAtmosphereRefraction_getTemperature(t_EarthStandardAtmosphereRefraction *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTemperature());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EarthStandardAtmosphereRefraction_setPressure(t_EarthStandardAtmosphereRefraction *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setPressure(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPressure", arg);
          return NULL;
        }

        static PyObject *t_EarthStandardAtmosphereRefraction_setTemperature(t_EarthStandardAtmosphereRefraction *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setTemperature(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTemperature", arg);
          return NULL;
        }

        static PyObject *t_EarthStandardAtmosphereRefraction_get__pressure(t_EarthStandardAtmosphereRefraction *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPressure());
          return PyFloat_FromDouble((double) value);
        }
        static int t_EarthStandardAtmosphereRefraction_set__pressure(t_EarthStandardAtmosphereRefraction *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setPressure(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "pressure", arg);
          return -1;
        }

        static PyObject *t_EarthStandardAtmosphereRefraction_get__temperature(t_EarthStandardAtmosphereRefraction *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTemperature());
          return PyFloat_FromDouble((double) value);
        }
        static int t_EarthStandardAtmosphereRefraction_set__temperature(t_EarthStandardAtmosphereRefraction *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setTemperature(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "temperature", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/FieldStepEndEventState.h"
#include "org/hipparchus/ode/events/FieldEventState.h"
#include "org/hipparchus/ode/sampling/FieldODEStateInterpolator.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/FieldODEStepEndHandler.h"
#include "org/hipparchus/ode/events/FieldEventOccurrence.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *FieldStepEndEventState::class$ = NULL;
        jmethodID *FieldStepEndEventState::mids$ = NULL;
        bool FieldStepEndEventState::live$ = false;

        jclass FieldStepEndEventState::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/FieldStepEndEventState");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_08e1e17c6db119ef] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/events/FieldODEStepEndHandler;)V");
            mids$[mid_doEvent_9a5ac4ec8957dcbf] = env->getMethodID(cls, "doEvent", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)Lorg/hipparchus/ode/events/FieldEventOccurrence;");
            mids$[mid_evaluateStep_68d98c2570e5130d] = env->getMethodID(cls, "evaluateStep", "(Lorg/hipparchus/ode/sampling/FieldODEStateInterpolator;)Z");
            mids$[mid_getEventTime_e6d4d3215c30992a] = env->getMethodID(cls, "getEventTime", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getHandler_8e84a3926fe7bec7] = env->getMethodID(cls, "getHandler", "()Lorg/hipparchus/ode/events/FieldODEStepEndHandler;");
            mids$[mid_init_e6d23212b178b64e] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_setStepEnd_03a16642f77779e7] = env->getMethodID(cls, "setStepEnd", "(Lorg/hipparchus/CalculusFieldElement;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldStepEndEventState::FieldStepEndEventState(const ::org::hipparchus::ode::events::FieldODEStepEndHandler & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_08e1e17c6db119ef, a0.this$)) {}

        ::org::hipparchus::ode::events::FieldEventOccurrence FieldStepEndEventState::doEvent(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::ode::events::FieldEventOccurrence(env->callObjectMethod(this$, mids$[mid_doEvent_9a5ac4ec8957dcbf], a0.this$));
        }

        jboolean FieldStepEndEventState::evaluateStep(const ::org::hipparchus::ode::sampling::FieldODEStateInterpolator & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_evaluateStep_68d98c2570e5130d], a0.this$);
        }

        ::org::hipparchus::CalculusFieldElement FieldStepEndEventState::getEventTime() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEventTime_e6d4d3215c30992a]));
        }

        ::org::hipparchus::ode::events::FieldODEStepEndHandler FieldStepEndEventState::getHandler() const
        {
          return ::org::hipparchus::ode::events::FieldODEStepEndHandler(env->callObjectMethod(this$, mids$[mid_getHandler_8e84a3926fe7bec7]));
        }

        void FieldStepEndEventState::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_e6d23212b178b64e], a0.this$, a1.this$);
        }

        void FieldStepEndEventState::setStepEnd(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStepEnd_03a16642f77779e7], a0.this$);
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
        static PyObject *t_FieldStepEndEventState_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldStepEndEventState_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldStepEndEventState_of_(t_FieldStepEndEventState *self, PyObject *args);
        static int t_FieldStepEndEventState_init_(t_FieldStepEndEventState *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldStepEndEventState_doEvent(t_FieldStepEndEventState *self, PyObject *arg);
        static PyObject *t_FieldStepEndEventState_evaluateStep(t_FieldStepEndEventState *self, PyObject *arg);
        static PyObject *t_FieldStepEndEventState_getEventTime(t_FieldStepEndEventState *self);
        static PyObject *t_FieldStepEndEventState_getHandler(t_FieldStepEndEventState *self);
        static PyObject *t_FieldStepEndEventState_init(t_FieldStepEndEventState *self, PyObject *args);
        static PyObject *t_FieldStepEndEventState_setStepEnd(t_FieldStepEndEventState *self, PyObject *arg);
        static PyObject *t_FieldStepEndEventState_get__eventTime(t_FieldStepEndEventState *self, void *data);
        static PyObject *t_FieldStepEndEventState_get__handler(t_FieldStepEndEventState *self, void *data);
        static int t_FieldStepEndEventState_set__stepEnd(t_FieldStepEndEventState *self, PyObject *arg, void *data);
        static PyObject *t_FieldStepEndEventState_get__parameters_(t_FieldStepEndEventState *self, void *data);
        static PyGetSetDef t_FieldStepEndEventState__fields_[] = {
          DECLARE_GET_FIELD(t_FieldStepEndEventState, eventTime),
          DECLARE_GET_FIELD(t_FieldStepEndEventState, handler),
          DECLARE_SET_FIELD(t_FieldStepEndEventState, stepEnd),
          DECLARE_GET_FIELD(t_FieldStepEndEventState, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldStepEndEventState__methods_[] = {
          DECLARE_METHOD(t_FieldStepEndEventState, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldStepEndEventState, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldStepEndEventState, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldStepEndEventState, doEvent, METH_O),
          DECLARE_METHOD(t_FieldStepEndEventState, evaluateStep, METH_O),
          DECLARE_METHOD(t_FieldStepEndEventState, getEventTime, METH_NOARGS),
          DECLARE_METHOD(t_FieldStepEndEventState, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_FieldStepEndEventState, init, METH_VARARGS),
          DECLARE_METHOD(t_FieldStepEndEventState, setStepEnd, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldStepEndEventState)[] = {
          { Py_tp_methods, t_FieldStepEndEventState__methods_ },
          { Py_tp_init, (void *) t_FieldStepEndEventState_init_ },
          { Py_tp_getset, t_FieldStepEndEventState__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldStepEndEventState)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldStepEndEventState, t_FieldStepEndEventState, FieldStepEndEventState);
        PyObject *t_FieldStepEndEventState::wrap_Object(const FieldStepEndEventState& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldStepEndEventState::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldStepEndEventState *self = (t_FieldStepEndEventState *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldStepEndEventState::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldStepEndEventState::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldStepEndEventState *self = (t_FieldStepEndEventState *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldStepEndEventState::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldStepEndEventState), &PY_TYPE_DEF(FieldStepEndEventState), module, "FieldStepEndEventState", 0);
        }

        void t_FieldStepEndEventState::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStepEndEventState), "class_", make_descriptor(FieldStepEndEventState::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStepEndEventState), "wrapfn_", make_descriptor(t_FieldStepEndEventState::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStepEndEventState), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldStepEndEventState_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldStepEndEventState::initializeClass, 1)))
            return NULL;
          return t_FieldStepEndEventState::wrap_Object(FieldStepEndEventState(((t_FieldStepEndEventState *) arg)->object.this$));
        }
        static PyObject *t_FieldStepEndEventState_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldStepEndEventState::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldStepEndEventState_of_(t_FieldStepEndEventState *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldStepEndEventState_init_(t_FieldStepEndEventState *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::ode::events::FieldODEStepEndHandler a0((jobject) NULL);
          PyTypeObject **p0;
          FieldStepEndEventState object((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::ode::events::FieldODEStepEndHandler::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_FieldODEStepEndHandler::parameters_))
          {
            INT_CALL(object = FieldStepEndEventState(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldStepEndEventState_doEvent(t_FieldStepEndEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::events::FieldEventOccurrence result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(result = self->object.doEvent(a0));
            return ::org::hipparchus::ode::events::t_FieldEventOccurrence::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "doEvent", arg);
          return NULL;
        }

        static PyObject *t_FieldStepEndEventState_evaluateStep(t_FieldStepEndEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::FieldODEStateInterpolator a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArg(arg, "K", ::org::hipparchus::ode::sampling::FieldODEStateInterpolator::initializeClass, &a0, &p0, ::org::hipparchus::ode::sampling::t_FieldODEStateInterpolator::parameters_))
          {
            OBJ_CALL(result = self->object.evaluateStep(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "evaluateStep", arg);
          return NULL;
        }

        static PyObject *t_FieldStepEndEventState_getEventTime(t_FieldStepEndEventState *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventTime());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldStepEndEventState_getHandler(t_FieldStepEndEventState *self)
        {
          ::org::hipparchus::ode::events::FieldODEStepEndHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_FieldODEStepEndHandler::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldStepEndEventState_init(t_FieldStepEndEventState *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_FieldStepEndEventState_setStepEnd(t_FieldStepEndEventState *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.setStepEnd(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStepEnd", arg);
          return NULL;
        }
        static PyObject *t_FieldStepEndEventState_get__parameters_(t_FieldStepEndEventState *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldStepEndEventState_get__eventTime(t_FieldStepEndEventState *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventTime());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldStepEndEventState_get__handler(t_FieldStepEndEventState *self, void *data)
        {
          ::org::hipparchus::ode::events::FieldODEStepEndHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_FieldODEStepEndHandler::wrap_Object(value);
        }

        static int t_FieldStepEndEventState_set__stepEnd(t_FieldStepEndEventState *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              INT_CALL(self->object.setStepEnd(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "stepEnd", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Asin.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Asin::class$ = NULL;
        jmethodID *Asin::mids$ = NULL;
        bool Asin::live$ = false;

        jclass Asin::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Asin");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_0ba5fed9597b693e] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_1f22c1881e72229d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Asin::Asin() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jdouble Asin::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_0ba5fed9597b693e], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Asin::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_1f22c1881e72229d], a0.this$));
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
        static PyObject *t_Asin_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Asin_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Asin_init_(t_Asin *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Asin_value(t_Asin *self, PyObject *args);

        static PyMethodDef t_Asin__methods_[] = {
          DECLARE_METHOD(t_Asin, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Asin, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Asin, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Asin)[] = {
          { Py_tp_methods, t_Asin__methods_ },
          { Py_tp_init, (void *) t_Asin_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Asin)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Asin, t_Asin, Asin);

        void t_Asin::install(PyObject *module)
        {
          installType(&PY_TYPE(Asin), &PY_TYPE_DEF(Asin), module, "Asin", 0);
        }

        void t_Asin::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Asin), "class_", make_descriptor(Asin::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Asin), "wrapfn_", make_descriptor(t_Asin::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Asin), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Asin_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Asin::initializeClass, 1)))
            return NULL;
          return t_Asin::wrap_Object(Asin(((t_Asin *) arg)->object.this$));
        }
        static PyObject *t_Asin_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Asin::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Asin_init_(t_Asin *self, PyObject *args, PyObject *kwds)
        {
          Asin object((jobject) NULL);

          INT_CALL(object = Asin());
          self->object = object;

          return 0;
        }

        static PyObject *t_Asin_value(t_Asin *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
              }
            }
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
#include "org/hipparchus/special/elliptic/jacobi/CopolarC.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *CopolarC::class$ = NULL;
          jmethodID *CopolarC::mids$ = NULL;
          bool CopolarC::live$ = false;

          jclass CopolarC::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/CopolarC");

              mids$ = new jmethodID[max_mid];
              mids$[mid_dc_456d9a2f64d6b28d] = env->getMethodID(cls, "dc", "()D");
              mids$[mid_nc_456d9a2f64d6b28d] = env->getMethodID(cls, "nc", "()D");
              mids$[mid_sc_456d9a2f64d6b28d] = env->getMethodID(cls, "sc", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble CopolarC::dc() const
          {
            return env->callDoubleMethod(this$, mids$[mid_dc_456d9a2f64d6b28d]);
          }

          jdouble CopolarC::nc() const
          {
            return env->callDoubleMethod(this$, mids$[mid_nc_456d9a2f64d6b28d]);
          }

          jdouble CopolarC::sc() const
          {
            return env->callDoubleMethod(this$, mids$[mid_sc_456d9a2f64d6b28d]);
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
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {
          static PyObject *t_CopolarC_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CopolarC_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CopolarC_dc(t_CopolarC *self);
          static PyObject *t_CopolarC_nc(t_CopolarC *self);
          static PyObject *t_CopolarC_sc(t_CopolarC *self);

          static PyMethodDef t_CopolarC__methods_[] = {
            DECLARE_METHOD(t_CopolarC, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CopolarC, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CopolarC, dc, METH_NOARGS),
            DECLARE_METHOD(t_CopolarC, nc, METH_NOARGS),
            DECLARE_METHOD(t_CopolarC, sc, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CopolarC)[] = {
            { Py_tp_methods, t_CopolarC__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CopolarC)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CopolarC, t_CopolarC, CopolarC);

          void t_CopolarC::install(PyObject *module)
          {
            installType(&PY_TYPE(CopolarC), &PY_TYPE_DEF(CopolarC), module, "CopolarC", 0);
          }

          void t_CopolarC::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarC), "class_", make_descriptor(CopolarC::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarC), "wrapfn_", make_descriptor(t_CopolarC::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarC), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CopolarC_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CopolarC::initializeClass, 1)))
              return NULL;
            return t_CopolarC::wrap_Object(CopolarC(((t_CopolarC *) arg)->object.this$));
          }
          static PyObject *t_CopolarC_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CopolarC::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CopolarC_dc(t_CopolarC *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.dc());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CopolarC_nc(t_CopolarC *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.nc());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CopolarC_sc(t_CopolarC *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.sc());
            return PyFloat_FromDouble((double) result);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/geometry/Space.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/Vector.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "java/lang/String.h"
#include "java/text/NumberFormat.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {

          ::java::lang::Class *Vector2D::class$ = NULL;
          jmethodID *Vector2D::mids$ = NULL;
          bool Vector2D::live$ = false;
          Vector2D *Vector2D::MINUS_I = NULL;
          Vector2D *Vector2D::MINUS_J = NULL;
          Vector2D *Vector2D::NEGATIVE_INFINITY = NULL;
          Vector2D *Vector2D::NaN = NULL;
          Vector2D *Vector2D::PLUS_I = NULL;
          Vector2D *Vector2D::PLUS_J = NULL;
          Vector2D *Vector2D::POSITIVE_INFINITY = NULL;
          Vector2D *Vector2D::ZERO = NULL;

          jclass Vector2D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/Vector2D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ebc26dcaf4761286] = env->getMethodID(cls, "<init>", "([D)V");
              mids$[mid_init$_f99c97f1de58893e] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
              mids$[mid_init$_260f828910f0d217] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/twod/Vector2D;DLorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_init$_1eb5059c70d52300] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/twod/Vector2D;DLorg/hipparchus/geometry/euclidean/twod/Vector2D;DLorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_init$_0ad7d4e3605105c3] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/twod/Vector2D;DLorg/hipparchus/geometry/euclidean/twod/Vector2D;DLorg/hipparchus/geometry/euclidean/twod/Vector2D;DLorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_add_6698e195f6e5dfff] = env->getMethodID(cls, "add", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_add_f4ada383aea98827] = env->getMethodID(cls, "add", "(DLorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_angle_0fbdabd0a8745d93] = env->getStaticMethodID(cls, "angle", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)D");
              mids$[mid_crossProduct_0fbdabd0a8745d93] = env->getMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)D");
              mids$[mid_distance_726dc963fac3505e] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_distance_0fbdabd0a8745d93] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)D");
              mids$[mid_distance1_05fa5f52db18503d] = env->getMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_distance1_0fbdabd0a8745d93] = env->getStaticMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)D");
              mids$[mid_distanceInf_05fa5f52db18503d] = env->getMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_distanceInf_0fbdabd0a8745d93] = env->getStaticMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)D");
              mids$[mid_distanceSq_05fa5f52db18503d] = env->getMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_distanceSq_0fbdabd0a8745d93] = env->getStaticMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)D");
              mids$[mid_dotProduct_05fa5f52db18503d] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_equalsIeee754_229c87223f486349] = env->getMethodID(cls, "equalsIeee754", "(Ljava/lang/Object;)Z");
              mids$[mid_getNorm_456d9a2f64d6b28d] = env->getMethodID(cls, "getNorm", "()D");
              mids$[mid_getNorm1_456d9a2f64d6b28d] = env->getMethodID(cls, "getNorm1", "()D");
              mids$[mid_getNormInf_456d9a2f64d6b28d] = env->getMethodID(cls, "getNormInf", "()D");
              mids$[mid_getNormSq_456d9a2f64d6b28d] = env->getMethodID(cls, "getNormSq", "()D");
              mids$[mid_getSpace_0438ef5f9a5edb53] = env->getMethodID(cls, "getSpace", "()Lorg/hipparchus/geometry/Space;");
              mids$[mid_getX_456d9a2f64d6b28d] = env->getMethodID(cls, "getX", "()D");
              mids$[mid_getY_456d9a2f64d6b28d] = env->getMethodID(cls, "getY", "()D");
              mids$[mid_getZero_6d781af269bebe5e] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isInfinite_e470b6d9e0d979db] = env->getMethodID(cls, "isInfinite", "()Z");
              mids$[mid_isNaN_e470b6d9e0d979db] = env->getMethodID(cls, "isNaN", "()Z");
              mids$[mid_negate_6d781af269bebe5e] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_orientation_065804d1672f0d09] = env->getStaticMethodID(cls, "orientation", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)D");
              mids$[mid_scalarMultiply_395c0d14fc31fa5e] = env->getMethodID(cls, "scalarMultiply", "(D)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_subtract_6698e195f6e5dfff] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_subtract_f4ada383aea98827] = env->getMethodID(cls, "subtract", "(DLorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_toArray_7cdc325af0834901] = env->getMethodID(cls, "toArray", "()[D");
              mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
              mids$[mid_toString_aed149be89fb33b9] = env->getMethodID(cls, "toString", "(Ljava/text/NumberFormat;)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              MINUS_I = new Vector2D(env->getStaticObjectField(cls, "MINUS_I", "Lorg/hipparchus/geometry/euclidean/twod/Vector2D;"));
              MINUS_J = new Vector2D(env->getStaticObjectField(cls, "MINUS_J", "Lorg/hipparchus/geometry/euclidean/twod/Vector2D;"));
              NEGATIVE_INFINITY = new Vector2D(env->getStaticObjectField(cls, "NEGATIVE_INFINITY", "Lorg/hipparchus/geometry/euclidean/twod/Vector2D;"));
              NaN = new Vector2D(env->getStaticObjectField(cls, "NaN", "Lorg/hipparchus/geometry/euclidean/twod/Vector2D;"));
              PLUS_I = new Vector2D(env->getStaticObjectField(cls, "PLUS_I", "Lorg/hipparchus/geometry/euclidean/twod/Vector2D;"));
              PLUS_J = new Vector2D(env->getStaticObjectField(cls, "PLUS_J", "Lorg/hipparchus/geometry/euclidean/twod/Vector2D;"));
              POSITIVE_INFINITY = new Vector2D(env->getStaticObjectField(cls, "POSITIVE_INFINITY", "Lorg/hipparchus/geometry/euclidean/twod/Vector2D;"));
              ZERO = new Vector2D(env->getStaticObjectField(cls, "ZERO", "Lorg/hipparchus/geometry/euclidean/twod/Vector2D;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Vector2D::Vector2D(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ebc26dcaf4761286, a0.this$)) {}

          Vector2D::Vector2D(jdouble a0, const Vector2D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f99c97f1de58893e, a0, a1.this$)) {}

          Vector2D::Vector2D(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

          Vector2D::Vector2D(jdouble a0, const Vector2D & a1, jdouble a2, const Vector2D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_260f828910f0d217, a0, a1.this$, a2, a3.this$)) {}

          Vector2D::Vector2D(jdouble a0, const Vector2D & a1, jdouble a2, const Vector2D & a3, jdouble a4, const Vector2D & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1eb5059c70d52300, a0, a1.this$, a2, a3.this$, a4, a5.this$)) {}

          Vector2D::Vector2D(jdouble a0, const Vector2D & a1, jdouble a2, const Vector2D & a3, jdouble a4, const Vector2D & a5, jdouble a6, const Vector2D & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0ad7d4e3605105c3, a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$)) {}

          Vector2D Vector2D::add(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return Vector2D(env->callObjectMethod(this$, mids$[mid_add_6698e195f6e5dfff], a0.this$));
          }

          Vector2D Vector2D::add(jdouble a0, const ::org::hipparchus::geometry::Vector & a1) const
          {
            return Vector2D(env->callObjectMethod(this$, mids$[mid_add_f4ada383aea98827], a0, a1.this$));
          }

          jdouble Vector2D::angle(const Vector2D & a0, const Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_angle_0fbdabd0a8745d93], a0.this$, a1.this$);
          }

          jdouble Vector2D::crossProduct(const Vector2D & a0, const Vector2D & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_crossProduct_0fbdabd0a8745d93], a0.this$, a1.this$);
          }

          jdouble Vector2D::distance(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance_726dc963fac3505e], a0.this$);
          }

          jdouble Vector2D::distance(const Vector2D & a0, const Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distance_0fbdabd0a8745d93], a0.this$, a1.this$);
          }

          jdouble Vector2D::distance1(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance1_05fa5f52db18503d], a0.this$);
          }

          jdouble Vector2D::distance1(const Vector2D & a0, const Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distance1_0fbdabd0a8745d93], a0.this$, a1.this$);
          }

          jdouble Vector2D::distanceInf(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distanceInf_05fa5f52db18503d], a0.this$);
          }

          jdouble Vector2D::distanceInf(const Vector2D & a0, const Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distanceInf_0fbdabd0a8745d93], a0.this$, a1.this$);
          }

          jdouble Vector2D::distanceSq(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distanceSq_05fa5f52db18503d], a0.this$);
          }

          jdouble Vector2D::distanceSq(const Vector2D & a0, const Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distanceSq_0fbdabd0a8745d93], a0.this$, a1.this$);
          }

          jdouble Vector2D::dotProduct(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_dotProduct_05fa5f52db18503d], a0.this$);
          }

          jboolean Vector2D::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
          }

          jboolean Vector2D::equalsIeee754(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equalsIeee754_229c87223f486349], a0.this$);
          }

          jdouble Vector2D::getNorm() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNorm_456d9a2f64d6b28d]);
          }

          jdouble Vector2D::getNorm1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNorm1_456d9a2f64d6b28d]);
          }

          jdouble Vector2D::getNormInf() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNormInf_456d9a2f64d6b28d]);
          }

          jdouble Vector2D::getNormSq() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNormSq_456d9a2f64d6b28d]);
          }

          ::org::hipparchus::geometry::Space Vector2D::getSpace() const
          {
            return ::org::hipparchus::geometry::Space(env->callObjectMethod(this$, mids$[mid_getSpace_0438ef5f9a5edb53]));
          }

          jdouble Vector2D::getX() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getX_456d9a2f64d6b28d]);
          }

          jdouble Vector2D::getY() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getY_456d9a2f64d6b28d]);
          }

          Vector2D Vector2D::getZero() const
          {
            return Vector2D(env->callObjectMethod(this$, mids$[mid_getZero_6d781af269bebe5e]));
          }

          jint Vector2D::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
          }

          jboolean Vector2D::isInfinite() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isInfinite_e470b6d9e0d979db]);
          }

          jboolean Vector2D::isNaN() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isNaN_e470b6d9e0d979db]);
          }

          Vector2D Vector2D::negate() const
          {
            return Vector2D(env->callObjectMethod(this$, mids$[mid_negate_6d781af269bebe5e]));
          }

          jdouble Vector2D::orientation(const Vector2D & a0, const Vector2D & a1, const Vector2D & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_orientation_065804d1672f0d09], a0.this$, a1.this$, a2.this$);
          }

          Vector2D Vector2D::scalarMultiply(jdouble a0) const
          {
            return Vector2D(env->callObjectMethod(this$, mids$[mid_scalarMultiply_395c0d14fc31fa5e], a0));
          }

          Vector2D Vector2D::subtract(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return Vector2D(env->callObjectMethod(this$, mids$[mid_subtract_6698e195f6e5dfff], a0.this$));
          }

          Vector2D Vector2D::subtract(jdouble a0, const ::org::hipparchus::geometry::Vector & a1) const
          {
            return Vector2D(env->callObjectMethod(this$, mids$[mid_subtract_f4ada383aea98827], a0, a1.this$));
          }

          JArray< jdouble > Vector2D::toArray() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toArray_7cdc325af0834901]));
          }

          ::java::lang::String Vector2D::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
          }

          ::java::lang::String Vector2D::toString(const ::java::text::NumberFormat & a0) const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_aed149be89fb33b9], a0.this$));
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
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          static PyObject *t_Vector2D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vector2D_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Vector2D_init_(t_Vector2D *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Vector2D_add(t_Vector2D *self, PyObject *args);
          static PyObject *t_Vector2D_angle(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector2D_crossProduct(t_Vector2D *self, PyObject *args);
          static PyObject *t_Vector2D_distance(t_Vector2D *self, PyObject *arg);
          static PyObject *t_Vector2D_distance1(t_Vector2D *self, PyObject *arg);
          static PyObject *t_Vector2D_distance1_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector2D_distanceInf(t_Vector2D *self, PyObject *arg);
          static PyObject *t_Vector2D_distanceInf_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector2D_distanceSq(t_Vector2D *self, PyObject *arg);
          static PyObject *t_Vector2D_distanceSq_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector2D_distance_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector2D_dotProduct(t_Vector2D *self, PyObject *arg);
          static PyObject *t_Vector2D_equals(t_Vector2D *self, PyObject *args);
          static PyObject *t_Vector2D_equalsIeee754(t_Vector2D *self, PyObject *arg);
          static PyObject *t_Vector2D_getNorm(t_Vector2D *self);
          static PyObject *t_Vector2D_getNorm1(t_Vector2D *self);
          static PyObject *t_Vector2D_getNormInf(t_Vector2D *self);
          static PyObject *t_Vector2D_getNormSq(t_Vector2D *self);
          static PyObject *t_Vector2D_getSpace(t_Vector2D *self);
          static PyObject *t_Vector2D_getX(t_Vector2D *self);
          static PyObject *t_Vector2D_getY(t_Vector2D *self);
          static PyObject *t_Vector2D_getZero(t_Vector2D *self);
          static PyObject *t_Vector2D_hashCode(t_Vector2D *self, PyObject *args);
          static PyObject *t_Vector2D_isInfinite(t_Vector2D *self);
          static PyObject *t_Vector2D_isNaN(t_Vector2D *self);
          static PyObject *t_Vector2D_negate(t_Vector2D *self);
          static PyObject *t_Vector2D_orientation(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector2D_scalarMultiply(t_Vector2D *self, PyObject *arg);
          static PyObject *t_Vector2D_subtract(t_Vector2D *self, PyObject *args);
          static PyObject *t_Vector2D_toArray(t_Vector2D *self);
          static PyObject *t_Vector2D_toString(t_Vector2D *self, PyObject *args);
          static PyObject *t_Vector2D_get__infinite(t_Vector2D *self, void *data);
          static PyObject *t_Vector2D_get__naN(t_Vector2D *self, void *data);
          static PyObject *t_Vector2D_get__norm(t_Vector2D *self, void *data);
          static PyObject *t_Vector2D_get__norm1(t_Vector2D *self, void *data);
          static PyObject *t_Vector2D_get__normInf(t_Vector2D *self, void *data);
          static PyObject *t_Vector2D_get__normSq(t_Vector2D *self, void *data);
          static PyObject *t_Vector2D_get__space(t_Vector2D *self, void *data);
          static PyObject *t_Vector2D_get__x(t_Vector2D *self, void *data);
          static PyObject *t_Vector2D_get__y(t_Vector2D *self, void *data);
          static PyObject *t_Vector2D_get__zero(t_Vector2D *self, void *data);
          static PyGetSetDef t_Vector2D__fields_[] = {
            DECLARE_GET_FIELD(t_Vector2D, infinite),
            DECLARE_GET_FIELD(t_Vector2D, naN),
            DECLARE_GET_FIELD(t_Vector2D, norm),
            DECLARE_GET_FIELD(t_Vector2D, norm1),
            DECLARE_GET_FIELD(t_Vector2D, normInf),
            DECLARE_GET_FIELD(t_Vector2D, normSq),
            DECLARE_GET_FIELD(t_Vector2D, space),
            DECLARE_GET_FIELD(t_Vector2D, x),
            DECLARE_GET_FIELD(t_Vector2D, y),
            DECLARE_GET_FIELD(t_Vector2D, zero),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Vector2D__methods_[] = {
            DECLARE_METHOD(t_Vector2D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector2D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector2D, add, METH_VARARGS),
            DECLARE_METHOD(t_Vector2D, angle, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector2D, crossProduct, METH_VARARGS),
            DECLARE_METHOD(t_Vector2D, distance, METH_O),
            DECLARE_METHOD(t_Vector2D, distance1, METH_O),
            DECLARE_METHOD(t_Vector2D, distance1_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector2D, distanceInf, METH_O),
            DECLARE_METHOD(t_Vector2D, distanceInf_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector2D, distanceSq, METH_O),
            DECLARE_METHOD(t_Vector2D, distanceSq_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector2D, distance_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector2D, dotProduct, METH_O),
            DECLARE_METHOD(t_Vector2D, equals, METH_VARARGS),
            DECLARE_METHOD(t_Vector2D, equalsIeee754, METH_O),
            DECLARE_METHOD(t_Vector2D, getNorm, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, getNorm1, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, getNormInf, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, getNormSq, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, getSpace, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, getX, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, getY, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, getZero, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_Vector2D, isInfinite, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, isNaN, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, negate, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, orientation, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector2D, scalarMultiply, METH_O),
            DECLARE_METHOD(t_Vector2D, subtract, METH_VARARGS),
            DECLARE_METHOD(t_Vector2D, toArray, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Vector2D)[] = {
            { Py_tp_methods, t_Vector2D__methods_ },
            { Py_tp_init, (void *) t_Vector2D_init_ },
            { Py_tp_getset, t_Vector2D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Vector2D)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Vector2D, t_Vector2D, Vector2D);

          void t_Vector2D::install(PyObject *module)
          {
            installType(&PY_TYPE(Vector2D), &PY_TYPE_DEF(Vector2D), module, "Vector2D", 0);
          }

          void t_Vector2D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "class_", make_descriptor(Vector2D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "wrapfn_", make_descriptor(t_Vector2D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "boxfn_", make_descriptor(boxObject));
            env->getClass(Vector2D::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "MINUS_I", make_descriptor(t_Vector2D::wrap_Object(*Vector2D::MINUS_I)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "MINUS_J", make_descriptor(t_Vector2D::wrap_Object(*Vector2D::MINUS_J)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "NEGATIVE_INFINITY", make_descriptor(t_Vector2D::wrap_Object(*Vector2D::NEGATIVE_INFINITY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "NaN", make_descriptor(t_Vector2D::wrap_Object(*Vector2D::NaN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "PLUS_I", make_descriptor(t_Vector2D::wrap_Object(*Vector2D::PLUS_I)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "PLUS_J", make_descriptor(t_Vector2D::wrap_Object(*Vector2D::PLUS_J)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "POSITIVE_INFINITY", make_descriptor(t_Vector2D::wrap_Object(*Vector2D::POSITIVE_INFINITY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "ZERO", make_descriptor(t_Vector2D::wrap_Object(*Vector2D::ZERO)));
          }

          static PyObject *t_Vector2D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Vector2D::initializeClass, 1)))
              return NULL;
            return t_Vector2D::wrap_Object(Vector2D(((t_Vector2D *) arg)->object.this$));
          }
          static PyObject *t_Vector2D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Vector2D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Vector2D_init_(t_Vector2D *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                JArray< jdouble > a0((jobject) NULL);
                Vector2D object((jobject) NULL);

                if (!parseArgs(args, "[D", &a0))
                {
                  INT_CALL(object = Vector2D(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                jdouble a0;
                Vector2D a1((jobject) NULL);
                Vector2D object((jobject) NULL);

                if (!parseArgs(args, "Dk", Vector2D::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Vector2D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                jdouble a0;
                jdouble a1;
                Vector2D object((jobject) NULL);

                if (!parseArgs(args, "DD", &a0, &a1))
                {
                  INT_CALL(object = Vector2D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                jdouble a0;
                Vector2D a1((jobject) NULL);
                jdouble a2;
                Vector2D a3((jobject) NULL);
                Vector2D object((jobject) NULL);

                if (!parseArgs(args, "DkDk", Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = Vector2D(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 6:
              {
                jdouble a0;
                Vector2D a1((jobject) NULL);
                jdouble a2;
                Vector2D a3((jobject) NULL);
                jdouble a4;
                Vector2D a5((jobject) NULL);
                Vector2D object((jobject) NULL);

                if (!parseArgs(args, "DkDkDk", Vector2D::initializeClass, Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                {
                  INT_CALL(object = Vector2D(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 8:
              {
                jdouble a0;
                Vector2D a1((jobject) NULL);
                jdouble a2;
                Vector2D a3((jobject) NULL);
                jdouble a4;
                Vector2D a5((jobject) NULL);
                jdouble a6;
                Vector2D a7((jobject) NULL);
                Vector2D object((jobject) NULL);

                if (!parseArgs(args, "DkDkDkDk", Vector2D::initializeClass, Vector2D::initializeClass, Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
                {
                  INT_CALL(object = Vector2D(a0, a1, a2, a3, a4, a5, a6, a7));
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

          static PyObject *t_Vector2D_add(t_Vector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                Vector2D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0));
                  return t_Vector2D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                jdouble a0;
                ::org::hipparchus::geometry::Vector a1((jobject) NULL);
                PyTypeObject **p1;
                Vector2D result((jobject) NULL);

                if (!parseArgs(args, "DK", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_Vector2D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "add", args);
            return NULL;
          }

          static PyObject *t_Vector2D_angle(PyTypeObject *type, PyObject *args)
          {
            Vector2D a0((jobject) NULL);
            Vector2D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Vector2D::angle(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "angle", args);
            return NULL;
          }

          static PyObject *t_Vector2D_crossProduct(t_Vector2D *self, PyObject *args)
          {
            Vector2D a0((jobject) NULL);
            Vector2D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.crossProduct(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "crossProduct", args);
            return NULL;
          }

          static PyObject *t_Vector2D_distance(t_Vector2D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.distance(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distance", arg);
            return NULL;
          }

          static PyObject *t_Vector2D_distance1(t_Vector2D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.distance1(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distance1", arg);
            return NULL;
          }

          static PyObject *t_Vector2D_distance1_(PyTypeObject *type, PyObject *args)
          {
            Vector2D a0((jobject) NULL);
            Vector2D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Vector2D::distance1(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distance1_", args);
            return NULL;
          }

          static PyObject *t_Vector2D_distanceInf(t_Vector2D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.distanceInf(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distanceInf", arg);
            return NULL;
          }

          static PyObject *t_Vector2D_distanceInf_(PyTypeObject *type, PyObject *args)
          {
            Vector2D a0((jobject) NULL);
            Vector2D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Vector2D::distanceInf(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distanceInf_", args);
            return NULL;
          }

          static PyObject *t_Vector2D_distanceSq(t_Vector2D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.distanceSq(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distanceSq", arg);
            return NULL;
          }

          static PyObject *t_Vector2D_distanceSq_(PyTypeObject *type, PyObject *args)
          {
            Vector2D a0((jobject) NULL);
            Vector2D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Vector2D::distanceSq(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distanceSq_", args);
            return NULL;
          }

          static PyObject *t_Vector2D_distance_(PyTypeObject *type, PyObject *args)
          {
            Vector2D a0((jobject) NULL);
            Vector2D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Vector2D::distance(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distance_", args);
            return NULL;
          }

          static PyObject *t_Vector2D_dotProduct(t_Vector2D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.dotProduct(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "dotProduct", arg);
            return NULL;
          }

          static PyObject *t_Vector2D_equals(t_Vector2D *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(Vector2D), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_Vector2D_equalsIeee754(t_Vector2D *self, PyObject *arg)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "o", &a0))
            {
              OBJ_CALL(result = self->object.equalsIeee754(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "equalsIeee754", arg);
            return NULL;
          }

          static PyObject *t_Vector2D_getNorm(t_Vector2D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNorm());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector2D_getNorm1(t_Vector2D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNorm1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector2D_getNormInf(t_Vector2D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNormInf());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector2D_getNormSq(t_Vector2D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNormSq());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector2D_getSpace(t_Vector2D *self)
          {
            ::org::hipparchus::geometry::Space result((jobject) NULL);
            OBJ_CALL(result = self->object.getSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(result);
          }

          static PyObject *t_Vector2D_getX(t_Vector2D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getX());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector2D_getY(t_Vector2D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getY());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector2D_getZero(t_Vector2D *self)
          {
            Vector2D result((jobject) NULL);
            OBJ_CALL(result = self->object.getZero());
            return t_Vector2D::wrap_Object(result);
          }

          static PyObject *t_Vector2D_hashCode(t_Vector2D *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(Vector2D), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_Vector2D_isInfinite(t_Vector2D *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isInfinite());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_Vector2D_isNaN(t_Vector2D *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isNaN());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_Vector2D_negate(t_Vector2D *self)
          {
            Vector2D result((jobject) NULL);
            OBJ_CALL(result = self->object.negate());
            return t_Vector2D::wrap_Object(result);
          }

          static PyObject *t_Vector2D_orientation(PyTypeObject *type, PyObject *args)
          {
            Vector2D a0((jobject) NULL);
            Vector2D a1((jobject) NULL);
            Vector2D a2((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kkk", Vector2D::initializeClass, Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Vector2D::orientation(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "orientation", args);
            return NULL;
          }

          static PyObject *t_Vector2D_scalarMultiply(t_Vector2D *self, PyObject *arg)
          {
            jdouble a0;
            Vector2D result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.scalarMultiply(a0));
              return t_Vector2D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "scalarMultiply", arg);
            return NULL;
          }

          static PyObject *t_Vector2D_subtract(t_Vector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                Vector2D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0));
                  return t_Vector2D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                jdouble a0;
                ::org::hipparchus::geometry::Vector a1((jobject) NULL);
                PyTypeObject **p1;
                Vector2D result((jobject) NULL);

                if (!parseArgs(args, "DK", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_Vector2D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "subtract", args);
            return NULL;
          }

          static PyObject *t_Vector2D_toArray(t_Vector2D *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.toArray());
            return result.wrap();
          }

          static PyObject *t_Vector2D_toString(t_Vector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.toString());
                return j2p(result);
              }
              break;
             case 1:
              {
                ::java::text::NumberFormat a0((jobject) NULL);
                ::java::lang::String result((jobject) NULL);

                if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.toString(a0));
                  return j2p(result);
                }
              }
            }

            return callSuper(PY_TYPE(Vector2D), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_Vector2D_get__infinite(t_Vector2D *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isInfinite());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_Vector2D_get__naN(t_Vector2D *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isNaN());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_Vector2D_get__norm(t_Vector2D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNorm());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector2D_get__norm1(t_Vector2D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNorm1());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector2D_get__normInf(t_Vector2D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNormInf());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector2D_get__normSq(t_Vector2D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNormSq());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector2D_get__space(t_Vector2D *self, void *data)
          {
            ::org::hipparchus::geometry::Space value((jobject) NULL);
            OBJ_CALL(value = self->object.getSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(value);
          }

          static PyObject *t_Vector2D_get__x(t_Vector2D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getX());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector2D_get__y(t_Vector2D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getY());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector2D_get__zero(t_Vector2D *self, void *data)
          {
            Vector2D value((jobject) NULL);
            OBJ_CALL(value = self->object.getZero());
            return t_Vector2D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/EmbeddedRungeKuttaFieldIntegrator.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/FieldExpandableODE.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/FieldODEState.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/nonstiff/FieldButcherArrayProvider.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *EmbeddedRungeKuttaFieldIntegrator::class$ = NULL;
        jmethodID *EmbeddedRungeKuttaFieldIntegrator::mids$ = NULL;
        bool EmbeddedRungeKuttaFieldIntegrator::live$ = false;

        jclass EmbeddedRungeKuttaFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/EmbeddedRungeKuttaFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getMaxGrowth_e6d4d3215c30992a] = env->getMethodID(cls, "getMaxGrowth", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getMinReduction_e6d4d3215c30992a] = env->getMethodID(cls, "getMinReduction", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOrder_f2f64475e4580546] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getSafety_e6d4d3215c30992a] = env->getMethodID(cls, "getSafety", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_integrate_668e072c435ebb6b] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/FieldExpandableODE;Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_setMaxGrowth_03a16642f77779e7] = env->getMethodID(cls, "setMaxGrowth", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_setMinReduction_03a16642f77779e7] = env->getMethodID(cls, "setMinReduction", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_setSafety_03a16642f77779e7] = env->getMethodID(cls, "setSafety", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_createInterpolator_5a12ffbd2c0d2689] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/RungeKuttaFieldStateInterpolator;");
            mids$[mid_estimateError_681c74af7b6fa1aa] = env->getMethodID(cls, "estimateError", "([[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)D");
            mids$[mid_fraction_df565f90ecf8d53c] = env->getMethodID(cls, "fraction", "(DD)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_fraction_3e44951e1cc3e6e3] = env->getMethodID(cls, "fraction", "(II)Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement EmbeddedRungeKuttaFieldIntegrator::getMaxGrowth() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMaxGrowth_e6d4d3215c30992a]));
        }

        ::org::hipparchus::CalculusFieldElement EmbeddedRungeKuttaFieldIntegrator::getMinReduction() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMinReduction_e6d4d3215c30992a]));
        }

        jint EmbeddedRungeKuttaFieldIntegrator::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_f2f64475e4580546]);
        }

        ::org::hipparchus::CalculusFieldElement EmbeddedRungeKuttaFieldIntegrator::getSafety() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getSafety_e6d4d3215c30992a]));
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative EmbeddedRungeKuttaFieldIntegrator::integrate(const ::org::hipparchus::ode::FieldExpandableODE & a0, const ::org::hipparchus::ode::FieldODEState & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_668e072c435ebb6b], a0.this$, a1.this$, a2.this$));
        }

        void EmbeddedRungeKuttaFieldIntegrator::setMaxGrowth(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMaxGrowth_03a16642f77779e7], a0.this$);
        }

        void EmbeddedRungeKuttaFieldIntegrator::setMinReduction(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMinReduction_03a16642f77779e7], a0.this$);
        }

        void EmbeddedRungeKuttaFieldIntegrator::setSafety(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSafety_03a16642f77779e7], a0.this$);
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
      namespace nonstiff {
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_of_(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *args);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_getMaxGrowth(t_EmbeddedRungeKuttaFieldIntegrator *self);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_getMinReduction(t_EmbeddedRungeKuttaFieldIntegrator *self);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_getOrder(t_EmbeddedRungeKuttaFieldIntegrator *self);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_getSafety(t_EmbeddedRungeKuttaFieldIntegrator *self);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_integrate(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *args);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_setMaxGrowth(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_setMinReduction(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_setSafety(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__maxGrowth(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data);
        static int t_EmbeddedRungeKuttaFieldIntegrator_set__maxGrowth(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg, void *data);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__minReduction(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data);
        static int t_EmbeddedRungeKuttaFieldIntegrator_set__minReduction(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg, void *data);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__order(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__safety(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data);
        static int t_EmbeddedRungeKuttaFieldIntegrator_set__safety(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg, void *data);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__parameters_(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data);
        static PyGetSetDef t_EmbeddedRungeKuttaFieldIntegrator__fields_[] = {
          DECLARE_GETSET_FIELD(t_EmbeddedRungeKuttaFieldIntegrator, maxGrowth),
          DECLARE_GETSET_FIELD(t_EmbeddedRungeKuttaFieldIntegrator, minReduction),
          DECLARE_GET_FIELD(t_EmbeddedRungeKuttaFieldIntegrator, order),
          DECLARE_GETSET_FIELD(t_EmbeddedRungeKuttaFieldIntegrator, safety),
          DECLARE_GET_FIELD(t_EmbeddedRungeKuttaFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EmbeddedRungeKuttaFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, getMaxGrowth, METH_NOARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, getMinReduction, METH_NOARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, getOrder, METH_NOARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, getSafety, METH_NOARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, integrate, METH_VARARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, setMaxGrowth, METH_O),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, setMinReduction, METH_O),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, setSafety, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EmbeddedRungeKuttaFieldIntegrator)[] = {
          { Py_tp_methods, t_EmbeddedRungeKuttaFieldIntegrator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EmbeddedRungeKuttaFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EmbeddedRungeKuttaFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::AdaptiveStepsizeFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(EmbeddedRungeKuttaFieldIntegrator, t_EmbeddedRungeKuttaFieldIntegrator, EmbeddedRungeKuttaFieldIntegrator);
        PyObject *t_EmbeddedRungeKuttaFieldIntegrator::wrap_Object(const EmbeddedRungeKuttaFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EmbeddedRungeKuttaFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EmbeddedRungeKuttaFieldIntegrator *self = (t_EmbeddedRungeKuttaFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EmbeddedRungeKuttaFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EmbeddedRungeKuttaFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EmbeddedRungeKuttaFieldIntegrator *self = (t_EmbeddedRungeKuttaFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EmbeddedRungeKuttaFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(EmbeddedRungeKuttaFieldIntegrator), &PY_TYPE_DEF(EmbeddedRungeKuttaFieldIntegrator), module, "EmbeddedRungeKuttaFieldIntegrator", 0);
        }

        void t_EmbeddedRungeKuttaFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmbeddedRungeKuttaFieldIntegrator), "class_", make_descriptor(EmbeddedRungeKuttaFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmbeddedRungeKuttaFieldIntegrator), "wrapfn_", make_descriptor(t_EmbeddedRungeKuttaFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmbeddedRungeKuttaFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EmbeddedRungeKuttaFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_EmbeddedRungeKuttaFieldIntegrator::wrap_Object(EmbeddedRungeKuttaFieldIntegrator(((t_EmbeddedRungeKuttaFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EmbeddedRungeKuttaFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_of_(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_getMaxGrowth(t_EmbeddedRungeKuttaFieldIntegrator *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxGrowth());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_getMinReduction(t_EmbeddedRungeKuttaFieldIntegrator *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getMinReduction());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_getOrder(t_EmbeddedRungeKuttaFieldIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_getSafety(t_EmbeddedRungeKuttaFieldIntegrator *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getSafety());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_integrate(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldExpandableODE a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::FieldODEState a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);

          if (!parseArgs(args, "KKK", ::org::hipparchus::ode::FieldExpandableODE::initializeClass, ::org::hipparchus::ode::FieldODEState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldExpandableODE::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEState::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1, a2));
            return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(EmbeddedRungeKuttaFieldIntegrator), (PyObject *) self, "integrate", args, 2);
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_setMaxGrowth(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.setMaxGrowth(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMaxGrowth", arg);
          return NULL;
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_setMinReduction(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.setMinReduction(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMinReduction", arg);
          return NULL;
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_setSafety(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.setSafety(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSafety", arg);
          return NULL;
        }
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__parameters_(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__maxGrowth(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxGrowth());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
        static int t_EmbeddedRungeKuttaFieldIntegrator_set__maxGrowth(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              INT_CALL(self->object.setMaxGrowth(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "maxGrowth", arg);
          return -1;
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__minReduction(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getMinReduction());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
        static int t_EmbeddedRungeKuttaFieldIntegrator_set__minReduction(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              INT_CALL(self->object.setMinReduction(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "minReduction", arg);
          return -1;
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__order(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__safety(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getSafety());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
        static int t_EmbeddedRungeKuttaFieldIntegrator_set__safety(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              INT_CALL(self->object.setSafety(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "safety", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/Well19937a.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *Well19937a::class$ = NULL;
      jmethodID *Well19937a::mids$ = NULL;
      bool Well19937a::live$ = false;

      jclass Well19937a::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/Well19937a");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_3b603738d1eb3233] = env->getMethodID(cls, "<init>", "([I)V");
          mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_fefb08975c10f0a1] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_nextInt_f2f64475e4580546] = env->getMethodID(cls, "nextInt", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Well19937a::Well19937a() : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      Well19937a::Well19937a(const JArray< jint > & a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_3b603738d1eb3233, a0.this$)) {}

      Well19937a::Well19937a(jint a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

      Well19937a::Well19937a(jlong a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_fefb08975c10f0a1, a0)) {}

      jint Well19937a::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_f2f64475e4580546]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace random {
      static PyObject *t_Well19937a_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Well19937a_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Well19937a_init_(t_Well19937a *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Well19937a_nextInt(t_Well19937a *self, PyObject *args);

      static PyMethodDef t_Well19937a__methods_[] = {
        DECLARE_METHOD(t_Well19937a, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well19937a, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well19937a, nextInt, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Well19937a)[] = {
        { Py_tp_methods, t_Well19937a__methods_ },
        { Py_tp_init, (void *) t_Well19937a_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Well19937a)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::AbstractWell),
        NULL
      };

      DEFINE_TYPE(Well19937a, t_Well19937a, Well19937a);

      void t_Well19937a::install(PyObject *module)
      {
        installType(&PY_TYPE(Well19937a), &PY_TYPE_DEF(Well19937a), module, "Well19937a", 0);
      }

      void t_Well19937a::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well19937a), "class_", make_descriptor(Well19937a::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well19937a), "wrapfn_", make_descriptor(t_Well19937a::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well19937a), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Well19937a_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Well19937a::initializeClass, 1)))
          return NULL;
        return t_Well19937a::wrap_Object(Well19937a(((t_Well19937a *) arg)->object.this$));
      }
      static PyObject *t_Well19937a_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Well19937a::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Well19937a_init_(t_Well19937a *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Well19937a object((jobject) NULL);

            INT_CALL(object = Well19937a());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jint > a0((jobject) NULL);
            Well19937a object((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              INT_CALL(object = Well19937a(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            Well19937a object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = Well19937a(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            Well19937a object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = Well19937a(a0));
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

      static PyObject *t_Well19937a_nextInt(t_Well19937a *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextInt());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Well19937a), (PyObject *) self, "nextInt", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresAdapter.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "org/hipparchus/util/Incrementor.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *LeastSquaresAdapter::class$ = NULL;
            jmethodID *LeastSquaresAdapter::mids$ = NULL;
            bool LeastSquaresAdapter::live$ = false;

            jclass LeastSquaresAdapter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresAdapter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_65dbaf75e2600015] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;)V");
                mids$[mid_evaluate_3ec1db1849589637] = env->getMethodID(cls, "evaluate", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;");
                mids$[mid_getConvergenceChecker_100e81b1c0752b49] = env->getMethodID(cls, "getConvergenceChecker", "()Lorg/hipparchus/optim/ConvergenceChecker;");
                mids$[mid_getEvaluationCounter_745ef02916e2d8db] = env->getMethodID(cls, "getEvaluationCounter", "()Lorg/hipparchus/util/Incrementor;");
                mids$[mid_getIterationCounter_745ef02916e2d8db] = env->getMethodID(cls, "getIterationCounter", "()Lorg/hipparchus/util/Incrementor;");
                mids$[mid_getObservationSize_f2f64475e4580546] = env->getMethodID(cls, "getObservationSize", "()I");
                mids$[mid_getParameterSize_f2f64475e4580546] = env->getMethodID(cls, "getParameterSize", "()I");
                mids$[mid_getStart_6d9adf1d5b463928] = env->getMethodID(cls, "getStart", "()Lorg/hipparchus/linear/RealVector;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            LeastSquaresAdapter::LeastSquaresAdapter(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_65dbaf75e2600015, a0.this$)) {}

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation LeastSquaresAdapter::evaluate(const ::org::hipparchus::linear::RealVector & a0) const
            {
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation(env->callObjectMethod(this$, mids$[mid_evaluate_3ec1db1849589637], a0.this$));
            }

            ::org::hipparchus::optim::ConvergenceChecker LeastSquaresAdapter::getConvergenceChecker() const
            {
              return ::org::hipparchus::optim::ConvergenceChecker(env->callObjectMethod(this$, mids$[mid_getConvergenceChecker_100e81b1c0752b49]));
            }

            ::org::hipparchus::util::Incrementor LeastSquaresAdapter::getEvaluationCounter() const
            {
              return ::org::hipparchus::util::Incrementor(env->callObjectMethod(this$, mids$[mid_getEvaluationCounter_745ef02916e2d8db]));
            }

            ::org::hipparchus::util::Incrementor LeastSquaresAdapter::getIterationCounter() const
            {
              return ::org::hipparchus::util::Incrementor(env->callObjectMethod(this$, mids$[mid_getIterationCounter_745ef02916e2d8db]));
            }

            jint LeastSquaresAdapter::getObservationSize() const
            {
              return env->callIntMethod(this$, mids$[mid_getObservationSize_f2f64475e4580546]);
            }

            jint LeastSquaresAdapter::getParameterSize() const
            {
              return env->callIntMethod(this$, mids$[mid_getParameterSize_f2f64475e4580546]);
            }

            ::org::hipparchus::linear::RealVector LeastSquaresAdapter::getStart() const
            {
              return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getStart_6d9adf1d5b463928]));
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
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            static PyObject *t_LeastSquaresAdapter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresAdapter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_LeastSquaresAdapter_init_(t_LeastSquaresAdapter *self, PyObject *args, PyObject *kwds);
            static PyObject *t_LeastSquaresAdapter_evaluate(t_LeastSquaresAdapter *self, PyObject *arg);
            static PyObject *t_LeastSquaresAdapter_getConvergenceChecker(t_LeastSquaresAdapter *self);
            static PyObject *t_LeastSquaresAdapter_getEvaluationCounter(t_LeastSquaresAdapter *self);
            static PyObject *t_LeastSquaresAdapter_getIterationCounter(t_LeastSquaresAdapter *self);
            static PyObject *t_LeastSquaresAdapter_getObservationSize(t_LeastSquaresAdapter *self);
            static PyObject *t_LeastSquaresAdapter_getParameterSize(t_LeastSquaresAdapter *self);
            static PyObject *t_LeastSquaresAdapter_getStart(t_LeastSquaresAdapter *self);
            static PyObject *t_LeastSquaresAdapter_get__convergenceChecker(t_LeastSquaresAdapter *self, void *data);
            static PyObject *t_LeastSquaresAdapter_get__evaluationCounter(t_LeastSquaresAdapter *self, void *data);
            static PyObject *t_LeastSquaresAdapter_get__iterationCounter(t_LeastSquaresAdapter *self, void *data);
            static PyObject *t_LeastSquaresAdapter_get__observationSize(t_LeastSquaresAdapter *self, void *data);
            static PyObject *t_LeastSquaresAdapter_get__parameterSize(t_LeastSquaresAdapter *self, void *data);
            static PyObject *t_LeastSquaresAdapter_get__start(t_LeastSquaresAdapter *self, void *data);
            static PyGetSetDef t_LeastSquaresAdapter__fields_[] = {
              DECLARE_GET_FIELD(t_LeastSquaresAdapter, convergenceChecker),
              DECLARE_GET_FIELD(t_LeastSquaresAdapter, evaluationCounter),
              DECLARE_GET_FIELD(t_LeastSquaresAdapter, iterationCounter),
              DECLARE_GET_FIELD(t_LeastSquaresAdapter, observationSize),
              DECLARE_GET_FIELD(t_LeastSquaresAdapter, parameterSize),
              DECLARE_GET_FIELD(t_LeastSquaresAdapter, start),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_LeastSquaresAdapter__methods_[] = {
              DECLARE_METHOD(t_LeastSquaresAdapter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresAdapter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresAdapter, evaluate, METH_O),
              DECLARE_METHOD(t_LeastSquaresAdapter, getConvergenceChecker, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresAdapter, getEvaluationCounter, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresAdapter, getIterationCounter, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresAdapter, getObservationSize, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresAdapter, getParameterSize, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresAdapter, getStart, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LeastSquaresAdapter)[] = {
              { Py_tp_methods, t_LeastSquaresAdapter__methods_ },
              { Py_tp_init, (void *) t_LeastSquaresAdapter_init_ },
              { Py_tp_getset, t_LeastSquaresAdapter__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LeastSquaresAdapter)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LeastSquaresAdapter, t_LeastSquaresAdapter, LeastSquaresAdapter);

            void t_LeastSquaresAdapter::install(PyObject *module)
            {
              installType(&PY_TYPE(LeastSquaresAdapter), &PY_TYPE_DEF(LeastSquaresAdapter), module, "LeastSquaresAdapter", 0);
            }

            void t_LeastSquaresAdapter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresAdapter), "class_", make_descriptor(LeastSquaresAdapter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresAdapter), "wrapfn_", make_descriptor(t_LeastSquaresAdapter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresAdapter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LeastSquaresAdapter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LeastSquaresAdapter::initializeClass, 1)))
                return NULL;
              return t_LeastSquaresAdapter::wrap_Object(LeastSquaresAdapter(((t_LeastSquaresAdapter *) arg)->object.this$));
            }
            static PyObject *t_LeastSquaresAdapter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LeastSquaresAdapter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_LeastSquaresAdapter_init_(t_LeastSquaresAdapter *self, PyObject *args, PyObject *kwds)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem a0((jobject) NULL);
              LeastSquaresAdapter object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem::initializeClass, &a0))
              {
                INT_CALL(object = LeastSquaresAdapter(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_LeastSquaresAdapter_evaluate(t_LeastSquaresAdapter *self, PyObject *arg)
            {
              ::org::hipparchus::linear::RealVector a0((jobject) NULL);
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.evaluate(a0));
                return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem$Evaluation::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "evaluate", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresAdapter_getConvergenceChecker(t_LeastSquaresAdapter *self)
            {
              ::org::hipparchus::optim::ConvergenceChecker result((jobject) NULL);
              OBJ_CALL(result = self->object.getConvergenceChecker());
              return ::org::hipparchus::optim::t_ConvergenceChecker::wrap_Object(result, ::org::hipparchus::optim::nonlinear::vector::leastsquares::PY_TYPE(LeastSquaresProblem$Evaluation));
            }

            static PyObject *t_LeastSquaresAdapter_getEvaluationCounter(t_LeastSquaresAdapter *self)
            {
              ::org::hipparchus::util::Incrementor result((jobject) NULL);
              OBJ_CALL(result = self->object.getEvaluationCounter());
              return ::org::hipparchus::util::t_Incrementor::wrap_Object(result);
            }

            static PyObject *t_LeastSquaresAdapter_getIterationCounter(t_LeastSquaresAdapter *self)
            {
              ::org::hipparchus::util::Incrementor result((jobject) NULL);
              OBJ_CALL(result = self->object.getIterationCounter());
              return ::org::hipparchus::util::t_Incrementor::wrap_Object(result);
            }

            static PyObject *t_LeastSquaresAdapter_getObservationSize(t_LeastSquaresAdapter *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getObservationSize());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_LeastSquaresAdapter_getParameterSize(t_LeastSquaresAdapter *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getParameterSize());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_LeastSquaresAdapter_getStart(t_LeastSquaresAdapter *self)
            {
              ::org::hipparchus::linear::RealVector result((jobject) NULL);
              OBJ_CALL(result = self->object.getStart());
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }

            static PyObject *t_LeastSquaresAdapter_get__convergenceChecker(t_LeastSquaresAdapter *self, void *data)
            {
              ::org::hipparchus::optim::ConvergenceChecker value((jobject) NULL);
              OBJ_CALL(value = self->object.getConvergenceChecker());
              return ::org::hipparchus::optim::t_ConvergenceChecker::wrap_Object(value);
            }

            static PyObject *t_LeastSquaresAdapter_get__evaluationCounter(t_LeastSquaresAdapter *self, void *data)
            {
              ::org::hipparchus::util::Incrementor value((jobject) NULL);
              OBJ_CALL(value = self->object.getEvaluationCounter());
              return ::org::hipparchus::util::t_Incrementor::wrap_Object(value);
            }

            static PyObject *t_LeastSquaresAdapter_get__iterationCounter(t_LeastSquaresAdapter *self, void *data)
            {
              ::org::hipparchus::util::Incrementor value((jobject) NULL);
              OBJ_CALL(value = self->object.getIterationCounter());
              return ::org::hipparchus::util::t_Incrementor::wrap_Object(value);
            }

            static PyObject *t_LeastSquaresAdapter_get__observationSize(t_LeastSquaresAdapter *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getObservationSize());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_LeastSquaresAdapter_get__parameterSize(t_LeastSquaresAdapter *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getParameterSize());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_LeastSquaresAdapter_get__start(t_LeastSquaresAdapter *self, void *data)
            {
              ::org::hipparchus::linear::RealVector value((jobject) NULL);
              OBJ_CALL(value = self->object.getStart());
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "java/io/IOException.h"
#include "java/util/List.h"
#include "java/lang/CharSequence.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Double.h"
#include "java/lang/Enum.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {

            ::java::lang::Class *Generator::class$ = NULL;
            jmethodID *Generator::mids$ = NULL;
            bool Generator::live$ = false;

            jclass Generator::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/generation/Generator");

                mids$ = new jmethodID[max_mid];
                mids$[mid_close_7ae3461a92a43152] = env->getMethodID(cls, "close", "()V");
                mids$[mid_dateToCalendarString_e9166ff038580198] = env->getMethodID(cls, "dateToCalendarString", "(Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;");
                mids$[mid_dateToString_e9166ff038580198] = env->getMethodID(cls, "dateToString", "(Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;");
                mids$[mid_dateToString_5f1e8067dcf848fb] = env->getMethodID(cls, "dateToString", "(IIIIID)Ljava/lang/String;");
                mids$[mid_doubleToString_085bbc49599fa163] = env->getMethodID(cls, "doubleToString", "(D)Ljava/lang/String;");
                mids$[mid_endMessage_e939c6558ae8d313] = env->getMethodID(cls, "endMessage", "(Ljava/lang/String;)V");
                mids$[mid_enterSection_e939c6558ae8d313] = env->getMethodID(cls, "enterSection", "(Ljava/lang/String;)V");
                mids$[mid_exitSection_0090f7797e403f43] = env->getMethodID(cls, "exitSection", "()Ljava/lang/String;");
                mids$[mid_getFormat_b51f613f857a5e84] = env->getMethodID(cls, "getFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;");
                mids$[mid_getOutputName_0090f7797e403f43] = env->getMethodID(cls, "getOutputName", "()Ljava/lang/String;");
                mids$[mid_newLine_7ae3461a92a43152] = env->getMethodID(cls, "newLine", "()V");
                mids$[mid_siToCcsdsName_43625fc1c3d86afe] = env->getMethodID(cls, "siToCcsdsName", "(Ljava/lang/String;)Ljava/lang/String;");
                mids$[mid_startMessage_f7e4436e61826cb4] = env->getMethodID(cls, "startMessage", "(Ljava/lang/String;Ljava/lang/String;D)V");
                mids$[mid_unitsListToString_7df61b71f083fbd6] = env->getMethodID(cls, "unitsListToString", "(Ljava/util/List;)Ljava/lang/String;");
                mids$[mid_writeComments_65de9727799c5641] = env->getMethodID(cls, "writeComments", "(Ljava/util/List;)V");
                mids$[mid_writeEntry_c0315b1049063d00] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/Enum;Z)V");
                mids$[mid_writeEntry_8ef0818590b472f3] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;CZ)V");
                mids$[mid_writeEntry_0a2534765e753ec9] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;IZ)V");
                mids$[mid_writeEntry_a1392c2233da957d] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/util/List;Z)V");
                mids$[mid_writeEntry_fd7b1fd8e935b456] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/Double;Lorg/orekit/utils/units/Unit;Z)V");
                mids$[mid_writeEntry_110375161a97bc67] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/utils/units/Unit;Z)V");
                mids$[mid_writeEntry_b458f0406720c03f] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;DLorg/orekit/utils/units/Unit;Z)V");
                mids$[mid_writeEntry_20cfd7e2288cf462] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;ZZ)V");
                mids$[mid_writeRawData_be0046d7f7239695] = env->getMethodID(cls, "writeRawData", "(C)V");
                mids$[mid_writeRawData_d77f10dac029c69d] = env->getMethodID(cls, "writeRawData", "(Ljava/lang/CharSequence;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void Generator::close() const
            {
              env->callVoidMethod(this$, mids$[mid_close_7ae3461a92a43152]);
            }

            ::java::lang::String Generator::dateToCalendarString(const ::org::orekit::files::ccsds::definitions::TimeConverter & a0, const ::org::orekit::time::AbsoluteDate & a1) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_dateToCalendarString_e9166ff038580198], a0.this$, a1.this$));
            }

            ::java::lang::String Generator::dateToString(const ::org::orekit::files::ccsds::definitions::TimeConverter & a0, const ::org::orekit::time::AbsoluteDate & a1) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_dateToString_e9166ff038580198], a0.this$, a1.this$));
            }

            ::java::lang::String Generator::dateToString(jint a0, jint a1, jint a2, jint a3, jint a4, jdouble a5) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_dateToString_5f1e8067dcf848fb], a0, a1, a2, a3, a4, a5));
            }

            ::java::lang::String Generator::doubleToString(jdouble a0) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_doubleToString_085bbc49599fa163], a0));
            }

            void Generator::endMessage(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_endMessage_e939c6558ae8d313], a0.this$);
            }

            void Generator::enterSection(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_enterSection_e939c6558ae8d313], a0.this$);
            }

            ::java::lang::String Generator::exitSection() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_exitSection_0090f7797e403f43]));
            }

            ::org::orekit::files::ccsds::utils::FileFormat Generator::getFormat() const
            {
              return ::org::orekit::files::ccsds::utils::FileFormat(env->callObjectMethod(this$, mids$[mid_getFormat_b51f613f857a5e84]));
            }

            ::java::lang::String Generator::getOutputName() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOutputName_0090f7797e403f43]));
            }

            void Generator::newLine() const
            {
              env->callVoidMethod(this$, mids$[mid_newLine_7ae3461a92a43152]);
            }

            ::java::lang::String Generator::siToCcsdsName(const ::java::lang::String & a0) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_siToCcsdsName_43625fc1c3d86afe], a0.this$));
            }

            void Generator::startMessage(const ::java::lang::String & a0, const ::java::lang::String & a1, jdouble a2) const
            {
              env->callVoidMethod(this$, mids$[mid_startMessage_f7e4436e61826cb4], a0.this$, a1.this$, a2);
            }

            ::java::lang::String Generator::unitsListToString(const ::java::util::List & a0) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_unitsListToString_7df61b71f083fbd6], a0.this$));
            }

            void Generator::writeComments(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeComments_65de9727799c5641], a0.this$);
            }

            void Generator::writeEntry(const ::java::lang::String & a0, const ::java::lang::Enum & a1, jboolean a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_c0315b1049063d00], a0.this$, a1.this$, a2);
            }

            void Generator::writeEntry(const ::java::lang::String & a0, jchar a1, jboolean a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_8ef0818590b472f3], a0.this$, a1, a2);
            }

            void Generator::writeEntry(const ::java::lang::String & a0, jint a1, jboolean a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_0a2534765e753ec9], a0.this$, a1, a2);
            }

            void Generator::writeEntry(const ::java::lang::String & a0, const ::java::util::List & a1, jboolean a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_a1392c2233da957d], a0.this$, a1.this$, a2);
            }

            void Generator::writeEntry(const ::java::lang::String & a0, const ::java::lang::Double & a1, const ::org::orekit::utils::units::Unit & a2, jboolean a3) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_fd7b1fd8e935b456], a0.this$, a1.this$, a2.this$, a3);
            }

            void Generator::writeEntry(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::utils::units::Unit & a2, jboolean a3) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_110375161a97bc67], a0.this$, a1.this$, a2.this$, a3);
            }

            void Generator::writeEntry(const ::java::lang::String & a0, jdouble a1, const ::org::orekit::utils::units::Unit & a2, jboolean a3) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_b458f0406720c03f], a0.this$, a1, a2.this$, a3);
            }

            void Generator::writeEntry(const ::java::lang::String & a0, const ::org::orekit::files::ccsds::definitions::TimeConverter & a1, const ::org::orekit::time::AbsoluteDate & a2, jboolean a3, jboolean a4) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_20cfd7e2288cf462], a0.this$, a1.this$, a2.this$, a3, a4);
            }

            void Generator::writeRawData(jchar a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeRawData_be0046d7f7239695], a0);
            }

            void Generator::writeRawData(const ::java::lang::CharSequence & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeRawData_d77f10dac029c69d], a0.this$);
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
        namespace utils {
          namespace generation {
            static PyObject *t_Generator_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Generator_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Generator_close(t_Generator *self, PyObject *args);
            static PyObject *t_Generator_dateToCalendarString(t_Generator *self, PyObject *args);
            static PyObject *t_Generator_dateToString(t_Generator *self, PyObject *args);
            static PyObject *t_Generator_doubleToString(t_Generator *self, PyObject *arg);
            static PyObject *t_Generator_endMessage(t_Generator *self, PyObject *arg);
            static PyObject *t_Generator_enterSection(t_Generator *self, PyObject *arg);
            static PyObject *t_Generator_exitSection(t_Generator *self);
            static PyObject *t_Generator_getFormat(t_Generator *self);
            static PyObject *t_Generator_getOutputName(t_Generator *self);
            static PyObject *t_Generator_newLine(t_Generator *self);
            static PyObject *t_Generator_siToCcsdsName(t_Generator *self, PyObject *arg);
            static PyObject *t_Generator_startMessage(t_Generator *self, PyObject *args);
            static PyObject *t_Generator_unitsListToString(t_Generator *self, PyObject *arg);
            static PyObject *t_Generator_writeComments(t_Generator *self, PyObject *arg);
            static PyObject *t_Generator_writeEntry(t_Generator *self, PyObject *args);
            static PyObject *t_Generator_writeRawData(t_Generator *self, PyObject *args);
            static PyObject *t_Generator_get__format(t_Generator *self, void *data);
            static PyObject *t_Generator_get__outputName(t_Generator *self, void *data);
            static PyGetSetDef t_Generator__fields_[] = {
              DECLARE_GET_FIELD(t_Generator, format),
              DECLARE_GET_FIELD(t_Generator, outputName),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_Generator__methods_[] = {
              DECLARE_METHOD(t_Generator, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Generator, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Generator, close, METH_VARARGS),
              DECLARE_METHOD(t_Generator, dateToCalendarString, METH_VARARGS),
              DECLARE_METHOD(t_Generator, dateToString, METH_VARARGS),
              DECLARE_METHOD(t_Generator, doubleToString, METH_O),
              DECLARE_METHOD(t_Generator, endMessage, METH_O),
              DECLARE_METHOD(t_Generator, enterSection, METH_O),
              DECLARE_METHOD(t_Generator, exitSection, METH_NOARGS),
              DECLARE_METHOD(t_Generator, getFormat, METH_NOARGS),
              DECLARE_METHOD(t_Generator, getOutputName, METH_NOARGS),
              DECLARE_METHOD(t_Generator, newLine, METH_NOARGS),
              DECLARE_METHOD(t_Generator, siToCcsdsName, METH_O),
              DECLARE_METHOD(t_Generator, startMessage, METH_VARARGS),
              DECLARE_METHOD(t_Generator, unitsListToString, METH_O),
              DECLARE_METHOD(t_Generator, writeComments, METH_O),
              DECLARE_METHOD(t_Generator, writeEntry, METH_VARARGS),
              DECLARE_METHOD(t_Generator, writeRawData, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(Generator)[] = {
              { Py_tp_methods, t_Generator__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_Generator__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(Generator)[] = {
              &PY_TYPE_DEF(::java::lang::AutoCloseable),
              NULL
            };

            DEFINE_TYPE(Generator, t_Generator, Generator);

            void t_Generator::install(PyObject *module)
            {
              installType(&PY_TYPE(Generator), &PY_TYPE_DEF(Generator), module, "Generator", 0);
            }

            void t_Generator::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(Generator), "class_", make_descriptor(Generator::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Generator), "wrapfn_", make_descriptor(t_Generator::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Generator), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_Generator_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, Generator::initializeClass, 1)))
                return NULL;
              return t_Generator::wrap_Object(Generator(((t_Generator *) arg)->object.this$));
            }
            static PyObject *t_Generator_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, Generator::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_Generator_close(t_Generator *self, PyObject *args)
            {

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(self->object.close());
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(Generator), (PyObject *) self, "close", args, 2);
            }

            static PyObject *t_Generator_dateToCalendarString(t_Generator *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::definitions::TimeConverter a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::definitions::TimeConverter::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.dateToCalendarString(a0, a1));
                return j2p(result);
              }

              PyErr_SetArgsError((PyObject *) self, "dateToCalendarString", args);
              return NULL;
            }

            static PyObject *t_Generator_dateToString(t_Generator *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  ::org::orekit::files::ccsds::definitions::TimeConverter a0((jobject) NULL);
                  ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                  ::java::lang::String result((jobject) NULL);

                  if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::definitions::TimeConverter::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(result = self->object.dateToString(a0, a1));
                    return j2p(result);
                  }
                }
                break;
               case 6:
                {
                  jint a0;
                  jint a1;
                  jint a2;
                  jint a3;
                  jint a4;
                  jdouble a5;
                  ::java::lang::String result((jobject) NULL);

                  if (!parseArgs(args, "IIIIID", &a0, &a1, &a2, &a3, &a4, &a5))
                  {
                    OBJ_CALL(result = self->object.dateToString(a0, a1, a2, a3, a4, a5));
                    return j2p(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "dateToString", args);
              return NULL;
            }

            static PyObject *t_Generator_doubleToString(t_Generator *self, PyObject *arg)
            {
              jdouble a0;
              ::java::lang::String result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.doubleToString(a0));
                return j2p(result);
              }

              PyErr_SetArgsError((PyObject *) self, "doubleToString", arg);
              return NULL;
            }

            static PyObject *t_Generator_endMessage(t_Generator *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.endMessage(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "endMessage", arg);
              return NULL;
            }

            static PyObject *t_Generator_enterSection(t_Generator *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.enterSection(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "enterSection", arg);
              return NULL;
            }

            static PyObject *t_Generator_exitSection(t_Generator *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.exitSection());
              return j2p(result);
            }

            static PyObject *t_Generator_getFormat(t_Generator *self)
            {
              ::org::orekit::files::ccsds::utils::FileFormat result((jobject) NULL);
              OBJ_CALL(result = self->object.getFormat());
              return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(result);
            }

            static PyObject *t_Generator_getOutputName(t_Generator *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getOutputName());
              return j2p(result);
            }

            static PyObject *t_Generator_newLine(t_Generator *self)
            {
              OBJ_CALL(self->object.newLine());
              Py_RETURN_NONE;
            }

            static PyObject *t_Generator_siToCcsdsName(t_Generator *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String result((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(result = self->object.siToCcsdsName(a0));
                return j2p(result);
              }

              PyErr_SetArgsError((PyObject *) self, "siToCcsdsName", arg);
              return NULL;
            }

            static PyObject *t_Generator_startMessage(t_Generator *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              jdouble a2;

              if (!parseArgs(args, "ssD", &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.startMessage(a0, a1, a2));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "startMessage", args);
              return NULL;
            }

            static PyObject *t_Generator_unitsListToString(t_Generator *self, PyObject *arg)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String result((jobject) NULL);

              if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(result = self->object.unitsListToString(a0));
                return j2p(result);
              }

              PyErr_SetArgsError((PyObject *) self, "unitsListToString", arg);
              return NULL;
            }

            static PyObject *t_Generator_writeComments(t_Generator *self, PyObject *arg)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(self->object.writeComments(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeComments", arg);
              return NULL;
            }

            static PyObject *t_Generator_writeEntry(t_Generator *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::java::lang::Enum a1((jobject) NULL);
                  PyTypeObject **p1;
                  jboolean a2;

                  if (!parseArgs(args, "sKZ", ::java::lang::Enum::initializeClass, &a0, &a1, &p1, ::java::lang::t_Enum::parameters_, &a2))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  jchar a1;
                  jboolean a2;

                  if (!parseArgs(args, "sCZ", &a0, &a1, &a2))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  jint a1;
                  jboolean a2;

                  if (!parseArgs(args, "sIZ", &a0, &a1, &a2))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::java::util::List a1((jobject) NULL);
                  PyTypeObject **p1;
                  jboolean a2;

                  if (!parseArgs(args, "sKZ", ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2));
                    Py_RETURN_NONE;
                  }
                }
                break;
               case 4:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::java::lang::Double a1((jobject) NULL);
                  ::org::orekit::utils::units::Unit a2((jobject) NULL);
                  jboolean a3;

                  if (!parseArgs(args, "sOkZ", ::java::lang::PY_TYPE(Double), ::org::orekit::utils::units::Unit::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2, a3));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::java::lang::String a1((jobject) NULL);
                  ::org::orekit::utils::units::Unit a2((jobject) NULL);
                  jboolean a3;

                  if (!parseArgs(args, "sskZ", ::org::orekit::utils::units::Unit::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2, a3));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  jdouble a1;
                  ::org::orekit::utils::units::Unit a2((jobject) NULL);
                  jboolean a3;

                  if (!parseArgs(args, "sDkZ", ::org::orekit::utils::units::Unit::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2, a3));
                    Py_RETURN_NONE;
                  }
                }
                break;
               case 5:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::org::orekit::files::ccsds::definitions::TimeConverter a1((jobject) NULL);
                  ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                  jboolean a3;
                  jboolean a4;

                  if (!parseArgs(args, "skkZZ", ::org::orekit::files::ccsds::definitions::TimeConverter::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2, a3, a4));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "writeEntry", args);
              return NULL;
            }

            static PyObject *t_Generator_writeRawData(t_Generator *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  jchar a0;

                  if (!parseArgs(args, "C", &a0))
                  {
                    OBJ_CALL(self->object.writeRawData(a0));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::CharSequence a0((jobject) NULL);

                  if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
                  {
                    OBJ_CALL(self->object.writeRawData(a0));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "writeRawData", args);
              return NULL;
            }

            static PyObject *t_Generator_get__format(t_Generator *self, void *data)
            {
              ::org::orekit::files::ccsds::utils::FileFormat value((jobject) NULL);
              OBJ_CALL(value = self->object.getFormat());
              return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(value);
            }

            static PyObject *t_Generator_get__outputName(t_Generator *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getOutputName());
              return j2p(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris.h"
#include "java/util/List.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/files/general/OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$SatelliteAttitudeEphemeris.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::class$ = NULL;
        jmethodID *OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::mids$ = NULL;
        bool OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::live$ = false;
        ::java::lang::String *OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::DEFAULT_INTERPOLATION_METHOD = NULL;
        jint OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::DEFAULT_INTERPOLATION_SIZE = (jint) 0;

        jclass OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
            mids$[mid_addNewSegment_3f51626c949c7491] = env->getMethodID(cls, "addNewSegment", "(Ljava/util/List;Ljava/lang/String;ILorg/orekit/utils/AngularDerivativesFilter;)Lorg/orekit/files/general/OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment;");
            mids$[mid_getId_0090f7797e403f43] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
            mids$[mid_getSegments_a6156df500549a58] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
            mids$[mid_getStart_aaa854c403487cf3] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_aaa854c403487cf3] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_INTERPOLATION_METHOD = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_INTERPOLATION_METHOD", "Ljava/lang/String;"));
            DEFAULT_INTERPOLATION_SIZE = env->getStaticIntField(cls, "DEFAULT_INTERPOLATION_SIZE");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

        ::org::orekit::files::general::OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::addNewSegment(const ::java::util::List & a0, const ::java::lang::String & a1, jint a2, const ::org::orekit::utils::AngularDerivativesFilter & a3) const
        {
          return ::org::orekit::files::general::OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment(env->callObjectMethod(this$, mids$[mid_addNewSegment_3f51626c949c7491], a0.this$, a1.this$, a2, a3.this$));
        }

        ::java::lang::String OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::getId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_0090f7797e403f43]));
        }

        ::java::util::List OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::getSegments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_a6156df500549a58]));
        }

        ::org::orekit::time::AbsoluteDate OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_aaa854c403487cf3]));
        }

        ::org::orekit::time::AbsoluteDate OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_aaa854c403487cf3]));
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
      namespace general {
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_init_(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_addNewSegment(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, PyObject *args);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_getId(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_getSegments(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_getStart(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_getStop(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_get__id(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, void *data);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_get__segments(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, void *data);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_get__start(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, void *data);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_get__stop(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, void *data);
        static PyGetSetDef t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris__fields_[] = {
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, id),
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, segments),
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, start),
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, stop),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris__methods_[] = {
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, addNewSegment, METH_VARARGS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, getId, METH_NOARGS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, getSegments, METH_NOARGS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, getStart, METH_NOARGS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris)[] = {
          { Py_tp_methods, t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris__methods_ },
          { Py_tp_init, (void *) t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_init_ },
          { Py_tp_getset, t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris);

        void t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris), &PY_TYPE_DEF(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris), module, "OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris", 0);
        }

        void t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris), "class_", make_descriptor(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris), "wrapfn_", make_descriptor(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris), "boxfn_", make_descriptor(boxObject));
          env->getClass(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris), "DEFAULT_INTERPOLATION_METHOD", make_descriptor(j2p(*OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::DEFAULT_INTERPOLATION_METHOD)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris), "DEFAULT_INTERPOLATION_SIZE", make_descriptor(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::DEFAULT_INTERPOLATION_SIZE));
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::initializeClass, 1)))
            return NULL;
          return t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::wrap_Object(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris(((t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *) arg)->object.this$));
        }
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_init_(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_addNewSegment(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, PyObject *args)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::String a1((jobject) NULL);
          jint a2;
          ::org::orekit::utils::AngularDerivativesFilter a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::orekit::files::general::OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment result((jobject) NULL);

          if (!parseArgs(args, "KsIK", ::java::util::List::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &a3, &p3, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
          {
            OBJ_CALL(result = self->object.addNewSegment(a0, a1, a2, a3));
            return ::org::orekit::files::general::t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "addNewSegment", args);
          return NULL;
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_getId(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getId());
          return j2p(result);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_getSegments(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::general::PY_TYPE(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment));
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_getStart(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_getStop(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_get__id(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getId());
          return j2p(value);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_get__segments(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_get__start(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_get__stop(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/Predefined.h"
#include "org/orekit/frames/Predefined.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *Predefined::class$ = NULL;
      jmethodID *Predefined::mids$ = NULL;
      bool Predefined::live$ = false;
      Predefined *Predefined::CIRF_CONVENTIONS_1996_ACCURATE_EOP = NULL;
      Predefined *Predefined::CIRF_CONVENTIONS_1996_SIMPLE_EOP = NULL;
      Predefined *Predefined::CIRF_CONVENTIONS_2003_ACCURATE_EOP = NULL;
      Predefined *Predefined::CIRF_CONVENTIONS_2003_SIMPLE_EOP = NULL;
      Predefined *Predefined::CIRF_CONVENTIONS_2010_ACCURATE_EOP = NULL;
      Predefined *Predefined::CIRF_CONVENTIONS_2010_SIMPLE_EOP = NULL;
      Predefined *Predefined::ECLIPTIC_CONVENTIONS_1996 = NULL;
      Predefined *Predefined::ECLIPTIC_CONVENTIONS_2003 = NULL;
      Predefined *Predefined::ECLIPTIC_CONVENTIONS_2010 = NULL;
      Predefined *Predefined::EME2000 = NULL;
      Predefined *Predefined::GCRF = NULL;
      Predefined *Predefined::GTOD_CONVENTIONS_1996_ACCURATE_EOP = NULL;
      Predefined *Predefined::GTOD_CONVENTIONS_1996_SIMPLE_EOP = NULL;
      Predefined *Predefined::GTOD_CONVENTIONS_2003_ACCURATE_EOP = NULL;
      Predefined *Predefined::GTOD_CONVENTIONS_2003_SIMPLE_EOP = NULL;
      Predefined *Predefined::GTOD_CONVENTIONS_2010_ACCURATE_EOP = NULL;
      Predefined *Predefined::GTOD_CONVENTIONS_2010_SIMPLE_EOP = NULL;
      Predefined *Predefined::GTOD_WITHOUT_EOP_CORRECTIONS = NULL;
      Predefined *Predefined::ICRF = NULL;
      Predefined *Predefined::ITRF_CIO_CONV_1996_ACCURATE_EOP = NULL;
      Predefined *Predefined::ITRF_CIO_CONV_1996_SIMPLE_EOP = NULL;
      Predefined *Predefined::ITRF_CIO_CONV_2003_ACCURATE_EOP = NULL;
      Predefined *Predefined::ITRF_CIO_CONV_2003_SIMPLE_EOP = NULL;
      Predefined *Predefined::ITRF_CIO_CONV_2010_ACCURATE_EOP = NULL;
      Predefined *Predefined::ITRF_CIO_CONV_2010_SIMPLE_EOP = NULL;
      Predefined *Predefined::ITRF_EQUINOX_CONV_1996_ACCURATE_EOP = NULL;
      Predefined *Predefined::ITRF_EQUINOX_CONV_1996_SIMPLE_EOP = NULL;
      Predefined *Predefined::ITRF_EQUINOX_CONV_2003_ACCURATE_EOP = NULL;
      Predefined *Predefined::ITRF_EQUINOX_CONV_2003_SIMPLE_EOP = NULL;
      Predefined *Predefined::ITRF_EQUINOX_CONV_2010_ACCURATE_EOP = NULL;
      Predefined *Predefined::ITRF_EQUINOX_CONV_2010_SIMPLE_EOP = NULL;
      Predefined *Predefined::MOD_CONVENTIONS_1996 = NULL;
      Predefined *Predefined::MOD_CONVENTIONS_2003 = NULL;
      Predefined *Predefined::MOD_CONVENTIONS_2010 = NULL;
      Predefined *Predefined::MOD_WITHOUT_EOP_CORRECTIONS = NULL;
      Predefined *Predefined::PZ90_11 = NULL;
      Predefined *Predefined::TEME = NULL;
      Predefined *Predefined::TIRF_CONVENTIONS_1996_ACCURATE_EOP = NULL;
      Predefined *Predefined::TIRF_CONVENTIONS_1996_SIMPLE_EOP = NULL;
      Predefined *Predefined::TIRF_CONVENTIONS_2003_ACCURATE_EOP = NULL;
      Predefined *Predefined::TIRF_CONVENTIONS_2003_SIMPLE_EOP = NULL;
      Predefined *Predefined::TIRF_CONVENTIONS_2010_ACCURATE_EOP = NULL;
      Predefined *Predefined::TIRF_CONVENTIONS_2010_SIMPLE_EOP = NULL;
      Predefined *Predefined::TOD_CONVENTIONS_1996_ACCURATE_EOP = NULL;
      Predefined *Predefined::TOD_CONVENTIONS_1996_SIMPLE_EOP = NULL;
      Predefined *Predefined::TOD_CONVENTIONS_2003_ACCURATE_EOP = NULL;
      Predefined *Predefined::TOD_CONVENTIONS_2003_SIMPLE_EOP = NULL;
      Predefined *Predefined::TOD_CONVENTIONS_2010_ACCURATE_EOP = NULL;
      Predefined *Predefined::TOD_CONVENTIONS_2010_SIMPLE_EOP = NULL;
      Predefined *Predefined::TOD_WITHOUT_EOP_CORRECTIONS = NULL;
      Predefined *Predefined::VEIS_1950 = NULL;

      jclass Predefined::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/Predefined");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_valueOf_7358e2c34149fea3] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/frames/Predefined;");
          mids$[mid_values_184e5ecda71bf5df] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/frames/Predefined;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          CIRF_CONVENTIONS_1996_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "CIRF_CONVENTIONS_1996_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          CIRF_CONVENTIONS_1996_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "CIRF_CONVENTIONS_1996_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          CIRF_CONVENTIONS_2003_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "CIRF_CONVENTIONS_2003_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          CIRF_CONVENTIONS_2003_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "CIRF_CONVENTIONS_2003_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          CIRF_CONVENTIONS_2010_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "CIRF_CONVENTIONS_2010_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          CIRF_CONVENTIONS_2010_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "CIRF_CONVENTIONS_2010_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          ECLIPTIC_CONVENTIONS_1996 = new Predefined(env->getStaticObjectField(cls, "ECLIPTIC_CONVENTIONS_1996", "Lorg/orekit/frames/Predefined;"));
          ECLIPTIC_CONVENTIONS_2003 = new Predefined(env->getStaticObjectField(cls, "ECLIPTIC_CONVENTIONS_2003", "Lorg/orekit/frames/Predefined;"));
          ECLIPTIC_CONVENTIONS_2010 = new Predefined(env->getStaticObjectField(cls, "ECLIPTIC_CONVENTIONS_2010", "Lorg/orekit/frames/Predefined;"));
          EME2000 = new Predefined(env->getStaticObjectField(cls, "EME2000", "Lorg/orekit/frames/Predefined;"));
          GCRF = new Predefined(env->getStaticObjectField(cls, "GCRF", "Lorg/orekit/frames/Predefined;"));
          GTOD_CONVENTIONS_1996_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "GTOD_CONVENTIONS_1996_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          GTOD_CONVENTIONS_1996_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "GTOD_CONVENTIONS_1996_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          GTOD_CONVENTIONS_2003_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "GTOD_CONVENTIONS_2003_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          GTOD_CONVENTIONS_2003_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "GTOD_CONVENTIONS_2003_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          GTOD_CONVENTIONS_2010_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "GTOD_CONVENTIONS_2010_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          GTOD_CONVENTIONS_2010_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "GTOD_CONVENTIONS_2010_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          GTOD_WITHOUT_EOP_CORRECTIONS = new Predefined(env->getStaticObjectField(cls, "GTOD_WITHOUT_EOP_CORRECTIONS", "Lorg/orekit/frames/Predefined;"));
          ICRF = new Predefined(env->getStaticObjectField(cls, "ICRF", "Lorg/orekit/frames/Predefined;"));
          ITRF_CIO_CONV_1996_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "ITRF_CIO_CONV_1996_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          ITRF_CIO_CONV_1996_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "ITRF_CIO_CONV_1996_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          ITRF_CIO_CONV_2003_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "ITRF_CIO_CONV_2003_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          ITRF_CIO_CONV_2003_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "ITRF_CIO_CONV_2003_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          ITRF_CIO_CONV_2010_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "ITRF_CIO_CONV_2010_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          ITRF_CIO_CONV_2010_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "ITRF_CIO_CONV_2010_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          ITRF_EQUINOX_CONV_1996_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "ITRF_EQUINOX_CONV_1996_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          ITRF_EQUINOX_CONV_1996_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "ITRF_EQUINOX_CONV_1996_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          ITRF_EQUINOX_CONV_2003_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "ITRF_EQUINOX_CONV_2003_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          ITRF_EQUINOX_CONV_2003_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "ITRF_EQUINOX_CONV_2003_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          ITRF_EQUINOX_CONV_2010_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "ITRF_EQUINOX_CONV_2010_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          ITRF_EQUINOX_CONV_2010_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "ITRF_EQUINOX_CONV_2010_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          MOD_CONVENTIONS_1996 = new Predefined(env->getStaticObjectField(cls, "MOD_CONVENTIONS_1996", "Lorg/orekit/frames/Predefined;"));
          MOD_CONVENTIONS_2003 = new Predefined(env->getStaticObjectField(cls, "MOD_CONVENTIONS_2003", "Lorg/orekit/frames/Predefined;"));
          MOD_CONVENTIONS_2010 = new Predefined(env->getStaticObjectField(cls, "MOD_CONVENTIONS_2010", "Lorg/orekit/frames/Predefined;"));
          MOD_WITHOUT_EOP_CORRECTIONS = new Predefined(env->getStaticObjectField(cls, "MOD_WITHOUT_EOP_CORRECTIONS", "Lorg/orekit/frames/Predefined;"));
          PZ90_11 = new Predefined(env->getStaticObjectField(cls, "PZ90_11", "Lorg/orekit/frames/Predefined;"));
          TEME = new Predefined(env->getStaticObjectField(cls, "TEME", "Lorg/orekit/frames/Predefined;"));
          TIRF_CONVENTIONS_1996_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "TIRF_CONVENTIONS_1996_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          TIRF_CONVENTIONS_1996_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "TIRF_CONVENTIONS_1996_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          TIRF_CONVENTIONS_2003_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "TIRF_CONVENTIONS_2003_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          TIRF_CONVENTIONS_2003_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "TIRF_CONVENTIONS_2003_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          TIRF_CONVENTIONS_2010_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "TIRF_CONVENTIONS_2010_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          TIRF_CONVENTIONS_2010_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "TIRF_CONVENTIONS_2010_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          TOD_CONVENTIONS_1996_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "TOD_CONVENTIONS_1996_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          TOD_CONVENTIONS_1996_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "TOD_CONVENTIONS_1996_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          TOD_CONVENTIONS_2003_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "TOD_CONVENTIONS_2003_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          TOD_CONVENTIONS_2003_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "TOD_CONVENTIONS_2003_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          TOD_CONVENTIONS_2010_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "TOD_CONVENTIONS_2010_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          TOD_CONVENTIONS_2010_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "TOD_CONVENTIONS_2010_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          TOD_WITHOUT_EOP_CORRECTIONS = new Predefined(env->getStaticObjectField(cls, "TOD_WITHOUT_EOP_CORRECTIONS", "Lorg/orekit/frames/Predefined;"));
          VEIS_1950 = new Predefined(env->getStaticObjectField(cls, "VEIS_1950", "Lorg/orekit/frames/Predefined;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String Predefined::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
      }

      Predefined Predefined::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Predefined(env->callStaticObjectMethod(cls, mids$[mid_valueOf_7358e2c34149fea3], a0.this$));
      }

      JArray< Predefined > Predefined::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< Predefined >(env->callStaticObjectMethod(cls, mids$[mid_values_184e5ecda71bf5df]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_Predefined_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Predefined_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Predefined_of_(t_Predefined *self, PyObject *args);
      static PyObject *t_Predefined_getName(t_Predefined *self);
      static PyObject *t_Predefined_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_Predefined_values(PyTypeObject *type);
      static PyObject *t_Predefined_get__name(t_Predefined *self, void *data);
      static PyObject *t_Predefined_get__parameters_(t_Predefined *self, void *data);
      static PyGetSetDef t_Predefined__fields_[] = {
        DECLARE_GET_FIELD(t_Predefined, name),
        DECLARE_GET_FIELD(t_Predefined, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Predefined__methods_[] = {
        DECLARE_METHOD(t_Predefined, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Predefined, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Predefined, of_, METH_VARARGS),
        DECLARE_METHOD(t_Predefined, getName, METH_NOARGS),
        DECLARE_METHOD(t_Predefined, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Predefined, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Predefined)[] = {
        { Py_tp_methods, t_Predefined__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Predefined__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Predefined)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(Predefined, t_Predefined, Predefined);
      PyObject *t_Predefined::wrap_Object(const Predefined& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Predefined::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Predefined *self = (t_Predefined *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_Predefined::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Predefined::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Predefined *self = (t_Predefined *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_Predefined::install(PyObject *module)
      {
        installType(&PY_TYPE(Predefined), &PY_TYPE_DEF(Predefined), module, "Predefined", 0);
      }

      void t_Predefined::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "class_", make_descriptor(Predefined::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "wrapfn_", make_descriptor(t_Predefined::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "boxfn_", make_descriptor(boxObject));
        env->getClass(Predefined::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "CIRF_CONVENTIONS_1996_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::CIRF_CONVENTIONS_1996_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "CIRF_CONVENTIONS_1996_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::CIRF_CONVENTIONS_1996_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "CIRF_CONVENTIONS_2003_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::CIRF_CONVENTIONS_2003_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "CIRF_CONVENTIONS_2003_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::CIRF_CONVENTIONS_2003_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "CIRF_CONVENTIONS_2010_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::CIRF_CONVENTIONS_2010_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "CIRF_CONVENTIONS_2010_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::CIRF_CONVENTIONS_2010_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ECLIPTIC_CONVENTIONS_1996", make_descriptor(t_Predefined::wrap_Object(*Predefined::ECLIPTIC_CONVENTIONS_1996)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ECLIPTIC_CONVENTIONS_2003", make_descriptor(t_Predefined::wrap_Object(*Predefined::ECLIPTIC_CONVENTIONS_2003)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ECLIPTIC_CONVENTIONS_2010", make_descriptor(t_Predefined::wrap_Object(*Predefined::ECLIPTIC_CONVENTIONS_2010)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "EME2000", make_descriptor(t_Predefined::wrap_Object(*Predefined::EME2000)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "GCRF", make_descriptor(t_Predefined::wrap_Object(*Predefined::GCRF)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "GTOD_CONVENTIONS_1996_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::GTOD_CONVENTIONS_1996_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "GTOD_CONVENTIONS_1996_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::GTOD_CONVENTIONS_1996_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "GTOD_CONVENTIONS_2003_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::GTOD_CONVENTIONS_2003_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "GTOD_CONVENTIONS_2003_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::GTOD_CONVENTIONS_2003_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "GTOD_CONVENTIONS_2010_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::GTOD_CONVENTIONS_2010_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "GTOD_CONVENTIONS_2010_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::GTOD_CONVENTIONS_2010_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "GTOD_WITHOUT_EOP_CORRECTIONS", make_descriptor(t_Predefined::wrap_Object(*Predefined::GTOD_WITHOUT_EOP_CORRECTIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ICRF", make_descriptor(t_Predefined::wrap_Object(*Predefined::ICRF)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ITRF_CIO_CONV_1996_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::ITRF_CIO_CONV_1996_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ITRF_CIO_CONV_1996_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::ITRF_CIO_CONV_1996_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ITRF_CIO_CONV_2003_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::ITRF_CIO_CONV_2003_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ITRF_CIO_CONV_2003_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::ITRF_CIO_CONV_2003_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ITRF_CIO_CONV_2010_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::ITRF_CIO_CONV_2010_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ITRF_CIO_CONV_2010_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::ITRF_CIO_CONV_2010_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ITRF_EQUINOX_CONV_1996_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::ITRF_EQUINOX_CONV_1996_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ITRF_EQUINOX_CONV_1996_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::ITRF_EQUINOX_CONV_1996_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ITRF_EQUINOX_CONV_2003_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::ITRF_EQUINOX_CONV_2003_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ITRF_EQUINOX_CONV_2003_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::ITRF_EQUINOX_CONV_2003_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ITRF_EQUINOX_CONV_2010_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::ITRF_EQUINOX_CONV_2010_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ITRF_EQUINOX_CONV_2010_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::ITRF_EQUINOX_CONV_2010_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "MOD_CONVENTIONS_1996", make_descriptor(t_Predefined::wrap_Object(*Predefined::MOD_CONVENTIONS_1996)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "MOD_CONVENTIONS_2003", make_descriptor(t_Predefined::wrap_Object(*Predefined::MOD_CONVENTIONS_2003)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "MOD_CONVENTIONS_2010", make_descriptor(t_Predefined::wrap_Object(*Predefined::MOD_CONVENTIONS_2010)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "MOD_WITHOUT_EOP_CORRECTIONS", make_descriptor(t_Predefined::wrap_Object(*Predefined::MOD_WITHOUT_EOP_CORRECTIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "PZ90_11", make_descriptor(t_Predefined::wrap_Object(*Predefined::PZ90_11)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TEME", make_descriptor(t_Predefined::wrap_Object(*Predefined::TEME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TIRF_CONVENTIONS_1996_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::TIRF_CONVENTIONS_1996_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TIRF_CONVENTIONS_1996_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::TIRF_CONVENTIONS_1996_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TIRF_CONVENTIONS_2003_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::TIRF_CONVENTIONS_2003_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TIRF_CONVENTIONS_2003_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::TIRF_CONVENTIONS_2003_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TIRF_CONVENTIONS_2010_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::TIRF_CONVENTIONS_2010_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TIRF_CONVENTIONS_2010_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::TIRF_CONVENTIONS_2010_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TOD_CONVENTIONS_1996_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::TOD_CONVENTIONS_1996_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TOD_CONVENTIONS_1996_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::TOD_CONVENTIONS_1996_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TOD_CONVENTIONS_2003_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::TOD_CONVENTIONS_2003_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TOD_CONVENTIONS_2003_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::TOD_CONVENTIONS_2003_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TOD_CONVENTIONS_2010_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::TOD_CONVENTIONS_2010_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TOD_CONVENTIONS_2010_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::TOD_CONVENTIONS_2010_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TOD_WITHOUT_EOP_CORRECTIONS", make_descriptor(t_Predefined::wrap_Object(*Predefined::TOD_WITHOUT_EOP_CORRECTIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "VEIS_1950", make_descriptor(t_Predefined::wrap_Object(*Predefined::VEIS_1950)));
      }

      static PyObject *t_Predefined_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Predefined::initializeClass, 1)))
          return NULL;
        return t_Predefined::wrap_Object(Predefined(((t_Predefined *) arg)->object.this$));
      }
      static PyObject *t_Predefined_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Predefined::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Predefined_of_(t_Predefined *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_Predefined_getName(t_Predefined *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_Predefined_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        Predefined result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::frames::Predefined::valueOf(a0));
          return t_Predefined::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_Predefined_values(PyTypeObject *type)
      {
        JArray< Predefined > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::Predefined::values());
        return JArray<jobject>(result.this$).wrap(t_Predefined::wrap_jobject);
      }
      static PyObject *t_Predefined_get__parameters_(t_Predefined *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_Predefined_get__name(t_Predefined *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
    }
  }
}
