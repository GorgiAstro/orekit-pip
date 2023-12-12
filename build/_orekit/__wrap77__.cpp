#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/BSPTree$LeafMerger.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *BSPTree$LeafMerger::class$ = NULL;
        jmethodID *BSPTree$LeafMerger::mids$ = NULL;
        bool BSPTree$LeafMerger::live$ = false;

        jclass BSPTree$LeafMerger::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/BSPTree$LeafMerger");

            mids$ = new jmethodID[max_mid];
            mids$[mid_merge_451709fdd8386167] = env->getMethodID(cls, "merge", "(Lorg/hipparchus/geometry/partitioning/BSPTree;Lorg/hipparchus/geometry/partitioning/BSPTree;Lorg/hipparchus/geometry/partitioning/BSPTree;ZZ)Lorg/hipparchus/geometry/partitioning/BSPTree;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::partitioning::BSPTree BSPTree$LeafMerger::merge(const ::org::hipparchus::geometry::partitioning::BSPTree & a0, const ::org::hipparchus::geometry::partitioning::BSPTree & a1, const ::org::hipparchus::geometry::partitioning::BSPTree & a2, jboolean a3, jboolean a4) const
        {
          return ::org::hipparchus::geometry::partitioning::BSPTree(env->callObjectMethod(this$, mids$[mid_merge_451709fdd8386167], a0.this$, a1.this$, a2.this$, a3, a4));
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
      namespace partitioning {
        static PyObject *t_BSPTree$LeafMerger_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BSPTree$LeafMerger_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BSPTree$LeafMerger_of_(t_BSPTree$LeafMerger *self, PyObject *args);
        static PyObject *t_BSPTree$LeafMerger_merge(t_BSPTree$LeafMerger *self, PyObject *args);
        static PyObject *t_BSPTree$LeafMerger_get__parameters_(t_BSPTree$LeafMerger *self, void *data);
        static PyGetSetDef t_BSPTree$LeafMerger__fields_[] = {
          DECLARE_GET_FIELD(t_BSPTree$LeafMerger, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BSPTree$LeafMerger__methods_[] = {
          DECLARE_METHOD(t_BSPTree$LeafMerger, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BSPTree$LeafMerger, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BSPTree$LeafMerger, of_, METH_VARARGS),
          DECLARE_METHOD(t_BSPTree$LeafMerger, merge, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BSPTree$LeafMerger)[] = {
          { Py_tp_methods, t_BSPTree$LeafMerger__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BSPTree$LeafMerger__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BSPTree$LeafMerger)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BSPTree$LeafMerger, t_BSPTree$LeafMerger, BSPTree$LeafMerger);
        PyObject *t_BSPTree$LeafMerger::wrap_Object(const BSPTree$LeafMerger& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BSPTree$LeafMerger::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BSPTree$LeafMerger *self = (t_BSPTree$LeafMerger *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BSPTree$LeafMerger::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BSPTree$LeafMerger::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BSPTree$LeafMerger *self = (t_BSPTree$LeafMerger *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BSPTree$LeafMerger::install(PyObject *module)
        {
          installType(&PY_TYPE(BSPTree$LeafMerger), &PY_TYPE_DEF(BSPTree$LeafMerger), module, "BSPTree$LeafMerger", 0);
        }

        void t_BSPTree$LeafMerger::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree$LeafMerger), "class_", make_descriptor(BSPTree$LeafMerger::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree$LeafMerger), "wrapfn_", make_descriptor(t_BSPTree$LeafMerger::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree$LeafMerger), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BSPTree$LeafMerger_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BSPTree$LeafMerger::initializeClass, 1)))
            return NULL;
          return t_BSPTree$LeafMerger::wrap_Object(BSPTree$LeafMerger(((t_BSPTree$LeafMerger *) arg)->object.this$));
        }
        static PyObject *t_BSPTree$LeafMerger_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BSPTree$LeafMerger::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BSPTree$LeafMerger_of_(t_BSPTree$LeafMerger *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BSPTree$LeafMerger_merge(t_BSPTree$LeafMerger *self, PyObject *args)
        {
          ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::BSPTree a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::geometry::partitioning::BSPTree a2((jobject) NULL);
          PyTypeObject **p2;
          jboolean a3;
          jboolean a4;
          ::org::hipparchus::geometry::partitioning::BSPTree result((jobject) NULL);

          if (!parseArgs(args, "KKKZZ", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_, &a2, &p2, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_, &a3, &a4))
          {
            OBJ_CALL(result = self->object.merge(a0, a1, a2, a3, a4));
            return ::org::hipparchus::geometry::partitioning::t_BSPTree::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "merge", args);
          return NULL;
        }
        static PyObject *t_BSPTree$LeafMerger_get__parameters_(t_BSPTree$LeafMerger *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/EquinoctialOrbit.h"
#include "org/orekit/orbits/PositionAngleBased.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/EquinoctialOrbit.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *EquinoctialOrbit::class$ = NULL;
      jmethodID *EquinoctialOrbit::mids$ = NULL;
      bool EquinoctialOrbit::live$ = false;

      jclass EquinoctialOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/EquinoctialOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a9af82a1647a21f3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;)V");
          mids$[mid_init$_7c6479063e790949] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;D)V");
          mids$[mid_init$_5005ce863a640a87] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_init$_93fbea8aef52fcb9] = env->getMethodID(cls, "<init>", "(DDDDDDLorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_init$_6687db2a115b6393] = env->getMethodID(cls, "<init>", "(DDDDDDDDDDDDLorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_addKeplerContribution_9dda16418cc4ed80] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;D[D)V");
          mids$[mid_eccentricToMean_8d02ba458f22e508] = env->getStaticMethodID(cls, "eccentricToMean", "(DDD)D");
          mids$[mid_eccentricToTrue_8d02ba458f22e508] = env->getStaticMethodID(cls, "eccentricToTrue", "(DDD)D");
          mids$[mid_getA_557b8123390d8d0c] = env->getMethodID(cls, "getA", "()D");
          mids$[mid_getADot_557b8123390d8d0c] = env->getMethodID(cls, "getADot", "()D");
          mids$[mid_getCachedPositionAngleType_f4984aee71df4c19] = env->getMethodID(cls, "getCachedPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_getE_557b8123390d8d0c] = env->getMethodID(cls, "getE", "()D");
          mids$[mid_getEDot_557b8123390d8d0c] = env->getMethodID(cls, "getEDot", "()D");
          mids$[mid_getEquinoctialEx_557b8123390d8d0c] = env->getMethodID(cls, "getEquinoctialEx", "()D");
          mids$[mid_getEquinoctialExDot_557b8123390d8d0c] = env->getMethodID(cls, "getEquinoctialExDot", "()D");
          mids$[mid_getEquinoctialEy_557b8123390d8d0c] = env->getMethodID(cls, "getEquinoctialEy", "()D");
          mids$[mid_getEquinoctialEyDot_557b8123390d8d0c] = env->getMethodID(cls, "getEquinoctialEyDot", "()D");
          mids$[mid_getHx_557b8123390d8d0c] = env->getMethodID(cls, "getHx", "()D");
          mids$[mid_getHxDot_557b8123390d8d0c] = env->getMethodID(cls, "getHxDot", "()D");
          mids$[mid_getHy_557b8123390d8d0c] = env->getMethodID(cls, "getHy", "()D");
          mids$[mid_getHyDot_557b8123390d8d0c] = env->getMethodID(cls, "getHyDot", "()D");
          mids$[mid_getI_557b8123390d8d0c] = env->getMethodID(cls, "getI", "()D");
          mids$[mid_getIDot_557b8123390d8d0c] = env->getMethodID(cls, "getIDot", "()D");
          mids$[mid_getL_20637fb12d17f9d4] = env->getMethodID(cls, "getL", "(Lorg/orekit/orbits/PositionAngleType;)D");
          mids$[mid_getLDot_20637fb12d17f9d4] = env->getMethodID(cls, "getLDot", "(Lorg/orekit/orbits/PositionAngleType;)D");
          mids$[mid_getLE_557b8123390d8d0c] = env->getMethodID(cls, "getLE", "()D");
          mids$[mid_getLEDot_557b8123390d8d0c] = env->getMethodID(cls, "getLEDot", "()D");
          mids$[mid_getLM_557b8123390d8d0c] = env->getMethodID(cls, "getLM", "()D");
          mids$[mid_getLMDot_557b8123390d8d0c] = env->getMethodID(cls, "getLMDot", "()D");
          mids$[mid_getLv_557b8123390d8d0c] = env->getMethodID(cls, "getLv", "()D");
          mids$[mid_getLvDot_557b8123390d8d0c] = env->getMethodID(cls, "getLvDot", "()D");
          mids$[mid_getType_2cea2a2cb3e02091] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasRates_89b302893bdbe1f1] = env->getMethodID(cls, "hasRates", "()Z");
          mids$[mid_meanToEccentric_8d02ba458f22e508] = env->getStaticMethodID(cls, "meanToEccentric", "(DDD)D");
          mids$[mid_removeRates_122d53e131631054] = env->getMethodID(cls, "removeRates", "()Lorg/orekit/orbits/EquinoctialOrbit;");
          mids$[mid_shiftedBy_adf034c2f114a9e6] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/EquinoctialOrbit;");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_trueToEccentric_8d02ba458f22e508] = env->getStaticMethodID(cls, "trueToEccentric", "(DDD)D");
          mids$[mid_initPVCoordinates_daf15abc21907508] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_initPosition_f88961cca75a2c0a] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_computeJacobianMeanWrtCartesian_8cf5267aa13a77f3] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[D");
          mids$[mid_computeJacobianEccentricWrtCartesian_8cf5267aa13a77f3] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[D");
          mids$[mid_computeJacobianTrueWrtCartesian_8cf5267aa13a77f3] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EquinoctialOrbit::EquinoctialOrbit(const ::org::orekit::orbits::Orbit & a0) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_a9af82a1647a21f3, a0.this$)) {}

      EquinoctialOrbit::EquinoctialOrbit(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, jdouble a2) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_7c6479063e790949, a0.this$, a1.this$, a2)) {}

      EquinoctialOrbit::EquinoctialOrbit(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_5005ce863a640a87, a0.this$, a1.this$, a2.this$, a3)) {}

      EquinoctialOrbit::EquinoctialOrbit(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::orbits::PositionAngleType & a6, const ::org::orekit::frames::Frame & a7, const ::org::orekit::time::AbsoluteDate & a8, jdouble a9) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_93fbea8aef52fcb9, a0, a1, a2, a3, a4, a5, a6.this$, a7.this$, a8.this$, a9)) {}

      EquinoctialOrbit::EquinoctialOrbit(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, const ::org::orekit::orbits::PositionAngleType & a12, const ::org::orekit::frames::Frame & a13, const ::org::orekit::time::AbsoluteDate & a14, jdouble a15) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_6687db2a115b6393, a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12.this$, a13.this$, a14.this$, a15)) {}

      void EquinoctialOrbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, jdouble a1, const JArray< jdouble > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_9dda16418cc4ed80], a0.this$, a1, a2.this$);
      }

      jdouble EquinoctialOrbit::eccentricToMean(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_eccentricToMean_8d02ba458f22e508], a0, a1, a2);
      }

      jdouble EquinoctialOrbit::eccentricToTrue(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_eccentricToTrue_8d02ba458f22e508], a0, a1, a2);
      }

      jdouble EquinoctialOrbit::getA() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getA_557b8123390d8d0c]);
      }

      jdouble EquinoctialOrbit::getADot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getADot_557b8123390d8d0c]);
      }

      ::org::orekit::orbits::PositionAngleType EquinoctialOrbit::getCachedPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getCachedPositionAngleType_f4984aee71df4c19]));
      }

      jdouble EquinoctialOrbit::getE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getE_557b8123390d8d0c]);
      }

      jdouble EquinoctialOrbit::getEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEDot_557b8123390d8d0c]);
      }

      jdouble EquinoctialOrbit::getEquinoctialEx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEx_557b8123390d8d0c]);
      }

      jdouble EquinoctialOrbit::getEquinoctialExDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialExDot_557b8123390d8d0c]);
      }

      jdouble EquinoctialOrbit::getEquinoctialEy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEy_557b8123390d8d0c]);
      }

      jdouble EquinoctialOrbit::getEquinoctialEyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEyDot_557b8123390d8d0c]);
      }

      jdouble EquinoctialOrbit::getHx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHx_557b8123390d8d0c]);
      }

      jdouble EquinoctialOrbit::getHxDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHxDot_557b8123390d8d0c]);
      }

      jdouble EquinoctialOrbit::getHy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHy_557b8123390d8d0c]);
      }

      jdouble EquinoctialOrbit::getHyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHyDot_557b8123390d8d0c]);
      }

      jdouble EquinoctialOrbit::getI() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getI_557b8123390d8d0c]);
      }

      jdouble EquinoctialOrbit::getIDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getIDot_557b8123390d8d0c]);
      }

      jdouble EquinoctialOrbit::getL(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getL_20637fb12d17f9d4], a0.this$);
      }

      jdouble EquinoctialOrbit::getLDot(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLDot_20637fb12d17f9d4], a0.this$);
      }

      jdouble EquinoctialOrbit::getLE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLE_557b8123390d8d0c]);
      }

      jdouble EquinoctialOrbit::getLEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLEDot_557b8123390d8d0c]);
      }

      jdouble EquinoctialOrbit::getLM() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLM_557b8123390d8d0c]);
      }

      jdouble EquinoctialOrbit::getLMDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLMDot_557b8123390d8d0c]);
      }

      jdouble EquinoctialOrbit::getLv() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLv_557b8123390d8d0c]);
      }

      jdouble EquinoctialOrbit::getLvDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLvDot_557b8123390d8d0c]);
      }

      ::org::orekit::orbits::OrbitType EquinoctialOrbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_2cea2a2cb3e02091]));
      }

      jboolean EquinoctialOrbit::hasRates() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasRates_89b302893bdbe1f1]);
      }

      jdouble EquinoctialOrbit::meanToEccentric(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_meanToEccentric_8d02ba458f22e508], a0, a1, a2);
      }

      EquinoctialOrbit EquinoctialOrbit::removeRates() const
      {
        return EquinoctialOrbit(env->callObjectMethod(this$, mids$[mid_removeRates_122d53e131631054]));
      }

      EquinoctialOrbit EquinoctialOrbit::shiftedBy(jdouble a0) const
      {
        return EquinoctialOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_adf034c2f114a9e6], a0));
      }

      ::java::lang::String EquinoctialOrbit::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
      }

      jdouble EquinoctialOrbit::trueToEccentric(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_trueToEccentric_8d02ba458f22e508], a0, a1, a2);
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
      static PyObject *t_EquinoctialOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EquinoctialOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static int t_EquinoctialOrbit_init_(t_EquinoctialOrbit *self, PyObject *args, PyObject *kwds);
      static PyObject *t_EquinoctialOrbit_addKeplerContribution(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_eccentricToMean(PyTypeObject *type, PyObject *args);
      static PyObject *t_EquinoctialOrbit_eccentricToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getA(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getADot(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getCachedPositionAngleType(t_EquinoctialOrbit *self);
      static PyObject *t_EquinoctialOrbit_getE(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getEDot(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getEquinoctialEx(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getEquinoctialExDot(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getEquinoctialEy(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getEquinoctialEyDot(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getHx(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getHxDot(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getHy(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getHyDot(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getI(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getIDot(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getL(t_EquinoctialOrbit *self, PyObject *arg);
      static PyObject *t_EquinoctialOrbit_getLDot(t_EquinoctialOrbit *self, PyObject *arg);
      static PyObject *t_EquinoctialOrbit_getLE(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getLEDot(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getLM(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getLMDot(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getLv(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getLvDot(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_getType(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_hasRates(t_EquinoctialOrbit *self);
      static PyObject *t_EquinoctialOrbit_meanToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_EquinoctialOrbit_removeRates(t_EquinoctialOrbit *self);
      static PyObject *t_EquinoctialOrbit_shiftedBy(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_toString(t_EquinoctialOrbit *self, PyObject *args);
      static PyObject *t_EquinoctialOrbit_trueToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_EquinoctialOrbit_get__a(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__aDot(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__cachedPositionAngleType(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__e(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__eDot(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__equinoctialEx(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__equinoctialExDot(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__equinoctialEy(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__equinoctialEyDot(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__hx(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__hxDot(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__hy(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__hyDot(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__i(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__iDot(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__lE(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__lEDot(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__lM(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__lMDot(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__lv(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__lvDot(t_EquinoctialOrbit *self, void *data);
      static PyObject *t_EquinoctialOrbit_get__type(t_EquinoctialOrbit *self, void *data);
      static PyGetSetDef t_EquinoctialOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_EquinoctialOrbit, a),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, aDot),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, cachedPositionAngleType),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, e),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, eDot),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, equinoctialEx),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, equinoctialExDot),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, equinoctialEy),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, equinoctialEyDot),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, hx),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, hxDot),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, hy),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, hyDot),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, i),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, iDot),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, lE),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, lEDot),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, lM),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, lMDot),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, lv),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, lvDot),
        DECLARE_GET_FIELD(t_EquinoctialOrbit, type),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_EquinoctialOrbit__methods_[] = {
        DECLARE_METHOD(t_EquinoctialOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EquinoctialOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EquinoctialOrbit, addKeplerContribution, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, eccentricToMean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_EquinoctialOrbit, eccentricToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_EquinoctialOrbit, getA, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getADot, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getCachedPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getE, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getEDot, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getEquinoctialEx, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getEquinoctialExDot, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getEquinoctialEy, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getEquinoctialEyDot, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getHx, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getHxDot, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getHy, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getHyDot, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getI, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getIDot, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getL, METH_O),
        DECLARE_METHOD(t_EquinoctialOrbit, getLDot, METH_O),
        DECLARE_METHOD(t_EquinoctialOrbit, getLE, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getLEDot, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getLM, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getLMDot, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getLv, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getLvDot, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, getType, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, hasRates, METH_NOARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, meanToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_EquinoctialOrbit, removeRates, METH_NOARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, toString, METH_VARARGS),
        DECLARE_METHOD(t_EquinoctialOrbit, trueToEccentric, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EquinoctialOrbit)[] = {
        { Py_tp_methods, t_EquinoctialOrbit__methods_ },
        { Py_tp_init, (void *) t_EquinoctialOrbit_init_ },
        { Py_tp_getset, t_EquinoctialOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EquinoctialOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::Orbit),
        NULL
      };

      DEFINE_TYPE(EquinoctialOrbit, t_EquinoctialOrbit, EquinoctialOrbit);

      void t_EquinoctialOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(EquinoctialOrbit), &PY_TYPE_DEF(EquinoctialOrbit), module, "EquinoctialOrbit", 0);
      }

      void t_EquinoctialOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EquinoctialOrbit), "class_", make_descriptor(EquinoctialOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EquinoctialOrbit), "wrapfn_", make_descriptor(t_EquinoctialOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EquinoctialOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EquinoctialOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EquinoctialOrbit::initializeClass, 1)))
          return NULL;
        return t_EquinoctialOrbit::wrap_Object(EquinoctialOrbit(((t_EquinoctialOrbit *) arg)->object.this$));
      }
      static PyObject *t_EquinoctialOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EquinoctialOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_EquinoctialOrbit_init_(t_EquinoctialOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            EquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
            {
              INT_CALL(object = EquinoctialOrbit(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            jdouble a2;
            EquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = EquinoctialOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble a3;
            EquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkkD", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = EquinoctialOrbit(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 10:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            ::org::orekit::orbits::PositionAngleType a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::orekit::frames::Frame a7((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a8((jobject) NULL);
            jdouble a9;
            EquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "DDDDDDKkkD", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a7, &a8, &a9))
            {
              INT_CALL(object = EquinoctialOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
              self->object = object;
              break;
            }
          }
          goto err;
         case 16:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            jdouble a6;
            jdouble a7;
            jdouble a8;
            jdouble a9;
            jdouble a10;
            jdouble a11;
            ::org::orekit::orbits::PositionAngleType a12((jobject) NULL);
            PyTypeObject **p12;
            ::org::orekit::frames::Frame a13((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a14((jobject) NULL);
            jdouble a15;
            EquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "DDDDDDDDDDDDKkkD", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &p12, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a13, &a14, &a15))
            {
              INT_CALL(object = EquinoctialOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15));
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

      static PyObject *t_EquinoctialOrbit_addKeplerContribution(t_EquinoctialOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble a1;
        JArray< jdouble > a2((jobject) NULL);

        if (!parseArgs(args, "KD[D", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &a2))
        {
          OBJ_CALL(self->object.addKeplerContribution(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "addKeplerContribution", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_eccentricToMean(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::orbits::EquinoctialOrbit::eccentricToMean(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "eccentricToMean", args);
        return NULL;
      }

      static PyObject *t_EquinoctialOrbit_eccentricToTrue(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::orbits::EquinoctialOrbit::eccentricToTrue(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "eccentricToTrue", args);
        return NULL;
      }

      static PyObject *t_EquinoctialOrbit_getA(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getA());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getA", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getADot(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getADot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getADot", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getCachedPositionAngleType(t_EquinoctialOrbit *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_EquinoctialOrbit_getE(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getE());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getE", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getEDot(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getEDot", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getEquinoctialEx(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEx());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getEquinoctialEx", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getEquinoctialExDot(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialExDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getEquinoctialExDot", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getEquinoctialEy(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEy());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getEquinoctialEy", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getEquinoctialEyDot(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEyDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getEquinoctialEyDot", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getHx(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHx());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getHx", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getHxDot(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHxDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getHxDot", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getHy(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHy());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getHy", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getHyDot(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHyDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getHyDot", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getI(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getI());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getI", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getIDot(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getIDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getIDot", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getL(t_EquinoctialOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getL(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getL", arg);
        return NULL;
      }

      static PyObject *t_EquinoctialOrbit_getLDot(t_EquinoctialOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getLDot(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLDot", arg);
        return NULL;
      }

      static PyObject *t_EquinoctialOrbit_getLE(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLE());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getLE", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getLEDot(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLEDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getLEDot", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getLM(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLM());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getLM", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getLMDot(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLMDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getLMDot", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getLv(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLv());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getLv", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getLvDot(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLvDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getLvDot", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_getType(t_EquinoctialOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "getType", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_hasRates(t_EquinoctialOrbit *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasRates());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_EquinoctialOrbit_meanToEccentric(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::orbits::EquinoctialOrbit::meanToEccentric(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "meanToEccentric", args);
        return NULL;
      }

      static PyObject *t_EquinoctialOrbit_removeRates(t_EquinoctialOrbit *self)
      {
        EquinoctialOrbit result((jobject) NULL);
        OBJ_CALL(result = self->object.removeRates());
        return t_EquinoctialOrbit::wrap_Object(result);
      }

      static PyObject *t_EquinoctialOrbit_shiftedBy(t_EquinoctialOrbit *self, PyObject *args)
      {
        jdouble a0;
        EquinoctialOrbit result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_EquinoctialOrbit::wrap_Object(result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_toString(t_EquinoctialOrbit *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(EquinoctialOrbit), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_EquinoctialOrbit_trueToEccentric(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::orbits::EquinoctialOrbit::trueToEccentric(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "trueToEccentric", args);
        return NULL;
      }

      static PyObject *t_EquinoctialOrbit_get__a(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getA());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__aDot(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getADot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__cachedPositionAngleType(t_EquinoctialOrbit *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }

      static PyObject *t_EquinoctialOrbit_get__e(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__eDot(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__equinoctialEx(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__equinoctialExDot(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialExDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__equinoctialEy(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__equinoctialEyDot(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__hx(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__hxDot(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHxDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__hy(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__hyDot(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__i(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getI());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__iDot(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getIDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__lE(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__lEDot(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__lM(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLM());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__lMDot(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLMDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__lv(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLv());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__lvDot(t_EquinoctialOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLvDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EquinoctialOrbit_get__type(t_EquinoctialOrbit *self, void *data)
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
#include "org/hipparchus/analysis/polynomials/PolynomialFunctionLagrangeForm.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *PolynomialFunctionLagrangeForm::class$ = NULL;
        jmethodID *PolynomialFunctionLagrangeForm::mids$ = NULL;
        bool PolynomialFunctionLagrangeForm::live$ = false;

        jclass PolynomialFunctionLagrangeForm::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/PolynomialFunctionLagrangeForm");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ab4840ba016ef1da] = env->getMethodID(cls, "<init>", "([D[D)V");
            mids$[mid_degree_412668abc8d889e9] = env->getMethodID(cls, "degree", "()I");
            mids$[mid_evaluate_abf45904c34f3045] = env->getStaticMethodID(cls, "evaluate", "([D[DD)D");
            mids$[mid_getCoefficients_a53a7513ecedada2] = env->getMethodID(cls, "getCoefficients", "()[D");
            mids$[mid_getInterpolatingPoints_a53a7513ecedada2] = env->getMethodID(cls, "getInterpolatingPoints", "()[D");
            mids$[mid_getInterpolatingValues_a53a7513ecedada2] = env->getMethodID(cls, "getInterpolatingValues", "()[D");
            mids$[mid_value_7e960cd6eee376d8] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_verifyInterpolationArray_e4da1fc662513bd0] = env->getStaticMethodID(cls, "verifyInterpolationArray", "([D[DZ)Z");
            mids$[mid_computeCoefficients_0640e6acf969ed28] = env->getMethodID(cls, "computeCoefficients", "()V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PolynomialFunctionLagrangeForm::PolynomialFunctionLagrangeForm(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab4840ba016ef1da, a0.this$, a1.this$)) {}

        jint PolynomialFunctionLagrangeForm::degree() const
        {
          return env->callIntMethod(this$, mids$[mid_degree_412668abc8d889e9]);
        }

        jdouble PolynomialFunctionLagrangeForm::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_evaluate_abf45904c34f3045], a0.this$, a1.this$, a2);
        }

        JArray< jdouble > PolynomialFunctionLagrangeForm::getCoefficients() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCoefficients_a53a7513ecedada2]));
        }

        JArray< jdouble > PolynomialFunctionLagrangeForm::getInterpolatingPoints() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getInterpolatingPoints_a53a7513ecedada2]));
        }

        JArray< jdouble > PolynomialFunctionLagrangeForm::getInterpolatingValues() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getInterpolatingValues_a53a7513ecedada2]));
        }

        jdouble PolynomialFunctionLagrangeForm::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_7e960cd6eee376d8], a0);
        }

        jboolean PolynomialFunctionLagrangeForm::verifyInterpolationArray(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jboolean a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_verifyInterpolationArray_e4da1fc662513bd0], a0.this$, a1.this$, a2);
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
      namespace polynomials {
        static PyObject *t_PolynomialFunctionLagrangeForm_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialFunctionLagrangeForm_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PolynomialFunctionLagrangeForm_init_(t_PolynomialFunctionLagrangeForm *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PolynomialFunctionLagrangeForm_degree(t_PolynomialFunctionLagrangeForm *self);
        static PyObject *t_PolynomialFunctionLagrangeForm_evaluate(PyTypeObject *type, PyObject *args);
        static PyObject *t_PolynomialFunctionLagrangeForm_getCoefficients(t_PolynomialFunctionLagrangeForm *self);
        static PyObject *t_PolynomialFunctionLagrangeForm_getInterpolatingPoints(t_PolynomialFunctionLagrangeForm *self);
        static PyObject *t_PolynomialFunctionLagrangeForm_getInterpolatingValues(t_PolynomialFunctionLagrangeForm *self);
        static PyObject *t_PolynomialFunctionLagrangeForm_value(t_PolynomialFunctionLagrangeForm *self, PyObject *arg);
        static PyObject *t_PolynomialFunctionLagrangeForm_verifyInterpolationArray(PyTypeObject *type, PyObject *args);
        static PyObject *t_PolynomialFunctionLagrangeForm_get__coefficients(t_PolynomialFunctionLagrangeForm *self, void *data);
        static PyObject *t_PolynomialFunctionLagrangeForm_get__interpolatingPoints(t_PolynomialFunctionLagrangeForm *self, void *data);
        static PyObject *t_PolynomialFunctionLagrangeForm_get__interpolatingValues(t_PolynomialFunctionLagrangeForm *self, void *data);
        static PyGetSetDef t_PolynomialFunctionLagrangeForm__fields_[] = {
          DECLARE_GET_FIELD(t_PolynomialFunctionLagrangeForm, coefficients),
          DECLARE_GET_FIELD(t_PolynomialFunctionLagrangeForm, interpolatingPoints),
          DECLARE_GET_FIELD(t_PolynomialFunctionLagrangeForm, interpolatingValues),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PolynomialFunctionLagrangeForm__methods_[] = {
          DECLARE_METHOD(t_PolynomialFunctionLagrangeForm, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialFunctionLagrangeForm, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialFunctionLagrangeForm, degree, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunctionLagrangeForm, evaluate, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_PolynomialFunctionLagrangeForm, getCoefficients, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunctionLagrangeForm, getInterpolatingPoints, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunctionLagrangeForm, getInterpolatingValues, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunctionLagrangeForm, value, METH_O),
          DECLARE_METHOD(t_PolynomialFunctionLagrangeForm, verifyInterpolationArray, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolynomialFunctionLagrangeForm)[] = {
          { Py_tp_methods, t_PolynomialFunctionLagrangeForm__methods_ },
          { Py_tp_init, (void *) t_PolynomialFunctionLagrangeForm_init_ },
          { Py_tp_getset, t_PolynomialFunctionLagrangeForm__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolynomialFunctionLagrangeForm)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PolynomialFunctionLagrangeForm, t_PolynomialFunctionLagrangeForm, PolynomialFunctionLagrangeForm);

        void t_PolynomialFunctionLagrangeForm::install(PyObject *module)
        {
          installType(&PY_TYPE(PolynomialFunctionLagrangeForm), &PY_TYPE_DEF(PolynomialFunctionLagrangeForm), module, "PolynomialFunctionLagrangeForm", 0);
        }

        void t_PolynomialFunctionLagrangeForm::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunctionLagrangeForm), "class_", make_descriptor(PolynomialFunctionLagrangeForm::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunctionLagrangeForm), "wrapfn_", make_descriptor(t_PolynomialFunctionLagrangeForm::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunctionLagrangeForm), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolynomialFunctionLagrangeForm::initializeClass, 1)))
            return NULL;
          return t_PolynomialFunctionLagrangeForm::wrap_Object(PolynomialFunctionLagrangeForm(((t_PolynomialFunctionLagrangeForm *) arg)->object.this$));
        }
        static PyObject *t_PolynomialFunctionLagrangeForm_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolynomialFunctionLagrangeForm::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PolynomialFunctionLagrangeForm_init_(t_PolynomialFunctionLagrangeForm *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          PolynomialFunctionLagrangeForm object((jobject) NULL);

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            INT_CALL(object = PolynomialFunctionLagrangeForm(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_degree(t_PolynomialFunctionLagrangeForm *self)
        {
          jint result;
          OBJ_CALL(result = self->object.degree());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_evaluate(PyTypeObject *type, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jdouble a2;
          jdouble result;

          if (!parseArgs(args, "[D[DD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::PolynomialFunctionLagrangeForm::evaluate(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "evaluate", args);
          return NULL;
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_getCoefficients(t_PolynomialFunctionLagrangeForm *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoefficients());
          return result.wrap();
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_getInterpolatingPoints(t_PolynomialFunctionLagrangeForm *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getInterpolatingPoints());
          return result.wrap();
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_getInterpolatingValues(t_PolynomialFunctionLagrangeForm *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getInterpolatingValues());
          return result.wrap();
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_value(t_PolynomialFunctionLagrangeForm *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.value(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "value", arg);
          return NULL;
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_verifyInterpolationArray(PyTypeObject *type, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jboolean a2;
          jboolean result;

          if (!parseArgs(args, "[D[DZ", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::PolynomialFunctionLagrangeForm::verifyInterpolationArray(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError(type, "verifyInterpolationArray", args);
          return NULL;
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_get__coefficients(t_PolynomialFunctionLagrangeForm *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoefficients());
          return value.wrap();
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_get__interpolatingPoints(t_PolynomialFunctionLagrangeForm *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getInterpolatingPoints());
          return value.wrap();
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_get__interpolatingValues(t_PolynomialFunctionLagrangeForm *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getInterpolatingValues());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/DependentVectorsHandler.h"
#include "java/util/List.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/linear/DependentVectorsHandler.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *DependentVectorsHandler::class$ = NULL;
      jmethodID *DependentVectorsHandler::mids$ = NULL;
      bool DependentVectorsHandler::live$ = false;
      DependentVectorsHandler *DependentVectorsHandler::ADD_ZERO_VECTOR = NULL;
      DependentVectorsHandler *DependentVectorsHandler::GENERATE_EXCEPTION = NULL;
      DependentVectorsHandler *DependentVectorsHandler::REDUCE_BASE_TO_SPAN = NULL;

      jclass DependentVectorsHandler::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/DependentVectorsHandler");

          mids$ = new jmethodID[max_mid];
          mids$[mid_manageDependent_2870ff50a5bfd52c] = env->getMethodID(cls, "manageDependent", "(ILjava/util/List;)I");
          mids$[mid_manageDependent_9bb5b045c18ca7e5] = env->getMethodID(cls, "manageDependent", "(Lorg/hipparchus/Field;ILjava/util/List;)I");
          mids$[mid_valueOf_96d403af5010354f] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/linear/DependentVectorsHandler;");
          mids$[mid_values_0f53356b5d3bc549] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/linear/DependentVectorsHandler;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ADD_ZERO_VECTOR = new DependentVectorsHandler(env->getStaticObjectField(cls, "ADD_ZERO_VECTOR", "Lorg/hipparchus/linear/DependentVectorsHandler;"));
          GENERATE_EXCEPTION = new DependentVectorsHandler(env->getStaticObjectField(cls, "GENERATE_EXCEPTION", "Lorg/hipparchus/linear/DependentVectorsHandler;"));
          REDUCE_BASE_TO_SPAN = new DependentVectorsHandler(env->getStaticObjectField(cls, "REDUCE_BASE_TO_SPAN", "Lorg/hipparchus/linear/DependentVectorsHandler;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint DependentVectorsHandler::manageDependent(jint a0, const ::java::util::List & a1) const
      {
        return env->callIntMethod(this$, mids$[mid_manageDependent_2870ff50a5bfd52c], a0, a1.this$);
      }

      jint DependentVectorsHandler::manageDependent(const ::org::hipparchus::Field & a0, jint a1, const ::java::util::List & a2) const
      {
        return env->callIntMethod(this$, mids$[mid_manageDependent_9bb5b045c18ca7e5], a0.this$, a1, a2.this$);
      }

      DependentVectorsHandler DependentVectorsHandler::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return DependentVectorsHandler(env->callStaticObjectMethod(cls, mids$[mid_valueOf_96d403af5010354f], a0.this$));
      }

      JArray< DependentVectorsHandler > DependentVectorsHandler::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< DependentVectorsHandler >(env->callStaticObjectMethod(cls, mids$[mid_values_0f53356b5d3bc549]));
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
      static PyObject *t_DependentVectorsHandler_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DependentVectorsHandler_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DependentVectorsHandler_of_(t_DependentVectorsHandler *self, PyObject *args);
      static PyObject *t_DependentVectorsHandler_manageDependent(t_DependentVectorsHandler *self, PyObject *args);
      static PyObject *t_DependentVectorsHandler_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_DependentVectorsHandler_values(PyTypeObject *type);
      static PyObject *t_DependentVectorsHandler_get__parameters_(t_DependentVectorsHandler *self, void *data);
      static PyGetSetDef t_DependentVectorsHandler__fields_[] = {
        DECLARE_GET_FIELD(t_DependentVectorsHandler, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DependentVectorsHandler__methods_[] = {
        DECLARE_METHOD(t_DependentVectorsHandler, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DependentVectorsHandler, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DependentVectorsHandler, of_, METH_VARARGS),
        DECLARE_METHOD(t_DependentVectorsHandler, manageDependent, METH_VARARGS),
        DECLARE_METHOD(t_DependentVectorsHandler, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_DependentVectorsHandler, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DependentVectorsHandler)[] = {
        { Py_tp_methods, t_DependentVectorsHandler__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_DependentVectorsHandler__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DependentVectorsHandler)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(DependentVectorsHandler, t_DependentVectorsHandler, DependentVectorsHandler);
      PyObject *t_DependentVectorsHandler::wrap_Object(const DependentVectorsHandler& object, PyTypeObject *p0)
      {
        PyObject *obj = t_DependentVectorsHandler::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_DependentVectorsHandler *self = (t_DependentVectorsHandler *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_DependentVectorsHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_DependentVectorsHandler::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_DependentVectorsHandler *self = (t_DependentVectorsHandler *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_DependentVectorsHandler::install(PyObject *module)
      {
        installType(&PY_TYPE(DependentVectorsHandler), &PY_TYPE_DEF(DependentVectorsHandler), module, "DependentVectorsHandler", 0);
      }

      void t_DependentVectorsHandler::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DependentVectorsHandler), "class_", make_descriptor(DependentVectorsHandler::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DependentVectorsHandler), "wrapfn_", make_descriptor(t_DependentVectorsHandler::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DependentVectorsHandler), "boxfn_", make_descriptor(boxObject));
        env->getClass(DependentVectorsHandler::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(DependentVectorsHandler), "ADD_ZERO_VECTOR", make_descriptor(t_DependentVectorsHandler::wrap_Object(*DependentVectorsHandler::ADD_ZERO_VECTOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DependentVectorsHandler), "GENERATE_EXCEPTION", make_descriptor(t_DependentVectorsHandler::wrap_Object(*DependentVectorsHandler::GENERATE_EXCEPTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DependentVectorsHandler), "REDUCE_BASE_TO_SPAN", make_descriptor(t_DependentVectorsHandler::wrap_Object(*DependentVectorsHandler::REDUCE_BASE_TO_SPAN)));
      }

      static PyObject *t_DependentVectorsHandler_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DependentVectorsHandler::initializeClass, 1)))
          return NULL;
        return t_DependentVectorsHandler::wrap_Object(DependentVectorsHandler(((t_DependentVectorsHandler *) arg)->object.this$));
      }
      static PyObject *t_DependentVectorsHandler_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DependentVectorsHandler::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DependentVectorsHandler_of_(t_DependentVectorsHandler *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_DependentVectorsHandler_manageDependent(t_DependentVectorsHandler *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            ::java::util::List a1((jobject) NULL);
            PyTypeObject **p1;
            jint result;

            if (!parseArgs(args, "IK", ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(result = self->object.manageDependent(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::java::util::List a2((jobject) NULL);
            PyTypeObject **p2;
            jint result;

            if (!parseArgs(args, "KIK", ::org::hipparchus::Field::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(result = self->object.manageDependent(a0, a1, a2));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "manageDependent", args);
        return NULL;
      }

      static PyObject *t_DependentVectorsHandler_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        DependentVectorsHandler result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::DependentVectorsHandler::valueOf(a0));
          return t_DependentVectorsHandler::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_DependentVectorsHandler_values(PyTypeObject *type)
      {
        JArray< DependentVectorsHandler > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::linear::DependentVectorsHandler::values());
        return JArray<jobject>(result.this$).wrap(t_DependentVectorsHandler::wrap_jobject);
      }
      static PyObject *t_DependentVectorsHandler_get__parameters_(t_DependentVectorsHandler *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/generation/KvnGenerator.h"
#include "java/io/IOException.h"
#include "java/util/List.h"
#include "java/lang/Appendable.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {

            ::java::lang::Class *KvnGenerator::class$ = NULL;
            jmethodID *KvnGenerator::mids$ = NULL;
            bool KvnGenerator::live$ = false;

            jclass KvnGenerator::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/generation/KvnGenerator");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_e3b546a95dd99e35] = env->getMethodID(cls, "<init>", "(Ljava/lang/Appendable;ILjava/lang/String;DI)V");
                mids$[mid_endMessage_f5ffdf29129ef90a] = env->getMethodID(cls, "endMessage", "(Ljava/lang/String;)V");
                mids$[mid_enterSection_f5ffdf29129ef90a] = env->getMethodID(cls, "enterSection", "(Ljava/lang/String;)V");
                mids$[mid_exitSection_3cffd47377eca18a] = env->getMethodID(cls, "exitSection", "()Ljava/lang/String;");
                mids$[mid_getFormat_c3a4c5f37e67a25e] = env->getMethodID(cls, "getFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;");
                mids$[mid_startMessage_9547058464ed819e] = env->getMethodID(cls, "startMessage", "(Ljava/lang/String;Ljava/lang/String;D)V");
                mids$[mid_writeComments_4ccaedadb068bdeb] = env->getMethodID(cls, "writeComments", "(Ljava/util/List;)V");
                mids$[mid_writeEntry_a717407bcf2f477f] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/utils/units/Unit;Z)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            KvnGenerator::KvnGenerator(const ::java::lang::Appendable & a0, jint a1, const ::java::lang::String & a2, jdouble a3, jint a4) : ::org::orekit::files::ccsds::utils::generation::AbstractGenerator(env->newObject(initializeClass, &mids$, mid_init$_e3b546a95dd99e35, a0.this$, a1, a2.this$, a3, a4)) {}

            void KvnGenerator::endMessage(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_endMessage_f5ffdf29129ef90a], a0.this$);
            }

            void KvnGenerator::enterSection(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_enterSection_f5ffdf29129ef90a], a0.this$);
            }

            ::java::lang::String KvnGenerator::exitSection() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_exitSection_3cffd47377eca18a]));
            }

            ::org::orekit::files::ccsds::utils::FileFormat KvnGenerator::getFormat() const
            {
              return ::org::orekit::files::ccsds::utils::FileFormat(env->callObjectMethod(this$, mids$[mid_getFormat_c3a4c5f37e67a25e]));
            }

            void KvnGenerator::startMessage(const ::java::lang::String & a0, const ::java::lang::String & a1, jdouble a2) const
            {
              env->callVoidMethod(this$, mids$[mid_startMessage_9547058464ed819e], a0.this$, a1.this$, a2);
            }

            void KvnGenerator::writeComments(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeComments_4ccaedadb068bdeb], a0.this$);
            }

            void KvnGenerator::writeEntry(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::utils::units::Unit & a2, jboolean a3) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_a717407bcf2f477f], a0.this$, a1.this$, a2.this$, a3);
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
            static PyObject *t_KvnGenerator_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_KvnGenerator_instance_(PyTypeObject *type, PyObject *arg);
            static int t_KvnGenerator_init_(t_KvnGenerator *self, PyObject *args, PyObject *kwds);
            static PyObject *t_KvnGenerator_endMessage(t_KvnGenerator *self, PyObject *args);
            static PyObject *t_KvnGenerator_enterSection(t_KvnGenerator *self, PyObject *args);
            static PyObject *t_KvnGenerator_exitSection(t_KvnGenerator *self, PyObject *args);
            static PyObject *t_KvnGenerator_getFormat(t_KvnGenerator *self, PyObject *args);
            static PyObject *t_KvnGenerator_startMessage(t_KvnGenerator *self, PyObject *args);
            static PyObject *t_KvnGenerator_writeComments(t_KvnGenerator *self, PyObject *args);
            static PyObject *t_KvnGenerator_writeEntry(t_KvnGenerator *self, PyObject *args);
            static PyObject *t_KvnGenerator_get__format(t_KvnGenerator *self, void *data);
            static PyGetSetDef t_KvnGenerator__fields_[] = {
              DECLARE_GET_FIELD(t_KvnGenerator, format),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_KvnGenerator__methods_[] = {
              DECLARE_METHOD(t_KvnGenerator, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_KvnGenerator, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_KvnGenerator, endMessage, METH_VARARGS),
              DECLARE_METHOD(t_KvnGenerator, enterSection, METH_VARARGS),
              DECLARE_METHOD(t_KvnGenerator, exitSection, METH_VARARGS),
              DECLARE_METHOD(t_KvnGenerator, getFormat, METH_VARARGS),
              DECLARE_METHOD(t_KvnGenerator, startMessage, METH_VARARGS),
              DECLARE_METHOD(t_KvnGenerator, writeComments, METH_VARARGS),
              DECLARE_METHOD(t_KvnGenerator, writeEntry, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(KvnGenerator)[] = {
              { Py_tp_methods, t_KvnGenerator__methods_ },
              { Py_tp_init, (void *) t_KvnGenerator_init_ },
              { Py_tp_getset, t_KvnGenerator__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(KvnGenerator)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractGenerator),
              NULL
            };

            DEFINE_TYPE(KvnGenerator, t_KvnGenerator, KvnGenerator);

            void t_KvnGenerator::install(PyObject *module)
            {
              installType(&PY_TYPE(KvnGenerator), &PY_TYPE_DEF(KvnGenerator), module, "KvnGenerator", 0);
            }

            void t_KvnGenerator::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(KvnGenerator), "class_", make_descriptor(KvnGenerator::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KvnGenerator), "wrapfn_", make_descriptor(t_KvnGenerator::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KvnGenerator), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_KvnGenerator_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, KvnGenerator::initializeClass, 1)))
                return NULL;
              return t_KvnGenerator::wrap_Object(KvnGenerator(((t_KvnGenerator *) arg)->object.this$));
            }
            static PyObject *t_KvnGenerator_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, KvnGenerator::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_KvnGenerator_init_(t_KvnGenerator *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::Appendable a0((jobject) NULL);
              jint a1;
              ::java::lang::String a2((jobject) NULL);
              jdouble a3;
              jint a4;
              KvnGenerator object((jobject) NULL);

              if (!parseArgs(args, "kIsDI", ::java::lang::Appendable::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = KvnGenerator(a0, a1, a2, a3, a4));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_KvnGenerator_endMessage(t_KvnGenerator *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(self->object.endMessage(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(KvnGenerator), (PyObject *) self, "endMessage", args, 2);
            }

            static PyObject *t_KvnGenerator_enterSection(t_KvnGenerator *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(self->object.enterSection(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(KvnGenerator), (PyObject *) self, "enterSection", args, 2);
            }

            static PyObject *t_KvnGenerator_exitSection(t_KvnGenerator *self, PyObject *args)
            {
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.exitSection());
                return j2p(result);
              }

              return callSuper(PY_TYPE(KvnGenerator), (PyObject *) self, "exitSection", args, 2);
            }

            static PyObject *t_KvnGenerator_getFormat(t_KvnGenerator *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::FileFormat result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.getFormat());
                return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(result);
              }

              return callSuper(PY_TYPE(KvnGenerator), (PyObject *) self, "getFormat", args, 2);
            }

            static PyObject *t_KvnGenerator_startMessage(t_KvnGenerator *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              jdouble a2;

              if (!parseArgs(args, "ssD", &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.startMessage(a0, a1, a2));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(KvnGenerator), (PyObject *) self, "startMessage", args, 2);
            }

            static PyObject *t_KvnGenerator_writeComments(t_KvnGenerator *self, PyObject *args)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(self->object.writeComments(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(KvnGenerator), (PyObject *) self, "writeComments", args, 2);
            }

            static PyObject *t_KvnGenerator_writeEntry(t_KvnGenerator *self, PyObject *args)
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

              return callSuper(PY_TYPE(KvnGenerator), (PyObject *) self, "writeEntry", args, 2);
            }

            static PyObject *t_KvnGenerator_get__format(t_KvnGenerator *self, void *data)
            {
              ::org::orekit::files::ccsds::utils::FileFormat value((jobject) NULL);
              OBJ_CALL(value = self->object.getFormat());
              return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrame2.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame2::class$ = NULL;
          jmethodID *SubFrame2::mids$ = NULL;
          bool SubFrame2::live$ = false;

          jclass SubFrame2::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame2");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getAODO_412668abc8d889e9] = env->getMethodID(cls, "getAODO", "()I");
              mids$[mid_getCrs_557b8123390d8d0c] = env->getMethodID(cls, "getCrs", "()D");
              mids$[mid_getCuc_557b8123390d8d0c] = env->getMethodID(cls, "getCuc", "()D");
              mids$[mid_getCus_557b8123390d8d0c] = env->getMethodID(cls, "getCus", "()D");
              mids$[mid_getDeltaN_557b8123390d8d0c] = env->getMethodID(cls, "getDeltaN", "()D");
              mids$[mid_getE_557b8123390d8d0c] = env->getMethodID(cls, "getE", "()D");
              mids$[mid_getFitInterval_412668abc8d889e9] = env->getMethodID(cls, "getFitInterval", "()I");
              mids$[mid_getIODE_412668abc8d889e9] = env->getMethodID(cls, "getIODE", "()I");
              mids$[mid_getM0_557b8123390d8d0c] = env->getMethodID(cls, "getM0", "()D");
              mids$[mid_getSqrtA_557b8123390d8d0c] = env->getMethodID(cls, "getSqrtA", "()D");
              mids$[mid_getToe_412668abc8d889e9] = env->getMethodID(cls, "getToe", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint SubFrame2::getAODO() const
          {
            return env->callIntMethod(this$, mids$[mid_getAODO_412668abc8d889e9]);
          }

          jdouble SubFrame2::getCrs() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCrs_557b8123390d8d0c]);
          }

          jdouble SubFrame2::getCuc() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCuc_557b8123390d8d0c]);
          }

          jdouble SubFrame2::getCus() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCus_557b8123390d8d0c]);
          }

          jdouble SubFrame2::getDeltaN() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDeltaN_557b8123390d8d0c]);
          }

          jdouble SubFrame2::getE() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getE_557b8123390d8d0c]);
          }

          jint SubFrame2::getFitInterval() const
          {
            return env->callIntMethod(this$, mids$[mid_getFitInterval_412668abc8d889e9]);
          }

          jint SubFrame2::getIODE() const
          {
            return env->callIntMethod(this$, mids$[mid_getIODE_412668abc8d889e9]);
          }

          jdouble SubFrame2::getM0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getM0_557b8123390d8d0c]);
          }

          jdouble SubFrame2::getSqrtA() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSqrtA_557b8123390d8d0c]);
          }

          jint SubFrame2::getToe() const
          {
            return env->callIntMethod(this$, mids$[mid_getToe_412668abc8d889e9]);
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
      namespace rflink {
        namespace gps {
          static PyObject *t_SubFrame2_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame2_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame2_getAODO(t_SubFrame2 *self);
          static PyObject *t_SubFrame2_getCrs(t_SubFrame2 *self);
          static PyObject *t_SubFrame2_getCuc(t_SubFrame2 *self);
          static PyObject *t_SubFrame2_getCus(t_SubFrame2 *self);
          static PyObject *t_SubFrame2_getDeltaN(t_SubFrame2 *self);
          static PyObject *t_SubFrame2_getE(t_SubFrame2 *self);
          static PyObject *t_SubFrame2_getFitInterval(t_SubFrame2 *self);
          static PyObject *t_SubFrame2_getIODE(t_SubFrame2 *self);
          static PyObject *t_SubFrame2_getM0(t_SubFrame2 *self);
          static PyObject *t_SubFrame2_getSqrtA(t_SubFrame2 *self);
          static PyObject *t_SubFrame2_getToe(t_SubFrame2 *self);
          static PyObject *t_SubFrame2_get__aODO(t_SubFrame2 *self, void *data);
          static PyObject *t_SubFrame2_get__crs(t_SubFrame2 *self, void *data);
          static PyObject *t_SubFrame2_get__cuc(t_SubFrame2 *self, void *data);
          static PyObject *t_SubFrame2_get__cus(t_SubFrame2 *self, void *data);
          static PyObject *t_SubFrame2_get__deltaN(t_SubFrame2 *self, void *data);
          static PyObject *t_SubFrame2_get__e(t_SubFrame2 *self, void *data);
          static PyObject *t_SubFrame2_get__fitInterval(t_SubFrame2 *self, void *data);
          static PyObject *t_SubFrame2_get__iODE(t_SubFrame2 *self, void *data);
          static PyObject *t_SubFrame2_get__m0(t_SubFrame2 *self, void *data);
          static PyObject *t_SubFrame2_get__sqrtA(t_SubFrame2 *self, void *data);
          static PyObject *t_SubFrame2_get__toe(t_SubFrame2 *self, void *data);
          static PyGetSetDef t_SubFrame2__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrame2, aODO),
            DECLARE_GET_FIELD(t_SubFrame2, crs),
            DECLARE_GET_FIELD(t_SubFrame2, cuc),
            DECLARE_GET_FIELD(t_SubFrame2, cus),
            DECLARE_GET_FIELD(t_SubFrame2, deltaN),
            DECLARE_GET_FIELD(t_SubFrame2, e),
            DECLARE_GET_FIELD(t_SubFrame2, fitInterval),
            DECLARE_GET_FIELD(t_SubFrame2, iODE),
            DECLARE_GET_FIELD(t_SubFrame2, m0),
            DECLARE_GET_FIELD(t_SubFrame2, sqrtA),
            DECLARE_GET_FIELD(t_SubFrame2, toe),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrame2__methods_[] = {
            DECLARE_METHOD(t_SubFrame2, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame2, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame2, getAODO, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame2, getCrs, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame2, getCuc, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame2, getCus, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame2, getDeltaN, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame2, getE, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame2, getFitInterval, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame2, getIODE, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame2, getM0, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame2, getSqrtA, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame2, getToe, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame2)[] = {
            { Py_tp_methods, t_SubFrame2__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrame2__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame2)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame),
            NULL
          };

          DEFINE_TYPE(SubFrame2, t_SubFrame2, SubFrame2);

          void t_SubFrame2::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame2), &PY_TYPE_DEF(SubFrame2), module, "SubFrame2", 0);
          }

          void t_SubFrame2::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame2), "class_", make_descriptor(SubFrame2::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame2), "wrapfn_", make_descriptor(t_SubFrame2::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame2), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrame2_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame2::initializeClass, 1)))
              return NULL;
            return t_SubFrame2::wrap_Object(SubFrame2(((t_SubFrame2 *) arg)->object.this$));
          }
          static PyObject *t_SubFrame2_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame2::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame2_getAODO(t_SubFrame2 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getAODO());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame2_getCrs(t_SubFrame2 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getCrs());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame2_getCuc(t_SubFrame2 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getCuc());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame2_getCus(t_SubFrame2 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getCus());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame2_getDeltaN(t_SubFrame2 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getDeltaN());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame2_getE(t_SubFrame2 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getE());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame2_getFitInterval(t_SubFrame2 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getFitInterval());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame2_getIODE(t_SubFrame2 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getIODE());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame2_getM0(t_SubFrame2 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getM0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame2_getSqrtA(t_SubFrame2 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getSqrtA());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame2_getToe(t_SubFrame2 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getToe());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame2_get__aODO(t_SubFrame2 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getAODO());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame2_get__crs(t_SubFrame2 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getCrs());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame2_get__cuc(t_SubFrame2 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getCuc());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame2_get__cus(t_SubFrame2 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getCus());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame2_get__deltaN(t_SubFrame2 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getDeltaN());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame2_get__e(t_SubFrame2 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getE());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame2_get__fitInterval(t_SubFrame2 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getFitInterval());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame2_get__iODE(t_SubFrame2 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getIODE());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame2_get__m0(t_SubFrame2 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getM0());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame2_get__sqrtA(t_SubFrame2 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getSqrtA());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame2_get__toe(t_SubFrame2 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getToe());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/clock/RinexClock$Receiver.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace clock {

          ::java::lang::Class *RinexClock$Receiver::class$ = NULL;
          jmethodID *RinexClock$Receiver::mids$ = NULL;
          bool RinexClock$Receiver::live$ = false;

          jclass RinexClock$Receiver::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/clock/RinexClock$Receiver");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1a19d29192353329] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;DDD)V");
              mids$[mid_getDesignator_3cffd47377eca18a] = env->getMethodID(cls, "getDesignator", "()Ljava/lang/String;");
              mids$[mid_getReceiverIdentifier_3cffd47377eca18a] = env->getMethodID(cls, "getReceiverIdentifier", "()Ljava/lang/String;");
              mids$[mid_getX_557b8123390d8d0c] = env->getMethodID(cls, "getX", "()D");
              mids$[mid_getY_557b8123390d8d0c] = env->getMethodID(cls, "getY", "()D");
              mids$[mid_getZ_557b8123390d8d0c] = env->getMethodID(cls, "getZ", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexClock$Receiver::RinexClock$Receiver(const ::java::lang::String & a0, const ::java::lang::String & a1, jdouble a2, jdouble a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1a19d29192353329, a0.this$, a1.this$, a2, a3, a4)) {}

          ::java::lang::String RinexClock$Receiver::getDesignator() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDesignator_3cffd47377eca18a]));
          }

          ::java::lang::String RinexClock$Receiver::getReceiverIdentifier() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getReceiverIdentifier_3cffd47377eca18a]));
          }

          jdouble RinexClock$Receiver::getX() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getX_557b8123390d8d0c]);
          }

          jdouble RinexClock$Receiver::getY() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getY_557b8123390d8d0c]);
          }

          jdouble RinexClock$Receiver::getZ() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getZ_557b8123390d8d0c]);
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
      namespace rinex {
        namespace clock {
          static PyObject *t_RinexClock$Receiver_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexClock$Receiver_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RinexClock$Receiver_init_(t_RinexClock$Receiver *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexClock$Receiver_getDesignator(t_RinexClock$Receiver *self);
          static PyObject *t_RinexClock$Receiver_getReceiverIdentifier(t_RinexClock$Receiver *self);
          static PyObject *t_RinexClock$Receiver_getX(t_RinexClock$Receiver *self);
          static PyObject *t_RinexClock$Receiver_getY(t_RinexClock$Receiver *self);
          static PyObject *t_RinexClock$Receiver_getZ(t_RinexClock$Receiver *self);
          static PyObject *t_RinexClock$Receiver_get__designator(t_RinexClock$Receiver *self, void *data);
          static PyObject *t_RinexClock$Receiver_get__receiverIdentifier(t_RinexClock$Receiver *self, void *data);
          static PyObject *t_RinexClock$Receiver_get__x(t_RinexClock$Receiver *self, void *data);
          static PyObject *t_RinexClock$Receiver_get__y(t_RinexClock$Receiver *self, void *data);
          static PyObject *t_RinexClock$Receiver_get__z(t_RinexClock$Receiver *self, void *data);
          static PyGetSetDef t_RinexClock$Receiver__fields_[] = {
            DECLARE_GET_FIELD(t_RinexClock$Receiver, designator),
            DECLARE_GET_FIELD(t_RinexClock$Receiver, receiverIdentifier),
            DECLARE_GET_FIELD(t_RinexClock$Receiver, x),
            DECLARE_GET_FIELD(t_RinexClock$Receiver, y),
            DECLARE_GET_FIELD(t_RinexClock$Receiver, z),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexClock$Receiver__methods_[] = {
            DECLARE_METHOD(t_RinexClock$Receiver, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock$Receiver, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock$Receiver, getDesignator, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$Receiver, getReceiverIdentifier, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$Receiver, getX, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$Receiver, getY, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$Receiver, getZ, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexClock$Receiver)[] = {
            { Py_tp_methods, t_RinexClock$Receiver__methods_ },
            { Py_tp_init, (void *) t_RinexClock$Receiver_init_ },
            { Py_tp_getset, t_RinexClock$Receiver__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexClock$Receiver)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RinexClock$Receiver, t_RinexClock$Receiver, RinexClock$Receiver);

          void t_RinexClock$Receiver::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexClock$Receiver), &PY_TYPE_DEF(RinexClock$Receiver), module, "RinexClock$Receiver", 0);
          }

          void t_RinexClock$Receiver::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$Receiver), "class_", make_descriptor(RinexClock$Receiver::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$Receiver), "wrapfn_", make_descriptor(t_RinexClock$Receiver::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$Receiver), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexClock$Receiver_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexClock$Receiver::initializeClass, 1)))
              return NULL;
            return t_RinexClock$Receiver::wrap_Object(RinexClock$Receiver(((t_RinexClock$Receiver *) arg)->object.this$));
          }
          static PyObject *t_RinexClock$Receiver_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexClock$Receiver::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RinexClock$Receiver_init_(t_RinexClock$Receiver *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            jdouble a2;
            jdouble a3;
            jdouble a4;
            RinexClock$Receiver object((jobject) NULL);

            if (!parseArgs(args, "ssDDD", &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = RinexClock$Receiver(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RinexClock$Receiver_getDesignator(t_RinexClock$Receiver *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getDesignator());
            return j2p(result);
          }

          static PyObject *t_RinexClock$Receiver_getReceiverIdentifier(t_RinexClock$Receiver *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getReceiverIdentifier());
            return j2p(result);
          }

          static PyObject *t_RinexClock$Receiver_getX(t_RinexClock$Receiver *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getX());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock$Receiver_getY(t_RinexClock$Receiver *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getY());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock$Receiver_getZ(t_RinexClock$Receiver *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getZ());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock$Receiver_get__designator(t_RinexClock$Receiver *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getDesignator());
            return j2p(value);
          }

          static PyObject *t_RinexClock$Receiver_get__receiverIdentifier(t_RinexClock$Receiver *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getReceiverIdentifier());
            return j2p(value);
          }

          static PyObject *t_RinexClock$Receiver_get__x(t_RinexClock$Receiver *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getX());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_RinexClock$Receiver_get__y(t_RinexClock$Receiver *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getY());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_RinexClock$Receiver_get__z(t_RinexClock$Receiver *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getZ());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonParser.h"
#include "java/io/IOException.h"
#include "java/util/List.h"
#include "java/io/InputStream.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/OffsetModel.h"
#include "org/orekit/time/UTCTAIOffsetsLoader$Parser.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonParser::class$ = NULL;
      jmethodID *PythonParser::mids$ = NULL;
      bool PythonParser::live$ = false;

      jclass PythonParser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonParser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_parse_e3101d06c7a1bcab] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/List;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonParser::PythonParser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonParser::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonParser::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonParser::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
      static PyObject *t_PythonParser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonParser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonParser_init_(t_PythonParser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonParser_finalize(t_PythonParser *self);
      static PyObject *t_PythonParser_pythonExtension(t_PythonParser *self, PyObject *args);
      static jobject JNICALL t_PythonParser_parse0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonParser_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonParser_get__self(t_PythonParser *self, void *data);
      static PyGetSetDef t_PythonParser__fields_[] = {
        DECLARE_GET_FIELD(t_PythonParser, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonParser__methods_[] = {
        DECLARE_METHOD(t_PythonParser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonParser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonParser, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonParser, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonParser)[] = {
        { Py_tp_methods, t_PythonParser__methods_ },
        { Py_tp_init, (void *) t_PythonParser_init_ },
        { Py_tp_getset, t_PythonParser__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonParser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonParser, t_PythonParser, PythonParser);

      void t_PythonParser::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonParser), &PY_TYPE_DEF(PythonParser), module, "PythonParser", 1);
      }

      void t_PythonParser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParser), "class_", make_descriptor(PythonParser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParser), "wrapfn_", make_descriptor(t_PythonParser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParser), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonParser::initializeClass);
        JNINativeMethod methods[] = {
          { "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/List;", (void *) t_PythonParser_parse0 },
          { "pythonDecRef", "()V", (void *) t_PythonParser_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonParser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonParser::initializeClass, 1)))
          return NULL;
        return t_PythonParser::wrap_Object(PythonParser(((t_PythonParser *) arg)->object.this$));
      }
      static PyObject *t_PythonParser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonParser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonParser_init_(t_PythonParser *self, PyObject *args, PyObject *kwds)
      {
        PythonParser object((jobject) NULL);

        INT_CALL(object = PythonParser());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonParser_finalize(t_PythonParser *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonParser_pythonExtension(t_PythonParser *self, PyObject *args)
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

      static jobject JNICALL t_PythonParser_parse0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonParser::mids$[PythonParser::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *o0 = ::java::io::t_InputStream::wrap_Object(::java::io::InputStream(a0));
        PyObject *o1 = env->fromJString((jstring) a1, 0);
        PyObject *result = PyObject_CallMethod(obj, "parse", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("parse", result);
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

      static void JNICALL t_PythonParser_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonParser::mids$[PythonParser::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonParser::mids$[PythonParser::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonParser_get__self(t_PythonParser *self, void *data)
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
#include "org/orekit/gnss/metric/messages/common/PhaseBias.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            ::java::lang::Class *PhaseBias::class$ = NULL;
            jmethodID *PhaseBias::mids$ = NULL;
            bool PhaseBias::live$ = false;

            jclass PhaseBias::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/common/PhaseBias");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_78c445b820a7a57e] = env->getMethodID(cls, "<init>", "(IZIID)V");
                mids$[mid_getDiscontinuityCounter_412668abc8d889e9] = env->getMethodID(cls, "getDiscontinuityCounter", "()I");
                mids$[mid_getPhaseBias_557b8123390d8d0c] = env->getMethodID(cls, "getPhaseBias", "()D");
                mids$[mid_getSignalID_412668abc8d889e9] = env->getMethodID(cls, "getSignalID", "()I");
                mids$[mid_getSignalWideLaneIntegerIndicator_412668abc8d889e9] = env->getMethodID(cls, "getSignalWideLaneIntegerIndicator", "()I");
                mids$[mid_isSignalInteger_89b302893bdbe1f1] = env->getMethodID(cls, "isSignalInteger", "()Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PhaseBias::PhaseBias(jint a0, jboolean a1, jint a2, jint a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_78c445b820a7a57e, a0, a1, a2, a3, a4)) {}

            jint PhaseBias::getDiscontinuityCounter() const
            {
              return env->callIntMethod(this$, mids$[mid_getDiscontinuityCounter_412668abc8d889e9]);
            }

            jdouble PhaseBias::getPhaseBias() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getPhaseBias_557b8123390d8d0c]);
            }

            jint PhaseBias::getSignalID() const
            {
              return env->callIntMethod(this$, mids$[mid_getSignalID_412668abc8d889e9]);
            }

            jint PhaseBias::getSignalWideLaneIntegerIndicator() const
            {
              return env->callIntMethod(this$, mids$[mid_getSignalWideLaneIntegerIndicator_412668abc8d889e9]);
            }

            jboolean PhaseBias::isSignalInteger() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isSignalInteger_89b302893bdbe1f1]);
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
            static PyObject *t_PhaseBias_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PhaseBias_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PhaseBias_init_(t_PhaseBias *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PhaseBias_getDiscontinuityCounter(t_PhaseBias *self);
            static PyObject *t_PhaseBias_getPhaseBias(t_PhaseBias *self);
            static PyObject *t_PhaseBias_getSignalID(t_PhaseBias *self);
            static PyObject *t_PhaseBias_getSignalWideLaneIntegerIndicator(t_PhaseBias *self);
            static PyObject *t_PhaseBias_isSignalInteger(t_PhaseBias *self);
            static PyObject *t_PhaseBias_get__discontinuityCounter(t_PhaseBias *self, void *data);
            static PyObject *t_PhaseBias_get__phaseBias(t_PhaseBias *self, void *data);
            static PyObject *t_PhaseBias_get__signalID(t_PhaseBias *self, void *data);
            static PyObject *t_PhaseBias_get__signalInteger(t_PhaseBias *self, void *data);
            static PyObject *t_PhaseBias_get__signalWideLaneIntegerIndicator(t_PhaseBias *self, void *data);
            static PyGetSetDef t_PhaseBias__fields_[] = {
              DECLARE_GET_FIELD(t_PhaseBias, discontinuityCounter),
              DECLARE_GET_FIELD(t_PhaseBias, phaseBias),
              DECLARE_GET_FIELD(t_PhaseBias, signalID),
              DECLARE_GET_FIELD(t_PhaseBias, signalInteger),
              DECLARE_GET_FIELD(t_PhaseBias, signalWideLaneIntegerIndicator),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PhaseBias__methods_[] = {
              DECLARE_METHOD(t_PhaseBias, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PhaseBias, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PhaseBias, getDiscontinuityCounter, METH_NOARGS),
              DECLARE_METHOD(t_PhaseBias, getPhaseBias, METH_NOARGS),
              DECLARE_METHOD(t_PhaseBias, getSignalID, METH_NOARGS),
              DECLARE_METHOD(t_PhaseBias, getSignalWideLaneIntegerIndicator, METH_NOARGS),
              DECLARE_METHOD(t_PhaseBias, isSignalInteger, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PhaseBias)[] = {
              { Py_tp_methods, t_PhaseBias__methods_ },
              { Py_tp_init, (void *) t_PhaseBias_init_ },
              { Py_tp_getset, t_PhaseBias__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PhaseBias)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PhaseBias, t_PhaseBias, PhaseBias);

            void t_PhaseBias::install(PyObject *module)
            {
              installType(&PY_TYPE(PhaseBias), &PY_TYPE_DEF(PhaseBias), module, "PhaseBias", 0);
            }

            void t_PhaseBias::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseBias), "class_", make_descriptor(PhaseBias::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseBias), "wrapfn_", make_descriptor(t_PhaseBias::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseBias), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_PhaseBias_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PhaseBias::initializeClass, 1)))
                return NULL;
              return t_PhaseBias::wrap_Object(PhaseBias(((t_PhaseBias *) arg)->object.this$));
            }
            static PyObject *t_PhaseBias_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PhaseBias::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PhaseBias_init_(t_PhaseBias *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              jboolean a1;
              jint a2;
              jint a3;
              jdouble a4;
              PhaseBias object((jobject) NULL);

              if (!parseArgs(args, "IZIID", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = PhaseBias(a0, a1, a2, a3, a4));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_PhaseBias_getDiscontinuityCounter(t_PhaseBias *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getDiscontinuityCounter());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_PhaseBias_getPhaseBias(t_PhaseBias *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getPhaseBias());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_PhaseBias_getSignalID(t_PhaseBias *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSignalID());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_PhaseBias_getSignalWideLaneIntegerIndicator(t_PhaseBias *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSignalWideLaneIntegerIndicator());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_PhaseBias_isSignalInteger(t_PhaseBias *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.isSignalInteger());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_PhaseBias_get__discontinuityCounter(t_PhaseBias *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getDiscontinuityCounter());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_PhaseBias_get__phaseBias(t_PhaseBias *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getPhaseBias());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_PhaseBias_get__signalID(t_PhaseBias *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSignalID());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_PhaseBias_get__signalInteger(t_PhaseBias *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.isSignalInteger());
              Py_RETURN_BOOL(value);
            }

            static PyObject *t_PhaseBias_get__signalWideLaneIntegerIndicator(t_PhaseBias *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSignalWideLaneIntegerIndicator());
              return PyLong_FromLong((long) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/summary/Sum.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/descriptive/summary/Sum.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/WeightedEvaluation.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace summary {

          ::java::lang::Class *Sum::class$ = NULL;
          jmethodID *Sum::mids$ = NULL;
          bool Sum::live$ = false;

          jclass Sum::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/summary/Sum");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_aggregate_61be0f1aec2d16e4] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/summary/Sum;)V");
              mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_b2be7f5cb61a7de1] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/summary/Sum;");
              mids$[mid_evaluate_9eeeb1ae977f525d] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_evaluate_579f1672894f464a] = env->getMethodID(cls, "evaluate", "([D[DII)D");
              mids$[mid_getN_9e26256fb0d384a2] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_557b8123390d8d0c] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_10f281d777284cea] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Sum::Sum() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void Sum::aggregate(const Sum & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_61be0f1aec2d16e4], a0.this$);
          }

          void Sum::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
          }

          Sum Sum::copy() const
          {
            return Sum(env->callObjectMethod(this$, mids$[mid_copy_b2be7f5cb61a7de1]));
          }

          jdouble Sum::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_9eeeb1ae977f525d], a0.this$, a1, a2);
          }

          jdouble Sum::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jint a2, jint a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_579f1672894f464a], a0.this$, a1.this$, a2, a3);
          }

          jlong Sum::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_9e26256fb0d384a2]);
          }

          jdouble Sum::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_557b8123390d8d0c]);
          }

          void Sum::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_10f281d777284cea], a0);
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
    namespace stat {
      namespace descriptive {
        namespace summary {
          static PyObject *t_Sum_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Sum_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Sum_init_(t_Sum *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Sum_aggregate(t_Sum *self, PyObject *arg);
          static PyObject *t_Sum_clear(t_Sum *self, PyObject *args);
          static PyObject *t_Sum_copy(t_Sum *self, PyObject *args);
          static PyObject *t_Sum_evaluate(t_Sum *self, PyObject *args);
          static PyObject *t_Sum_getN(t_Sum *self, PyObject *args);
          static PyObject *t_Sum_getResult(t_Sum *self, PyObject *args);
          static PyObject *t_Sum_increment(t_Sum *self, PyObject *args);
          static PyObject *t_Sum_get__n(t_Sum *self, void *data);
          static PyObject *t_Sum_get__result(t_Sum *self, void *data);
          static PyGetSetDef t_Sum__fields_[] = {
            DECLARE_GET_FIELD(t_Sum, n),
            DECLARE_GET_FIELD(t_Sum, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Sum__methods_[] = {
            DECLARE_METHOD(t_Sum, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Sum, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Sum, aggregate, METH_O),
            DECLARE_METHOD(t_Sum, clear, METH_VARARGS),
            DECLARE_METHOD(t_Sum, copy, METH_VARARGS),
            DECLARE_METHOD(t_Sum, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Sum, getN, METH_VARARGS),
            DECLARE_METHOD(t_Sum, getResult, METH_VARARGS),
            DECLARE_METHOD(t_Sum, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Sum)[] = {
            { Py_tp_methods, t_Sum__methods_ },
            { Py_tp_init, (void *) t_Sum_init_ },
            { Py_tp_getset, t_Sum__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Sum)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(Sum, t_Sum, Sum);

          void t_Sum::install(PyObject *module)
          {
            installType(&PY_TYPE(Sum), &PY_TYPE_DEF(Sum), module, "Sum", 0);
          }

          void t_Sum::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sum), "class_", make_descriptor(Sum::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sum), "wrapfn_", make_descriptor(t_Sum::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sum), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Sum_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Sum::initializeClass, 1)))
              return NULL;
            return t_Sum::wrap_Object(Sum(((t_Sum *) arg)->object.this$));
          }
          static PyObject *t_Sum_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Sum::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Sum_init_(t_Sum *self, PyObject *args, PyObject *kwds)
          {
            Sum object((jobject) NULL);

            INT_CALL(object = Sum());
            self->object = object;

            return 0;
          }

          static PyObject *t_Sum_aggregate(t_Sum *self, PyObject *arg)
          {
            Sum a0((jobject) NULL);

            if (!parseArg(arg, "k", Sum::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_Sum_clear(t_Sum *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Sum), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_Sum_copy(t_Sum *self, PyObject *args)
          {
            Sum result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_Sum::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Sum), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_Sum_evaluate(t_Sum *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                JArray< jdouble > a0((jobject) NULL);
                jint a1;
                jint a2;
                jdouble result;

                if (!parseArgs(args, "[DII", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 4:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jint a2;
                jint a3;
                jdouble result;

                if (!parseArgs(args, "[D[DII", &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(Sum), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_Sum_getN(t_Sum *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(Sum), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_Sum_getResult(t_Sum *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(Sum), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_Sum_increment(t_Sum *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Sum), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_Sum_get__n(t_Sum *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_Sum_get__result(t_Sum *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getResult());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/AttitudesSequence.h"
#include "org/orekit/propagation/FieldPropagator.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/attitudes/AttitudesSequence$SwitchHandler.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *AttitudesSequence::class$ = NULL;
      jmethodID *AttitudesSequence::mids$ = NULL;
      bool AttitudesSequence::live$ = false;

      jclass AttitudesSequence::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/AttitudesSequence");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_addSwitchingCondition_2882efe71e6f5a14] = env->getMethodID(cls, "addSwitchingCondition", "(Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/propagation/events/EventDetector;ZZDLorg/orekit/utils/AngularDerivativesFilter;Lorg/orekit/attitudes/AttitudesSequence$SwitchHandler;)V");
          mids$[mid_getAttitude_77e3383de01f3e48] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_1306ac39e1d2de3f] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitudeRotation_5c74bfcf2d42825a] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getAttitudeRotation_85bb0a19efdadc1d] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_registerSwitchEvents_52713bb4a21e1f43] = env->getMethodID(cls, "registerSwitchEvents", "(Lorg/orekit/propagation/Propagator;)V");
          mids$[mid_registerSwitchEvents_341b878527f5b605] = env->getMethodID(cls, "registerSwitchEvents", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/FieldPropagator;)V");
          mids$[mid_resetActiveProvider_8fa6c0c067ead7b2] = env->getMethodID(cls, "resetActiveProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AttitudesSequence::AttitudesSequence() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void AttitudesSequence::addSwitchingCondition(const ::org::orekit::attitudes::AttitudeProvider & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::propagation::events::EventDetector & a2, jboolean a3, jboolean a4, jdouble a5, const ::org::orekit::utils::AngularDerivativesFilter & a6, const ::org::orekit::attitudes::AttitudesSequence$SwitchHandler & a7) const
      {
        env->callVoidMethod(this$, mids$[mid_addSwitchingCondition_2882efe71e6f5a14], a0.this$, a1.this$, a2.this$, a3, a4, a5, a6.this$, a7.this$);
      }

      ::org::orekit::attitudes::FieldAttitude AttitudesSequence::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_77e3383de01f3e48], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude AttitudesSequence::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_1306ac39e1d2de3f], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation AttitudesSequence::getAttitudeRotation(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_5c74bfcf2d42825a], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation AttitudesSequence::getAttitudeRotation(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_85bb0a19efdadc1d], a0.this$, a1.this$, a2.this$));
      }

      void AttitudesSequence::registerSwitchEvents(const ::org::orekit::propagation::Propagator & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_registerSwitchEvents_52713bb4a21e1f43], a0.this$);
      }

      void AttitudesSequence::registerSwitchEvents(const ::org::hipparchus::Field & a0, const ::org::orekit::propagation::FieldPropagator & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_registerSwitchEvents_341b878527f5b605], a0.this$, a1.this$);
      }

      void AttitudesSequence::resetActiveProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_resetActiveProvider_8fa6c0c067ead7b2], a0.this$);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      static PyObject *t_AttitudesSequence_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudesSequence_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AttitudesSequence_init_(t_AttitudesSequence *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AttitudesSequence_addSwitchingCondition(t_AttitudesSequence *self, PyObject *args);
      static PyObject *t_AttitudesSequence_getAttitude(t_AttitudesSequence *self, PyObject *args);
      static PyObject *t_AttitudesSequence_getAttitudeRotation(t_AttitudesSequence *self, PyObject *args);
      static PyObject *t_AttitudesSequence_registerSwitchEvents(t_AttitudesSequence *self, PyObject *args);
      static PyObject *t_AttitudesSequence_resetActiveProvider(t_AttitudesSequence *self, PyObject *arg);

      static PyMethodDef t_AttitudesSequence__methods_[] = {
        DECLARE_METHOD(t_AttitudesSequence, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudesSequence, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudesSequence, addSwitchingCondition, METH_VARARGS),
        DECLARE_METHOD(t_AttitudesSequence, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_AttitudesSequence, getAttitudeRotation, METH_VARARGS),
        DECLARE_METHOD(t_AttitudesSequence, registerSwitchEvents, METH_VARARGS),
        DECLARE_METHOD(t_AttitudesSequence, resetActiveProvider, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AttitudesSequence)[] = {
        { Py_tp_methods, t_AttitudesSequence__methods_ },
        { Py_tp_init, (void *) t_AttitudesSequence_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AttitudesSequence)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AttitudesSequence, t_AttitudesSequence, AttitudesSequence);

      void t_AttitudesSequence::install(PyObject *module)
      {
        installType(&PY_TYPE(AttitudesSequence), &PY_TYPE_DEF(AttitudesSequence), module, "AttitudesSequence", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudesSequence), "SwitchHandler", make_descriptor(&PY_TYPE_DEF(AttitudesSequence$SwitchHandler)));
      }

      void t_AttitudesSequence::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudesSequence), "class_", make_descriptor(AttitudesSequence::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudesSequence), "wrapfn_", make_descriptor(t_AttitudesSequence::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudesSequence), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AttitudesSequence_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AttitudesSequence::initializeClass, 1)))
          return NULL;
        return t_AttitudesSequence::wrap_Object(AttitudesSequence(((t_AttitudesSequence *) arg)->object.this$));
      }
      static PyObject *t_AttitudesSequence_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AttitudesSequence::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AttitudesSequence_init_(t_AttitudesSequence *self, PyObject *args, PyObject *kwds)
      {
        AttitudesSequence object((jobject) NULL);

        INT_CALL(object = AttitudesSequence());
        self->object = object;

        return 0;
      }

      static PyObject *t_AttitudesSequence_addSwitchingCondition(t_AttitudesSequence *self, PyObject *args)
      {
        ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
        ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
        ::org::orekit::propagation::events::EventDetector a2((jobject) NULL);
        jboolean a3;
        jboolean a4;
        jdouble a5;
        ::org::orekit::utils::AngularDerivativesFilter a6((jobject) NULL);
        PyTypeObject **p6;
        ::org::orekit::attitudes::AttitudesSequence$SwitchHandler a7((jobject) NULL);

        if (!parseArgs(args, "kkkZZDKk", ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::propagation::events::EventDetector::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, ::org::orekit::attitudes::AttitudesSequence$SwitchHandler::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_, &a7))
        {
          OBJ_CALL(self->object.addSwitchingCondition(a0, a1, a2, a3, a4, a5, a6, a7));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addSwitchingCondition", args);
        return NULL;
      }

      static PyObject *t_AttitudesSequence_getAttitude(t_AttitudesSequence *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
        return NULL;
      }

      static PyObject *t_AttitudesSequence_getAttitudeRotation(t_AttitudesSequence *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitudeRotation(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitudeRotation(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitudeRotation", args);
        return NULL;
      }

      static PyObject *t_AttitudesSequence_registerSwitchEvents(t_AttitudesSequence *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::propagation::Propagator a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::Propagator::initializeClass, &a0))
            {
              OBJ_CALL(self->object.registerSwitchEvents(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::FieldPropagator a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::orekit::propagation::FieldPropagator::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldPropagator::parameters_))
            {
              OBJ_CALL(self->object.registerSwitchEvents(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "registerSwitchEvents", args);
        return NULL;
      }

      static PyObject *t_AttitudesSequence_resetActiveProvider(t_AttitudesSequence *self, PyObject *arg)
      {
        ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
        {
          OBJ_CALL(self->object.resetActiveProvider(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "resetActiveProvider", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/ComparableMeasurement.h"
#include "org/orekit/estimation/measurements/ComparableMeasurement.h"
#include "java/lang/Class.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *ComparableMeasurement::class$ = NULL;
        jmethodID *ComparableMeasurement::mids$ = NULL;
        bool ComparableMeasurement::live$ = false;

        jclass ComparableMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/ComparableMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_compareTo_0a393ed00cc2801f] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/estimation/measurements/ComparableMeasurement;)I");
            mids$[mid_getObservedValue_a53a7513ecedada2] = env->getMethodID(cls, "getObservedValue", "()[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jint ComparableMeasurement::compareTo(const ComparableMeasurement & a0) const
        {
          return env->callIntMethod(this$, mids$[mid_compareTo_0a393ed00cc2801f], a0.this$);
        }

        JArray< jdouble > ComparableMeasurement::getObservedValue() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getObservedValue_a53a7513ecedada2]));
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
        static PyObject *t_ComparableMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ComparableMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ComparableMeasurement_compareTo(t_ComparableMeasurement *self, PyObject *arg);
        static PyObject *t_ComparableMeasurement_getObservedValue(t_ComparableMeasurement *self);
        static PyObject *t_ComparableMeasurement_get__observedValue(t_ComparableMeasurement *self, void *data);
        static PyGetSetDef t_ComparableMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_ComparableMeasurement, observedValue),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ComparableMeasurement__methods_[] = {
          DECLARE_METHOD(t_ComparableMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ComparableMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ComparableMeasurement, compareTo, METH_O),
          DECLARE_METHOD(t_ComparableMeasurement, getObservedValue, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ComparableMeasurement)[] = {
          { Py_tp_methods, t_ComparableMeasurement__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_ComparableMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ComparableMeasurement)[] = {
          &PY_TYPE_DEF(::org::orekit::time::TimeStamped),
          NULL
        };

        DEFINE_TYPE(ComparableMeasurement, t_ComparableMeasurement, ComparableMeasurement);

        void t_ComparableMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(ComparableMeasurement), &PY_TYPE_DEF(ComparableMeasurement), module, "ComparableMeasurement", 0);
        }

        void t_ComparableMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ComparableMeasurement), "class_", make_descriptor(ComparableMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ComparableMeasurement), "wrapfn_", make_descriptor(t_ComparableMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ComparableMeasurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ComparableMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ComparableMeasurement::initializeClass, 1)))
            return NULL;
          return t_ComparableMeasurement::wrap_Object(ComparableMeasurement(((t_ComparableMeasurement *) arg)->object.this$));
        }
        static PyObject *t_ComparableMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ComparableMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ComparableMeasurement_compareTo(t_ComparableMeasurement *self, PyObject *arg)
        {
          ComparableMeasurement a0((jobject) NULL);
          jint result;

          if (!parseArg(arg, "k", ComparableMeasurement::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.compareTo(a0));
            return PyLong_FromLong((long) result);
          }

          PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
          return NULL;
        }

        static PyObject *t_ComparableMeasurement_getObservedValue(t_ComparableMeasurement *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getObservedValue());
          return result.wrap();
        }

        static PyObject *t_ComparableMeasurement_get__observedValue(t_ComparableMeasurement *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getObservedValue());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/PythonFieldPropagator.h"
#include "org/orekit/propagation/FieldPropagator.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "java/util/Collection.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/sampling/FieldStepHandlerMultiplexer.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/FieldEphemerisGenerator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/FieldAdditionalStateProvider.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonFieldPropagator::class$ = NULL;
      jmethodID *PythonFieldPropagator::mids$ = NULL;
      bool PythonFieldPropagator::live$ = false;

      jclass PythonFieldPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonFieldPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_addAdditionalStateProvider_1dbe9cc03f00d454] = env->getMethodID(cls, "addAdditionalStateProvider", "(Lorg/orekit/propagation/FieldAdditionalStateProvider;)V");
          mids$[mid_addEventDetector_2ffeff0ffaf1deef] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/FieldEventDetector;)V");
          mids$[mid_clearEventsDetectors_0640e6acf969ed28] = env->getMethodID(cls, "clearEventsDetectors", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAdditionalStateProviders_0d9551367f7ecdef] = env->getMethodID(cls, "getAdditionalStateProviders", "()Ljava/util/List;");
          mids$[mid_getAttitudeProvider_6df6b78ab9377151] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getEphemerisGenerator_07866493eb3b3f17] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/FieldEphemerisGenerator;");
          mids$[mid_getEventsDetectors_12ee61573a18f417] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
          mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getInitialState_381b3e011cde018d] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_getManagedAdditionalStates_5d7d8c500345981d] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
          mids$[mid_getMultiplexer_da8c64c8d63a3f9a] = env->getMethodID(cls, "getMultiplexer", "()Lorg/orekit/propagation/sampling/FieldStepHandlerMultiplexer;");
          mids$[mid_getPVCoordinates_4ac52e75113a03db] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_isAdditionalStateManaged_fd2162b8a05a22fe] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
          mids$[mid_propagate_5324cbf9e5ce58fe] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_propagate_78f4b3ee8066e6b6] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_resetInitialState_b66c84a5711243d5] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
          mids$[mid_setAttitudeProvider_8fa6c0c067ead7b2] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldPropagator::PythonFieldPropagator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonFieldPropagator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonFieldPropagator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonFieldPropagator::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
      static PyObject *t_PythonFieldPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldPropagator_of_(t_PythonFieldPropagator *self, PyObject *args);
      static int t_PythonFieldPropagator_init_(t_PythonFieldPropagator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldPropagator_finalize(t_PythonFieldPropagator *self);
      static PyObject *t_PythonFieldPropagator_pythonExtension(t_PythonFieldPropagator *self, PyObject *args);
      static void JNICALL t_PythonFieldPropagator_addAdditionalStateProvider0(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonFieldPropagator_addEventDetector1(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonFieldPropagator_clearEventsDetectors2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldPropagator_getAdditionalStateProviders3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldPropagator_getAttitudeProvider4(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldPropagator_getEphemerisGenerator5(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldPropagator_getEventsDetectors6(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldPropagator_getFrame7(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldPropagator_getInitialState8(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldPropagator_getManagedAdditionalStates9(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldPropagator_getMultiplexer10(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldPropagator_getPVCoordinates11(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jboolean JNICALL t_PythonFieldPropagator_isAdditionalStateManaged12(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonFieldPropagator_propagate13(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonFieldPropagator_propagate14(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonFieldPropagator_pythonDecRef15(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonFieldPropagator_resetInitialState16(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonFieldPropagator_setAttitudeProvider17(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonFieldPropagator_get__self(t_PythonFieldPropagator *self, void *data);
      static PyObject *t_PythonFieldPropagator_get__parameters_(t_PythonFieldPropagator *self, void *data);
      static PyGetSetDef t_PythonFieldPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldPropagator, self),
        DECLARE_GET_FIELD(t_PythonFieldPropagator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldPropagator__methods_[] = {
        DECLARE_METHOD(t_PythonFieldPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldPropagator, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldPropagator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldPropagator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldPropagator)[] = {
        { Py_tp_methods, t_PythonFieldPropagator__methods_ },
        { Py_tp_init, (void *) t_PythonFieldPropagator_init_ },
        { Py_tp_getset, t_PythonFieldPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldPropagator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldPropagator, t_PythonFieldPropagator, PythonFieldPropagator);
      PyObject *t_PythonFieldPropagator::wrap_Object(const PythonFieldPropagator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldPropagator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldPropagator *self = (t_PythonFieldPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonFieldPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldPropagator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldPropagator *self = (t_PythonFieldPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonFieldPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldPropagator), &PY_TYPE_DEF(PythonFieldPropagator), module, "PythonFieldPropagator", 1);
      }

      void t_PythonFieldPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldPropagator), "class_", make_descriptor(PythonFieldPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldPropagator), "wrapfn_", make_descriptor(t_PythonFieldPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldPropagator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldPropagator::initializeClass);
        JNINativeMethod methods[] = {
          { "addAdditionalStateProvider", "(Lorg/orekit/propagation/FieldAdditionalStateProvider;)V", (void *) t_PythonFieldPropagator_addAdditionalStateProvider0 },
          { "addEventDetector", "(Lorg/orekit/propagation/events/FieldEventDetector;)V", (void *) t_PythonFieldPropagator_addEventDetector1 },
          { "clearEventsDetectors", "()V", (void *) t_PythonFieldPropagator_clearEventsDetectors2 },
          { "getAdditionalStateProviders", "()Ljava/util/List;", (void *) t_PythonFieldPropagator_getAdditionalStateProviders3 },
          { "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;", (void *) t_PythonFieldPropagator_getAttitudeProvider4 },
          { "getEphemerisGenerator", "()Lorg/orekit/propagation/FieldEphemerisGenerator;", (void *) t_PythonFieldPropagator_getEphemerisGenerator5 },
          { "getEventsDetectors", "()Ljava/util/Collection;", (void *) t_PythonFieldPropagator_getEventsDetectors6 },
          { "getFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonFieldPropagator_getFrame7 },
          { "getInitialState", "()Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldPropagator_getInitialState8 },
          { "getManagedAdditionalStates", "()[Ljava/lang/String;", (void *) t_PythonFieldPropagator_getManagedAdditionalStates9 },
          { "getMultiplexer", "()Lorg/orekit/propagation/sampling/FieldStepHandlerMultiplexer;", (void *) t_PythonFieldPropagator_getMultiplexer10 },
          { "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;", (void *) t_PythonFieldPropagator_getPVCoordinates11 },
          { "isAdditionalStateManaged", "(Ljava/lang/String;)Z", (void *) t_PythonFieldPropagator_isAdditionalStateManaged12 },
          { "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldPropagator_propagate13 },
          { "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldPropagator_propagate14 },
          { "pythonDecRef", "()V", (void *) t_PythonFieldPropagator_pythonDecRef15 },
          { "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V", (void *) t_PythonFieldPropagator_resetInitialState16 },
          { "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V", (void *) t_PythonFieldPropagator_setAttitudeProvider17 },
        };
        env->registerNatives(cls, methods, 18);
      }

      static PyObject *t_PythonFieldPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldPropagator::initializeClass, 1)))
          return NULL;
        return t_PythonFieldPropagator::wrap_Object(PythonFieldPropagator(((t_PythonFieldPropagator *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldPropagator_of_(t_PythonFieldPropagator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldPropagator_init_(t_PythonFieldPropagator *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldPropagator object((jobject) NULL);

        INT_CALL(object = PythonFieldPropagator());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldPropagator_finalize(t_PythonFieldPropagator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldPropagator_pythonExtension(t_PythonFieldPropagator *self, PyObject *args)
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

      static void JNICALL t_PythonFieldPropagator_addAdditionalStateProvider0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_FieldAdditionalStateProvider::wrap_Object(::org::orekit::propagation::FieldAdditionalStateProvider(a0));
        PyObject *result = PyObject_CallMethod(obj, "addAdditionalStateProvider", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonFieldPropagator_addEventDetector1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(::org::orekit::propagation::events::FieldEventDetector(a0));
        PyObject *result = PyObject_CallMethod(obj, "addEventDetector", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonFieldPropagator_clearEventsDetectors2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *result = PyObject_CallMethod(obj, "clearEventsDetectors", "");
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jobject JNICALL t_PythonFieldPropagator_getAdditionalStateProviders3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getAdditionalStateProviders", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("getAdditionalStateProviders", result);
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

      static jobject JNICALL t_PythonFieldPropagator_getAttitudeProvider4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getAttitudeProvider", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &value))
        {
          throwTypeError("getAttitudeProvider", result);
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

      static jobject JNICALL t_PythonFieldPropagator_getEphemerisGenerator5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::FieldEphemerisGenerator value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEphemerisGenerator", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::FieldEphemerisGenerator::initializeClass, &value))
        {
          throwTypeError("getEphemerisGenerator", result);
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

      static jobject JNICALL t_PythonFieldPropagator_getEventsDetectors6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::Collection value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEventsDetectors", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::Collection::initializeClass, &value))
        {
          throwTypeError("getEventsDetectors", result);
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

      static jobject JNICALL t_PythonFieldPropagator_getFrame7(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frame value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getFrame", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
        {
          throwTypeError("getFrame", result);
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

      static jobject JNICALL t_PythonFieldPropagator_getInitialState8(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getInitialState", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
        {
          throwTypeError("getInitialState", result);
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

      static jobject JNICALL t_PythonFieldPropagator_getManagedAdditionalStates9(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< ::java::lang::String > value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getManagedAdditionalStates", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[s", &value))
        {
          throwTypeError("getManagedAdditionalStates", result);
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

      static jobject JNICALL t_PythonFieldPropagator_getMultiplexer10(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMultiplexer", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer::initializeClass, &value))
        {
          throwTypeError("getMultiplexer", result);
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

      static jobject JNICALL t_PythonFieldPropagator_getPVCoordinates11(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedFieldPVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
        PyObject *result = PyObject_CallMethod(obj, "getPVCoordinates", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &value))
        {
          throwTypeError("getPVCoordinates", result);
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

      static jboolean JNICALL t_PythonFieldPropagator_isAdditionalStateManaged12(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jboolean value;
        PyObject *o0 = env->fromJString((jstring) a0, 0);
        PyObject *result = PyObject_CallMethod(obj, "isAdditionalStateManaged", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "Z", &value))
        {
          throwTypeError("isAdditionalStateManaged", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jboolean) 0;
      }

      static jobject JNICALL t_PythonFieldPropagator_propagate13(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "propagate", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
        {
          throwTypeError("propagate", result);
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

      static jobject JNICALL t_PythonFieldPropagator_propagate14(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
        PyObject *result = PyObject_CallMethod(obj, "propagate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
        {
          throwTypeError("propagate", result);
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

      static void JNICALL t_PythonFieldPropagator_pythonDecRef15(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static void JNICALL t_PythonFieldPropagator_resetInitialState16(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "resetInitialState", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonFieldPropagator_setAttitudeProvider17(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(::org::orekit::attitudes::AttitudeProvider(a0));
        PyObject *result = PyObject_CallMethod(obj, "setAttitudeProvider", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static PyObject *t_PythonFieldPropagator_get__self(t_PythonFieldPropagator *self, void *data)
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
      static PyObject *t_PythonFieldPropagator_get__parameters_(t_PythonFieldPropagator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/BrouwerLyddanePropagatorBuilder.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"
#include "java/util/List.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/propagation/analytical/BrouwerLyddanePropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/conversion/BrouwerLyddanePropagatorBuilder.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *BrouwerLyddanePropagatorBuilder::class$ = NULL;
        jmethodID *BrouwerLyddanePropagatorBuilder::mids$ = NULL;
        bool BrouwerLyddanePropagatorBuilder::live$ = false;

        jclass BrouwerLyddanePropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/BrouwerLyddanePropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_96fa06557882028a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/orbits/PositionAngleType;DD)V");
            mids$[mid_init$_f78463a528996b20] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/orbits/PositionAngleType;DLorg/orekit/attitudes/AttitudeProvider;D)V");
            mids$[mid_init$_820cf347395465d6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;DDLorg/orekit/forces/gravity/potential/TideSystem;DDDDLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;DD)V");
            mids$[mid_buildLeastSquaresModel_4fca41eef9d750a6] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;");
            mids$[mid_buildPropagator_de4cda068ed20390] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/analytical/BrouwerLyddanePropagator;");
            mids$[mid_copy_d362e5271befd797] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/BrouwerLyddanePropagatorBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BrouwerLyddanePropagatorBuilder::BrouwerLyddanePropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::orbits::PositionAngleType & a2, jdouble a3, jdouble a4) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_96fa06557882028a, a0.this$, a1.this$, a2.this$, a3, a4)) {}

        BrouwerLyddanePropagatorBuilder::BrouwerLyddanePropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::orbits::PositionAngleType & a2, jdouble a3, const ::org::orekit::attitudes::AttitudeProvider & a4, jdouble a5) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_f78463a528996b20, a0.this$, a1.this$, a2.this$, a3, a4.this$, a5)) {}

        BrouwerLyddanePropagatorBuilder::BrouwerLyddanePropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, jdouble a1, jdouble a2, const ::org::orekit::forces::gravity::potential::TideSystem & a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, const ::org::orekit::orbits::OrbitType & a8, const ::org::orekit::orbits::PositionAngleType & a9, jdouble a10, jdouble a11) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_820cf347395465d6, a0.this$, a1, a2, a3.this$, a4, a5, a6, a7, a8.this$, a9.this$, a10, a11)) {}

        ::org::orekit::estimation::leastsquares::AbstractBatchLSModel BrouwerLyddanePropagatorBuilder::buildLeastSquaresModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) const
        {
          return ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(env->callObjectMethod(this$, mids$[mid_buildLeastSquaresModel_4fca41eef9d750a6], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::analytical::BrouwerLyddanePropagator BrouwerLyddanePropagatorBuilder::buildPropagator(const JArray< jdouble > & a0) const
        {
          return ::org::orekit::propagation::analytical::BrouwerLyddanePropagator(env->callObjectMethod(this$, mids$[mid_buildPropagator_de4cda068ed20390], a0.this$));
        }

        BrouwerLyddanePropagatorBuilder BrouwerLyddanePropagatorBuilder::copy() const
        {
          return BrouwerLyddanePropagatorBuilder(env->callObjectMethod(this$, mids$[mid_copy_d362e5271befd797]));
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
        static PyObject *t_BrouwerLyddanePropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BrouwerLyddanePropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BrouwerLyddanePropagatorBuilder_init_(t_BrouwerLyddanePropagatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BrouwerLyddanePropagatorBuilder_buildLeastSquaresModel(t_BrouwerLyddanePropagatorBuilder *self, PyObject *args);
        static PyObject *t_BrouwerLyddanePropagatorBuilder_buildPropagator(t_BrouwerLyddanePropagatorBuilder *self, PyObject *args);
        static PyObject *t_BrouwerLyddanePropagatorBuilder_copy(t_BrouwerLyddanePropagatorBuilder *self, PyObject *args);

        static PyMethodDef t_BrouwerLyddanePropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_BrouwerLyddanePropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BrouwerLyddanePropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BrouwerLyddanePropagatorBuilder, buildLeastSquaresModel, METH_VARARGS),
          DECLARE_METHOD(t_BrouwerLyddanePropagatorBuilder, buildPropagator, METH_VARARGS),
          DECLARE_METHOD(t_BrouwerLyddanePropagatorBuilder, copy, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BrouwerLyddanePropagatorBuilder)[] = {
          { Py_tp_methods, t_BrouwerLyddanePropagatorBuilder__methods_ },
          { Py_tp_init, (void *) t_BrouwerLyddanePropagatorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BrouwerLyddanePropagatorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorBuilder),
          NULL
        };

        DEFINE_TYPE(BrouwerLyddanePropagatorBuilder, t_BrouwerLyddanePropagatorBuilder, BrouwerLyddanePropagatorBuilder);

        void t_BrouwerLyddanePropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(BrouwerLyddanePropagatorBuilder), &PY_TYPE_DEF(BrouwerLyddanePropagatorBuilder), module, "BrouwerLyddanePropagatorBuilder", 0);
        }

        void t_BrouwerLyddanePropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrouwerLyddanePropagatorBuilder), "class_", make_descriptor(BrouwerLyddanePropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrouwerLyddanePropagatorBuilder), "wrapfn_", make_descriptor(t_BrouwerLyddanePropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrouwerLyddanePropagatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BrouwerLyddanePropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BrouwerLyddanePropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_BrouwerLyddanePropagatorBuilder::wrap_Object(BrouwerLyddanePropagatorBuilder(((t_BrouwerLyddanePropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_BrouwerLyddanePropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BrouwerLyddanePropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BrouwerLyddanePropagatorBuilder_init_(t_BrouwerLyddanePropagatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              jdouble a4;
              BrouwerLyddanePropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kkKDD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a3, &a4))
              {
                INT_CALL(object = BrouwerLyddanePropagatorBuilder(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            goto err;
           case 6:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
              jdouble a5;
              BrouwerLyddanePropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kkKDkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a3, &a4, &a5))
              {
                INT_CALL(object = BrouwerLyddanePropagatorBuilder(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            goto err;
           case 12:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              ::org::orekit::forces::gravity::potential::TideSystem a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              ::org::orekit::orbits::OrbitType a8((jobject) NULL);
              PyTypeObject **p8;
              ::org::orekit::orbits::PositionAngleType a9((jobject) NULL);
              PyTypeObject **p9;
              jdouble a10;
              jdouble a11;
              BrouwerLyddanePropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kDDKDDDDKKDD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::TideSystem::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::forces::gravity::potential::t_TideSystem::parameters_, &a4, &a5, &a6, &a7, &a8, &p8, ::org::orekit::orbits::t_OrbitType::parameters_, &a9, &p9, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a10, &a11))
              {
                INT_CALL(object = BrouwerLyddanePropagatorBuilder(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11));
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

        static PyObject *t_BrouwerLyddanePropagatorBuilder_buildLeastSquaresModel(t_BrouwerLyddanePropagatorBuilder *self, PyObject *args)
        {
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::leastsquares::ModelObserver a3((jobject) NULL);
          ::org::orekit::estimation::leastsquares::AbstractBatchLSModel result((jobject) NULL);

          if (!parseArgs(args, "[kKkk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::leastsquares::ModelObserver::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
          {
            OBJ_CALL(result = self->object.buildLeastSquaresModel(a0, a1, a2, a3));
            return ::org::orekit::estimation::leastsquares::t_AbstractBatchLSModel::wrap_Object(result);
          }

          return callSuper(PY_TYPE(BrouwerLyddanePropagatorBuilder), (PyObject *) self, "buildLeastSquaresModel", args, 2);
        }

        static PyObject *t_BrouwerLyddanePropagatorBuilder_buildPropagator(t_BrouwerLyddanePropagatorBuilder *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          ::org::orekit::propagation::analytical::BrouwerLyddanePropagator result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.buildPropagator(a0));
            return ::org::orekit::propagation::analytical::t_BrouwerLyddanePropagator::wrap_Object(result);
          }

          return callSuper(PY_TYPE(BrouwerLyddanePropagatorBuilder), (PyObject *) self, "buildPropagator", args, 2);
        }

        static PyObject *t_BrouwerLyddanePropagatorBuilder_copy(t_BrouwerLyddanePropagatorBuilder *self, PyObject *args)
        {
          BrouwerLyddanePropagatorBuilder result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.copy());
            return t_BrouwerLyddanePropagatorBuilder::wrap_Object(result);
          }

          return callSuper(PY_TYPE(BrouwerLyddanePropagatorBuilder), (PyObject *) self, "copy", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/rank/Percentile$EstimationType.h"
#include "org/hipparchus/util/KthSelector.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/rank/Percentile$EstimationType.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace rank {

          ::java::lang::Class *Percentile$EstimationType::class$ = NULL;
          jmethodID *Percentile$EstimationType::mids$ = NULL;
          bool Percentile$EstimationType::live$ = false;
          Percentile$EstimationType *Percentile$EstimationType::LEGACY = NULL;
          Percentile$EstimationType *Percentile$EstimationType::R_1 = NULL;
          Percentile$EstimationType *Percentile$EstimationType::R_2 = NULL;
          Percentile$EstimationType *Percentile$EstimationType::R_3 = NULL;
          Percentile$EstimationType *Percentile$EstimationType::R_4 = NULL;
          Percentile$EstimationType *Percentile$EstimationType::R_5 = NULL;
          Percentile$EstimationType *Percentile$EstimationType::R_6 = NULL;
          Percentile$EstimationType *Percentile$EstimationType::R_7 = NULL;
          Percentile$EstimationType *Percentile$EstimationType::R_8 = NULL;
          Percentile$EstimationType *Percentile$EstimationType::R_9 = NULL;

          jclass Percentile$EstimationType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/rank/Percentile$EstimationType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_evaluate_410ace8c42ca117d] = env->getMethodID(cls, "evaluate", "([DDLorg/hipparchus/util/KthSelector;)D");
              mids$[mid_valueOf_e716c3c8388eb5c6] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;");
              mids$[mid_values_77b1215abe0ed765] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;");
              mids$[mid_evaluate_d070edde8081c1de] = env->getMethodID(cls, "evaluate", "([D[IDLorg/hipparchus/util/KthSelector;)D");
              mids$[mid_estimate_5a36c9138b3295b6] = env->getMethodID(cls, "estimate", "([D[IDILorg/hipparchus/util/KthSelector;)D");
              mids$[mid_index_156ae9d72f1c8533] = env->getMethodID(cls, "index", "(DI)D");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              LEGACY = new Percentile$EstimationType(env->getStaticObjectField(cls, "LEGACY", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              R_1 = new Percentile$EstimationType(env->getStaticObjectField(cls, "R_1", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              R_2 = new Percentile$EstimationType(env->getStaticObjectField(cls, "R_2", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              R_3 = new Percentile$EstimationType(env->getStaticObjectField(cls, "R_3", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              R_4 = new Percentile$EstimationType(env->getStaticObjectField(cls, "R_4", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              R_5 = new Percentile$EstimationType(env->getStaticObjectField(cls, "R_5", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              R_6 = new Percentile$EstimationType(env->getStaticObjectField(cls, "R_6", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              R_7 = new Percentile$EstimationType(env->getStaticObjectField(cls, "R_7", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              R_8 = new Percentile$EstimationType(env->getStaticObjectField(cls, "R_8", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              R_9 = new Percentile$EstimationType(env->getStaticObjectField(cls, "R_9", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble Percentile$EstimationType::evaluate(const JArray< jdouble > & a0, jdouble a1, const ::org::hipparchus::util::KthSelector & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_410ace8c42ca117d], a0.this$, a1, a2.this$);
          }

          Percentile$EstimationType Percentile$EstimationType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return Percentile$EstimationType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e716c3c8388eb5c6], a0.this$));
          }

          JArray< Percentile$EstimationType > Percentile$EstimationType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< Percentile$EstimationType >(env->callStaticObjectMethod(cls, mids$[mid_values_77b1215abe0ed765]));
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
    namespace stat {
      namespace descriptive {
        namespace rank {
          static PyObject *t_Percentile$EstimationType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Percentile$EstimationType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Percentile$EstimationType_of_(t_Percentile$EstimationType *self, PyObject *args);
          static PyObject *t_Percentile$EstimationType_evaluate(t_Percentile$EstimationType *self, PyObject *args);
          static PyObject *t_Percentile$EstimationType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_Percentile$EstimationType_values(PyTypeObject *type);
          static PyObject *t_Percentile$EstimationType_get__parameters_(t_Percentile$EstimationType *self, void *data);
          static PyGetSetDef t_Percentile$EstimationType__fields_[] = {
            DECLARE_GET_FIELD(t_Percentile$EstimationType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Percentile$EstimationType__methods_[] = {
            DECLARE_METHOD(t_Percentile$EstimationType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Percentile$EstimationType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Percentile$EstimationType, of_, METH_VARARGS),
            DECLARE_METHOD(t_Percentile$EstimationType, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Percentile$EstimationType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Percentile$EstimationType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Percentile$EstimationType)[] = {
            { Py_tp_methods, t_Percentile$EstimationType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Percentile$EstimationType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Percentile$EstimationType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(Percentile$EstimationType, t_Percentile$EstimationType, Percentile$EstimationType);
          PyObject *t_Percentile$EstimationType::wrap_Object(const Percentile$EstimationType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Percentile$EstimationType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Percentile$EstimationType *self = (t_Percentile$EstimationType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_Percentile$EstimationType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Percentile$EstimationType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Percentile$EstimationType *self = (t_Percentile$EstimationType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_Percentile$EstimationType::install(PyObject *module)
          {
            installType(&PY_TYPE(Percentile$EstimationType), &PY_TYPE_DEF(Percentile$EstimationType), module, "Percentile$EstimationType", 0);
          }

          void t_Percentile$EstimationType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "class_", make_descriptor(Percentile$EstimationType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "wrapfn_", make_descriptor(t_Percentile$EstimationType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "boxfn_", make_descriptor(boxObject));
            env->getClass(Percentile$EstimationType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "LEGACY", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::LEGACY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "R_1", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::R_1)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "R_2", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::R_2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "R_3", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::R_3)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "R_4", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::R_4)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "R_5", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::R_5)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "R_6", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::R_6)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "R_7", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::R_7)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "R_8", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::R_8)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "R_9", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::R_9)));
          }

          static PyObject *t_Percentile$EstimationType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Percentile$EstimationType::initializeClass, 1)))
              return NULL;
            return t_Percentile$EstimationType::wrap_Object(Percentile$EstimationType(((t_Percentile$EstimationType *) arg)->object.this$));
          }
          static PyObject *t_Percentile$EstimationType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Percentile$EstimationType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Percentile$EstimationType_of_(t_Percentile$EstimationType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_Percentile$EstimationType_evaluate(t_Percentile$EstimationType *self, PyObject *args)
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble a1;
            ::org::hipparchus::util::KthSelector a2((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[DDk", ::org::hipparchus::util::KthSelector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "evaluate", args);
            return NULL;
          }

          static PyObject *t_Percentile$EstimationType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            Percentile$EstimationType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType::valueOf(a0));
              return t_Percentile$EstimationType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_Percentile$EstimationType_values(PyTypeObject *type)
          {
            JArray< Percentile$EstimationType > result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType::values());
            return JArray<jobject>(result.this$).wrap(t_Percentile$EstimationType::wrap_jobject);
          }
          static PyObject *t_Percentile$EstimationType_get__parameters_(t_Percentile$EstimationType *self, void *data)
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
#include "org/orekit/bodies/LazyLoadedCelestialBodies.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/orekit/bodies/CelestialBodyLoader.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *LazyLoadedCelestialBodies::class$ = NULL;
      jmethodID *LazyLoadedCelestialBodies::mids$ = NULL;
      bool LazyLoadedCelestialBodies::live$ = false;

      jclass LazyLoadedCelestialBodies::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/LazyLoadedCelestialBodies");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a86554a897d98076] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScales;Lorg/orekit/frames/Frame;)V");
          mids$[mid_addCelestialBodyLoader_5b4f658199a12bc3] = env->getMethodID(cls, "addCelestialBodyLoader", "(Ljava/lang/String;Lorg/orekit/bodies/CelestialBodyLoader;)V");
          mids$[mid_addDefaultCelestialBodyLoader_f5ffdf29129ef90a] = env->getMethodID(cls, "addDefaultCelestialBodyLoader", "(Ljava/lang/String;)V");
          mids$[mid_addDefaultCelestialBodyLoader_630071dd94c59169] = env->getMethodID(cls, "addDefaultCelestialBodyLoader", "(Ljava/lang/String;Ljava/lang/String;)V");
          mids$[mid_clearCelestialBodyCache_0640e6acf969ed28] = env->getMethodID(cls, "clearCelestialBodyCache", "()V");
          mids$[mid_clearCelestialBodyCache_f5ffdf29129ef90a] = env->getMethodID(cls, "clearCelestialBodyCache", "(Ljava/lang/String;)V");
          mids$[mid_clearCelestialBodyLoaders_0640e6acf969ed28] = env->getMethodID(cls, "clearCelestialBodyLoaders", "()V");
          mids$[mid_clearCelestialBodyLoaders_f5ffdf29129ef90a] = env->getMethodID(cls, "clearCelestialBodyLoaders", "(Ljava/lang/String;)V");
          mids$[mid_getBody_47d89fc2b3d16fd5] = env->getMethodID(cls, "getBody", "(Ljava/lang/String;)Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getEarth_40e74583267ad550] = env->getMethodID(cls, "getEarth", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getEarthMoonBarycenter_40e74583267ad550] = env->getMethodID(cls, "getEarthMoonBarycenter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getJupiter_40e74583267ad550] = env->getMethodID(cls, "getJupiter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMars_40e74583267ad550] = env->getMethodID(cls, "getMars", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMercury_40e74583267ad550] = env->getMethodID(cls, "getMercury", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMoon_40e74583267ad550] = env->getMethodID(cls, "getMoon", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getNeptune_40e74583267ad550] = env->getMethodID(cls, "getNeptune", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getPluto_40e74583267ad550] = env->getMethodID(cls, "getPluto", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSaturn_40e74583267ad550] = env->getMethodID(cls, "getSaturn", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSolarSystemBarycenter_40e74583267ad550] = env->getMethodID(cls, "getSolarSystemBarycenter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSun_40e74583267ad550] = env->getMethodID(cls, "getSun", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getUranus_40e74583267ad550] = env->getMethodID(cls, "getUranus", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getVenus_40e74583267ad550] = env->getMethodID(cls, "getVenus", "()Lorg/orekit/bodies/CelestialBody;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LazyLoadedCelestialBodies::LazyLoadedCelestialBodies(const ::org::orekit::data::DataProvidersManager & a0, const ::org::orekit::time::TimeScales & a1, const ::org::orekit::frames::Frame & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a86554a897d98076, a0.this$, a1.this$, a2.this$)) {}

      void LazyLoadedCelestialBodies::addCelestialBodyLoader(const ::java::lang::String & a0, const ::org::orekit::bodies::CelestialBodyLoader & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addCelestialBodyLoader_5b4f658199a12bc3], a0.this$, a1.this$);
      }

      void LazyLoadedCelestialBodies::addDefaultCelestialBodyLoader(const ::java::lang::String & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addDefaultCelestialBodyLoader_f5ffdf29129ef90a], a0.this$);
      }

      void LazyLoadedCelestialBodies::addDefaultCelestialBodyLoader(const ::java::lang::String & a0, const ::java::lang::String & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addDefaultCelestialBodyLoader_630071dd94c59169], a0.this$, a1.this$);
      }

      void LazyLoadedCelestialBodies::clearCelestialBodyCache() const
      {
        env->callVoidMethod(this$, mids$[mid_clearCelestialBodyCache_0640e6acf969ed28]);
      }

      void LazyLoadedCelestialBodies::clearCelestialBodyCache(const ::java::lang::String & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_clearCelestialBodyCache_f5ffdf29129ef90a], a0.this$);
      }

      void LazyLoadedCelestialBodies::clearCelestialBodyLoaders() const
      {
        env->callVoidMethod(this$, mids$[mid_clearCelestialBodyLoaders_0640e6acf969ed28]);
      }

      void LazyLoadedCelestialBodies::clearCelestialBodyLoaders(const ::java::lang::String & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_clearCelestialBodyLoaders_f5ffdf29129ef90a], a0.this$);
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getBody(const ::java::lang::String & a0) const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getBody_47d89fc2b3d16fd5], a0.this$));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getEarth() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getEarth_40e74583267ad550]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getEarthMoonBarycenter() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getEarthMoonBarycenter_40e74583267ad550]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getJupiter() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getJupiter_40e74583267ad550]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getMars() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getMars_40e74583267ad550]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getMercury() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getMercury_40e74583267ad550]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getMoon() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getMoon_40e74583267ad550]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getNeptune() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getNeptune_40e74583267ad550]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getPluto() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getPluto_40e74583267ad550]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getSaturn() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getSaturn_40e74583267ad550]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getSolarSystemBarycenter() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getSolarSystemBarycenter_40e74583267ad550]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getSun() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getSun_40e74583267ad550]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getUranus() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getUranus_40e74583267ad550]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getVenus() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getVenus_40e74583267ad550]));
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
      static PyObject *t_LazyLoadedCelestialBodies_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LazyLoadedCelestialBodies_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LazyLoadedCelestialBodies_init_(t_LazyLoadedCelestialBodies *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LazyLoadedCelestialBodies_addCelestialBodyLoader(t_LazyLoadedCelestialBodies *self, PyObject *args);
      static PyObject *t_LazyLoadedCelestialBodies_addDefaultCelestialBodyLoader(t_LazyLoadedCelestialBodies *self, PyObject *args);
      static PyObject *t_LazyLoadedCelestialBodies_clearCelestialBodyCache(t_LazyLoadedCelestialBodies *self, PyObject *args);
      static PyObject *t_LazyLoadedCelestialBodies_clearCelestialBodyLoaders(t_LazyLoadedCelestialBodies *self, PyObject *args);
      static PyObject *t_LazyLoadedCelestialBodies_getBody(t_LazyLoadedCelestialBodies *self, PyObject *arg);
      static PyObject *t_LazyLoadedCelestialBodies_getEarth(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getEarthMoonBarycenter(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getJupiter(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getMars(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getMercury(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getMoon(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getNeptune(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getPluto(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getSaturn(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getSolarSystemBarycenter(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getSun(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getUranus(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getVenus(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_get__earth(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__earthMoonBarycenter(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__jupiter(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__mars(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__mercury(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__moon(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__neptune(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__pluto(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__saturn(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__solarSystemBarycenter(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__sun(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__uranus(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__venus(t_LazyLoadedCelestialBodies *self, void *data);
      static PyGetSetDef t_LazyLoadedCelestialBodies__fields_[] = {
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, earth),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, earthMoonBarycenter),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, jupiter),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, mars),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, mercury),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, moon),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, neptune),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, pluto),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, saturn),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, solarSystemBarycenter),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, sun),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, uranus),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, venus),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LazyLoadedCelestialBodies__methods_[] = {
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, addCelestialBodyLoader, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, addDefaultCelestialBodyLoader, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, clearCelestialBodyCache, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, clearCelestialBodyLoaders, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getBody, METH_O),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getEarth, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getEarthMoonBarycenter, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getJupiter, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getMars, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getMercury, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getMoon, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getNeptune, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getPluto, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getSaturn, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getSolarSystemBarycenter, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getSun, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getUranus, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getVenus, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LazyLoadedCelestialBodies)[] = {
        { Py_tp_methods, t_LazyLoadedCelestialBodies__methods_ },
        { Py_tp_init, (void *) t_LazyLoadedCelestialBodies_init_ },
        { Py_tp_getset, t_LazyLoadedCelestialBodies__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LazyLoadedCelestialBodies)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LazyLoadedCelestialBodies, t_LazyLoadedCelestialBodies, LazyLoadedCelestialBodies);

      void t_LazyLoadedCelestialBodies::install(PyObject *module)
      {
        installType(&PY_TYPE(LazyLoadedCelestialBodies), &PY_TYPE_DEF(LazyLoadedCelestialBodies), module, "LazyLoadedCelestialBodies", 0);
      }

      void t_LazyLoadedCelestialBodies::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedCelestialBodies), "class_", make_descriptor(LazyLoadedCelestialBodies::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedCelestialBodies), "wrapfn_", make_descriptor(t_LazyLoadedCelestialBodies::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedCelestialBodies), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LazyLoadedCelestialBodies_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LazyLoadedCelestialBodies::initializeClass, 1)))
          return NULL;
        return t_LazyLoadedCelestialBodies::wrap_Object(LazyLoadedCelestialBodies(((t_LazyLoadedCelestialBodies *) arg)->object.this$));
      }
      static PyObject *t_LazyLoadedCelestialBodies_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LazyLoadedCelestialBodies::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LazyLoadedCelestialBodies_init_(t_LazyLoadedCelestialBodies *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::data::DataProvidersManager a0((jobject) NULL);
        ::org::orekit::time::TimeScales a1((jobject) NULL);
        ::org::orekit::frames::Frame a2((jobject) NULL);
        LazyLoadedCelestialBodies object((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScales::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = LazyLoadedCelestialBodies(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_LazyLoadedCelestialBodies_addCelestialBodyLoader(t_LazyLoadedCelestialBodies *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBodyLoader a1((jobject) NULL);

        if (!parseArgs(args, "sk", ::org::orekit::bodies::CelestialBodyLoader::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.addCelestialBodyLoader(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addCelestialBodyLoader", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedCelestialBodies_addDefaultCelestialBodyLoader(t_LazyLoadedCelestialBodies *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(self->object.addDefaultCelestialBodyLoader(a0));
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
              OBJ_CALL(self->object.addDefaultCelestialBodyLoader(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "addDefaultCelestialBodyLoader", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedCelestialBodies_clearCelestialBodyCache(t_LazyLoadedCelestialBodies *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            OBJ_CALL(self->object.clearCelestialBodyCache());
            Py_RETURN_NONE;
          }
          break;
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(self->object.clearCelestialBodyCache(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "clearCelestialBodyCache", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedCelestialBodies_clearCelestialBodyLoaders(t_LazyLoadedCelestialBodies *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            OBJ_CALL(self->object.clearCelestialBodyLoaders());
            Py_RETURN_NONE;
          }
          break;
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(self->object.clearCelestialBodyLoaders(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "clearCelestialBodyLoaders", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedCelestialBodies_getBody(t_LazyLoadedCelestialBodies *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getBody(a0));
          return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getBody", arg);
        return NULL;
      }

      static PyObject *t_LazyLoadedCelestialBodies_getEarth(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getEarth());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getEarthMoonBarycenter(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getEarthMoonBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getJupiter(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getJupiter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getMars(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getMars());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getMercury(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getMercury());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getMoon(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getMoon());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getNeptune(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getNeptune());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getPluto(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getPluto());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getSaturn(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getSaturn());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getSolarSystemBarycenter(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getSolarSystemBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getSun(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getSun());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getUranus(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getUranus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getVenus(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getVenus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__earth(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarth());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__earthMoonBarycenter(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarthMoonBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__jupiter(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getJupiter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__mars(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getMars());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__mercury(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getMercury());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__moon(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getMoon());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__neptune(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getNeptune());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__pluto(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getPluto());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__saturn(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSaturn());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__solarSystemBarycenter(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolarSystemBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__sun(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSun());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__uranus(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getUranus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__venus(t_LazyLoadedCelestialBodies *self, void *data)
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
#include "org/orekit/forces/drag/DragForce.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/forces/drag/DragSensitive.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {

        ::java::lang::Class *DragForce::class$ = NULL;
        jmethodID *DragForce::mids$ = NULL;
        bool DragForce::live$ = false;

        jclass DragForce::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/drag/DragForce");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_36405303e879e795] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/Atmosphere;Lorg/orekit/forces/drag/DragSensitive;)V");
            mids$[mid_acceleration_61944e27a39e8290] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_b61fb59a041240c6] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getAtmosphere_344c414ab8fc3e7e] = env->getMethodID(cls, "getAtmosphere", "()Lorg/orekit/models/earth/atmosphere/Atmosphere;");
            mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_getSpacecraft_5af7812abe9360ec] = env->getMethodID(cls, "getSpacecraft", "()Lorg/orekit/forces/drag/DragSensitive;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DragForce::DragForce(const ::org::orekit::models::earth::atmosphere::Atmosphere & a0, const ::org::orekit::forces::drag::DragSensitive & a1) : ::org::orekit::forces::drag::AbstractDragForceModel(env->newObject(initializeClass, &mids$, mid_init$_36405303e879e795, a0.this$, a1.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D DragForce::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_61944e27a39e8290], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D DragForce::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_b61fb59a041240c6], a0.this$, a1.this$));
        }

        ::org::orekit::models::earth::atmosphere::Atmosphere DragForce::getAtmosphere() const
        {
          return ::org::orekit::models::earth::atmosphere::Atmosphere(env->callObjectMethod(this$, mids$[mid_getAtmosphere_344c414ab8fc3e7e]));
        }

        ::java::util::List DragForce::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
        }

        ::org::orekit::forces::drag::DragSensitive DragForce::getSpacecraft() const
        {
          return ::org::orekit::forces::drag::DragSensitive(env->callObjectMethod(this$, mids$[mid_getSpacecraft_5af7812abe9360ec]));
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
      namespace drag {
        static PyObject *t_DragForce_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DragForce_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DragForce_init_(t_DragForce *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DragForce_acceleration(t_DragForce *self, PyObject *args);
        static PyObject *t_DragForce_getAtmosphere(t_DragForce *self);
        static PyObject *t_DragForce_getParametersDrivers(t_DragForce *self, PyObject *args);
        static PyObject *t_DragForce_getSpacecraft(t_DragForce *self);
        static PyObject *t_DragForce_get__atmosphere(t_DragForce *self, void *data);
        static PyObject *t_DragForce_get__parametersDrivers(t_DragForce *self, void *data);
        static PyObject *t_DragForce_get__spacecraft(t_DragForce *self, void *data);
        static PyGetSetDef t_DragForce__fields_[] = {
          DECLARE_GET_FIELD(t_DragForce, atmosphere),
          DECLARE_GET_FIELD(t_DragForce, parametersDrivers),
          DECLARE_GET_FIELD(t_DragForce, spacecraft),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DragForce__methods_[] = {
          DECLARE_METHOD(t_DragForce, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DragForce, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DragForce, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_DragForce, getAtmosphere, METH_NOARGS),
          DECLARE_METHOD(t_DragForce, getParametersDrivers, METH_VARARGS),
          DECLARE_METHOD(t_DragForce, getSpacecraft, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DragForce)[] = {
          { Py_tp_methods, t_DragForce__methods_ },
          { Py_tp_init, (void *) t_DragForce_init_ },
          { Py_tp_getset, t_DragForce__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DragForce)[] = {
          &PY_TYPE_DEF(::org::orekit::forces::drag::AbstractDragForceModel),
          NULL
        };

        DEFINE_TYPE(DragForce, t_DragForce, DragForce);

        void t_DragForce::install(PyObject *module)
        {
          installType(&PY_TYPE(DragForce), &PY_TYPE_DEF(DragForce), module, "DragForce", 0);
        }

        void t_DragForce::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DragForce), "class_", make_descriptor(DragForce::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DragForce), "wrapfn_", make_descriptor(t_DragForce::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DragForce), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DragForce_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DragForce::initializeClass, 1)))
            return NULL;
          return t_DragForce::wrap_Object(DragForce(((t_DragForce *) arg)->object.this$));
        }
        static PyObject *t_DragForce_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DragForce::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DragForce_init_(t_DragForce *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::models::earth::atmosphere::Atmosphere a0((jobject) NULL);
          ::org::orekit::forces::drag::DragSensitive a1((jobject) NULL);
          DragForce object((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::models::earth::atmosphere::Atmosphere::initializeClass, ::org::orekit::forces::drag::DragSensitive::initializeClass, &a0, &a1))
          {
            INT_CALL(object = DragForce(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_DragForce_acceleration(t_DragForce *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(DragForce), (PyObject *) self, "acceleration", args, 2);
        }

        static PyObject *t_DragForce_getAtmosphere(t_DragForce *self)
        {
          ::org::orekit::models::earth::atmosphere::Atmosphere result((jobject) NULL);
          OBJ_CALL(result = self->object.getAtmosphere());
          return ::org::orekit::models::earth::atmosphere::t_Atmosphere::wrap_Object(result);
        }

        static PyObject *t_DragForce_getParametersDrivers(t_DragForce *self, PyObject *args)
        {
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          return callSuper(PY_TYPE(DragForce), (PyObject *) self, "getParametersDrivers", args, 2);
        }

        static PyObject *t_DragForce_getSpacecraft(t_DragForce *self)
        {
          ::org::orekit::forces::drag::DragSensitive result((jobject) NULL);
          OBJ_CALL(result = self->object.getSpacecraft());
          return ::org::orekit::forces::drag::t_DragSensitive::wrap_Object(result);
        }

        static PyObject *t_DragForce_get__atmosphere(t_DragForce *self, void *data)
        {
          ::org::orekit::models::earth::atmosphere::Atmosphere value((jobject) NULL);
          OBJ_CALL(value = self->object.getAtmosphere());
          return ::org::orekit::models::earth::atmosphere::t_Atmosphere::wrap_Object(value);
        }

        static PyObject *t_DragForce_get__parametersDrivers(t_DragForce *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_DragForce_get__spacecraft(t_DragForce *self, void *data)
        {
          ::org::orekit::forces::drag::DragSensitive value((jobject) NULL);
          OBJ_CALL(value = self->object.getSpacecraft());
          return ::org::orekit::forces::drag::t_DragSensitive::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/FieldSGP4.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *FieldSGP4::class$ = NULL;
          jmethodID *FieldSGP4::mids$ = NULL;
          bool FieldSGP4::live$ = false;

          jclass FieldSGP4::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/FieldSGP4");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_506aefaa51ea8c08] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_init$_09515132f38e5487] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/Frame;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_sxpInitialize_5d9c9afaca2e497c] = env->getMethodID(cls, "sxpInitialize", "([Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_sxpPropagate_960efa47e0a8eec2] = env->getMethodID(cls, "sxpPropagate", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldSGP4::FieldSGP4(const ::org::orekit::propagation::analytical::tle::FieldTLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) : ::org::orekit::propagation::analytical::tle::FieldTLEPropagator(env->newObject(initializeClass, &mids$, mid_init$_506aefaa51ea8c08, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          FieldSGP4::FieldSGP4(const ::org::orekit::propagation::analytical::tle::FieldTLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::frames::Frame & a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4) : ::org::orekit::propagation::analytical::tle::FieldTLEPropagator(env->newObject(initializeClass, &mids$, mid_init$_09515132f38e5487, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}
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
        namespace tle {
          static PyObject *t_FieldSGP4_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldSGP4_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldSGP4_of_(t_FieldSGP4 *self, PyObject *args);
          static int t_FieldSGP4_init_(t_FieldSGP4 *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldSGP4_get__parameters_(t_FieldSGP4 *self, void *data);
          static PyGetSetDef t_FieldSGP4__fields_[] = {
            DECLARE_GET_FIELD(t_FieldSGP4, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldSGP4__methods_[] = {
            DECLARE_METHOD(t_FieldSGP4, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldSGP4, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldSGP4, of_, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldSGP4)[] = {
            { Py_tp_methods, t_FieldSGP4__methods_ },
            { Py_tp_init, (void *) t_FieldSGP4_init_ },
            { Py_tp_getset, t_FieldSGP4__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldSGP4)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::tle::FieldTLEPropagator),
            NULL
          };

          DEFINE_TYPE(FieldSGP4, t_FieldSGP4, FieldSGP4);
          PyObject *t_FieldSGP4::wrap_Object(const FieldSGP4& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldSGP4::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldSGP4 *self = (t_FieldSGP4 *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldSGP4::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldSGP4::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldSGP4 *self = (t_FieldSGP4 *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldSGP4::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldSGP4), &PY_TYPE_DEF(FieldSGP4), module, "FieldSGP4", 0);
          }

          void t_FieldSGP4::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSGP4), "class_", make_descriptor(FieldSGP4::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSGP4), "wrapfn_", make_descriptor(t_FieldSGP4::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSGP4), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldSGP4_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldSGP4::initializeClass, 1)))
              return NULL;
            return t_FieldSGP4::wrap_Object(FieldSGP4(((t_FieldSGP4 *) arg)->object.this$));
          }
          static PyObject *t_FieldSGP4_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldSGP4::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldSGP4_of_(t_FieldSGP4 *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldSGP4_init_(t_FieldSGP4 *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::orekit::propagation::analytical::tle::FieldTLE a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
                PyTypeObject **p3;
                FieldSGP4 object((jobject) NULL);

                if (!parseArgs(args, "KkK[K", ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldSGP4(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 5:
              {
                ::org::orekit::propagation::analytical::tle::FieldTLE a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::frames::Frame a3((jobject) NULL);
                JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
                PyTypeObject **p4;
                FieldSGP4 object((jobject) NULL);

                if (!parseArgs(args, "KkKk[K", ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldSGP4(a0, a1, a2, a3, a4));
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
          static PyObject *t_FieldSGP4_get__parameters_(t_FieldSGP4 *self, void *data)
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
#include "org/hipparchus/analysis/interpolation/BivariateGridInterpolator.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *BivariateGridInterpolator::class$ = NULL;
        jmethodID *BivariateGridInterpolator::mids$ = NULL;
        bool BivariateGridInterpolator::live$ = false;

        jclass BivariateGridInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/BivariateGridInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_interpolate_3edf1effd3188e77] = env->getMethodID(cls, "interpolate", "([D[D[[D)Lorg/hipparchus/analysis/BivariateFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::BivariateFunction BivariateGridInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2) const
        {
          return ::org::hipparchus::analysis::BivariateFunction(env->callObjectMethod(this$, mids$[mid_interpolate_3edf1effd3188e77], a0.this$, a1.this$, a2.this$));
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
      namespace interpolation {
        static PyObject *t_BivariateGridInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BivariateGridInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BivariateGridInterpolator_interpolate(t_BivariateGridInterpolator *self, PyObject *args);

        static PyMethodDef t_BivariateGridInterpolator__methods_[] = {
          DECLARE_METHOD(t_BivariateGridInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BivariateGridInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BivariateGridInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BivariateGridInterpolator)[] = {
          { Py_tp_methods, t_BivariateGridInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BivariateGridInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BivariateGridInterpolator, t_BivariateGridInterpolator, BivariateGridInterpolator);

        void t_BivariateGridInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(BivariateGridInterpolator), &PY_TYPE_DEF(BivariateGridInterpolator), module, "BivariateGridInterpolator", 0);
        }

        void t_BivariateGridInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BivariateGridInterpolator), "class_", make_descriptor(BivariateGridInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BivariateGridInterpolator), "wrapfn_", make_descriptor(t_BivariateGridInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BivariateGridInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BivariateGridInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BivariateGridInterpolator::initializeClass, 1)))
            return NULL;
          return t_BivariateGridInterpolator::wrap_Object(BivariateGridInterpolator(((t_BivariateGridInterpolator *) arg)->object.this$));
        }
        static PyObject *t_BivariateGridInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BivariateGridInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BivariateGridInterpolator_interpolate(t_BivariateGridInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< JArray< jdouble > > a2((jobject) NULL);
          ::org::hipparchus::analysis::BivariateFunction result((jobject) NULL);

          if (!parseArgs(args, "[D[D[[D", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1, a2));
            return ::org::hipparchus::analysis::t_BivariateFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/IntegrationReference.h"
#include "org/orekit/files/ccsds/ndm/tdm/IntegrationReference.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *IntegrationReference::class$ = NULL;
            jmethodID *IntegrationReference::mids$ = NULL;
            bool IntegrationReference::live$ = false;
            IntegrationReference *IntegrationReference::END = NULL;
            IntegrationReference *IntegrationReference::MIDDLE = NULL;
            IntegrationReference *IntegrationReference::START = NULL;

            jclass IntegrationReference::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/IntegrationReference");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_35c08d6aec5c874c] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/IntegrationReference;");
                mids$[mid_values_b5856131fa55ef1d] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/IntegrationReference;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                END = new IntegrationReference(env->getStaticObjectField(cls, "END", "Lorg/orekit/files/ccsds/ndm/tdm/IntegrationReference;"));
                MIDDLE = new IntegrationReference(env->getStaticObjectField(cls, "MIDDLE", "Lorg/orekit/files/ccsds/ndm/tdm/IntegrationReference;"));
                START = new IntegrationReference(env->getStaticObjectField(cls, "START", "Lorg/orekit/files/ccsds/ndm/tdm/IntegrationReference;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            IntegrationReference IntegrationReference::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return IntegrationReference(env->callStaticObjectMethod(cls, mids$[mid_valueOf_35c08d6aec5c874c], a0.this$));
            }

            JArray< IntegrationReference > IntegrationReference::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< IntegrationReference >(env->callStaticObjectMethod(cls, mids$[mid_values_b5856131fa55ef1d]));
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
          namespace tdm {
            static PyObject *t_IntegrationReference_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_IntegrationReference_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_IntegrationReference_of_(t_IntegrationReference *self, PyObject *args);
            static PyObject *t_IntegrationReference_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_IntegrationReference_values(PyTypeObject *type);
            static PyObject *t_IntegrationReference_get__parameters_(t_IntegrationReference *self, void *data);
            static PyGetSetDef t_IntegrationReference__fields_[] = {
              DECLARE_GET_FIELD(t_IntegrationReference, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_IntegrationReference__methods_[] = {
              DECLARE_METHOD(t_IntegrationReference, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_IntegrationReference, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_IntegrationReference, of_, METH_VARARGS),
              DECLARE_METHOD(t_IntegrationReference, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_IntegrationReference, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(IntegrationReference)[] = {
              { Py_tp_methods, t_IntegrationReference__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_IntegrationReference__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(IntegrationReference)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(IntegrationReference, t_IntegrationReference, IntegrationReference);
            PyObject *t_IntegrationReference::wrap_Object(const IntegrationReference& object, PyTypeObject *p0)
            {
              PyObject *obj = t_IntegrationReference::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_IntegrationReference *self = (t_IntegrationReference *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_IntegrationReference::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_IntegrationReference::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_IntegrationReference *self = (t_IntegrationReference *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_IntegrationReference::install(PyObject *module)
            {
              installType(&PY_TYPE(IntegrationReference), &PY_TYPE_DEF(IntegrationReference), module, "IntegrationReference", 0);
            }

            void t_IntegrationReference::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(IntegrationReference), "class_", make_descriptor(IntegrationReference::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(IntegrationReference), "wrapfn_", make_descriptor(t_IntegrationReference::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(IntegrationReference), "boxfn_", make_descriptor(boxObject));
              env->getClass(IntegrationReference::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(IntegrationReference), "END", make_descriptor(t_IntegrationReference::wrap_Object(*IntegrationReference::END)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(IntegrationReference), "MIDDLE", make_descriptor(t_IntegrationReference::wrap_Object(*IntegrationReference::MIDDLE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(IntegrationReference), "START", make_descriptor(t_IntegrationReference::wrap_Object(*IntegrationReference::START)));
            }

            static PyObject *t_IntegrationReference_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, IntegrationReference::initializeClass, 1)))
                return NULL;
              return t_IntegrationReference::wrap_Object(IntegrationReference(((t_IntegrationReference *) arg)->object.this$));
            }
            static PyObject *t_IntegrationReference_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, IntegrationReference::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_IntegrationReference_of_(t_IntegrationReference *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_IntegrationReference_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              IntegrationReference result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference::valueOf(a0));
                return t_IntegrationReference::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_IntegrationReference_values(PyTypeObject *type)
            {
              JArray< IntegrationReference > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference::values());
              return JArray<jobject>(result.this$).wrap(t_IntegrationReference::wrap_jobject);
            }
            static PyObject *t_IntegrationReference_get__parameters_(t_IntegrationReference *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/ChronologicalComparator.h"
#include "java/util/Comparator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *ChronologicalComparator::class$ = NULL;
      jmethodID *ChronologicalComparator::mids$ = NULL;
      bool ChronologicalComparator::live$ = false;

      jclass ChronologicalComparator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/ChronologicalComparator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_compare_c2c4d8fe15f9b71a] = env->getMethodID(cls, "compare", "(Lorg/orekit/time/TimeStamped;Lorg/orekit/time/TimeStamped;)I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ChronologicalComparator::ChronologicalComparator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      jint ChronologicalComparator::compare(const ::org::orekit::time::TimeStamped & a0, const ::org::orekit::time::TimeStamped & a1) const
      {
        return env->callIntMethod(this$, mids$[mid_compare_c2c4d8fe15f9b71a], a0.this$, a1.this$);
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
      static PyObject *t_ChronologicalComparator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ChronologicalComparator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ChronologicalComparator_init_(t_ChronologicalComparator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ChronologicalComparator_compare(t_ChronologicalComparator *self, PyObject *args);

      static PyMethodDef t_ChronologicalComparator__methods_[] = {
        DECLARE_METHOD(t_ChronologicalComparator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ChronologicalComparator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ChronologicalComparator, compare, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ChronologicalComparator)[] = {
        { Py_tp_methods, t_ChronologicalComparator__methods_ },
        { Py_tp_init, (void *) t_ChronologicalComparator_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ChronologicalComparator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ChronologicalComparator, t_ChronologicalComparator, ChronologicalComparator);

      void t_ChronologicalComparator::install(PyObject *module)
      {
        installType(&PY_TYPE(ChronologicalComparator), &PY_TYPE_DEF(ChronologicalComparator), module, "ChronologicalComparator", 0);
      }

      void t_ChronologicalComparator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ChronologicalComparator), "class_", make_descriptor(ChronologicalComparator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ChronologicalComparator), "wrapfn_", make_descriptor(t_ChronologicalComparator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ChronologicalComparator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ChronologicalComparator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ChronologicalComparator::initializeClass, 1)))
          return NULL;
        return t_ChronologicalComparator::wrap_Object(ChronologicalComparator(((t_ChronologicalComparator *) arg)->object.this$));
      }
      static PyObject *t_ChronologicalComparator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ChronologicalComparator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ChronologicalComparator_init_(t_ChronologicalComparator *self, PyObject *args, PyObject *kwds)
      {
        ChronologicalComparator object((jobject) NULL);

        INT_CALL(object = ChronologicalComparator());
        self->object = object;

        return 0;
      }

      static PyObject *t_ChronologicalComparator_compare(t_ChronologicalComparator *self, PyObject *args)
      {
        ::org::orekit::time::TimeStamped a0((jobject) NULL);
        ::org::orekit::time::TimeStamped a1((jobject) NULL);
        jint result;

        if (!parseArgs(args, "kk", ::org::orekit::time::TimeStamped::initializeClass, ::org::orekit::time::TimeStamped::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.compare(a0, a1));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compare", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemMetadata.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *AemMetadataKey::class$ = NULL;
              jmethodID *AemMetadataKey::mids$ = NULL;
              bool AemMetadataKey::live$ = false;
              AemMetadataKey *AemMetadataKey::ANGVEL_FRAME = NULL;
              AemMetadataKey *AemMetadataKey::ATTITUDE_DIR = NULL;
              AemMetadataKey *AemMetadataKey::ATTITUDE_TYPE = NULL;
              AemMetadataKey *AemMetadataKey::EULER_ROT_SEQ = NULL;
              AemMetadataKey *AemMetadataKey::INTERPOLATION_DEGREE = NULL;
              AemMetadataKey *AemMetadataKey::INTERPOLATION_METHOD = NULL;
              AemMetadataKey *AemMetadataKey::QUATERNION_TYPE = NULL;
              AemMetadataKey *AemMetadataKey::RATE_FRAME = NULL;
              AemMetadataKey *AemMetadataKey::REF_FRAME_A = NULL;
              AemMetadataKey *AemMetadataKey::REF_FRAME_B = NULL;
              AemMetadataKey *AemMetadataKey::START_TIME = NULL;
              AemMetadataKey *AemMetadataKey::STOP_TIME = NULL;
              AemMetadataKey *AemMetadataKey::USEABLE_START_TIME = NULL;
              AemMetadataKey *AemMetadataKey::USEABLE_STOP_TIME = NULL;

              jclass AemMetadataKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_c24b714f1d96ba52] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadata;)Z");
                  mids$[mid_valueOf_45a83ef9b477ab70] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;");
                  mids$[mid_values_17bde26411cb27e9] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ANGVEL_FRAME = new AemMetadataKey(env->getStaticObjectField(cls, "ANGVEL_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  ATTITUDE_DIR = new AemMetadataKey(env->getStaticObjectField(cls, "ATTITUDE_DIR", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  ATTITUDE_TYPE = new AemMetadataKey(env->getStaticObjectField(cls, "ATTITUDE_TYPE", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  EULER_ROT_SEQ = new AemMetadataKey(env->getStaticObjectField(cls, "EULER_ROT_SEQ", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  INTERPOLATION_DEGREE = new AemMetadataKey(env->getStaticObjectField(cls, "INTERPOLATION_DEGREE", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  INTERPOLATION_METHOD = new AemMetadataKey(env->getStaticObjectField(cls, "INTERPOLATION_METHOD", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  QUATERNION_TYPE = new AemMetadataKey(env->getStaticObjectField(cls, "QUATERNION_TYPE", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  RATE_FRAME = new AemMetadataKey(env->getStaticObjectField(cls, "RATE_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  REF_FRAME_A = new AemMetadataKey(env->getStaticObjectField(cls, "REF_FRAME_A", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  REF_FRAME_B = new AemMetadataKey(env->getStaticObjectField(cls, "REF_FRAME_B", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  START_TIME = new AemMetadataKey(env->getStaticObjectField(cls, "START_TIME", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  STOP_TIME = new AemMetadataKey(env->getStaticObjectField(cls, "STOP_TIME", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  USEABLE_START_TIME = new AemMetadataKey(env->getStaticObjectField(cls, "USEABLE_START_TIME", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  USEABLE_STOP_TIME = new AemMetadataKey(env->getStaticObjectField(cls, "USEABLE_STOP_TIME", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AemMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_c24b714f1d96ba52], a0.this$, a1.this$, a2.this$);
              }

              AemMetadataKey AemMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AemMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_45a83ef9b477ab70], a0.this$));
              }

              JArray< AemMetadataKey > AemMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AemMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_17bde26411cb27e9]));
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
              static PyObject *t_AemMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemMetadataKey_of_(t_AemMetadataKey *self, PyObject *args);
              static PyObject *t_AemMetadataKey_process(t_AemMetadataKey *self, PyObject *args);
              static PyObject *t_AemMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AemMetadataKey_values(PyTypeObject *type);
              static PyObject *t_AemMetadataKey_get__parameters_(t_AemMetadataKey *self, void *data);
              static PyGetSetDef t_AemMetadataKey__fields_[] = {
                DECLARE_GET_FIELD(t_AemMetadataKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AemMetadataKey__methods_[] = {
                DECLARE_METHOD(t_AemMetadataKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemMetadataKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemMetadataKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AemMetadataKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AemMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AemMetadataKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AemMetadataKey)[] = {
                { Py_tp_methods, t_AemMetadataKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AemMetadataKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AemMetadataKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AemMetadataKey, t_AemMetadataKey, AemMetadataKey);
              PyObject *t_AemMetadataKey::wrap_Object(const AemMetadataKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AemMetadataKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AemMetadataKey *self = (t_AemMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AemMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AemMetadataKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AemMetadataKey *self = (t_AemMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AemMetadataKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AemMetadataKey), &PY_TYPE_DEF(AemMetadataKey), module, "AemMetadataKey", 0);
              }

              void t_AemMetadataKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "class_", make_descriptor(AemMetadataKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "wrapfn_", make_descriptor(t_AemMetadataKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AemMetadataKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "ANGVEL_FRAME", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::ANGVEL_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "ATTITUDE_DIR", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::ATTITUDE_DIR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "ATTITUDE_TYPE", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::ATTITUDE_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "EULER_ROT_SEQ", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::EULER_ROT_SEQ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "INTERPOLATION_DEGREE", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::INTERPOLATION_DEGREE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "INTERPOLATION_METHOD", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::INTERPOLATION_METHOD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "QUATERNION_TYPE", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::QUATERNION_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "RATE_FRAME", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::RATE_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "REF_FRAME_A", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::REF_FRAME_A)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "REF_FRAME_B", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::REF_FRAME_B)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "START_TIME", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::START_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "STOP_TIME", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::STOP_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "USEABLE_START_TIME", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::USEABLE_START_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "USEABLE_STOP_TIME", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::USEABLE_STOP_TIME)));
              }

              static PyObject *t_AemMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AemMetadataKey::initializeClass, 1)))
                  return NULL;
                return t_AemMetadataKey::wrap_Object(AemMetadataKey(((t_AemMetadataKey *) arg)->object.this$));
              }
              static PyObject *t_AemMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AemMetadataKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AemMetadataKey_of_(t_AemMetadataKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AemMetadataKey_process(t_AemMetadataKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AemMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AemMetadataKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadataKey::valueOf(a0));
                  return t_AemMetadataKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AemMetadataKey_values(PyTypeObject *type)
              {
                JArray< AemMetadataKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadataKey::values());
                return JArray<jobject>(result.this$).wrap(t_AemMetadataKey::wrap_jobject);
              }
              static PyObject *t_AemMetadataKey_get__parameters_(t_AemMetadataKey *self, void *data)
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
#include "org/hipparchus/filtering/kalman/Measurement.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {

        ::java::lang::Class *Measurement::class$ = NULL;
        jmethodID *Measurement::mids$ = NULL;
        bool Measurement::live$ = false;

        jclass Measurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/Measurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCovariance_70a207fcbc031df2] = env->getMethodID(cls, "getCovariance", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getTime_557b8123390d8d0c] = env->getMethodID(cls, "getTime", "()D");
            mids$[mid_getValue_75d50d73180655b4] = env->getMethodID(cls, "getValue", "()Lorg/hipparchus/linear/RealVector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::linear::RealMatrix Measurement::getCovariance() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovariance_70a207fcbc031df2]));
        }

        jdouble Measurement::getTime() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTime_557b8123390d8d0c]);
        }

        ::org::hipparchus::linear::RealVector Measurement::getValue() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getValue_75d50d73180655b4]));
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
        static PyObject *t_Measurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Measurement_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Measurement_getCovariance(t_Measurement *self);
        static PyObject *t_Measurement_getTime(t_Measurement *self);
        static PyObject *t_Measurement_getValue(t_Measurement *self);
        static PyObject *t_Measurement_get__covariance(t_Measurement *self, void *data);
        static PyObject *t_Measurement_get__time(t_Measurement *self, void *data);
        static PyObject *t_Measurement_get__value(t_Measurement *self, void *data);
        static PyGetSetDef t_Measurement__fields_[] = {
          DECLARE_GET_FIELD(t_Measurement, covariance),
          DECLARE_GET_FIELD(t_Measurement, time),
          DECLARE_GET_FIELD(t_Measurement, value),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Measurement__methods_[] = {
          DECLARE_METHOD(t_Measurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Measurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Measurement, getCovariance, METH_NOARGS),
          DECLARE_METHOD(t_Measurement, getTime, METH_NOARGS),
          DECLARE_METHOD(t_Measurement, getValue, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Measurement)[] = {
          { Py_tp_methods, t_Measurement__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Measurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Measurement)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Measurement, t_Measurement, Measurement);

        void t_Measurement::install(PyObject *module)
        {
          installType(&PY_TYPE(Measurement), &PY_TYPE_DEF(Measurement), module, "Measurement", 0);
        }

        void t_Measurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Measurement), "class_", make_descriptor(Measurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Measurement), "wrapfn_", make_descriptor(t_Measurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Measurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Measurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Measurement::initializeClass, 1)))
            return NULL;
          return t_Measurement::wrap_Object(Measurement(((t_Measurement *) arg)->object.this$));
        }
        static PyObject *t_Measurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Measurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Measurement_getCovariance(t_Measurement *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_Measurement_getTime(t_Measurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTime());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Measurement_getValue(t_Measurement *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getValue());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_Measurement_get__covariance(t_Measurement *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_Measurement_get__time(t_Measurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTime());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Measurement_get__value(t_Measurement *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getValue());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/GaussNewtonOptimizer.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/GaussNewtonOptimizer.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *GaussNewtonOptimizer::class$ = NULL;
            jmethodID *GaussNewtonOptimizer::mids$ = NULL;
            bool GaussNewtonOptimizer::live$ = false;

            jclass GaussNewtonOptimizer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/GaussNewtonOptimizer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_init$_8ab888c115793311] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/MatrixDecomposer;Z)V");
                mids$[mid_getDecomposer_6715228bb9fc3272] = env->getMethodID(cls, "getDecomposer", "()Lorg/hipparchus/linear/MatrixDecomposer;");
                mids$[mid_isFormNormalEquations_89b302893bdbe1f1] = env->getMethodID(cls, "isFormNormalEquations", "()Z");
                mids$[mid_optimize_07184cacaaa6a451] = env->getMethodID(cls, "optimize", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum;");
                mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
                mids$[mid_withDecomposer_a87eafbb47a48152] = env->getMethodID(cls, "withDecomposer", "(Lorg/hipparchus/linear/MatrixDecomposer;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/GaussNewtonOptimizer;");
                mids$[mid_withFormNormalEquations_465ad36aa0b87989] = env->getMethodID(cls, "withFormNormalEquations", "(Z)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/GaussNewtonOptimizer;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GaussNewtonOptimizer::GaussNewtonOptimizer() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            GaussNewtonOptimizer::GaussNewtonOptimizer(const ::org::hipparchus::linear::MatrixDecomposer & a0, jboolean a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8ab888c115793311, a0.this$, a1)) {}

            ::org::hipparchus::linear::MatrixDecomposer GaussNewtonOptimizer::getDecomposer() const
            {
              return ::org::hipparchus::linear::MatrixDecomposer(env->callObjectMethod(this$, mids$[mid_getDecomposer_6715228bb9fc3272]));
            }

            jboolean GaussNewtonOptimizer::isFormNormalEquations() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isFormNormalEquations_89b302893bdbe1f1]);
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum GaussNewtonOptimizer::optimize(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem & a0) const
            {
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum(env->callObjectMethod(this$, mids$[mid_optimize_07184cacaaa6a451], a0.this$));
            }

            ::java::lang::String GaussNewtonOptimizer::toString() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
            }

            GaussNewtonOptimizer GaussNewtonOptimizer::withDecomposer(const ::org::hipparchus::linear::MatrixDecomposer & a0) const
            {
              return GaussNewtonOptimizer(env->callObjectMethod(this$, mids$[mid_withDecomposer_a87eafbb47a48152], a0.this$));
            }

            GaussNewtonOptimizer GaussNewtonOptimizer::withFormNormalEquations(jboolean a0) const
            {
              return GaussNewtonOptimizer(env->callObjectMethod(this$, mids$[mid_withFormNormalEquations_465ad36aa0b87989], a0));
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
            static PyObject *t_GaussNewtonOptimizer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GaussNewtonOptimizer_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GaussNewtonOptimizer_init_(t_GaussNewtonOptimizer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GaussNewtonOptimizer_getDecomposer(t_GaussNewtonOptimizer *self);
            static PyObject *t_GaussNewtonOptimizer_isFormNormalEquations(t_GaussNewtonOptimizer *self);
            static PyObject *t_GaussNewtonOptimizer_optimize(t_GaussNewtonOptimizer *self, PyObject *arg);
            static PyObject *t_GaussNewtonOptimizer_toString(t_GaussNewtonOptimizer *self, PyObject *args);
            static PyObject *t_GaussNewtonOptimizer_withDecomposer(t_GaussNewtonOptimizer *self, PyObject *arg);
            static PyObject *t_GaussNewtonOptimizer_withFormNormalEquations(t_GaussNewtonOptimizer *self, PyObject *arg);
            static PyObject *t_GaussNewtonOptimizer_get__decomposer(t_GaussNewtonOptimizer *self, void *data);
            static PyObject *t_GaussNewtonOptimizer_get__formNormalEquations(t_GaussNewtonOptimizer *self, void *data);
            static PyGetSetDef t_GaussNewtonOptimizer__fields_[] = {
              DECLARE_GET_FIELD(t_GaussNewtonOptimizer, decomposer),
              DECLARE_GET_FIELD(t_GaussNewtonOptimizer, formNormalEquations),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GaussNewtonOptimizer__methods_[] = {
              DECLARE_METHOD(t_GaussNewtonOptimizer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GaussNewtonOptimizer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GaussNewtonOptimizer, getDecomposer, METH_NOARGS),
              DECLARE_METHOD(t_GaussNewtonOptimizer, isFormNormalEquations, METH_NOARGS),
              DECLARE_METHOD(t_GaussNewtonOptimizer, optimize, METH_O),
              DECLARE_METHOD(t_GaussNewtonOptimizer, toString, METH_VARARGS),
              DECLARE_METHOD(t_GaussNewtonOptimizer, withDecomposer, METH_O),
              DECLARE_METHOD(t_GaussNewtonOptimizer, withFormNormalEquations, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GaussNewtonOptimizer)[] = {
              { Py_tp_methods, t_GaussNewtonOptimizer__methods_ },
              { Py_tp_init, (void *) t_GaussNewtonOptimizer_init_ },
              { Py_tp_getset, t_GaussNewtonOptimizer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GaussNewtonOptimizer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(GaussNewtonOptimizer, t_GaussNewtonOptimizer, GaussNewtonOptimizer);

            void t_GaussNewtonOptimizer::install(PyObject *module)
            {
              installType(&PY_TYPE(GaussNewtonOptimizer), &PY_TYPE_DEF(GaussNewtonOptimizer), module, "GaussNewtonOptimizer", 0);
            }

            void t_GaussNewtonOptimizer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GaussNewtonOptimizer), "class_", make_descriptor(GaussNewtonOptimizer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GaussNewtonOptimizer), "wrapfn_", make_descriptor(t_GaussNewtonOptimizer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GaussNewtonOptimizer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GaussNewtonOptimizer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GaussNewtonOptimizer::initializeClass, 1)))
                return NULL;
              return t_GaussNewtonOptimizer::wrap_Object(GaussNewtonOptimizer(((t_GaussNewtonOptimizer *) arg)->object.this$));
            }
            static PyObject *t_GaussNewtonOptimizer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GaussNewtonOptimizer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GaussNewtonOptimizer_init_(t_GaussNewtonOptimizer *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  GaussNewtonOptimizer object((jobject) NULL);

                  INT_CALL(object = GaussNewtonOptimizer());
                  self->object = object;
                  break;
                }
               case 2:
                {
                  ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
                  jboolean a1;
                  GaussNewtonOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "kZ", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, &a0, &a1))
                  {
                    INT_CALL(object = GaussNewtonOptimizer(a0, a1));
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

            static PyObject *t_GaussNewtonOptimizer_getDecomposer(t_GaussNewtonOptimizer *self)
            {
              ::org::hipparchus::linear::MatrixDecomposer result((jobject) NULL);
              OBJ_CALL(result = self->object.getDecomposer());
              return ::org::hipparchus::linear::t_MatrixDecomposer::wrap_Object(result);
            }

            static PyObject *t_GaussNewtonOptimizer_isFormNormalEquations(t_GaussNewtonOptimizer *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.isFormNormalEquations());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_GaussNewtonOptimizer_optimize(t_GaussNewtonOptimizer *self, PyObject *arg)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem a0((jobject) NULL);
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.optimize(a0));
                return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresOptimizer$Optimum::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "optimize", arg);
              return NULL;
            }

            static PyObject *t_GaussNewtonOptimizer_toString(t_GaussNewtonOptimizer *self, PyObject *args)
            {
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.toString());
                return j2p(result);
              }

              return callSuper(PY_TYPE(GaussNewtonOptimizer), (PyObject *) self, "toString", args, 2);
            }

            static PyObject *t_GaussNewtonOptimizer_withDecomposer(t_GaussNewtonOptimizer *self, PyObject *arg)
            {
              ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
              GaussNewtonOptimizer result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.withDecomposer(a0));
                return t_GaussNewtonOptimizer::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "withDecomposer", arg);
              return NULL;
            }

            static PyObject *t_GaussNewtonOptimizer_withFormNormalEquations(t_GaussNewtonOptimizer *self, PyObject *arg)
            {
              jboolean a0;
              GaussNewtonOptimizer result((jobject) NULL);

              if (!parseArg(arg, "Z", &a0))
              {
                OBJ_CALL(result = self->object.withFormNormalEquations(a0));
                return t_GaussNewtonOptimizer::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "withFormNormalEquations", arg);
              return NULL;
            }

            static PyObject *t_GaussNewtonOptimizer_get__decomposer(t_GaussNewtonOptimizer *self, void *data)
            {
              ::org::hipparchus::linear::MatrixDecomposer value((jobject) NULL);
              OBJ_CALL(value = self->object.getDecomposer());
              return ::org::hipparchus::linear::t_MatrixDecomposer::wrap_Object(value);
            }

            static PyObject *t_GaussNewtonOptimizer_get__formNormalEquations(t_GaussNewtonOptimizer *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.isFormNormalEquations());
              Py_RETURN_BOOL(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/StateVectorWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/StateVector.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *StateVectorWriter::class$ = NULL;
            jmethodID *StateVectorWriter::mids$ = NULL;
            bool StateVectorWriter::live$ = false;

            jclass StateVectorWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/StateVectorWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_d3ab54e0c6c19171] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/files/ccsds/ndm/odm/StateVector;Lorg/orekit/files/ccsds/definitions/TimeConverter;)V");
                mids$[mid_writeContent_0503da09b1f1eb3c] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            StateVectorWriter::StateVectorWriter(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::files::ccsds::ndm::odm::StateVector & a2, const ::org::orekit::files::ccsds::definitions::TimeConverter & a3) : ::org::orekit::files::ccsds::section::AbstractWriter(env->newObject(initializeClass, &mids$, mid_init$_d3ab54e0c6c19171, a0.this$, a1.this$, a2.this$, a3.this$)) {}
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
            static PyObject *t_StateVectorWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_StateVectorWriter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_StateVectorWriter_init_(t_StateVectorWriter *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_StateVectorWriter__methods_[] = {
              DECLARE_METHOD(t_StateVectorWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_StateVectorWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(StateVectorWriter)[] = {
              { Py_tp_methods, t_StateVectorWriter__methods_ },
              { Py_tp_init, (void *) t_StateVectorWriter_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(StateVectorWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(StateVectorWriter, t_StateVectorWriter, StateVectorWriter);

            void t_StateVectorWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(StateVectorWriter), &PY_TYPE_DEF(StateVectorWriter), module, "StateVectorWriter", 0);
            }

            void t_StateVectorWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorWriter), "class_", make_descriptor(StateVectorWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorWriter), "wrapfn_", make_descriptor(t_StateVectorWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_StateVectorWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, StateVectorWriter::initializeClass, 1)))
                return NULL;
              return t_StateVectorWriter::wrap_Object(StateVectorWriter(((t_StateVectorWriter *) arg)->object.this$));
            }
            static PyObject *t_StateVectorWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, StateVectorWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_StateVectorWriter_init_(t_StateVectorWriter *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::odm::StateVector a2((jobject) NULL);
              ::org::orekit::files::ccsds::definitions::TimeConverter a3((jobject) NULL);
              StateVectorWriter object((jobject) NULL);

              if (!parseArgs(args, "sskk", ::org::orekit::files::ccsds::ndm::odm::StateVector::initializeClass, ::org::orekit::files::ccsds::definitions::TimeConverter::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = StateVectorWriter(a0, a1, a2, a3));
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
#include "org/orekit/rugged/errors/RuggedInternalError.h"
#include "java/util/Locale.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/exception/LocalizedException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {

        ::java::lang::Class *RuggedInternalError::class$ = NULL;
        jmethodID *RuggedInternalError::mids$ = NULL;
        bool RuggedInternalError::live$ = false;

        jclass RuggedInternalError::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/errors/RuggedInternalError");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7d9320fd2ea36122] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
            mids$[mid_getLocalizedMessage_3cffd47377eca18a] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
            mids$[mid_getMessage_3cffd47377eca18a] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
            mids$[mid_getMessage_4b51060c6b7ea981] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
            mids$[mid_getParts_6555a5198c71b73a] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
            mids$[mid_getSpecifier_a86d7419cf3241b7] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RuggedInternalError::RuggedInternalError(const ::java::lang::Throwable & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_7d9320fd2ea36122, a0.this$)) {}

        ::java::lang::String RuggedInternalError::getLocalizedMessage() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_3cffd47377eca18a]));
        }

        ::java::lang::String RuggedInternalError::getMessage() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_3cffd47377eca18a]));
        }

        ::java::lang::String RuggedInternalError::getMessage(const ::java::util::Locale & a0) const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_4b51060c6b7ea981], a0.this$));
        }

        JArray< ::java::lang::Object > RuggedInternalError::getParts() const
        {
          return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_6555a5198c71b73a]));
        }

        ::org::hipparchus::exception::Localizable RuggedInternalError::getSpecifier() const
        {
          return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_a86d7419cf3241b7]));
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
      namespace errors {
        static PyObject *t_RuggedInternalError_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RuggedInternalError_instance_(PyTypeObject *type, PyObject *arg);
        static int t_RuggedInternalError_init_(t_RuggedInternalError *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RuggedInternalError_getLocalizedMessage(t_RuggedInternalError *self, PyObject *args);
        static PyObject *t_RuggedInternalError_getMessage(t_RuggedInternalError *self, PyObject *args);
        static PyObject *t_RuggedInternalError_getParts(t_RuggedInternalError *self);
        static PyObject *t_RuggedInternalError_getSpecifier(t_RuggedInternalError *self);
        static PyObject *t_RuggedInternalError_get__localizedMessage(t_RuggedInternalError *self, void *data);
        static PyObject *t_RuggedInternalError_get__message(t_RuggedInternalError *self, void *data);
        static PyObject *t_RuggedInternalError_get__parts(t_RuggedInternalError *self, void *data);
        static PyObject *t_RuggedInternalError_get__specifier(t_RuggedInternalError *self, void *data);
        static PyGetSetDef t_RuggedInternalError__fields_[] = {
          DECLARE_GET_FIELD(t_RuggedInternalError, localizedMessage),
          DECLARE_GET_FIELD(t_RuggedInternalError, message),
          DECLARE_GET_FIELD(t_RuggedInternalError, parts),
          DECLARE_GET_FIELD(t_RuggedInternalError, specifier),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RuggedInternalError__methods_[] = {
          DECLARE_METHOD(t_RuggedInternalError, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedInternalError, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedInternalError, getLocalizedMessage, METH_VARARGS),
          DECLARE_METHOD(t_RuggedInternalError, getMessage, METH_VARARGS),
          DECLARE_METHOD(t_RuggedInternalError, getParts, METH_NOARGS),
          DECLARE_METHOD(t_RuggedInternalError, getSpecifier, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RuggedInternalError)[] = {
          { Py_tp_methods, t_RuggedInternalError__methods_ },
          { Py_tp_init, (void *) t_RuggedInternalError_init_ },
          { Py_tp_getset, t_RuggedInternalError__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RuggedInternalError)[] = {
          &PY_TYPE_DEF(::java::lang::RuntimeException),
          NULL
        };

        DEFINE_TYPE(RuggedInternalError, t_RuggedInternalError, RuggedInternalError);

        void t_RuggedInternalError::install(PyObject *module)
        {
          installType(&PY_TYPE(RuggedInternalError), &PY_TYPE_DEF(RuggedInternalError), module, "RuggedInternalError", 0);
        }

        void t_RuggedInternalError::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedInternalError), "class_", make_descriptor(RuggedInternalError::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedInternalError), "wrapfn_", make_descriptor(t_RuggedInternalError::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedInternalError), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RuggedInternalError_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RuggedInternalError::initializeClass, 1)))
            return NULL;
          return t_RuggedInternalError::wrap_Object(RuggedInternalError(((t_RuggedInternalError *) arg)->object.this$));
        }
        static PyObject *t_RuggedInternalError_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RuggedInternalError::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_RuggedInternalError_init_(t_RuggedInternalError *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::Throwable a0((jobject) NULL);
          RuggedInternalError object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
          {
            INT_CALL(object = RuggedInternalError(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_RuggedInternalError_getLocalizedMessage(t_RuggedInternalError *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getLocalizedMessage());
            return j2p(result);
          }

          return callSuper(PY_TYPE(RuggedInternalError), (PyObject *) self, "getLocalizedMessage", args, 2);
        }

        static PyObject *t_RuggedInternalError_getMessage(t_RuggedInternalError *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getMessage());
              return j2p(result);
            }
            break;
           case 1:
            {
              ::java::util::Locale a0((jobject) NULL);
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getMessage(a0));
                return j2p(result);
              }
            }
          }

          return callSuper(PY_TYPE(RuggedInternalError), (PyObject *) self, "getMessage", args, 2);
        }

        static PyObject *t_RuggedInternalError_getParts(t_RuggedInternalError *self)
        {
          JArray< ::java::lang::Object > result((jobject) NULL);
          OBJ_CALL(result = self->object.getParts());
          return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
        }

        static PyObject *t_RuggedInternalError_getSpecifier(t_RuggedInternalError *self)
        {
          ::org::hipparchus::exception::Localizable result((jobject) NULL);
          OBJ_CALL(result = self->object.getSpecifier());
          return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
        }

        static PyObject *t_RuggedInternalError_get__localizedMessage(t_RuggedInternalError *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getLocalizedMessage());
          return j2p(value);
        }

        static PyObject *t_RuggedInternalError_get__message(t_RuggedInternalError *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getMessage());
          return j2p(value);
        }

        static PyObject *t_RuggedInternalError_get__parts(t_RuggedInternalError *self, void *data)
        {
          JArray< ::java::lang::Object > value((jobject) NULL);
          OBJ_CALL(value = self->object.getParts());
          return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
        }

        static PyObject *t_RuggedInternalError_get__specifier(t_RuggedInternalError *self, void *data)
        {
          ::org::hipparchus::exception::Localizable value((jobject) NULL);
          OBJ_CALL(value = self->object.getSpecifier());
          return ::org::hipparchus::exception::t_Localizable::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/OrekitStepNormalizer.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/propagation/sampling/OrekitFixedStepHandler.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/sampling/OrekitStepHandler.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *OrekitStepNormalizer::class$ = NULL;
        jmethodID *OrekitStepNormalizer::mids$ = NULL;
        bool OrekitStepNormalizer::live$ = false;

        jclass OrekitStepNormalizer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/OrekitStepNormalizer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_53f2c5a5fdcdc0f4] = env->getMethodID(cls, "<init>", "(DLorg/orekit/propagation/sampling/OrekitFixedStepHandler;)V");
            mids$[mid_finish_8655761ebf04b503] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_getFixedStepHandler_85fd2e202487430e] = env->getMethodID(cls, "getFixedStepHandler", "()Lorg/orekit/propagation/sampling/OrekitFixedStepHandler;");
            mids$[mid_getFixedTimeStep_557b8123390d8d0c] = env->getMethodID(cls, "getFixedTimeStep", "()D");
            mids$[mid_handleStep_729a66b1e94503de] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/sampling/OrekitStepInterpolator;)V");
            mids$[mid_init_0472264ad6f40bc2] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OrekitStepNormalizer::OrekitStepNormalizer(jdouble a0, const ::org::orekit::propagation::sampling::OrekitFixedStepHandler & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_53f2c5a5fdcdc0f4, a0, a1.this$)) {}

        void OrekitStepNormalizer::finish(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_8655761ebf04b503], a0.this$);
        }

        ::org::orekit::propagation::sampling::OrekitFixedStepHandler OrekitStepNormalizer::getFixedStepHandler() const
        {
          return ::org::orekit::propagation::sampling::OrekitFixedStepHandler(env->callObjectMethod(this$, mids$[mid_getFixedStepHandler_85fd2e202487430e]));
        }

        jdouble OrekitStepNormalizer::getFixedTimeStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFixedTimeStep_557b8123390d8d0c]);
        }

        void OrekitStepNormalizer::handleStep(const ::org::orekit::propagation::sampling::OrekitStepInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_729a66b1e94503de], a0.this$);
        }

        void OrekitStepNormalizer::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_0472264ad6f40bc2], a0.this$, a1.this$);
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
      namespace sampling {
        static PyObject *t_OrekitStepNormalizer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitStepNormalizer_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OrekitStepNormalizer_init_(t_OrekitStepNormalizer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OrekitStepNormalizer_finish(t_OrekitStepNormalizer *self, PyObject *arg);
        static PyObject *t_OrekitStepNormalizer_getFixedStepHandler(t_OrekitStepNormalizer *self);
        static PyObject *t_OrekitStepNormalizer_getFixedTimeStep(t_OrekitStepNormalizer *self);
        static PyObject *t_OrekitStepNormalizer_handleStep(t_OrekitStepNormalizer *self, PyObject *arg);
        static PyObject *t_OrekitStepNormalizer_init(t_OrekitStepNormalizer *self, PyObject *args);
        static PyObject *t_OrekitStepNormalizer_get__fixedStepHandler(t_OrekitStepNormalizer *self, void *data);
        static PyObject *t_OrekitStepNormalizer_get__fixedTimeStep(t_OrekitStepNormalizer *self, void *data);
        static PyGetSetDef t_OrekitStepNormalizer__fields_[] = {
          DECLARE_GET_FIELD(t_OrekitStepNormalizer, fixedStepHandler),
          DECLARE_GET_FIELD(t_OrekitStepNormalizer, fixedTimeStep),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_OrekitStepNormalizer__methods_[] = {
          DECLARE_METHOD(t_OrekitStepNormalizer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitStepNormalizer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitStepNormalizer, finish, METH_O),
          DECLARE_METHOD(t_OrekitStepNormalizer, getFixedStepHandler, METH_NOARGS),
          DECLARE_METHOD(t_OrekitStepNormalizer, getFixedTimeStep, METH_NOARGS),
          DECLARE_METHOD(t_OrekitStepNormalizer, handleStep, METH_O),
          DECLARE_METHOD(t_OrekitStepNormalizer, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OrekitStepNormalizer)[] = {
          { Py_tp_methods, t_OrekitStepNormalizer__methods_ },
          { Py_tp_init, (void *) t_OrekitStepNormalizer_init_ },
          { Py_tp_getset, t_OrekitStepNormalizer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OrekitStepNormalizer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OrekitStepNormalizer, t_OrekitStepNormalizer, OrekitStepNormalizer);

        void t_OrekitStepNormalizer::install(PyObject *module)
        {
          installType(&PY_TYPE(OrekitStepNormalizer), &PY_TYPE_DEF(OrekitStepNormalizer), module, "OrekitStepNormalizer", 0);
        }

        void t_OrekitStepNormalizer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitStepNormalizer), "class_", make_descriptor(OrekitStepNormalizer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitStepNormalizer), "wrapfn_", make_descriptor(t_OrekitStepNormalizer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitStepNormalizer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OrekitStepNormalizer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OrekitStepNormalizer::initializeClass, 1)))
            return NULL;
          return t_OrekitStepNormalizer::wrap_Object(OrekitStepNormalizer(((t_OrekitStepNormalizer *) arg)->object.this$));
        }
        static PyObject *t_OrekitStepNormalizer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OrekitStepNormalizer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OrekitStepNormalizer_init_(t_OrekitStepNormalizer *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ::org::orekit::propagation::sampling::OrekitFixedStepHandler a1((jobject) NULL);
          OrekitStepNormalizer object((jobject) NULL);

          if (!parseArgs(args, "Dk", ::org::orekit::propagation::sampling::OrekitFixedStepHandler::initializeClass, &a0, &a1))
          {
            INT_CALL(object = OrekitStepNormalizer(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_OrekitStepNormalizer_finish(t_OrekitStepNormalizer *self, PyObject *arg)
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

        static PyObject *t_OrekitStepNormalizer_getFixedStepHandler(t_OrekitStepNormalizer *self)
        {
          ::org::orekit::propagation::sampling::OrekitFixedStepHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getFixedStepHandler());
          return ::org::orekit::propagation::sampling::t_OrekitFixedStepHandler::wrap_Object(result);
        }

        static PyObject *t_OrekitStepNormalizer_getFixedTimeStep(t_OrekitStepNormalizer *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getFixedTimeStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_OrekitStepNormalizer_handleStep(t_OrekitStepNormalizer *self, PyObject *arg)
        {
          ::org::orekit::propagation::sampling::OrekitStepInterpolator a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::sampling::OrekitStepInterpolator::initializeClass, &a0))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_OrekitStepNormalizer_init(t_OrekitStepNormalizer *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_OrekitStepNormalizer_get__fixedStepHandler(t_OrekitStepNormalizer *self, void *data)
        {
          ::org::orekit::propagation::sampling::OrekitFixedStepHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getFixedStepHandler());
          return ::org::orekit::propagation::sampling::t_OrekitFixedStepHandler::wrap_Object(value);
        }

        static PyObject *t_OrekitStepNormalizer_get__fixedTimeStep(t_OrekitStepNormalizer *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getFixedTimeStep());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/filtering/kalman/KalmanFilter.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
#include "java/lang/Class.h"
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
            mids$[mid_estimationStep_8438f0b1b3460266] = env->getMethodID(cls, "estimationStep", "(Lorg/hipparchus/filtering/kalman/Measurement;)Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
            mids$[mid_getCorrected_55b445719d7de2a7] = env->getMethodID(cls, "getCorrected", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
            mids$[mid_getPredicted_55b445719d7de2a7] = env->getMethodID(cls, "getPredicted", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::filtering::kalman::ProcessEstimate KalmanFilter::estimationStep(const ::org::hipparchus::filtering::kalman::Measurement & a0) const
        {
          return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_estimationStep_8438f0b1b3460266], a0.this$));
        }

        ::org::hipparchus::filtering::kalman::ProcessEstimate KalmanFilter::getCorrected() const
        {
          return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getCorrected_55b445719d7de2a7]));
        }

        ::org::hipparchus::filtering::kalman::ProcessEstimate KalmanFilter::getPredicted() const
        {
          return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getPredicted_55b445719d7de2a7]));
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
#include "org/orekit/propagation/analytical/gnss/data/GPSAlmanac.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSClockElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GPSAlmanac::class$ = NULL;
            jmethodID *GPSAlmanac::mids$ = NULL;
            bool GPSAlmanac::live$ = false;

            jclass GPSAlmanac::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GPSAlmanac");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getHealth_412668abc8d889e9] = env->getMethodID(cls, "getHealth", "()I");
                mids$[mid_getSVN_412668abc8d889e9] = env->getMethodID(cls, "getSVN", "()I");
                mids$[mid_getSatConfiguration_412668abc8d889e9] = env->getMethodID(cls, "getSatConfiguration", "()I");
                mids$[mid_getSource_3cffd47377eca18a] = env->getMethodID(cls, "getSource", "()Ljava/lang/String;");
                mids$[mid_getTGD_557b8123390d8d0c] = env->getMethodID(cls, "getTGD", "()D");
                mids$[mid_getURA_412668abc8d889e9] = env->getMethodID(cls, "getURA", "()I");
                mids$[mid_setHealth_a3da1a935cb37f7b] = env->getMethodID(cls, "setHealth", "(I)V");
                mids$[mid_setSVN_a3da1a935cb37f7b] = env->getMethodID(cls, "setSVN", "(I)V");
                mids$[mid_setSatConfiguration_a3da1a935cb37f7b] = env->getMethodID(cls, "setSatConfiguration", "(I)V");
                mids$[mid_setSource_f5ffdf29129ef90a] = env->getMethodID(cls, "setSource", "(Ljava/lang/String;)V");
                mids$[mid_setSqrtA_10f281d777284cea] = env->getMethodID(cls, "setSqrtA", "(D)V");
                mids$[mid_setURA_a3da1a935cb37f7b] = env->getMethodID(cls, "setURA", "(I)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GPSAlmanac::GPSAlmanac() : ::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            jint GPSAlmanac::getHealth() const
            {
              return env->callIntMethod(this$, mids$[mid_getHealth_412668abc8d889e9]);
            }

            jint GPSAlmanac::getSVN() const
            {
              return env->callIntMethod(this$, mids$[mid_getSVN_412668abc8d889e9]);
            }

            jint GPSAlmanac::getSatConfiguration() const
            {
              return env->callIntMethod(this$, mids$[mid_getSatConfiguration_412668abc8d889e9]);
            }

            ::java::lang::String GPSAlmanac::getSource() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSource_3cffd47377eca18a]));
            }

            jdouble GPSAlmanac::getTGD() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTGD_557b8123390d8d0c]);
            }

            jint GPSAlmanac::getURA() const
            {
              return env->callIntMethod(this$, mids$[mid_getURA_412668abc8d889e9]);
            }

            void GPSAlmanac::setHealth(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHealth_a3da1a935cb37f7b], a0);
            }

            void GPSAlmanac::setSVN(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSVN_a3da1a935cb37f7b], a0);
            }

            void GPSAlmanac::setSatConfiguration(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSatConfiguration_a3da1a935cb37f7b], a0);
            }

            void GPSAlmanac::setSource(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSource_f5ffdf29129ef90a], a0.this$);
            }

            void GPSAlmanac::setSqrtA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSqrtA_10f281d777284cea], a0);
            }

            void GPSAlmanac::setURA(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setURA_a3da1a935cb37f7b], a0);
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
      namespace analytical {
        namespace gnss {
          namespace data {
            static PyObject *t_GPSAlmanac_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GPSAlmanac_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GPSAlmanac_init_(t_GPSAlmanac *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GPSAlmanac_getHealth(t_GPSAlmanac *self);
            static PyObject *t_GPSAlmanac_getSVN(t_GPSAlmanac *self);
            static PyObject *t_GPSAlmanac_getSatConfiguration(t_GPSAlmanac *self);
            static PyObject *t_GPSAlmanac_getSource(t_GPSAlmanac *self);
            static PyObject *t_GPSAlmanac_getTGD(t_GPSAlmanac *self);
            static PyObject *t_GPSAlmanac_getURA(t_GPSAlmanac *self);
            static PyObject *t_GPSAlmanac_setHealth(t_GPSAlmanac *self, PyObject *arg);
            static PyObject *t_GPSAlmanac_setSVN(t_GPSAlmanac *self, PyObject *arg);
            static PyObject *t_GPSAlmanac_setSatConfiguration(t_GPSAlmanac *self, PyObject *arg);
            static PyObject *t_GPSAlmanac_setSource(t_GPSAlmanac *self, PyObject *arg);
            static PyObject *t_GPSAlmanac_setSqrtA(t_GPSAlmanac *self, PyObject *arg);
            static PyObject *t_GPSAlmanac_setURA(t_GPSAlmanac *self, PyObject *arg);
            static PyObject *t_GPSAlmanac_get__health(t_GPSAlmanac *self, void *data);
            static int t_GPSAlmanac_set__health(t_GPSAlmanac *self, PyObject *arg, void *data);
            static PyObject *t_GPSAlmanac_get__sVN(t_GPSAlmanac *self, void *data);
            static int t_GPSAlmanac_set__sVN(t_GPSAlmanac *self, PyObject *arg, void *data);
            static PyObject *t_GPSAlmanac_get__satConfiguration(t_GPSAlmanac *self, void *data);
            static int t_GPSAlmanac_set__satConfiguration(t_GPSAlmanac *self, PyObject *arg, void *data);
            static PyObject *t_GPSAlmanac_get__source(t_GPSAlmanac *self, void *data);
            static int t_GPSAlmanac_set__source(t_GPSAlmanac *self, PyObject *arg, void *data);
            static int t_GPSAlmanac_set__sqrtA(t_GPSAlmanac *self, PyObject *arg, void *data);
            static PyObject *t_GPSAlmanac_get__tGD(t_GPSAlmanac *self, void *data);
            static PyObject *t_GPSAlmanac_get__uRA(t_GPSAlmanac *self, void *data);
            static int t_GPSAlmanac_set__uRA(t_GPSAlmanac *self, PyObject *arg, void *data);
            static PyGetSetDef t_GPSAlmanac__fields_[] = {
              DECLARE_GETSET_FIELD(t_GPSAlmanac, health),
              DECLARE_GETSET_FIELD(t_GPSAlmanac, sVN),
              DECLARE_GETSET_FIELD(t_GPSAlmanac, satConfiguration),
              DECLARE_GETSET_FIELD(t_GPSAlmanac, source),
              DECLARE_SET_FIELD(t_GPSAlmanac, sqrtA),
              DECLARE_GET_FIELD(t_GPSAlmanac, tGD),
              DECLARE_GETSET_FIELD(t_GPSAlmanac, uRA),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GPSAlmanac__methods_[] = {
              DECLARE_METHOD(t_GPSAlmanac, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GPSAlmanac, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GPSAlmanac, getHealth, METH_NOARGS),
              DECLARE_METHOD(t_GPSAlmanac, getSVN, METH_NOARGS),
              DECLARE_METHOD(t_GPSAlmanac, getSatConfiguration, METH_NOARGS),
              DECLARE_METHOD(t_GPSAlmanac, getSource, METH_NOARGS),
              DECLARE_METHOD(t_GPSAlmanac, getTGD, METH_NOARGS),
              DECLARE_METHOD(t_GPSAlmanac, getURA, METH_NOARGS),
              DECLARE_METHOD(t_GPSAlmanac, setHealth, METH_O),
              DECLARE_METHOD(t_GPSAlmanac, setSVN, METH_O),
              DECLARE_METHOD(t_GPSAlmanac, setSatConfiguration, METH_O),
              DECLARE_METHOD(t_GPSAlmanac, setSource, METH_O),
              DECLARE_METHOD(t_GPSAlmanac, setSqrtA, METH_O),
              DECLARE_METHOD(t_GPSAlmanac, setURA, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GPSAlmanac)[] = {
              { Py_tp_methods, t_GPSAlmanac__methods_ },
              { Py_tp_init, (void *) t_GPSAlmanac_init_ },
              { Py_tp_getset, t_GPSAlmanac__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GPSAlmanac)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac),
              NULL
            };

            DEFINE_TYPE(GPSAlmanac, t_GPSAlmanac, GPSAlmanac);

            void t_GPSAlmanac::install(PyObject *module)
            {
              installType(&PY_TYPE(GPSAlmanac), &PY_TYPE_DEF(GPSAlmanac), module, "GPSAlmanac", 0);
            }

            void t_GPSAlmanac::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GPSAlmanac), "class_", make_descriptor(GPSAlmanac::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GPSAlmanac), "wrapfn_", make_descriptor(t_GPSAlmanac::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GPSAlmanac), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GPSAlmanac_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GPSAlmanac::initializeClass, 1)))
                return NULL;
              return t_GPSAlmanac::wrap_Object(GPSAlmanac(((t_GPSAlmanac *) arg)->object.this$));
            }
            static PyObject *t_GPSAlmanac_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GPSAlmanac::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GPSAlmanac_init_(t_GPSAlmanac *self, PyObject *args, PyObject *kwds)
            {
              GPSAlmanac object((jobject) NULL);

              INT_CALL(object = GPSAlmanac());
              self->object = object;

              return 0;
            }

            static PyObject *t_GPSAlmanac_getHealth(t_GPSAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getHealth());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GPSAlmanac_getSVN(t_GPSAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSVN());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GPSAlmanac_getSatConfiguration(t_GPSAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSatConfiguration());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GPSAlmanac_getSource(t_GPSAlmanac *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getSource());
              return j2p(result);
            }

            static PyObject *t_GPSAlmanac_getTGD(t_GPSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTGD());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GPSAlmanac_getURA(t_GPSAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getURA());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GPSAlmanac_setHealth(t_GPSAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setHealth(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setHealth", arg);
              return NULL;
            }

            static PyObject *t_GPSAlmanac_setSVN(t_GPSAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSVN(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSVN", arg);
              return NULL;
            }

            static PyObject *t_GPSAlmanac_setSatConfiguration(t_GPSAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSatConfiguration(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSatConfiguration", arg);
              return NULL;
            }

            static PyObject *t_GPSAlmanac_setSource(t_GPSAlmanac *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setSource(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSource", arg);
              return NULL;
            }

            static PyObject *t_GPSAlmanac_setSqrtA(t_GPSAlmanac *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSqrtA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSqrtA", arg);
              return NULL;
            }

            static PyObject *t_GPSAlmanac_setURA(t_GPSAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setURA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setURA", arg);
              return NULL;
            }

            static PyObject *t_GPSAlmanac_get__health(t_GPSAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getHealth());
              return PyLong_FromLong((long) value);
            }
            static int t_GPSAlmanac_set__health(t_GPSAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setHealth(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "health", arg);
              return -1;
            }

            static PyObject *t_GPSAlmanac_get__sVN(t_GPSAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSVN());
              return PyLong_FromLong((long) value);
            }
            static int t_GPSAlmanac_set__sVN(t_GPSAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSVN(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sVN", arg);
              return -1;
            }

            static PyObject *t_GPSAlmanac_get__satConfiguration(t_GPSAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSatConfiguration());
              return PyLong_FromLong((long) value);
            }
            static int t_GPSAlmanac_set__satConfiguration(t_GPSAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSatConfiguration(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "satConfiguration", arg);
              return -1;
            }

            static PyObject *t_GPSAlmanac_get__source(t_GPSAlmanac *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getSource());
              return j2p(value);
            }
            static int t_GPSAlmanac_set__source(t_GPSAlmanac *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setSource(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "source", arg);
              return -1;
            }

            static int t_GPSAlmanac_set__sqrtA(t_GPSAlmanac *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSqrtA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sqrtA", arg);
              return -1;
            }

            static PyObject *t_GPSAlmanac_get__tGD(t_GPSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTGD());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GPSAlmanac_get__uRA(t_GPSAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getURA());
              return PyLong_FromLong((long) value);
            }
            static int t_GPSAlmanac_set__uRA(t_GPSAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setURA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "uRA", arg);
              return -1;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/spherical/twod/Sphere2D.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "org/hipparchus/geometry/spherical/twod/Sphere2D.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Space.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {

          ::java::lang::Class *Sphere2D::class$ = NULL;
          jmethodID *Sphere2D::mids$ = NULL;
          bool Sphere2D::live$ = false;
          jdouble Sphere2D::SMALLEST_TOLERANCE = (jdouble) 0;

          jclass Sphere2D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/twod/Sphere2D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_checkTolerance_10f281d777284cea] = env->getStaticMethodID(cls, "checkTolerance", "(D)V");
              mids$[mid_getDimension_412668abc8d889e9] = env->getMethodID(cls, "getDimension", "()I");
              mids$[mid_getInstance_4455c3f474f340d7] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/geometry/spherical/twod/Sphere2D;");
              mids$[mid_getSubSpace_1c4d3de89e8bc553] = env->getMethodID(cls, "getSubSpace", "()Lorg/hipparchus/geometry/spherical/oned/Sphere1D;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              SMALLEST_TOLERANCE = env->getStaticDoubleField(cls, "SMALLEST_TOLERANCE");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void Sphere2D::checkTolerance(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            env->callStaticVoidMethod(cls, mids$[mid_checkTolerance_10f281d777284cea], a0);
          }

          jint Sphere2D::getDimension() const
          {
            return env->callIntMethod(this$, mids$[mid_getDimension_412668abc8d889e9]);
          }

          Sphere2D Sphere2D::getInstance()
          {
            jclass cls = env->getClass(initializeClass);
            return Sphere2D(env->callStaticObjectMethod(cls, mids$[mid_getInstance_4455c3f474f340d7]));
          }

          ::org::hipparchus::geometry::spherical::oned::Sphere1D Sphere2D::getSubSpace() const
          {
            return ::org::hipparchus::geometry::spherical::oned::Sphere1D(env->callObjectMethod(this$, mids$[mid_getSubSpace_1c4d3de89e8bc553]));
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
      namespace spherical {
        namespace twod {
          static PyObject *t_Sphere2D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Sphere2D_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Sphere2D_checkTolerance(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Sphere2D_getDimension(t_Sphere2D *self);
          static PyObject *t_Sphere2D_getInstance(PyTypeObject *type);
          static PyObject *t_Sphere2D_getSubSpace(t_Sphere2D *self);
          static PyObject *t_Sphere2D_get__dimension(t_Sphere2D *self, void *data);
          static PyObject *t_Sphere2D_get__instance(t_Sphere2D *self, void *data);
          static PyObject *t_Sphere2D_get__subSpace(t_Sphere2D *self, void *data);
          static PyGetSetDef t_Sphere2D__fields_[] = {
            DECLARE_GET_FIELD(t_Sphere2D, dimension),
            DECLARE_GET_FIELD(t_Sphere2D, instance),
            DECLARE_GET_FIELD(t_Sphere2D, subSpace),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Sphere2D__methods_[] = {
            DECLARE_METHOD(t_Sphere2D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Sphere2D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Sphere2D, checkTolerance, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Sphere2D, getDimension, METH_NOARGS),
            DECLARE_METHOD(t_Sphere2D, getInstance, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_Sphere2D, getSubSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Sphere2D)[] = {
            { Py_tp_methods, t_Sphere2D__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Sphere2D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Sphere2D)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Sphere2D, t_Sphere2D, Sphere2D);

          void t_Sphere2D::install(PyObject *module)
          {
            installType(&PY_TYPE(Sphere2D), &PY_TYPE_DEF(Sphere2D), module, "Sphere2D", 0);
          }

          void t_Sphere2D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere2D), "class_", make_descriptor(Sphere2D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere2D), "wrapfn_", make_descriptor(t_Sphere2D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere2D), "boxfn_", make_descriptor(boxObject));
            env->getClass(Sphere2D::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere2D), "SMALLEST_TOLERANCE", make_descriptor(Sphere2D::SMALLEST_TOLERANCE));
          }

          static PyObject *t_Sphere2D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Sphere2D::initializeClass, 1)))
              return NULL;
            return t_Sphere2D::wrap_Object(Sphere2D(((t_Sphere2D *) arg)->object.this$));
          }
          static PyObject *t_Sphere2D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Sphere2D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Sphere2D_checkTolerance(PyTypeObject *type, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(::org::hipparchus::geometry::spherical::twod::Sphere2D::checkTolerance(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError(type, "checkTolerance", arg);
            return NULL;
          }

          static PyObject *t_Sphere2D_getDimension(t_Sphere2D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDimension());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_Sphere2D_getInstance(PyTypeObject *type)
          {
            Sphere2D result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::geometry::spherical::twod::Sphere2D::getInstance());
            return t_Sphere2D::wrap_Object(result);
          }

          static PyObject *t_Sphere2D_getSubSpace(t_Sphere2D *self)
          {
            ::org::hipparchus::geometry::spherical::oned::Sphere1D result((jobject) NULL);
            OBJ_CALL(result = self->object.getSubSpace());
            return ::org::hipparchus::geometry::spherical::oned::t_Sphere1D::wrap_Object(result);
          }

          static PyObject *t_Sphere2D_get__dimension(t_Sphere2D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDimension());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_Sphere2D_get__instance(t_Sphere2D *self, void *data)
          {
            Sphere2D value((jobject) NULL);
            OBJ_CALL(value = self->object.getInstance());
            return t_Sphere2D::wrap_Object(value);
          }

          static PyObject *t_Sphere2D_get__subSpace(t_Sphere2D *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::oned::Sphere1D value((jobject) NULL);
            OBJ_CALL(value = self->object.getSubSpace());
            return ::org::hipparchus::geometry::spherical::oned::t_Sphere1D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/SingleBodyRelativeAttraction.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/util/List.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *SingleBodyRelativeAttraction::class$ = NULL;
        jmethodID *SingleBodyRelativeAttraction::mids$ = NULL;
        bool SingleBodyRelativeAttraction::live$ = false;
        ::java::lang::String *SingleBodyRelativeAttraction::ATTRACTION_COEFFICIENT_SUFFIX = NULL;

        jclass SingleBodyRelativeAttraction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/SingleBodyRelativeAttraction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_971db345b01a6cfa] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;)V");
            mids$[mid_acceleration_b61fb59a041240c6] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_61944e27a39e8290] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_dependsOnPositionOnly_89b302893bdbe1f1] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ATTRACTION_COEFFICIENT_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "ATTRACTION_COEFFICIENT_SUFFIX", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SingleBodyRelativeAttraction::SingleBodyRelativeAttraction(const ::org::orekit::bodies::CelestialBody & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_971db345b01a6cfa, a0.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D SingleBodyRelativeAttraction::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_b61fb59a041240c6], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SingleBodyRelativeAttraction::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_61944e27a39e8290], a0.this$, a1.this$));
        }

        jboolean SingleBodyRelativeAttraction::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_89b302893bdbe1f1]);
        }

        ::java::util::List SingleBodyRelativeAttraction::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
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
        static PyObject *t_SingleBodyRelativeAttraction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SingleBodyRelativeAttraction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SingleBodyRelativeAttraction_init_(t_SingleBodyRelativeAttraction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SingleBodyRelativeAttraction_acceleration(t_SingleBodyRelativeAttraction *self, PyObject *args);
        static PyObject *t_SingleBodyRelativeAttraction_dependsOnPositionOnly(t_SingleBodyRelativeAttraction *self);
        static PyObject *t_SingleBodyRelativeAttraction_getParametersDrivers(t_SingleBodyRelativeAttraction *self);
        static PyObject *t_SingleBodyRelativeAttraction_get__parametersDrivers(t_SingleBodyRelativeAttraction *self, void *data);
        static PyGetSetDef t_SingleBodyRelativeAttraction__fields_[] = {
          DECLARE_GET_FIELD(t_SingleBodyRelativeAttraction, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SingleBodyRelativeAttraction__methods_[] = {
          DECLARE_METHOD(t_SingleBodyRelativeAttraction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SingleBodyRelativeAttraction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SingleBodyRelativeAttraction, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_SingleBodyRelativeAttraction, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_SingleBodyRelativeAttraction, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SingleBodyRelativeAttraction)[] = {
          { Py_tp_methods, t_SingleBodyRelativeAttraction__methods_ },
          { Py_tp_init, (void *) t_SingleBodyRelativeAttraction_init_ },
          { Py_tp_getset, t_SingleBodyRelativeAttraction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SingleBodyRelativeAttraction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SingleBodyRelativeAttraction, t_SingleBodyRelativeAttraction, SingleBodyRelativeAttraction);

        void t_SingleBodyRelativeAttraction::install(PyObject *module)
        {
          installType(&PY_TYPE(SingleBodyRelativeAttraction), &PY_TYPE_DEF(SingleBodyRelativeAttraction), module, "SingleBodyRelativeAttraction", 0);
        }

        void t_SingleBodyRelativeAttraction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SingleBodyRelativeAttraction), "class_", make_descriptor(SingleBodyRelativeAttraction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SingleBodyRelativeAttraction), "wrapfn_", make_descriptor(t_SingleBodyRelativeAttraction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SingleBodyRelativeAttraction), "boxfn_", make_descriptor(boxObject));
          env->getClass(SingleBodyRelativeAttraction::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SingleBodyRelativeAttraction), "ATTRACTION_COEFFICIENT_SUFFIX", make_descriptor(j2p(*SingleBodyRelativeAttraction::ATTRACTION_COEFFICIENT_SUFFIX)));
        }

        static PyObject *t_SingleBodyRelativeAttraction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SingleBodyRelativeAttraction::initializeClass, 1)))
            return NULL;
          return t_SingleBodyRelativeAttraction::wrap_Object(SingleBodyRelativeAttraction(((t_SingleBodyRelativeAttraction *) arg)->object.this$));
        }
        static PyObject *t_SingleBodyRelativeAttraction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SingleBodyRelativeAttraction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SingleBodyRelativeAttraction_init_(t_SingleBodyRelativeAttraction *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
          SingleBodyRelativeAttraction object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &a0))
          {
            INT_CALL(object = SingleBodyRelativeAttraction(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SingleBodyRelativeAttraction_acceleration(t_SingleBodyRelativeAttraction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "acceleration", args);
          return NULL;
        }

        static PyObject *t_SingleBodyRelativeAttraction_dependsOnPositionOnly(t_SingleBodyRelativeAttraction *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SingleBodyRelativeAttraction_getParametersDrivers(t_SingleBodyRelativeAttraction *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_SingleBodyRelativeAttraction_get__parametersDrivers(t_SingleBodyRelativeAttraction *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Power.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Power::class$ = NULL;
        jmethodID *Power::mids$ = NULL;
        bool Power::live$ = false;

        jclass Power::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Power");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_value_7e960cd6eee376d8] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_3eb2b84dba0ab7d2] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Power::Power(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        jdouble Power::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_7e960cd6eee376d8], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Power::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_3eb2b84dba0ab7d2], a0.this$));
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
        static PyObject *t_Power_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Power_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Power_init_(t_Power *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Power_value(t_Power *self, PyObject *args);

        static PyMethodDef t_Power__methods_[] = {
          DECLARE_METHOD(t_Power, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Power, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Power, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Power)[] = {
          { Py_tp_methods, t_Power__methods_ },
          { Py_tp_init, (void *) t_Power_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Power)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Power, t_Power, Power);

        void t_Power::install(PyObject *module)
        {
          installType(&PY_TYPE(Power), &PY_TYPE_DEF(Power), module, "Power", 0);
        }

        void t_Power::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Power), "class_", make_descriptor(Power::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Power), "wrapfn_", make_descriptor(t_Power::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Power), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Power_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Power::initializeClass, 1)))
            return NULL;
          return t_Power::wrap_Object(Power(((t_Power *) arg)->object.this$));
        }
        static PyObject *t_Power_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Power::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Power_init_(t_Power *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          Power object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = Power(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_Power_value(t_Power *self, PyObject *args)
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
