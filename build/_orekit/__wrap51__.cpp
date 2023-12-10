#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "org/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/StreamingStatistics.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *StreamingStatistics$StreamingStatisticsBuilder::class$ = NULL;
        jmethodID *StreamingStatistics$StreamingStatisticsBuilder::mids$ = NULL;
        bool StreamingStatistics$StreamingStatisticsBuilder::live$ = false;

        jclass StreamingStatistics$StreamingStatisticsBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_build_28f0324196bf3cb7] = env->getMethodID(cls, "build", "()Lorg/hipparchus/stat/descriptive/StreamingStatistics;");
            mids$[mid_extrema_41e9afe9c540b74b] = env->getMethodID(cls, "extrema", "(Z)Lorg/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder;");
            mids$[mid_moments_41e9afe9c540b74b] = env->getMethodID(cls, "moments", "(Z)Lorg/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder;");
            mids$[mid_percentiles_a4f2780f270a815f] = env->getMethodID(cls, "percentiles", "(DLorg/hipparchus/random/RandomGenerator;)Lorg/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder;");
            mids$[mid_sumOfLogs_41e9afe9c540b74b] = env->getMethodID(cls, "sumOfLogs", "(Z)Lorg/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder;");
            mids$[mid_sumOfSquares_41e9afe9c540b74b] = env->getMethodID(cls, "sumOfSquares", "(Z)Lorg/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StreamingStatistics$StreamingStatisticsBuilder::StreamingStatistics$StreamingStatisticsBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        ::org::hipparchus::stat::descriptive::StreamingStatistics StreamingStatistics$StreamingStatisticsBuilder::build() const
        {
          return ::org::hipparchus::stat::descriptive::StreamingStatistics(env->callObjectMethod(this$, mids$[mid_build_28f0324196bf3cb7]));
        }

        StreamingStatistics$StreamingStatisticsBuilder StreamingStatistics$StreamingStatisticsBuilder::extrema(jboolean a0) const
        {
          return StreamingStatistics$StreamingStatisticsBuilder(env->callObjectMethod(this$, mids$[mid_extrema_41e9afe9c540b74b], a0));
        }

        StreamingStatistics$StreamingStatisticsBuilder StreamingStatistics$StreamingStatisticsBuilder::moments(jboolean a0) const
        {
          return StreamingStatistics$StreamingStatisticsBuilder(env->callObjectMethod(this$, mids$[mid_moments_41e9afe9c540b74b], a0));
        }

        StreamingStatistics$StreamingStatisticsBuilder StreamingStatistics$StreamingStatisticsBuilder::percentiles(jdouble a0, const ::org::hipparchus::random::RandomGenerator & a1) const
        {
          return StreamingStatistics$StreamingStatisticsBuilder(env->callObjectMethod(this$, mids$[mid_percentiles_a4f2780f270a815f], a0, a1.this$));
        }

        StreamingStatistics$StreamingStatisticsBuilder StreamingStatistics$StreamingStatisticsBuilder::sumOfLogs(jboolean a0) const
        {
          return StreamingStatistics$StreamingStatisticsBuilder(env->callObjectMethod(this$, mids$[mid_sumOfLogs_41e9afe9c540b74b], a0));
        }

        StreamingStatistics$StreamingStatisticsBuilder StreamingStatistics$StreamingStatisticsBuilder::sumOfSquares(jboolean a0) const
        {
          return StreamingStatistics$StreamingStatisticsBuilder(env->callObjectMethod(this$, mids$[mid_sumOfSquares_41e9afe9c540b74b], a0));
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
        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_StreamingStatistics$StreamingStatisticsBuilder_init_(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_build(t_StreamingStatistics$StreamingStatisticsBuilder *self);
        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_extrema(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *arg);
        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_moments(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *arg);
        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_percentiles(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *args);
        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_sumOfLogs(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *arg);
        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_sumOfSquares(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *arg);

        static PyMethodDef t_StreamingStatistics$StreamingStatisticsBuilder__methods_[] = {
          DECLARE_METHOD(t_StreamingStatistics$StreamingStatisticsBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StreamingStatistics$StreamingStatisticsBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StreamingStatistics$StreamingStatisticsBuilder, build, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics$StreamingStatisticsBuilder, extrema, METH_O),
          DECLARE_METHOD(t_StreamingStatistics$StreamingStatisticsBuilder, moments, METH_O),
          DECLARE_METHOD(t_StreamingStatistics$StreamingStatisticsBuilder, percentiles, METH_VARARGS),
          DECLARE_METHOD(t_StreamingStatistics$StreamingStatisticsBuilder, sumOfLogs, METH_O),
          DECLARE_METHOD(t_StreamingStatistics$StreamingStatisticsBuilder, sumOfSquares, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StreamingStatistics$StreamingStatisticsBuilder)[] = {
          { Py_tp_methods, t_StreamingStatistics$StreamingStatisticsBuilder__methods_ },
          { Py_tp_init, (void *) t_StreamingStatistics$StreamingStatisticsBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StreamingStatistics$StreamingStatisticsBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StreamingStatistics$StreamingStatisticsBuilder, t_StreamingStatistics$StreamingStatisticsBuilder, StreamingStatistics$StreamingStatisticsBuilder);

        void t_StreamingStatistics$StreamingStatisticsBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(StreamingStatistics$StreamingStatisticsBuilder), &PY_TYPE_DEF(StreamingStatistics$StreamingStatisticsBuilder), module, "StreamingStatistics$StreamingStatisticsBuilder", 0);
        }

        void t_StreamingStatistics$StreamingStatisticsBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingStatistics$StreamingStatisticsBuilder), "class_", make_descriptor(StreamingStatistics$StreamingStatisticsBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingStatistics$StreamingStatisticsBuilder), "wrapfn_", make_descriptor(t_StreamingStatistics$StreamingStatisticsBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingStatistics$StreamingStatisticsBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StreamingStatistics$StreamingStatisticsBuilder::initializeClass, 1)))
            return NULL;
          return t_StreamingStatistics$StreamingStatisticsBuilder::wrap_Object(StreamingStatistics$StreamingStatisticsBuilder(((t_StreamingStatistics$StreamingStatisticsBuilder *) arg)->object.this$));
        }
        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StreamingStatistics$StreamingStatisticsBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_StreamingStatistics$StreamingStatisticsBuilder_init_(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *args, PyObject *kwds)
        {
          StreamingStatistics$StreamingStatisticsBuilder object((jobject) NULL);

          INT_CALL(object = StreamingStatistics$StreamingStatisticsBuilder());
          self->object = object;

          return 0;
        }

        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_build(t_StreamingStatistics$StreamingStatisticsBuilder *self)
        {
          ::org::hipparchus::stat::descriptive::StreamingStatistics result((jobject) NULL);
          OBJ_CALL(result = self->object.build());
          return ::org::hipparchus::stat::descriptive::t_StreamingStatistics::wrap_Object(result);
        }

        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_extrema(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *arg)
        {
          jboolean a0;
          StreamingStatistics$StreamingStatisticsBuilder result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.extrema(a0));
            return t_StreamingStatistics$StreamingStatisticsBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "extrema", arg);
          return NULL;
        }

        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_moments(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *arg)
        {
          jboolean a0;
          StreamingStatistics$StreamingStatisticsBuilder result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.moments(a0));
            return t_StreamingStatistics$StreamingStatisticsBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "moments", arg);
          return NULL;
        }

        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_percentiles(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *args)
        {
          jdouble a0;
          ::org::hipparchus::random::RandomGenerator a1((jobject) NULL);
          StreamingStatistics$StreamingStatisticsBuilder result((jobject) NULL);

          if (!parseArgs(args, "Dk", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.percentiles(a0, a1));
            return t_StreamingStatistics$StreamingStatisticsBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "percentiles", args);
          return NULL;
        }

        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_sumOfLogs(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *arg)
        {
          jboolean a0;
          StreamingStatistics$StreamingStatisticsBuilder result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.sumOfLogs(a0));
            return t_StreamingStatistics$StreamingStatisticsBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "sumOfLogs", arg);
          return NULL;
        }

        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_sumOfSquares(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *arg)
        {
          jboolean a0;
          StreamingStatistics$StreamingStatisticsBuilder result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.sumOfSquares(a0));
            return t_StreamingStatistics$StreamingStatisticsBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "sumOfSquares", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/PythonOrbit.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *PythonOrbit::class$ = NULL;
      jmethodID *PythonOrbit::mids$ = NULL;
      bool PythonOrbit::live$ = false;

      jclass PythonOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/PythonOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7753eee512deef45] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;D)V");
          mids$[mid_init$_0411787cdbbfc137] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_addKeplerContribution_f2365c7dd61a1cda] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;D[D)V");
          mids$[mid_computeJacobianEccentricWrtCartesian_0358d8ea02f2cdb1] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[D");
          mids$[mid_computeJacobianMeanWrtCartesian_0358d8ea02f2cdb1] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[D");
          mids$[mid_computeJacobianTrueWrtCartesian_0358d8ea02f2cdb1] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[D");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getA_dff5885c2c873297] = env->getMethodID(cls, "getA", "()D");
          mids$[mid_getADot_dff5885c2c873297] = env->getMethodID(cls, "getADot", "()D");
          mids$[mid_getE_dff5885c2c873297] = env->getMethodID(cls, "getE", "()D");
          mids$[mid_getEDot_dff5885c2c873297] = env->getMethodID(cls, "getEDot", "()D");
          mids$[mid_getEquinoctialEx_dff5885c2c873297] = env->getMethodID(cls, "getEquinoctialEx", "()D");
          mids$[mid_getEquinoctialExDot_dff5885c2c873297] = env->getMethodID(cls, "getEquinoctialExDot", "()D");
          mids$[mid_getEquinoctialEy_dff5885c2c873297] = env->getMethodID(cls, "getEquinoctialEy", "()D");
          mids$[mid_getEquinoctialEyDot_dff5885c2c873297] = env->getMethodID(cls, "getEquinoctialEyDot", "()D");
          mids$[mid_getHx_dff5885c2c873297] = env->getMethodID(cls, "getHx", "()D");
          mids$[mid_getHxDot_dff5885c2c873297] = env->getMethodID(cls, "getHxDot", "()D");
          mids$[mid_getHy_dff5885c2c873297] = env->getMethodID(cls, "getHy", "()D");
          mids$[mid_getHyDot_dff5885c2c873297] = env->getMethodID(cls, "getHyDot", "()D");
          mids$[mid_getI_dff5885c2c873297] = env->getMethodID(cls, "getI", "()D");
          mids$[mid_getIDot_dff5885c2c873297] = env->getMethodID(cls, "getIDot", "()D");
          mids$[mid_getLE_dff5885c2c873297] = env->getMethodID(cls, "getLE", "()D");
          mids$[mid_getLEDot_dff5885c2c873297] = env->getMethodID(cls, "getLEDot", "()D");
          mids$[mid_getLM_dff5885c2c873297] = env->getMethodID(cls, "getLM", "()D");
          mids$[mid_getLMDot_dff5885c2c873297] = env->getMethodID(cls, "getLMDot", "()D");
          mids$[mid_getLv_dff5885c2c873297] = env->getMethodID(cls, "getLv", "()D");
          mids$[mid_getLvDot_dff5885c2c873297] = env->getMethodID(cls, "getLvDot", "()D");
          mids$[mid_getType_e29360d311dc0e20] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_initPVCoordinates_c204436deca11d94] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_initPosition_d52645e0d4c07563] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_shiftedBy_3f8b433edd9f6aeb] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/Orbit;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonOrbit::PythonOrbit(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, jdouble a2) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_7753eee512deef45, a0.this$, a1.this$, a2)) {}

      PythonOrbit::PythonOrbit(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_0411787cdbbfc137, a0.this$, a1.this$, a2)) {}

      void PythonOrbit::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonOrbit::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonOrbit::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
      static PyObject *t_PythonOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonOrbit_init_(t_PythonOrbit *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonOrbit_finalize(t_PythonOrbit *self);
      static PyObject *t_PythonOrbit_pythonExtension(t_PythonOrbit *self, PyObject *args);
      static void JNICALL t_PythonOrbit_addKeplerContribution0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2);
      static jobject JNICALL t_PythonOrbit_computeJacobianEccentricWrtCartesian1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonOrbit_computeJacobianMeanWrtCartesian2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonOrbit_computeJacobianTrueWrtCartesian3(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getA4(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getADot5(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getE6(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getEDot7(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getEquinoctialEx8(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getEquinoctialExDot9(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getEquinoctialEy10(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getEquinoctialEyDot11(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getHx12(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getHxDot13(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getHy14(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getHyDot15(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getI16(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getIDot17(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getLE18(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getLEDot19(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getLM20(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getLMDot21(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getLv22(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getLvDot23(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonOrbit_getType24(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonOrbit_initPVCoordinates25(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonOrbit_initPosition26(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonOrbit_pythonDecRef27(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonOrbit_shiftedBy28(JNIEnv *jenv, jobject jobj, jdouble a0);
      static PyObject *t_PythonOrbit_get__self(t_PythonOrbit *self, void *data);
      static PyGetSetDef t_PythonOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_PythonOrbit, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonOrbit__methods_[] = {
        DECLARE_METHOD(t_PythonOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonOrbit, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonOrbit, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonOrbit)[] = {
        { Py_tp_methods, t_PythonOrbit__methods_ },
        { Py_tp_init, (void *) t_PythonOrbit_init_ },
        { Py_tp_getset, t_PythonOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::Orbit),
        NULL
      };

      DEFINE_TYPE(PythonOrbit, t_PythonOrbit, PythonOrbit);

      void t_PythonOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonOrbit), &PY_TYPE_DEF(PythonOrbit), module, "PythonOrbit", 1);
      }

      void t_PythonOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrbit), "class_", make_descriptor(PythonOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrbit), "wrapfn_", make_descriptor(t_PythonOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrbit), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonOrbit::initializeClass);
        JNINativeMethod methods[] = {
          { "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;D[D)V", (void *) t_PythonOrbit_addKeplerContribution0 },
          { "computeJacobianEccentricWrtCartesian", "()[[D", (void *) t_PythonOrbit_computeJacobianEccentricWrtCartesian1 },
          { "computeJacobianMeanWrtCartesian", "()[[D", (void *) t_PythonOrbit_computeJacobianMeanWrtCartesian2 },
          { "computeJacobianTrueWrtCartesian", "()[[D", (void *) t_PythonOrbit_computeJacobianTrueWrtCartesian3 },
          { "getA", "()D", (void *) t_PythonOrbit_getA4 },
          { "getADot", "()D", (void *) t_PythonOrbit_getADot5 },
          { "getE", "()D", (void *) t_PythonOrbit_getE6 },
          { "getEDot", "()D", (void *) t_PythonOrbit_getEDot7 },
          { "getEquinoctialEx", "()D", (void *) t_PythonOrbit_getEquinoctialEx8 },
          { "getEquinoctialExDot", "()D", (void *) t_PythonOrbit_getEquinoctialExDot9 },
          { "getEquinoctialEy", "()D", (void *) t_PythonOrbit_getEquinoctialEy10 },
          { "getEquinoctialEyDot", "()D", (void *) t_PythonOrbit_getEquinoctialEyDot11 },
          { "getHx", "()D", (void *) t_PythonOrbit_getHx12 },
          { "getHxDot", "()D", (void *) t_PythonOrbit_getHxDot13 },
          { "getHy", "()D", (void *) t_PythonOrbit_getHy14 },
          { "getHyDot", "()D", (void *) t_PythonOrbit_getHyDot15 },
          { "getI", "()D", (void *) t_PythonOrbit_getI16 },
          { "getIDot", "()D", (void *) t_PythonOrbit_getIDot17 },
          { "getLE", "()D", (void *) t_PythonOrbit_getLE18 },
          { "getLEDot", "()D", (void *) t_PythonOrbit_getLEDot19 },
          { "getLM", "()D", (void *) t_PythonOrbit_getLM20 },
          { "getLMDot", "()D", (void *) t_PythonOrbit_getLMDot21 },
          { "getLv", "()D", (void *) t_PythonOrbit_getLv22 },
          { "getLvDot", "()D", (void *) t_PythonOrbit_getLvDot23 },
          { "getType", "()Lorg/orekit/orbits/OrbitType;", (void *) t_PythonOrbit_getType24 },
          { "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;", (void *) t_PythonOrbit_initPVCoordinates25 },
          { "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonOrbit_initPosition26 },
          { "pythonDecRef", "()V", (void *) t_PythonOrbit_pythonDecRef27 },
          { "shiftedBy", "(D)Lorg/orekit/orbits/Orbit;", (void *) t_PythonOrbit_shiftedBy28 },
        };
        env->registerNatives(cls, methods, 29);
      }

      static PyObject *t_PythonOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonOrbit::initializeClass, 1)))
          return NULL;
        return t_PythonOrbit::wrap_Object(PythonOrbit(((t_PythonOrbit *) arg)->object.this$));
      }
      static PyObject *t_PythonOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonOrbit_init_(t_PythonOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            jdouble a2;
            PythonOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = PythonOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            jdouble a2;
            PythonOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = PythonOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
         default:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonOrbit_finalize(t_PythonOrbit *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonOrbit_pythonExtension(t_PythonOrbit *self, PyObject *args)
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

      static void JNICALL t_PythonOrbit_addKeplerContribution0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::orbits::t_PositionAngleType::wrap_Object(::org::orekit::orbits::PositionAngleType(a0));
        PyObject *o2 = JArray<jdouble>(a2).wrap();
        PyObject *result = PyObject_CallMethod(obj, "addKeplerContribution", "OdO", o0, (double) a1, o2);
        Py_DECREF(o0);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jobject JNICALL t_PythonOrbit_computeJacobianEccentricWrtCartesian1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< JArray< jdouble > > value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "computeJacobianEccentricWrtCartesian", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[[D", &value))
        {
          throwTypeError("computeJacobianEccentricWrtCartesian", result);
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

      static jobject JNICALL t_PythonOrbit_computeJacobianMeanWrtCartesian2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< JArray< jdouble > > value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "computeJacobianMeanWrtCartesian", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[[D", &value))
        {
          throwTypeError("computeJacobianMeanWrtCartesian", result);
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

      static jobject JNICALL t_PythonOrbit_computeJacobianTrueWrtCartesian3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< JArray< jdouble > > value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "computeJacobianTrueWrtCartesian", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[[D", &value))
        {
          throwTypeError("computeJacobianTrueWrtCartesian", result);
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

      static jdouble JNICALL t_PythonOrbit_getA4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getA", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getA", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getADot5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getADot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getADot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getE6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getE", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getE", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getEDot7(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getEDot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getEDot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getEquinoctialEx8(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getEquinoctialEx", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getEquinoctialEx", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getEquinoctialExDot9(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getEquinoctialExDot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getEquinoctialExDot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getEquinoctialEy10(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getEquinoctialEy", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getEquinoctialEy", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getEquinoctialEyDot11(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getEquinoctialEyDot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getEquinoctialEyDot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getHx12(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getHx", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getHx", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getHxDot13(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getHxDot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getHxDot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getHy14(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getHy", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getHy", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getHyDot15(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getHyDot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getHyDot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getI16(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getI", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getI", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getIDot17(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getIDot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getIDot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getLE18(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getLE", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getLE", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getLEDot19(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getLEDot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getLEDot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getLM20(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getLM", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getLM", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getLMDot21(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getLMDot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getLMDot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getLv22(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getLv", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getLv", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getLvDot23(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getLvDot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getLvDot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jobject JNICALL t_PythonOrbit_getType24(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getType", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::orbits::OrbitType::initializeClass, &value))
        {
          throwTypeError("getType", result);
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

      static jobject JNICALL t_PythonOrbit_initPVCoordinates25(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "initPVCoordinates", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &value))
        {
          throwTypeError("initPVCoordinates", result);
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

      static jobject JNICALL t_PythonOrbit_initPosition26(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "initPosition", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
        {
          throwTypeError("initPosition", result);
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

      static void JNICALL t_PythonOrbit_pythonDecRef27(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonOrbit_shiftedBy28(JNIEnv *jenv, jobject jobj, jdouble a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::orbits::Orbit value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "shiftedBy", "d", (double) a0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::orbits::Orbit::initializeClass, &value))
        {
          throwTypeError("shiftedBy", result);
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

      static PyObject *t_PythonOrbit_get__self(t_PythonOrbit *self, void *data)
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
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
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
              mids$[mid_valueOf_6fb8eb778f72002f] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/utils/FileFormat;");
              mids$[mid_values_2682e5220cd8bdae] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/utils/FileFormat;");

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
            return FileFormat(env->callStaticObjectMethod(cls, mids$[mid_valueOf_6fb8eb778f72002f], a0.this$));
          }

          JArray< FileFormat > FileFormat::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< FileFormat >(env->callStaticObjectMethod(cls, mids$[mid_values_2682e5220cd8bdae]));
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
#include "org/orekit/files/ccsds/definitions/DutyCycleType.h"
#include "org/orekit/files/ccsds/definitions/DutyCycleType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *DutyCycleType::class$ = NULL;
          jmethodID *DutyCycleType::mids$ = NULL;
          bool DutyCycleType::live$ = false;
          DutyCycleType *DutyCycleType::CONTINUOUS = NULL;
          DutyCycleType *DutyCycleType::TIME = NULL;
          DutyCycleType *DutyCycleType::TIME_AND_ANGLE = NULL;

          jclass DutyCycleType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/DutyCycleType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_7ea013155df57eb2] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/DutyCycleType;");
              mids$[mid_values_4db47a5e4978af5c] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/DutyCycleType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              CONTINUOUS = new DutyCycleType(env->getStaticObjectField(cls, "CONTINUOUS", "Lorg/orekit/files/ccsds/definitions/DutyCycleType;"));
              TIME = new DutyCycleType(env->getStaticObjectField(cls, "TIME", "Lorg/orekit/files/ccsds/definitions/DutyCycleType;"));
              TIME_AND_ANGLE = new DutyCycleType(env->getStaticObjectField(cls, "TIME_AND_ANGLE", "Lorg/orekit/files/ccsds/definitions/DutyCycleType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DutyCycleType DutyCycleType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return DutyCycleType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_7ea013155df57eb2], a0.this$));
          }

          JArray< DutyCycleType > DutyCycleType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< DutyCycleType >(env->callStaticObjectMethod(cls, mids$[mid_values_4db47a5e4978af5c]));
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
        namespace definitions {
          static PyObject *t_DutyCycleType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DutyCycleType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DutyCycleType_of_(t_DutyCycleType *self, PyObject *args);
          static PyObject *t_DutyCycleType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_DutyCycleType_values(PyTypeObject *type);
          static PyObject *t_DutyCycleType_get__parameters_(t_DutyCycleType *self, void *data);
          static PyGetSetDef t_DutyCycleType__fields_[] = {
            DECLARE_GET_FIELD(t_DutyCycleType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DutyCycleType__methods_[] = {
            DECLARE_METHOD(t_DutyCycleType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DutyCycleType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DutyCycleType, of_, METH_VARARGS),
            DECLARE_METHOD(t_DutyCycleType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_DutyCycleType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DutyCycleType)[] = {
            { Py_tp_methods, t_DutyCycleType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_DutyCycleType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DutyCycleType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(DutyCycleType, t_DutyCycleType, DutyCycleType);
          PyObject *t_DutyCycleType::wrap_Object(const DutyCycleType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DutyCycleType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DutyCycleType *self = (t_DutyCycleType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_DutyCycleType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DutyCycleType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DutyCycleType *self = (t_DutyCycleType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_DutyCycleType::install(PyObject *module)
          {
            installType(&PY_TYPE(DutyCycleType), &PY_TYPE_DEF(DutyCycleType), module, "DutyCycleType", 0);
          }

          void t_DutyCycleType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DutyCycleType), "class_", make_descriptor(DutyCycleType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DutyCycleType), "wrapfn_", make_descriptor(t_DutyCycleType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DutyCycleType), "boxfn_", make_descriptor(boxObject));
            env->getClass(DutyCycleType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(DutyCycleType), "CONTINUOUS", make_descriptor(t_DutyCycleType::wrap_Object(*DutyCycleType::CONTINUOUS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DutyCycleType), "TIME", make_descriptor(t_DutyCycleType::wrap_Object(*DutyCycleType::TIME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DutyCycleType), "TIME_AND_ANGLE", make_descriptor(t_DutyCycleType::wrap_Object(*DutyCycleType::TIME_AND_ANGLE)));
          }

          static PyObject *t_DutyCycleType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DutyCycleType::initializeClass, 1)))
              return NULL;
            return t_DutyCycleType::wrap_Object(DutyCycleType(((t_DutyCycleType *) arg)->object.this$));
          }
          static PyObject *t_DutyCycleType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DutyCycleType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_DutyCycleType_of_(t_DutyCycleType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_DutyCycleType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            DutyCycleType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::DutyCycleType::valueOf(a0));
              return t_DutyCycleType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_DutyCycleType_values(PyTypeObject *type)
          {
            JArray< DutyCycleType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::DutyCycleType::values());
            return JArray<jobject>(result.this$).wrap(t_DutyCycleType::wrap_jobject);
          }
          static PyObject *t_DutyCycleType_get__parameters_(t_DutyCycleType *self, void *data)
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
#include "org/hipparchus/random/Well19937c.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *Well19937c::class$ = NULL;
      jmethodID *Well19937c::mids$ = NULL;
      bool Well19937c::live$ = false;

      jclass Well19937c::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/Well19937c");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_d147d7ce001e2d45] = env->getMethodID(cls, "<init>", "([I)V");
          mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_3a8e7649f31fdb20] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_nextInt_570ce0828f81a2c1] = env->getMethodID(cls, "nextInt", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Well19937c::Well19937c() : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      Well19937c::Well19937c(const JArray< jint > & a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_d147d7ce001e2d45, a0.this$)) {}

      Well19937c::Well19937c(jint a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

      Well19937c::Well19937c(jlong a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_3a8e7649f31fdb20, a0)) {}

      jint Well19937c::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_570ce0828f81a2c1]);
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
      static PyObject *t_Well19937c_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Well19937c_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Well19937c_init_(t_Well19937c *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Well19937c_nextInt(t_Well19937c *self, PyObject *args);

      static PyMethodDef t_Well19937c__methods_[] = {
        DECLARE_METHOD(t_Well19937c, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well19937c, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well19937c, nextInt, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Well19937c)[] = {
        { Py_tp_methods, t_Well19937c__methods_ },
        { Py_tp_init, (void *) t_Well19937c_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Well19937c)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::AbstractWell),
        NULL
      };

      DEFINE_TYPE(Well19937c, t_Well19937c, Well19937c);

      void t_Well19937c::install(PyObject *module)
      {
        installType(&PY_TYPE(Well19937c), &PY_TYPE_DEF(Well19937c), module, "Well19937c", 0);
      }

      void t_Well19937c::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well19937c), "class_", make_descriptor(Well19937c::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well19937c), "wrapfn_", make_descriptor(t_Well19937c::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well19937c), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Well19937c_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Well19937c::initializeClass, 1)))
          return NULL;
        return t_Well19937c::wrap_Object(Well19937c(((t_Well19937c *) arg)->object.this$));
      }
      static PyObject *t_Well19937c_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Well19937c::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Well19937c_init_(t_Well19937c *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Well19937c object((jobject) NULL);

            INT_CALL(object = Well19937c());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jint > a0((jobject) NULL);
            Well19937c object((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              INT_CALL(object = Well19937c(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            Well19937c object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = Well19937c(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            Well19937c object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = Well19937c(a0));
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

      static PyObject *t_Well19937c_nextInt(t_Well19937c *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextInt());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Well19937c), (PyObject *) self, "nextInt", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *LeastSquaresProblem::class$ = NULL;
            jmethodID *LeastSquaresProblem::mids$ = NULL;
            bool LeastSquaresProblem::live$ = false;

            jclass LeastSquaresProblem::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem");

                mids$ = new jmethodID[max_mid];
                mids$[mid_evaluate_766f7f4cc1ea3a49] = env->getMethodID(cls, "evaluate", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;");
                mids$[mid_getObservationSize_570ce0828f81a2c1] = env->getMethodID(cls, "getObservationSize", "()I");
                mids$[mid_getParameterSize_570ce0828f81a2c1] = env->getMethodID(cls, "getParameterSize", "()I");
                mids$[mid_getStart_aab4fbf77867daa8] = env->getMethodID(cls, "getStart", "()Lorg/hipparchus/linear/RealVector;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation LeastSquaresProblem::evaluate(const ::org::hipparchus::linear::RealVector & a0) const
            {
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation(env->callObjectMethod(this$, mids$[mid_evaluate_766f7f4cc1ea3a49], a0.this$));
            }

            jint LeastSquaresProblem::getObservationSize() const
            {
              return env->callIntMethod(this$, mids$[mid_getObservationSize_570ce0828f81a2c1]);
            }

            jint LeastSquaresProblem::getParameterSize() const
            {
              return env->callIntMethod(this$, mids$[mid_getParameterSize_570ce0828f81a2c1]);
            }

            ::org::hipparchus::linear::RealVector LeastSquaresProblem::getStart() const
            {
              return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getStart_aab4fbf77867daa8]));
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
            static PyObject *t_LeastSquaresProblem_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresProblem_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresProblem_evaluate(t_LeastSquaresProblem *self, PyObject *arg);
            static PyObject *t_LeastSquaresProblem_getObservationSize(t_LeastSquaresProblem *self);
            static PyObject *t_LeastSquaresProblem_getParameterSize(t_LeastSquaresProblem *self);
            static PyObject *t_LeastSquaresProblem_getStart(t_LeastSquaresProblem *self);
            static PyObject *t_LeastSquaresProblem_get__observationSize(t_LeastSquaresProblem *self, void *data);
            static PyObject *t_LeastSquaresProblem_get__parameterSize(t_LeastSquaresProblem *self, void *data);
            static PyObject *t_LeastSquaresProblem_get__start(t_LeastSquaresProblem *self, void *data);
            static PyGetSetDef t_LeastSquaresProblem__fields_[] = {
              DECLARE_GET_FIELD(t_LeastSquaresProblem, observationSize),
              DECLARE_GET_FIELD(t_LeastSquaresProblem, parameterSize),
              DECLARE_GET_FIELD(t_LeastSquaresProblem, start),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_LeastSquaresProblem__methods_[] = {
              DECLARE_METHOD(t_LeastSquaresProblem, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresProblem, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresProblem, evaluate, METH_O),
              DECLARE_METHOD(t_LeastSquaresProblem, getObservationSize, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresProblem, getParameterSize, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresProblem, getStart, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LeastSquaresProblem)[] = {
              { Py_tp_methods, t_LeastSquaresProblem__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_LeastSquaresProblem__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LeastSquaresProblem)[] = {
              &PY_TYPE_DEF(::org::hipparchus::optim::OptimizationProblem),
              NULL
            };

            DEFINE_TYPE(LeastSquaresProblem, t_LeastSquaresProblem, LeastSquaresProblem);

            void t_LeastSquaresProblem::install(PyObject *module)
            {
              installType(&PY_TYPE(LeastSquaresProblem), &PY_TYPE_DEF(LeastSquaresProblem), module, "LeastSquaresProblem", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresProblem), "Evaluation", make_descriptor(&PY_TYPE_DEF(LeastSquaresProblem$Evaluation)));
            }

            void t_LeastSquaresProblem::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresProblem), "class_", make_descriptor(LeastSquaresProblem::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresProblem), "wrapfn_", make_descriptor(t_LeastSquaresProblem::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresProblem), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LeastSquaresProblem_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LeastSquaresProblem::initializeClass, 1)))
                return NULL;
              return t_LeastSquaresProblem::wrap_Object(LeastSquaresProblem(((t_LeastSquaresProblem *) arg)->object.this$));
            }
            static PyObject *t_LeastSquaresProblem_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LeastSquaresProblem::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_LeastSquaresProblem_evaluate(t_LeastSquaresProblem *self, PyObject *arg)
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

            static PyObject *t_LeastSquaresProblem_getObservationSize(t_LeastSquaresProblem *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getObservationSize());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_LeastSquaresProblem_getParameterSize(t_LeastSquaresProblem *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getParameterSize());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_LeastSquaresProblem_getStart(t_LeastSquaresProblem *self)
            {
              ::org::hipparchus::linear::RealVector result((jobject) NULL);
              OBJ_CALL(result = self->object.getStart());
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }

            static PyObject *t_LeastSquaresProblem_get__observationSize(t_LeastSquaresProblem *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getObservationSize());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_LeastSquaresProblem_get__parameterSize(t_LeastSquaresProblem *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getParameterSize());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_LeastSquaresProblem_get__start(t_LeastSquaresProblem *self, void *data)
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
#include "org/orekit/propagation/events/EnablingPredicate.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EnablingPredicate::class$ = NULL;
        jmethodID *EnablingPredicate::mids$ = NULL;
        bool EnablingPredicate::live$ = false;

        jclass EnablingPredicate::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EnablingPredicate");

            mids$ = new jmethodID[max_mid];
            mids$[mid_eventIsEnabled_9da0e57d64f11841] = env->getMethodID(cls, "eventIsEnabled", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;D)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean EnablingPredicate::eventIsEnabled(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::events::EventDetector & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_eventIsEnabled_9da0e57d64f11841], a0.this$, a1.this$, a2);
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
      namespace events {
        static PyObject *t_EnablingPredicate_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EnablingPredicate_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EnablingPredicate_eventIsEnabled(t_EnablingPredicate *self, PyObject *args);

        static PyMethodDef t_EnablingPredicate__methods_[] = {
          DECLARE_METHOD(t_EnablingPredicate, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EnablingPredicate, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EnablingPredicate, eventIsEnabled, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EnablingPredicate)[] = {
          { Py_tp_methods, t_EnablingPredicate__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EnablingPredicate)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EnablingPredicate, t_EnablingPredicate, EnablingPredicate);

        void t_EnablingPredicate::install(PyObject *module)
        {
          installType(&PY_TYPE(EnablingPredicate), &PY_TYPE_DEF(EnablingPredicate), module, "EnablingPredicate", 0);
        }

        void t_EnablingPredicate::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EnablingPredicate), "class_", make_descriptor(EnablingPredicate::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EnablingPredicate), "wrapfn_", make_descriptor(t_EnablingPredicate::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EnablingPredicate), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EnablingPredicate_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EnablingPredicate::initializeClass, 1)))
            return NULL;
          return t_EnablingPredicate::wrap_Object(EnablingPredicate(((t_EnablingPredicate *) arg)->object.this$));
        }
        static PyObject *t_EnablingPredicate_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EnablingPredicate::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EnablingPredicate_eventIsEnabled(t_EnablingPredicate *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::propagation::events::EventDetector a1((jobject) NULL);
          jdouble a2;
          jboolean result;

          if (!parseArgs(args, "kkD", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::events::EventDetector::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.eventIsEnabled(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "eventIsEnabled", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/OrekitStepHandler.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *OrekitStepHandler::class$ = NULL;
        jmethodID *OrekitStepHandler::mids$ = NULL;
        bool OrekitStepHandler::live$ = false;

        jclass OrekitStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/OrekitStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finish_0ee5c56004643a2e] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_handleStep_aa75aa80a734fb3b] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/sampling/OrekitStepInterpolator;)V");
            mids$[mid_init_826b4eda94da4e78] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void OrekitStepHandler::finish(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_0ee5c56004643a2e], a0.this$);
        }

        void OrekitStepHandler::handleStep(const ::org::orekit::propagation::sampling::OrekitStepInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_aa75aa80a734fb3b], a0.this$);
        }

        void OrekitStepHandler::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_826b4eda94da4e78], a0.this$, a1.this$);
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
        static PyObject *t_OrekitStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitStepHandler_finish(t_OrekitStepHandler *self, PyObject *arg);
        static PyObject *t_OrekitStepHandler_handleStep(t_OrekitStepHandler *self, PyObject *arg);
        static PyObject *t_OrekitStepHandler_init(t_OrekitStepHandler *self, PyObject *args);

        static PyMethodDef t_OrekitStepHandler__methods_[] = {
          DECLARE_METHOD(t_OrekitStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitStepHandler, finish, METH_O),
          DECLARE_METHOD(t_OrekitStepHandler, handleStep, METH_O),
          DECLARE_METHOD(t_OrekitStepHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OrekitStepHandler)[] = {
          { Py_tp_methods, t_OrekitStepHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OrekitStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OrekitStepHandler, t_OrekitStepHandler, OrekitStepHandler);

        void t_OrekitStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(OrekitStepHandler), &PY_TYPE_DEF(OrekitStepHandler), module, "OrekitStepHandler", 0);
        }

        void t_OrekitStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitStepHandler), "class_", make_descriptor(OrekitStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitStepHandler), "wrapfn_", make_descriptor(t_OrekitStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitStepHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OrekitStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OrekitStepHandler::initializeClass, 1)))
            return NULL;
          return t_OrekitStepHandler::wrap_Object(OrekitStepHandler(((t_OrekitStepHandler *) arg)->object.this$));
        }
        static PyObject *t_OrekitStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OrekitStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_OrekitStepHandler_finish(t_OrekitStepHandler *self, PyObject *arg)
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

        static PyObject *t_OrekitStepHandler_handleStep(t_OrekitStepHandler *self, PyObject *arg)
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

        static PyObject *t_OrekitStepHandler_init(t_OrekitStepHandler *self, PyObject *args)
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
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/ShortPeriodicsInterpolatedCoefficient.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *ShortPeriodicsInterpolatedCoefficient::class$ = NULL;
            jmethodID *ShortPeriodicsInterpolatedCoefficient::mids$ = NULL;
            bool ShortPeriodicsInterpolatedCoefficient::live$ = false;

            jclass ShortPeriodicsInterpolatedCoefficient::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/ShortPeriodicsInterpolatedCoefficient");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_addGridPoint_ab5a86184bb74c69] = env->getMethodID(cls, "addGridPoint", "(Lorg/orekit/time/AbsoluteDate;[D)V");
                mids$[mid_clearHistory_0fa09c18fee449d5] = env->getMethodID(cls, "clearHistory", "()V");
                mids$[mid_value_2b9aa40de0a696a4] = env->getMethodID(cls, "value", "(Lorg/orekit/time/AbsoluteDate;)[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ShortPeriodicsInterpolatedCoefficient::ShortPeriodicsInterpolatedCoefficient(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

            void ShortPeriodicsInterpolatedCoefficient::addGridPoint(const ::org::orekit::time::AbsoluteDate & a0, const JArray< jdouble > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_addGridPoint_ab5a86184bb74c69], a0.this$, a1.this$);
            }

            void ShortPeriodicsInterpolatedCoefficient::clearHistory() const
            {
              env->callVoidMethod(this$, mids$[mid_clearHistory_0fa09c18fee449d5]);
            }

            JArray< jdouble > ShortPeriodicsInterpolatedCoefficient::value(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_2b9aa40de0a696a4], a0.this$));
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
          namespace utilities {
            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_instance_(PyTypeObject *type, PyObject *arg);
            static int t_ShortPeriodicsInterpolatedCoefficient_init_(t_ShortPeriodicsInterpolatedCoefficient *self, PyObject *args, PyObject *kwds);
            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_addGridPoint(t_ShortPeriodicsInterpolatedCoefficient *self, PyObject *args);
            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_clearHistory(t_ShortPeriodicsInterpolatedCoefficient *self);
            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_value(t_ShortPeriodicsInterpolatedCoefficient *self, PyObject *arg);

            static PyMethodDef t_ShortPeriodicsInterpolatedCoefficient__methods_[] = {
              DECLARE_METHOD(t_ShortPeriodicsInterpolatedCoefficient, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ShortPeriodicsInterpolatedCoefficient, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ShortPeriodicsInterpolatedCoefficient, addGridPoint, METH_VARARGS),
              DECLARE_METHOD(t_ShortPeriodicsInterpolatedCoefficient, clearHistory, METH_NOARGS),
              DECLARE_METHOD(t_ShortPeriodicsInterpolatedCoefficient, value, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ShortPeriodicsInterpolatedCoefficient)[] = {
              { Py_tp_methods, t_ShortPeriodicsInterpolatedCoefficient__methods_ },
              { Py_tp_init, (void *) t_ShortPeriodicsInterpolatedCoefficient_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ShortPeriodicsInterpolatedCoefficient)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ShortPeriodicsInterpolatedCoefficient, t_ShortPeriodicsInterpolatedCoefficient, ShortPeriodicsInterpolatedCoefficient);

            void t_ShortPeriodicsInterpolatedCoefficient::install(PyObject *module)
            {
              installType(&PY_TYPE(ShortPeriodicsInterpolatedCoefficient), &PY_TYPE_DEF(ShortPeriodicsInterpolatedCoefficient), module, "ShortPeriodicsInterpolatedCoefficient", 0);
            }

            void t_ShortPeriodicsInterpolatedCoefficient::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ShortPeriodicsInterpolatedCoefficient), "class_", make_descriptor(ShortPeriodicsInterpolatedCoefficient::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ShortPeriodicsInterpolatedCoefficient), "wrapfn_", make_descriptor(t_ShortPeriodicsInterpolatedCoefficient::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ShortPeriodicsInterpolatedCoefficient), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ShortPeriodicsInterpolatedCoefficient::initializeClass, 1)))
                return NULL;
              return t_ShortPeriodicsInterpolatedCoefficient::wrap_Object(ShortPeriodicsInterpolatedCoefficient(((t_ShortPeriodicsInterpolatedCoefficient *) arg)->object.this$));
            }
            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ShortPeriodicsInterpolatedCoefficient::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_ShortPeriodicsInterpolatedCoefficient_init_(t_ShortPeriodicsInterpolatedCoefficient *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              ShortPeriodicsInterpolatedCoefficient object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = ShortPeriodicsInterpolatedCoefficient(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_addGridPoint(t_ShortPeriodicsInterpolatedCoefficient *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);

              if (!parseArgs(args, "k[D", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.addGridPoint(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "addGridPoint", args);
              return NULL;
            }

            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_clearHistory(t_ShortPeriodicsInterpolatedCoefficient *self)
            {
              OBJ_CALL(self->object.clearHistory());
              Py_RETURN_NONE;
            }

            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_value(t_ShortPeriodicsInterpolatedCoefficient *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
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
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedEvolution.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace unscented {

          ::java::lang::Class *UnscentedEvolution::class$ = NULL;
          jmethodID *UnscentedEvolution::mids$ = NULL;
          bool UnscentedEvolution::live$ = false;

          jclass UnscentedEvolution::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/unscented/UnscentedEvolution");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e15112d7d9b7c603] = env->getMethodID(cls, "<init>", "(D[Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;)V");
              mids$[mid_getCurrentStates_06199998e1d3adc1] = env->getMethodID(cls, "getCurrentStates", "()[Lorg/hipparchus/linear/RealVector;");
              mids$[mid_getCurrentTime_dff5885c2c873297] = env->getMethodID(cls, "getCurrentTime", "()D");
              mids$[mid_getProcessNoiseMatrix_688b496048ff947b] = env->getMethodID(cls, "getProcessNoiseMatrix", "()Lorg/hipparchus/linear/RealMatrix;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          UnscentedEvolution::UnscentedEvolution(jdouble a0, const JArray< ::org::hipparchus::linear::RealVector > & a1, const ::org::hipparchus::linear::RealMatrix & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e15112d7d9b7c603, a0, a1.this$, a2.this$)) {}

          JArray< ::org::hipparchus::linear::RealVector > UnscentedEvolution::getCurrentStates() const
          {
            return JArray< ::org::hipparchus::linear::RealVector >(env->callObjectMethod(this$, mids$[mid_getCurrentStates_06199998e1d3adc1]));
          }

          jdouble UnscentedEvolution::getCurrentTime() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCurrentTime_dff5885c2c873297]);
          }

          ::org::hipparchus::linear::RealMatrix UnscentedEvolution::getProcessNoiseMatrix() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getProcessNoiseMatrix_688b496048ff947b]));
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
    namespace filtering {
      namespace kalman {
        namespace unscented {
          static PyObject *t_UnscentedEvolution_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UnscentedEvolution_instance_(PyTypeObject *type, PyObject *arg);
          static int t_UnscentedEvolution_init_(t_UnscentedEvolution *self, PyObject *args, PyObject *kwds);
          static PyObject *t_UnscentedEvolution_getCurrentStates(t_UnscentedEvolution *self);
          static PyObject *t_UnscentedEvolution_getCurrentTime(t_UnscentedEvolution *self);
          static PyObject *t_UnscentedEvolution_getProcessNoiseMatrix(t_UnscentedEvolution *self);
          static PyObject *t_UnscentedEvolution_get__currentStates(t_UnscentedEvolution *self, void *data);
          static PyObject *t_UnscentedEvolution_get__currentTime(t_UnscentedEvolution *self, void *data);
          static PyObject *t_UnscentedEvolution_get__processNoiseMatrix(t_UnscentedEvolution *self, void *data);
          static PyGetSetDef t_UnscentedEvolution__fields_[] = {
            DECLARE_GET_FIELD(t_UnscentedEvolution, currentStates),
            DECLARE_GET_FIELD(t_UnscentedEvolution, currentTime),
            DECLARE_GET_FIELD(t_UnscentedEvolution, processNoiseMatrix),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_UnscentedEvolution__methods_[] = {
            DECLARE_METHOD(t_UnscentedEvolution, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UnscentedEvolution, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UnscentedEvolution, getCurrentStates, METH_NOARGS),
            DECLARE_METHOD(t_UnscentedEvolution, getCurrentTime, METH_NOARGS),
            DECLARE_METHOD(t_UnscentedEvolution, getProcessNoiseMatrix, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(UnscentedEvolution)[] = {
            { Py_tp_methods, t_UnscentedEvolution__methods_ },
            { Py_tp_init, (void *) t_UnscentedEvolution_init_ },
            { Py_tp_getset, t_UnscentedEvolution__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(UnscentedEvolution)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(UnscentedEvolution, t_UnscentedEvolution, UnscentedEvolution);

          void t_UnscentedEvolution::install(PyObject *module)
          {
            installType(&PY_TYPE(UnscentedEvolution), &PY_TYPE_DEF(UnscentedEvolution), module, "UnscentedEvolution", 0);
          }

          void t_UnscentedEvolution::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedEvolution), "class_", make_descriptor(UnscentedEvolution::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedEvolution), "wrapfn_", make_descriptor(t_UnscentedEvolution::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedEvolution), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_UnscentedEvolution_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, UnscentedEvolution::initializeClass, 1)))
              return NULL;
            return t_UnscentedEvolution::wrap_Object(UnscentedEvolution(((t_UnscentedEvolution *) arg)->object.this$));
          }
          static PyObject *t_UnscentedEvolution_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, UnscentedEvolution::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_UnscentedEvolution_init_(t_UnscentedEvolution *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            JArray< ::org::hipparchus::linear::RealVector > a1((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
            UnscentedEvolution object((jobject) NULL);

            if (!parseArgs(args, "D[kk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = UnscentedEvolution(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_UnscentedEvolution_getCurrentStates(t_UnscentedEvolution *self)
          {
            JArray< ::org::hipparchus::linear::RealVector > result((jobject) NULL);
            OBJ_CALL(result = self->object.getCurrentStates());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::linear::t_RealVector::wrap_jobject);
          }

          static PyObject *t_UnscentedEvolution_getCurrentTime(t_UnscentedEvolution *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getCurrentTime());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_UnscentedEvolution_getProcessNoiseMatrix(t_UnscentedEvolution *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getProcessNoiseMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_UnscentedEvolution_get__currentStates(t_UnscentedEvolution *self, void *data)
          {
            JArray< ::org::hipparchus::linear::RealVector > value((jobject) NULL);
            OBJ_CALL(value = self->object.getCurrentStates());
            return JArray<jobject>(value.this$).wrap(::org::hipparchus::linear::t_RealVector::wrap_jobject);
          }

          static PyObject *t_UnscentedEvolution_get__currentTime(t_UnscentedEvolution *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getCurrentTime());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_UnscentedEvolution_get__processNoiseMatrix(t_UnscentedEvolution *self, void *data)
          {
            ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
            OBJ_CALL(value = self->object.getProcessNoiseMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/BSPTreeVisitor$Order.h"
#include "org/hipparchus/geometry/partitioning/BSPTreeVisitor$Order.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *BSPTreeVisitor$Order::class$ = NULL;
        jmethodID *BSPTreeVisitor$Order::mids$ = NULL;
        bool BSPTreeVisitor$Order::live$ = false;
        BSPTreeVisitor$Order *BSPTreeVisitor$Order::MINUS_PLUS_SUB = NULL;
        BSPTreeVisitor$Order *BSPTreeVisitor$Order::MINUS_SUB_PLUS = NULL;
        BSPTreeVisitor$Order *BSPTreeVisitor$Order::PLUS_MINUS_SUB = NULL;
        BSPTreeVisitor$Order *BSPTreeVisitor$Order::PLUS_SUB_MINUS = NULL;
        BSPTreeVisitor$Order *BSPTreeVisitor$Order::SUB_MINUS_PLUS = NULL;
        BSPTreeVisitor$Order *BSPTreeVisitor$Order::SUB_PLUS_MINUS = NULL;

        jclass BSPTreeVisitor$Order::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/BSPTreeVisitor$Order");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_483d9dcc7004ee1e] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor$Order;");
            mids$[mid_values_b4335d59f1c4d181] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor$Order;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MINUS_PLUS_SUB = new BSPTreeVisitor$Order(env->getStaticObjectField(cls, "MINUS_PLUS_SUB", "Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor$Order;"));
            MINUS_SUB_PLUS = new BSPTreeVisitor$Order(env->getStaticObjectField(cls, "MINUS_SUB_PLUS", "Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor$Order;"));
            PLUS_MINUS_SUB = new BSPTreeVisitor$Order(env->getStaticObjectField(cls, "PLUS_MINUS_SUB", "Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor$Order;"));
            PLUS_SUB_MINUS = new BSPTreeVisitor$Order(env->getStaticObjectField(cls, "PLUS_SUB_MINUS", "Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor$Order;"));
            SUB_MINUS_PLUS = new BSPTreeVisitor$Order(env->getStaticObjectField(cls, "SUB_MINUS_PLUS", "Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor$Order;"));
            SUB_PLUS_MINUS = new BSPTreeVisitor$Order(env->getStaticObjectField(cls, "SUB_PLUS_MINUS", "Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor$Order;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BSPTreeVisitor$Order BSPTreeVisitor$Order::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return BSPTreeVisitor$Order(env->callStaticObjectMethod(cls, mids$[mid_valueOf_483d9dcc7004ee1e], a0.this$));
        }

        JArray< BSPTreeVisitor$Order > BSPTreeVisitor$Order::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< BSPTreeVisitor$Order >(env->callStaticObjectMethod(cls, mids$[mid_values_b4335d59f1c4d181]));
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
        static PyObject *t_BSPTreeVisitor$Order_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BSPTreeVisitor$Order_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BSPTreeVisitor$Order_of_(t_BSPTreeVisitor$Order *self, PyObject *args);
        static PyObject *t_BSPTreeVisitor$Order_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_BSPTreeVisitor$Order_values(PyTypeObject *type);
        static PyObject *t_BSPTreeVisitor$Order_get__parameters_(t_BSPTreeVisitor$Order *self, void *data);
        static PyGetSetDef t_BSPTreeVisitor$Order__fields_[] = {
          DECLARE_GET_FIELD(t_BSPTreeVisitor$Order, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BSPTreeVisitor$Order__methods_[] = {
          DECLARE_METHOD(t_BSPTreeVisitor$Order, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BSPTreeVisitor$Order, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BSPTreeVisitor$Order, of_, METH_VARARGS),
          DECLARE_METHOD(t_BSPTreeVisitor$Order, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_BSPTreeVisitor$Order, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BSPTreeVisitor$Order)[] = {
          { Py_tp_methods, t_BSPTreeVisitor$Order__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BSPTreeVisitor$Order__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BSPTreeVisitor$Order)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(BSPTreeVisitor$Order, t_BSPTreeVisitor$Order, BSPTreeVisitor$Order);
        PyObject *t_BSPTreeVisitor$Order::wrap_Object(const BSPTreeVisitor$Order& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BSPTreeVisitor$Order::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BSPTreeVisitor$Order *self = (t_BSPTreeVisitor$Order *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BSPTreeVisitor$Order::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BSPTreeVisitor$Order::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BSPTreeVisitor$Order *self = (t_BSPTreeVisitor$Order *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BSPTreeVisitor$Order::install(PyObject *module)
        {
          installType(&PY_TYPE(BSPTreeVisitor$Order), &PY_TYPE_DEF(BSPTreeVisitor$Order), module, "BSPTreeVisitor$Order", 0);
        }

        void t_BSPTreeVisitor$Order::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor$Order), "class_", make_descriptor(BSPTreeVisitor$Order::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor$Order), "wrapfn_", make_descriptor(t_BSPTreeVisitor$Order::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor$Order), "boxfn_", make_descriptor(boxObject));
          env->getClass(BSPTreeVisitor$Order::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor$Order), "MINUS_PLUS_SUB", make_descriptor(t_BSPTreeVisitor$Order::wrap_Object(*BSPTreeVisitor$Order::MINUS_PLUS_SUB)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor$Order), "MINUS_SUB_PLUS", make_descriptor(t_BSPTreeVisitor$Order::wrap_Object(*BSPTreeVisitor$Order::MINUS_SUB_PLUS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor$Order), "PLUS_MINUS_SUB", make_descriptor(t_BSPTreeVisitor$Order::wrap_Object(*BSPTreeVisitor$Order::PLUS_MINUS_SUB)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor$Order), "PLUS_SUB_MINUS", make_descriptor(t_BSPTreeVisitor$Order::wrap_Object(*BSPTreeVisitor$Order::PLUS_SUB_MINUS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor$Order), "SUB_MINUS_PLUS", make_descriptor(t_BSPTreeVisitor$Order::wrap_Object(*BSPTreeVisitor$Order::SUB_MINUS_PLUS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor$Order), "SUB_PLUS_MINUS", make_descriptor(t_BSPTreeVisitor$Order::wrap_Object(*BSPTreeVisitor$Order::SUB_PLUS_MINUS)));
        }

        static PyObject *t_BSPTreeVisitor$Order_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BSPTreeVisitor$Order::initializeClass, 1)))
            return NULL;
          return t_BSPTreeVisitor$Order::wrap_Object(BSPTreeVisitor$Order(((t_BSPTreeVisitor$Order *) arg)->object.this$));
        }
        static PyObject *t_BSPTreeVisitor$Order_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BSPTreeVisitor$Order::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BSPTreeVisitor$Order_of_(t_BSPTreeVisitor$Order *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BSPTreeVisitor$Order_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          BSPTreeVisitor$Order result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::geometry::partitioning::BSPTreeVisitor$Order::valueOf(a0));
            return t_BSPTreeVisitor$Order::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_BSPTreeVisitor$Order_values(PyTypeObject *type)
        {
          JArray< BSPTreeVisitor$Order > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::geometry::partitioning::BSPTreeVisitor$Order::values());
          return JArray<jobject>(result.this$).wrap(t_BSPTreeVisitor$Order::wrap_jobject);
        }
        static PyObject *t_BSPTreeVisitor$Order_get__parameters_(t_BSPTreeVisitor$Order *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *BivariateFunction::class$ = NULL;
      jmethodID *BivariateFunction::mids$ = NULL;
      bool BivariateFunction::live$ = false;

      jclass BivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/BivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_86ffecc08a63eff0] = env->getMethodID(cls, "value", "(DD)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble BivariateFunction::value(jdouble a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_86ffecc08a63eff0], a0, a1);
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
      static PyObject *t_BivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BivariateFunction_value(t_BivariateFunction *self, PyObject *args);

      static PyMethodDef t_BivariateFunction__methods_[] = {
        DECLARE_METHOD(t_BivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BivariateFunction, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BivariateFunction)[] = {
        { Py_tp_methods, t_BivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BivariateFunction, t_BivariateFunction, BivariateFunction);

      void t_BivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(BivariateFunction), &PY_TYPE_DEF(BivariateFunction), module, "BivariateFunction", 0);
      }

      void t_BivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BivariateFunction), "class_", make_descriptor(BivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BivariateFunction), "wrapfn_", make_descriptor(t_BivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BivariateFunction::initializeClass, 1)))
          return NULL;
        return t_BivariateFunction::wrap_Object(BivariateFunction(((t_BivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_BivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BivariateFunction_value(t_BivariateFunction *self, PyObject *args)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/RungeKuttaFieldIntegrator.h"
#include "org/hipparchus/ode/nonstiff/FieldButcherArrayProvider.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/FieldODEState.h"
#include "org/hipparchus/ode/FieldOrdinaryDifferentialEquation.h"
#include "org/hipparchus/ode/FieldExpandableODE.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *RungeKuttaFieldIntegrator::class$ = NULL;
        jmethodID *RungeKuttaFieldIntegrator::mids$ = NULL;
        bool RungeKuttaFieldIntegrator::live$ = false;

        jclass RungeKuttaFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/RungeKuttaFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getDefaultStep_eba8e72a22c984ac] = env->getMethodID(cls, "getDefaultStep", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_integrate_d8a6319aba9a7b17] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/FieldExpandableODE;Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_singleStep_0214498361157caa] = env->getMethodID(cls, "singleStep", "(Lorg/hipparchus/ode/FieldOrdinaryDifferentialEquation;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_fraction_d0525157bc3abb83] = env->getMethodID(cls, "fraction", "(II)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_createInterpolator_21baab755acbe636] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/RungeKuttaFieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement RungeKuttaFieldIntegrator::getDefaultStep() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDefaultStep_eba8e72a22c984ac]));
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative RungeKuttaFieldIntegrator::integrate(const ::org::hipparchus::ode::FieldExpandableODE & a0, const ::org::hipparchus::ode::FieldODEState & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_d8a6319aba9a7b17], a0.this$, a1.this$, a2.this$));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > RungeKuttaFieldIntegrator::singleStep(const ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation & a0, const ::org::hipparchus::CalculusFieldElement & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::hipparchus::CalculusFieldElement & a3) const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_singleStep_0214498361157caa], a0.this$, a1.this$, a2.this$, a3.this$));
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
        static PyObject *t_RungeKuttaFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RungeKuttaFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RungeKuttaFieldIntegrator_of_(t_RungeKuttaFieldIntegrator *self, PyObject *args);
        static PyObject *t_RungeKuttaFieldIntegrator_getDefaultStep(t_RungeKuttaFieldIntegrator *self);
        static PyObject *t_RungeKuttaFieldIntegrator_integrate(t_RungeKuttaFieldIntegrator *self, PyObject *args);
        static PyObject *t_RungeKuttaFieldIntegrator_singleStep(t_RungeKuttaFieldIntegrator *self, PyObject *args);
        static PyObject *t_RungeKuttaFieldIntegrator_get__defaultStep(t_RungeKuttaFieldIntegrator *self, void *data);
        static PyObject *t_RungeKuttaFieldIntegrator_get__parameters_(t_RungeKuttaFieldIntegrator *self, void *data);
        static PyGetSetDef t_RungeKuttaFieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_RungeKuttaFieldIntegrator, defaultStep),
          DECLARE_GET_FIELD(t_RungeKuttaFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RungeKuttaFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_RungeKuttaFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RungeKuttaFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RungeKuttaFieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_RungeKuttaFieldIntegrator, getDefaultStep, METH_NOARGS),
          DECLARE_METHOD(t_RungeKuttaFieldIntegrator, integrate, METH_VARARGS),
          DECLARE_METHOD(t_RungeKuttaFieldIntegrator, singleStep, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RungeKuttaFieldIntegrator)[] = {
          { Py_tp_methods, t_RungeKuttaFieldIntegrator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_RungeKuttaFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RungeKuttaFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::AbstractFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(RungeKuttaFieldIntegrator, t_RungeKuttaFieldIntegrator, RungeKuttaFieldIntegrator);
        PyObject *t_RungeKuttaFieldIntegrator::wrap_Object(const RungeKuttaFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RungeKuttaFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RungeKuttaFieldIntegrator *self = (t_RungeKuttaFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_RungeKuttaFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RungeKuttaFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RungeKuttaFieldIntegrator *self = (t_RungeKuttaFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_RungeKuttaFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(RungeKuttaFieldIntegrator), &PY_TYPE_DEF(RungeKuttaFieldIntegrator), module, "RungeKuttaFieldIntegrator", 0);
        }

        void t_RungeKuttaFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RungeKuttaFieldIntegrator), "class_", make_descriptor(RungeKuttaFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RungeKuttaFieldIntegrator), "wrapfn_", make_descriptor(t_RungeKuttaFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RungeKuttaFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RungeKuttaFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RungeKuttaFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_RungeKuttaFieldIntegrator::wrap_Object(RungeKuttaFieldIntegrator(((t_RungeKuttaFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_RungeKuttaFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RungeKuttaFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RungeKuttaFieldIntegrator_of_(t_RungeKuttaFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_RungeKuttaFieldIntegrator_getDefaultStep(t_RungeKuttaFieldIntegrator *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getDefaultStep());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_RungeKuttaFieldIntegrator_integrate(t_RungeKuttaFieldIntegrator *self, PyObject *args)
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

          return callSuper(PY_TYPE(RungeKuttaFieldIntegrator), (PyObject *) self, "integrate", args, 2);
        }

        static PyObject *t_RungeKuttaFieldIntegrator_singleStep(t_RungeKuttaFieldIntegrator *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, "KK[KK", ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldOrdinaryDifferentialEquation::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.singleStep(a0, a1, a2, a3));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "singleStep", args);
          return NULL;
        }
        static PyObject *t_RungeKuttaFieldIntegrator_get__parameters_(t_RungeKuttaFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_RungeKuttaFieldIntegrator_get__defaultStep(t_RungeKuttaFieldIntegrator *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getDefaultStep());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/Beta.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {

      ::java::lang::Class *Beta::class$ = NULL;
      jmethodID *Beta::mids$ = NULL;
      bool Beta::live$ = false;

      jclass Beta::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/special/Beta");

          mids$ = new jmethodID[max_mid];
          mids$[mid_logBeta_86ffecc08a63eff0] = env->getStaticMethodID(cls, "logBeta", "(DD)D");
          mids$[mid_regularizedBeta_8c19bdea212fe058] = env->getStaticMethodID(cls, "regularizedBeta", "(DDD)D");
          mids$[mid_regularizedBeta_0f015b8be9d2dc40] = env->getStaticMethodID(cls, "regularizedBeta", "(DDDD)D");
          mids$[mid_regularizedBeta_1a4183e52d14c27e] = env->getStaticMethodID(cls, "regularizedBeta", "(DDDI)D");
          mids$[mid_regularizedBeta_d27207dbe188406b] = env->getStaticMethodID(cls, "regularizedBeta", "(DDDDI)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble Beta::logBeta(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_logBeta_86ffecc08a63eff0], a0, a1);
      }

      jdouble Beta::regularizedBeta(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_regularizedBeta_8c19bdea212fe058], a0, a1, a2);
      }

      jdouble Beta::regularizedBeta(jdouble a0, jdouble a1, jdouble a2, jdouble a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_regularizedBeta_0f015b8be9d2dc40], a0, a1, a2, a3);
      }

      jdouble Beta::regularizedBeta(jdouble a0, jdouble a1, jdouble a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_regularizedBeta_1a4183e52d14c27e], a0, a1, a2, a3);
      }

      jdouble Beta::regularizedBeta(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jint a4)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_regularizedBeta_d27207dbe188406b], a0, a1, a2, a3, a4);
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
      static PyObject *t_Beta_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Beta_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Beta_logBeta(PyTypeObject *type, PyObject *args);
      static PyObject *t_Beta_regularizedBeta(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_Beta__methods_[] = {
        DECLARE_METHOD(t_Beta, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Beta, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Beta, logBeta, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Beta, regularizedBeta, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Beta)[] = {
        { Py_tp_methods, t_Beta__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Beta)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Beta, t_Beta, Beta);

      void t_Beta::install(PyObject *module)
      {
        installType(&PY_TYPE(Beta), &PY_TYPE_DEF(Beta), module, "Beta", 0);
      }

      void t_Beta::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Beta), "class_", make_descriptor(Beta::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Beta), "wrapfn_", make_descriptor(t_Beta::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Beta), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Beta_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Beta::initializeClass, 1)))
          return NULL;
        return t_Beta::wrap_Object(Beta(((t_Beta *) arg)->object.this$));
      }
      static PyObject *t_Beta_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Beta::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Beta_logBeta(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::special::Beta::logBeta(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "logBeta", args);
        return NULL;
      }

      static PyObject *t_Beta_regularizedBeta(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble result;

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Beta::regularizedBeta(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 4:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble result;

            if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Beta::regularizedBeta(a0, a1, a2, a3));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jint a3;
            jdouble result;

            if (!parseArgs(args, "DDDI", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Beta::regularizedBeta(a0, a1, a2, a3));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 5:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "DDDDI", &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Beta::regularizedBeta(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "regularizedBeta", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/encounter/EncounterLOF.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/geometry/euclidean/twod/FieldVector2D.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {
      namespace encounter {

        ::java::lang::Class *EncounterLOF::class$ = NULL;
        jmethodID *EncounterLOF::mids$ = NULL;
        bool EncounterLOF::live$ = false;

        jclass EncounterLOF::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/frames/encounter/EncounterLOF");

            mids$ = new jmethodID[max_mid];
            mids$[mid_computeProjectionMatrix_688b496048ff947b] = env->getMethodID(cls, "computeProjectionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_computeProjectionMatrix_da96d53489e4adf9] = env->getMethodID(cls, "computeProjectionMatrix", "(Lorg/hipparchus/Field;)Lorg/hipparchus/linear/FieldMatrix;");
            mids$[mid_getAxisNormalToCollisionPlane_d52645e0d4c07563] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getAxisNormalToCollisionPlane_202e7b3b5ed01afc] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getFieldOther_90f77345373c3eb7] = env->getMethodID(cls, "getFieldOther", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/FieldPVCoordinates;");
            mids$[mid_getOther_9b7c658c14883c84] = env->getMethodID(cls, "getOther", "()Lorg/orekit/utils/PVCoordinates;");
            mids$[mid_isQuasiInertial_b108b35ef48e27bd] = env->getMethodID(cls, "isQuasiInertial", "()Z");
            mids$[mid_projectOntoCollisionPlane_92f5981810110281] = env->getMethodID(cls, "projectOntoCollisionPlane", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
            mids$[mid_projectOntoCollisionPlane_6888ee2da1e4e6ff] = env->getMethodID(cls, "projectOntoCollisionPlane", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
            mids$[mid_projectOntoCollisionPlane_1409f31dc074a11f] = env->getMethodID(cls, "projectOntoCollisionPlane", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
            mids$[mid_projectOntoCollisionPlane_e9b72403ad502221] = env->getMethodID(cls, "projectOntoCollisionPlane", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_rotationFromInertial_48dfcf66fb3ed19c] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
            mids$[mid_rotationFromInertial_475182fd71c6851b] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
            mids$[mid_rotationFromInertial_d59b144da7c7851f] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
            mids$[mid_rotationFromInertial_00be22c00009a46d] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
            mids$[mid_rotationFromInertial_076f35c1feeb36b3] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
            mids$[mid_rotationFromInertial_2ba248090f65b129] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::linear::RealMatrix EncounterLOF::computeProjectionMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeProjectionMatrix_688b496048ff947b]));
        }

        ::org::hipparchus::linear::FieldMatrix EncounterLOF::computeProjectionMatrix(const ::org::hipparchus::Field & a0) const
        {
          return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_computeProjectionMatrix_da96d53489e4adf9], a0.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D EncounterLOF::getAxisNormalToCollisionPlane() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAxisNormalToCollisionPlane_d52645e0d4c07563]));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D EncounterLOF::getAxisNormalToCollisionPlane(const ::org::hipparchus::Field & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getAxisNormalToCollisionPlane_202e7b3b5ed01afc], a0.this$));
        }

        ::org::orekit::utils::FieldPVCoordinates EncounterLOF::getFieldOther(const ::org::hipparchus::Field & a0) const
        {
          return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getFieldOther_90f77345373c3eb7], a0.this$));
        }

        ::org::orekit::utils::PVCoordinates EncounterLOF::getOther() const
        {
          return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_getOther_9b7c658c14883c84]));
        }

        jboolean EncounterLOF::isQuasiInertial() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isQuasiInertial_b108b35ef48e27bd]);
        }

        ::org::hipparchus::geometry::euclidean::twod::FieldVector2D EncounterLOF::projectOntoCollisionPlane(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::twod::FieldVector2D(env->callObjectMethod(this$, mids$[mid_projectOntoCollisionPlane_92f5981810110281], a0.this$));
        }

        ::org::hipparchus::geometry::euclidean::twod::Vector2D EncounterLOF::projectOntoCollisionPlane(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_projectOntoCollisionPlane_6888ee2da1e4e6ff], a0.this$));
        }

        ::org::hipparchus::linear::FieldMatrix EncounterLOF::projectOntoCollisionPlane(const ::org::hipparchus::linear::FieldMatrix & a0) const
        {
          return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_projectOntoCollisionPlane_1409f31dc074a11f], a0.this$));
        }

        ::org::hipparchus::linear::RealMatrix EncounterLOF::projectOntoCollisionPlane(const ::org::hipparchus::linear::RealMatrix & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_projectOntoCollisionPlane_e9b72403ad502221], a0.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Rotation EncounterLOF::rotationFromInertial(const ::org::orekit::utils::PVCoordinates & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_48dfcf66fb3ed19c], a0.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Rotation EncounterLOF::rotationFromInertial(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_475182fd71c6851b], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Rotation EncounterLOF::rotationFromInertial(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::utils::PVCoordinates & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_d59b144da7c7851f], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldRotation EncounterLOF::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::FieldPVCoordinates & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_00be22c00009a46d], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldRotation EncounterLOF::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_076f35c1feeb36b3], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldRotation EncounterLOF::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::FieldPVCoordinates & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_2ba248090f65b129], a0.this$, a1.this$, a2.this$));
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
    namespace frames {
      namespace encounter {
        static PyObject *t_EncounterLOF_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EncounterLOF_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EncounterLOF_computeProjectionMatrix(t_EncounterLOF *self, PyObject *args);
        static PyObject *t_EncounterLOF_getAxisNormalToCollisionPlane(t_EncounterLOF *self, PyObject *args);
        static PyObject *t_EncounterLOF_getFieldOther(t_EncounterLOF *self, PyObject *arg);
        static PyObject *t_EncounterLOF_getOther(t_EncounterLOF *self);
        static PyObject *t_EncounterLOF_isQuasiInertial(t_EncounterLOF *self, PyObject *args);
        static PyObject *t_EncounterLOF_projectOntoCollisionPlane(t_EncounterLOF *self, PyObject *args);
        static PyObject *t_EncounterLOF_rotationFromInertial(t_EncounterLOF *self, PyObject *args);
        static PyObject *t_EncounterLOF_get__axisNormalToCollisionPlane(t_EncounterLOF *self, void *data);
        static PyObject *t_EncounterLOF_get__other(t_EncounterLOF *self, void *data);
        static PyObject *t_EncounterLOF_get__quasiInertial(t_EncounterLOF *self, void *data);
        static PyGetSetDef t_EncounterLOF__fields_[] = {
          DECLARE_GET_FIELD(t_EncounterLOF, axisNormalToCollisionPlane),
          DECLARE_GET_FIELD(t_EncounterLOF, other),
          DECLARE_GET_FIELD(t_EncounterLOF, quasiInertial),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EncounterLOF__methods_[] = {
          DECLARE_METHOD(t_EncounterLOF, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EncounterLOF, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EncounterLOF, computeProjectionMatrix, METH_VARARGS),
          DECLARE_METHOD(t_EncounterLOF, getAxisNormalToCollisionPlane, METH_VARARGS),
          DECLARE_METHOD(t_EncounterLOF, getFieldOther, METH_O),
          DECLARE_METHOD(t_EncounterLOF, getOther, METH_NOARGS),
          DECLARE_METHOD(t_EncounterLOF, isQuasiInertial, METH_VARARGS),
          DECLARE_METHOD(t_EncounterLOF, projectOntoCollisionPlane, METH_VARARGS),
          DECLARE_METHOD(t_EncounterLOF, rotationFromInertial, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EncounterLOF)[] = {
          { Py_tp_methods, t_EncounterLOF__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EncounterLOF__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EncounterLOF)[] = {
          &PY_TYPE_DEF(::org::orekit::frames::LOF),
          NULL
        };

        DEFINE_TYPE(EncounterLOF, t_EncounterLOF, EncounterLOF);

        void t_EncounterLOF::install(PyObject *module)
        {
          installType(&PY_TYPE(EncounterLOF), &PY_TYPE_DEF(EncounterLOF), module, "EncounterLOF", 0);
        }

        void t_EncounterLOF::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EncounterLOF), "class_", make_descriptor(EncounterLOF::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EncounterLOF), "wrapfn_", make_descriptor(t_EncounterLOF::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EncounterLOF), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EncounterLOF_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EncounterLOF::initializeClass, 1)))
            return NULL;
          return t_EncounterLOF::wrap_Object(EncounterLOF(((t_EncounterLOF *) arg)->object.this$));
        }
        static PyObject *t_EncounterLOF_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EncounterLOF::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EncounterLOF_computeProjectionMatrix(t_EncounterLOF *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
              OBJ_CALL(result = self->object.computeProjectionMatrix());
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                OBJ_CALL(result = self->object.computeProjectionMatrix(a0));
                return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "computeProjectionMatrix", args);
          return NULL;
        }

        static PyObject *t_EncounterLOF_getAxisNormalToCollisionPlane(t_EncounterLOF *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getAxisNormalToCollisionPlane());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                OBJ_CALL(result = self->object.getAxisNormalToCollisionPlane(a0));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getAxisNormalToCollisionPlane", args);
          return NULL;
        }

        static PyObject *t_EncounterLOF_getFieldOther(t_EncounterLOF *self, PyObject *arg)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
          {
            OBJ_CALL(result = self->object.getFieldOther(a0));
            return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getFieldOther", arg);
          return NULL;
        }

        static PyObject *t_EncounterLOF_getOther(t_EncounterLOF *self)
        {
          ::org::orekit::utils::PVCoordinates result((jobject) NULL);
          OBJ_CALL(result = self->object.getOther());
          return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
        }

        static PyObject *t_EncounterLOF_isQuasiInertial(t_EncounterLOF *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isQuasiInertial());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(EncounterLOF), (PyObject *) self, "isQuasiInertial", args, 2);
        }

        static PyObject *t_EncounterLOF_projectOntoCollisionPlane(t_EncounterLOF *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::twod::FieldVector2D result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
              {
                OBJ_CALL(result = self->object.projectOntoCollisionPlane(a0));
                return ::org::hipparchus::geometry::euclidean::twod::t_FieldVector2D::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.projectOntoCollisionPlane(a0));
                return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
              {
                OBJ_CALL(result = self->object.projectOntoCollisionPlane(a0));
                return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.projectOntoCollisionPlane(a0));
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "projectOntoCollisionPlane", args);
          return NULL;
        }

        static PyObject *t_EncounterLOF_rotationFromInertial(t_EncounterLOF *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.rotationFromInertial(a0));
                return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
              }
            }
            break;
           case 2:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.rotationFromInertial(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
              }
            }
            {
              ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
              ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.rotationFromInertial(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
              {
                OBJ_CALL(result = self->object.rotationFromInertial(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
              {
                OBJ_CALL(result = self->object.rotationFromInertial(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
              {
                OBJ_CALL(result = self->object.rotationFromInertial(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(EncounterLOF), (PyObject *) self, "rotationFromInertial", args, 2);
        }

        static PyObject *t_EncounterLOF_get__axisNormalToCollisionPlane(t_EncounterLOF *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getAxisNormalToCollisionPlane());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_EncounterLOF_get__other(t_EncounterLOF *self, void *data)
        {
          ::org::orekit::utils::PVCoordinates value((jobject) NULL);
          OBJ_CALL(value = self->object.getOther());
          return ::org::orekit::utils::t_PVCoordinates::wrap_Object(value);
        }

        static PyObject *t_EncounterLOF_get__quasiInertial(t_EncounterLOF *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isQuasiInertial());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/FieldArrayDictionary$Entry.h"
#include "org/orekit/utils/FieldArrayDictionary$Entry.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldArrayDictionary$Entry::class$ = NULL;
      jmethodID *FieldArrayDictionary$Entry::mids$ = NULL;
      bool FieldArrayDictionary$Entry::live$ = false;

      jclass FieldArrayDictionary$Entry::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldArrayDictionary$Entry");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getKey_11b109bd155ca898] = env->getMethodID(cls, "getKey", "()Ljava/lang/String;");
          mids$[mid_getValue_226a0b2040b1d2e1] = env->getMethodID(cls, "getValue", "()[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_increment_fa9d415d19f69361] = env->getMethodID(cls, "increment", "([D)V");
          mids$[mid_increment_72479ee08453ef97] = env->getMethodID(cls, "increment", "([Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_scaledIncrement_e8aab7eadc3b7dd1] = env->getMethodID(cls, "scaledIncrement", "(DLorg/orekit/utils/FieldArrayDictionary$Entry;)V");
          mids$[mid_scaledIncrement_4f7734e82d1e0818] = env->getMethodID(cls, "scaledIncrement", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldArrayDictionary$Entry;)V");
          mids$[mid_size_570ce0828f81a2c1] = env->getMethodID(cls, "size", "()I");
          mids$[mid_zero_0fa09c18fee449d5] = env->getMethodID(cls, "zero", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String FieldArrayDictionary$Entry::getKey() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getKey_11b109bd155ca898]));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldArrayDictionary$Entry::getValue() const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getValue_226a0b2040b1d2e1]));
      }

      void FieldArrayDictionary$Entry::increment(const JArray< jdouble > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_increment_fa9d415d19f69361], a0.this$);
      }

      void FieldArrayDictionary$Entry::increment(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_increment_72479ee08453ef97], a0.this$);
      }

      void FieldArrayDictionary$Entry::scaledIncrement(jdouble a0, const FieldArrayDictionary$Entry & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_scaledIncrement_e8aab7eadc3b7dd1], a0, a1.this$);
      }

      void FieldArrayDictionary$Entry::scaledIncrement(const ::org::hipparchus::CalculusFieldElement & a0, const FieldArrayDictionary$Entry & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_scaledIncrement_4f7734e82d1e0818], a0.this$, a1.this$);
      }

      jint FieldArrayDictionary$Entry::size() const
      {
        return env->callIntMethod(this$, mids$[mid_size_570ce0828f81a2c1]);
      }

      void FieldArrayDictionary$Entry::zero() const
      {
        env->callVoidMethod(this$, mids$[mid_zero_0fa09c18fee449d5]);
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
      static PyObject *t_FieldArrayDictionary$Entry_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldArrayDictionary$Entry_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldArrayDictionary$Entry_of_(t_FieldArrayDictionary$Entry *self, PyObject *args);
      static PyObject *t_FieldArrayDictionary$Entry_getKey(t_FieldArrayDictionary$Entry *self);
      static PyObject *t_FieldArrayDictionary$Entry_getValue(t_FieldArrayDictionary$Entry *self);
      static PyObject *t_FieldArrayDictionary$Entry_increment(t_FieldArrayDictionary$Entry *self, PyObject *args);
      static PyObject *t_FieldArrayDictionary$Entry_scaledIncrement(t_FieldArrayDictionary$Entry *self, PyObject *args);
      static PyObject *t_FieldArrayDictionary$Entry_size(t_FieldArrayDictionary$Entry *self);
      static PyObject *t_FieldArrayDictionary$Entry_zero(t_FieldArrayDictionary$Entry *self);
      static PyObject *t_FieldArrayDictionary$Entry_get__key(t_FieldArrayDictionary$Entry *self, void *data);
      static PyObject *t_FieldArrayDictionary$Entry_get__value(t_FieldArrayDictionary$Entry *self, void *data);
      static PyObject *t_FieldArrayDictionary$Entry_get__parameters_(t_FieldArrayDictionary$Entry *self, void *data);
      static PyGetSetDef t_FieldArrayDictionary$Entry__fields_[] = {
        DECLARE_GET_FIELD(t_FieldArrayDictionary$Entry, key),
        DECLARE_GET_FIELD(t_FieldArrayDictionary$Entry, value),
        DECLARE_GET_FIELD(t_FieldArrayDictionary$Entry, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldArrayDictionary$Entry__methods_[] = {
        DECLARE_METHOD(t_FieldArrayDictionary$Entry, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldArrayDictionary$Entry, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldArrayDictionary$Entry, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldArrayDictionary$Entry, getKey, METH_NOARGS),
        DECLARE_METHOD(t_FieldArrayDictionary$Entry, getValue, METH_NOARGS),
        DECLARE_METHOD(t_FieldArrayDictionary$Entry, increment, METH_VARARGS),
        DECLARE_METHOD(t_FieldArrayDictionary$Entry, scaledIncrement, METH_VARARGS),
        DECLARE_METHOD(t_FieldArrayDictionary$Entry, size, METH_NOARGS),
        DECLARE_METHOD(t_FieldArrayDictionary$Entry, zero, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldArrayDictionary$Entry)[] = {
        { Py_tp_methods, t_FieldArrayDictionary$Entry__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldArrayDictionary$Entry__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldArrayDictionary$Entry)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldArrayDictionary$Entry, t_FieldArrayDictionary$Entry, FieldArrayDictionary$Entry);
      PyObject *t_FieldArrayDictionary$Entry::wrap_Object(const FieldArrayDictionary$Entry& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldArrayDictionary$Entry::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldArrayDictionary$Entry *self = (t_FieldArrayDictionary$Entry *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldArrayDictionary$Entry::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldArrayDictionary$Entry::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldArrayDictionary$Entry *self = (t_FieldArrayDictionary$Entry *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldArrayDictionary$Entry::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldArrayDictionary$Entry), &PY_TYPE_DEF(FieldArrayDictionary$Entry), module, "FieldArrayDictionary$Entry", 0);
      }

      void t_FieldArrayDictionary$Entry::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldArrayDictionary$Entry), "class_", make_descriptor(FieldArrayDictionary$Entry::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldArrayDictionary$Entry), "wrapfn_", make_descriptor(t_FieldArrayDictionary$Entry::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldArrayDictionary$Entry), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldArrayDictionary$Entry_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldArrayDictionary$Entry::initializeClass, 1)))
          return NULL;
        return t_FieldArrayDictionary$Entry::wrap_Object(FieldArrayDictionary$Entry(((t_FieldArrayDictionary$Entry *) arg)->object.this$));
      }
      static PyObject *t_FieldArrayDictionary$Entry_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldArrayDictionary$Entry::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldArrayDictionary$Entry_of_(t_FieldArrayDictionary$Entry *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldArrayDictionary$Entry_getKey(t_FieldArrayDictionary$Entry *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getKey());
        return j2p(result);
      }

      static PyObject *t_FieldArrayDictionary$Entry_getValue(t_FieldArrayDictionary$Entry *self)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
        OBJ_CALL(result = self->object.getValue());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }

      static PyObject *t_FieldArrayDictionary$Entry_increment(t_FieldArrayDictionary$Entry *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }
          }
          {
            JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "increment", args);
        return NULL;
      }

      static PyObject *t_FieldArrayDictionary$Entry_scaledIncrement(t_FieldArrayDictionary$Entry *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            FieldArrayDictionary$Entry a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "DK", FieldArrayDictionary$Entry::initializeClass, &a0, &a1, &p1, t_FieldArrayDictionary$Entry::parameters_))
            {
              OBJ_CALL(self->object.scaledIncrement(a0, a1));
              Py_RETURN_NONE;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldArrayDictionary$Entry a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldArrayDictionary$Entry::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldArrayDictionary$Entry::parameters_))
            {
              OBJ_CALL(self->object.scaledIncrement(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "scaledIncrement", args);
        return NULL;
      }

      static PyObject *t_FieldArrayDictionary$Entry_size(t_FieldArrayDictionary$Entry *self)
      {
        jint result;
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldArrayDictionary$Entry_zero(t_FieldArrayDictionary$Entry *self)
      {
        OBJ_CALL(self->object.zero());
        Py_RETURN_NONE;
      }
      static PyObject *t_FieldArrayDictionary$Entry_get__parameters_(t_FieldArrayDictionary$Entry *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldArrayDictionary$Entry_get__key(t_FieldArrayDictionary$Entry *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getKey());
        return j2p(value);
      }

      static PyObject *t_FieldArrayDictionary$Entry_get__value(t_FieldArrayDictionary$Entry *self, void *data)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
        OBJ_CALL(value = self->object.getValue());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/FieldEventOccurrence.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/FieldODEState.h"
#include "org/hipparchus/ode/events/Action.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *FieldEventOccurrence::class$ = NULL;
        jmethodID *FieldEventOccurrence::mids$ = NULL;
        bool FieldEventOccurrence::live$ = false;

        jclass FieldEventOccurrence::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/FieldEventOccurrence");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_5713f356705eba91] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/events/Action;Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getAction_4aa421fecbe7eed3] = env->getMethodID(cls, "getAction", "()Lorg/hipparchus/ode/events/Action;");
            mids$[mid_getNewState_ca829f9a56e61a02] = env->getMethodID(cls, "getNewState", "()Lorg/hipparchus/ode/FieldODEState;");
            mids$[mid_getStopTime_eba8e72a22c984ac] = env->getMethodID(cls, "getStopTime", "()Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldEventOccurrence::FieldEventOccurrence(const ::org::hipparchus::ode::events::Action & a0, const ::org::hipparchus::ode::FieldODEState & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5713f356705eba91, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::ode::events::Action FieldEventOccurrence::getAction() const
        {
          return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_getAction_4aa421fecbe7eed3]));
        }

        ::org::hipparchus::ode::FieldODEState FieldEventOccurrence::getNewState() const
        {
          return ::org::hipparchus::ode::FieldODEState(env->callObjectMethod(this$, mids$[mid_getNewState_ca829f9a56e61a02]));
        }

        ::org::hipparchus::CalculusFieldElement FieldEventOccurrence::getStopTime() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getStopTime_eba8e72a22c984ac]));
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
        static PyObject *t_FieldEventOccurrence_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventOccurrence_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventOccurrence_of_(t_FieldEventOccurrence *self, PyObject *args);
        static int t_FieldEventOccurrence_init_(t_FieldEventOccurrence *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldEventOccurrence_getAction(t_FieldEventOccurrence *self);
        static PyObject *t_FieldEventOccurrence_getNewState(t_FieldEventOccurrence *self);
        static PyObject *t_FieldEventOccurrence_getStopTime(t_FieldEventOccurrence *self);
        static PyObject *t_FieldEventOccurrence_get__action(t_FieldEventOccurrence *self, void *data);
        static PyObject *t_FieldEventOccurrence_get__newState(t_FieldEventOccurrence *self, void *data);
        static PyObject *t_FieldEventOccurrence_get__stopTime(t_FieldEventOccurrence *self, void *data);
        static PyObject *t_FieldEventOccurrence_get__parameters_(t_FieldEventOccurrence *self, void *data);
        static PyGetSetDef t_FieldEventOccurrence__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventOccurrence, action),
          DECLARE_GET_FIELD(t_FieldEventOccurrence, newState),
          DECLARE_GET_FIELD(t_FieldEventOccurrence, stopTime),
          DECLARE_GET_FIELD(t_FieldEventOccurrence, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventOccurrence__methods_[] = {
          DECLARE_METHOD(t_FieldEventOccurrence, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventOccurrence, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventOccurrence, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventOccurrence, getAction, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventOccurrence, getNewState, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventOccurrence, getStopTime, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventOccurrence)[] = {
          { Py_tp_methods, t_FieldEventOccurrence__methods_ },
          { Py_tp_init, (void *) t_FieldEventOccurrence_init_ },
          { Py_tp_getset, t_FieldEventOccurrence__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventOccurrence)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldEventOccurrence, t_FieldEventOccurrence, FieldEventOccurrence);
        PyObject *t_FieldEventOccurrence::wrap_Object(const FieldEventOccurrence& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventOccurrence::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventOccurrence *self = (t_FieldEventOccurrence *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEventOccurrence::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventOccurrence::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventOccurrence *self = (t_FieldEventOccurrence *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEventOccurrence::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventOccurrence), &PY_TYPE_DEF(FieldEventOccurrence), module, "FieldEventOccurrence", 0);
        }

        void t_FieldEventOccurrence::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventOccurrence), "class_", make_descriptor(FieldEventOccurrence::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventOccurrence), "wrapfn_", make_descriptor(t_FieldEventOccurrence::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventOccurrence), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEventOccurrence_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEventOccurrence::initializeClass, 1)))
            return NULL;
          return t_FieldEventOccurrence::wrap_Object(FieldEventOccurrence(((t_FieldEventOccurrence *) arg)->object.this$));
        }
        static PyObject *t_FieldEventOccurrence_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEventOccurrence::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEventOccurrence_of_(t_FieldEventOccurrence *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldEventOccurrence_init_(t_FieldEventOccurrence *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::ode::events::Action a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::FieldODEState a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          FieldEventOccurrence object((jobject) NULL);

          if (!parseArgs(args, "KKK", ::org::hipparchus::ode::events::Action::initializeClass, ::org::hipparchus::ode::FieldODEState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_Action::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEState::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            INT_CALL(object = FieldEventOccurrence(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldEventOccurrence_getAction(t_FieldEventOccurrence *self)
        {
          ::org::hipparchus::ode::events::Action result((jobject) NULL);
          OBJ_CALL(result = self->object.getAction());
          return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
        }

        static PyObject *t_FieldEventOccurrence_getNewState(t_FieldEventOccurrence *self)
        {
          ::org::hipparchus::ode::FieldODEState result((jobject) NULL);
          OBJ_CALL(result = self->object.getNewState());
          return ::org::hipparchus::ode::t_FieldODEState::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldEventOccurrence_getStopTime(t_FieldEventOccurrence *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getStopTime());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }
        static PyObject *t_FieldEventOccurrence_get__parameters_(t_FieldEventOccurrence *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventOccurrence_get__action(t_FieldEventOccurrence *self, void *data)
        {
          ::org::hipparchus::ode::events::Action value((jobject) NULL);
          OBJ_CALL(value = self->object.getAction());
          return ::org::hipparchus::ode::events::t_Action::wrap_Object(value);
        }

        static PyObject *t_FieldEventOccurrence_get__newState(t_FieldEventOccurrence *self, void *data)
        {
          ::org::hipparchus::ode::FieldODEState value((jobject) NULL);
          OBJ_CALL(value = self->object.getNewState());
          return ::org::hipparchus::ode::t_FieldODEState::wrap_Object(value);
        }

        static PyObject *t_FieldEventOccurrence_get__stopTime(t_FieldEventOccurrence *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getStopTime());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/attitude/GenericGNSS.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *GenericGNSS::class$ = NULL;
        jmethodID *GenericGNSS::mids$ = NULL;
        bool GenericGNSS::live$ = false;

        jclass GenericGNSS::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/GenericGNSS");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_be6476273154a2ce] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_correctedYaw_64e3133ed57cb807] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSFieldAttitudeContext;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
            mids$[mid_correctedYaw_dbb16eda5c9f6b1d] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSAttitudeContext;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GenericGNSS::GenericGNSS(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(env->newObject(initializeClass, &mids$, mid_init$_be6476273154a2ce, a0.this$, a1.this$, a2.this$, a3.this$)) {}
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
      namespace attitude {
        static PyObject *t_GenericGNSS_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GenericGNSS_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GenericGNSS_init_(t_GenericGNSS *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_GenericGNSS__methods_[] = {
          DECLARE_METHOD(t_GenericGNSS, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GenericGNSS, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GenericGNSS)[] = {
          { Py_tp_methods, t_GenericGNSS__methods_ },
          { Py_tp_init, (void *) t_GenericGNSS_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GenericGNSS)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider),
          NULL
        };

        DEFINE_TYPE(GenericGNSS, t_GenericGNSS, GenericGNSS);

        void t_GenericGNSS::install(PyObject *module)
        {
          installType(&PY_TYPE(GenericGNSS), &PY_TYPE_DEF(GenericGNSS), module, "GenericGNSS", 0);
        }

        void t_GenericGNSS::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GenericGNSS), "class_", make_descriptor(GenericGNSS::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GenericGNSS), "wrapfn_", make_descriptor(t_GenericGNSS::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GenericGNSS), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GenericGNSS_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GenericGNSS::initializeClass, 1)))
            return NULL;
          return t_GenericGNSS::wrap_Object(GenericGNSS(((t_GenericGNSS *) arg)->object.this$));
        }
        static PyObject *t_GenericGNSS_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GenericGNSS::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GenericGNSS_init_(t_GenericGNSS *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a2((jobject) NULL);
          ::org::orekit::frames::Frame a3((jobject) NULL);
          GenericGNSS object((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = GenericGNSS(a0, a1, a2, a3));
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
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/PrintWriter.h"
#include "java/io/UnsupportedEncodingException.h"
#include "java/util/Locale.h"
#include "java/io/FileNotFoundException.h"
#include "java/lang/CharSequence.h"
#include "java/io/OutputStream.h"
#include "java/io/PrintWriter.h"
#include "java/io/File.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *PrintWriter::class$ = NULL;
    jmethodID *PrintWriter::mids$ = NULL;
    bool PrintWriter::live$ = false;

    jclass PrintWriter::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/PrintWriter");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0613af62f2ba5dba] = env->getMethodID(cls, "<init>", "(Ljava/io/File;)V");
        mids$[mid_init$_fd7cb6689cfa6eeb] = env->getMethodID(cls, "<init>", "(Ljava/io/OutputStream;)V");
        mids$[mid_init$_46e98d3f266d9b2f] = env->getMethodID(cls, "<init>", "(Ljava/io/Writer;)V");
        mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_94ced6352b9e37c8] = env->getMethodID(cls, "<init>", "(Ljava/io/File;Ljava/lang/String;)V");
        mids$[mid_init$_6a2001eff0605f71] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
        mids$[mid_init$_91fa247883002c58] = env->getMethodID(cls, "<init>", "(Ljava/io/OutputStream;Z)V");
        mids$[mid_init$_a295dc3cee02283d] = env->getMethodID(cls, "<init>", "(Ljava/io/Writer;Z)V");
        mids$[mid_append_4a7919589bf96cf5] = env->getMethodID(cls, "append", "(C)Ljava/io/PrintWriter;");
        mids$[mid_append_25da441494026c24] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;)Ljava/io/PrintWriter;");
        mids$[mid_append_8e17b09960d065a0] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;II)Ljava/io/PrintWriter;");
        mids$[mid_checkError_b108b35ef48e27bd] = env->getMethodID(cls, "checkError", "()Z");
        mids$[mid_close_0fa09c18fee449d5] = env->getMethodID(cls, "close", "()V");
        mids$[mid_flush_0fa09c18fee449d5] = env->getMethodID(cls, "flush", "()V");
        mids$[mid_format_46403640cc63e5d7] = env->getMethodID(cls, "format", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintWriter;");
        mids$[mid_format_94bed11dedfa9845] = env->getMethodID(cls, "format", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintWriter;");
        mids$[mid_print_3534e8e092c162a5] = env->getMethodID(cls, "print", "([C)V");
        mids$[mid_print_d0bc48d5b00dc40c] = env->getMethodID(cls, "print", "(Ljava/lang/String;)V");
        mids$[mid_print_bd04c9335fb9e4cf] = env->getMethodID(cls, "print", "(Z)V");
        mids$[mid_print_636c0bbb96cab723] = env->getMethodID(cls, "print", "(C)V");
        mids$[mid_print_17db3a65980d3441] = env->getMethodID(cls, "print", "(D)V");
        mids$[mid_print_f63147a1690942cc] = env->getMethodID(cls, "print", "(F)V");
        mids$[mid_print_99803b0791f320ff] = env->getMethodID(cls, "print", "(I)V");
        mids$[mid_print_2990946c992aafed] = env->getMethodID(cls, "print", "(Ljava/lang/Object;)V");
        mids$[mid_print_3a8e7649f31fdb20] = env->getMethodID(cls, "print", "(J)V");
        mids$[mid_printf_46403640cc63e5d7] = env->getMethodID(cls, "printf", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintWriter;");
        mids$[mid_printf_94bed11dedfa9845] = env->getMethodID(cls, "printf", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintWriter;");
        mids$[mid_println_0fa09c18fee449d5] = env->getMethodID(cls, "println", "()V");
        mids$[mid_println_3534e8e092c162a5] = env->getMethodID(cls, "println", "([C)V");
        mids$[mid_println_d0bc48d5b00dc40c] = env->getMethodID(cls, "println", "(Ljava/lang/String;)V");
        mids$[mid_println_bd04c9335fb9e4cf] = env->getMethodID(cls, "println", "(Z)V");
        mids$[mid_println_636c0bbb96cab723] = env->getMethodID(cls, "println", "(C)V");
        mids$[mid_println_17db3a65980d3441] = env->getMethodID(cls, "println", "(D)V");
        mids$[mid_println_f63147a1690942cc] = env->getMethodID(cls, "println", "(F)V");
        mids$[mid_println_99803b0791f320ff] = env->getMethodID(cls, "println", "(I)V");
        mids$[mid_println_2990946c992aafed] = env->getMethodID(cls, "println", "(Ljava/lang/Object;)V");
        mids$[mid_println_3a8e7649f31fdb20] = env->getMethodID(cls, "println", "(J)V");
        mids$[mid_write_3534e8e092c162a5] = env->getMethodID(cls, "write", "([C)V");
        mids$[mid_write_d0bc48d5b00dc40c] = env->getMethodID(cls, "write", "(Ljava/lang/String;)V");
        mids$[mid_write_99803b0791f320ff] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_44aecef33af91018] = env->getMethodID(cls, "write", "([CII)V");
        mids$[mid_write_04eb5531e9227c93] = env->getMethodID(cls, "write", "(Ljava/lang/String;II)V");
        mids$[mid_setError_0fa09c18fee449d5] = env->getMethodID(cls, "setError", "()V");
        mids$[mid_clearError_0fa09c18fee449d5] = env->getMethodID(cls, "clearError", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    PrintWriter::PrintWriter(const ::java::io::File & a0) : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_0613af62f2ba5dba, a0.this$)) {}

    PrintWriter::PrintWriter(const ::java::io::OutputStream & a0) : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_fd7cb6689cfa6eeb, a0.this$)) {}

    PrintWriter::PrintWriter(const ::java::io::Writer & a0) : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_46e98d3f266d9b2f, a0.this$)) {}

    PrintWriter::PrintWriter(const ::java::lang::String & a0) : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

    PrintWriter::PrintWriter(const ::java::io::File & a0, const ::java::lang::String & a1) : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_94ced6352b9e37c8, a0.this$, a1.this$)) {}

    PrintWriter::PrintWriter(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_6a2001eff0605f71, a0.this$, a1.this$)) {}

    PrintWriter::PrintWriter(const ::java::io::OutputStream & a0, jboolean a1) : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_91fa247883002c58, a0.this$, a1)) {}

    PrintWriter::PrintWriter(const ::java::io::Writer & a0, jboolean a1) : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_a295dc3cee02283d, a0.this$, a1)) {}

    PrintWriter PrintWriter::append(jchar a0) const
    {
      return PrintWriter(env->callObjectMethod(this$, mids$[mid_append_4a7919589bf96cf5], a0));
    }

    PrintWriter PrintWriter::append(const ::java::lang::CharSequence & a0) const
    {
      return PrintWriter(env->callObjectMethod(this$, mids$[mid_append_25da441494026c24], a0.this$));
    }

    PrintWriter PrintWriter::append(const ::java::lang::CharSequence & a0, jint a1, jint a2) const
    {
      return PrintWriter(env->callObjectMethod(this$, mids$[mid_append_8e17b09960d065a0], a0.this$, a1, a2));
    }

    jboolean PrintWriter::checkError() const
    {
      return env->callBooleanMethod(this$, mids$[mid_checkError_b108b35ef48e27bd]);
    }

    void PrintWriter::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_0fa09c18fee449d5]);
    }

    void PrintWriter::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_0fa09c18fee449d5]);
    }

    PrintWriter PrintWriter::format(const ::java::lang::String & a0, const JArray< ::java::lang::Object > & a1) const
    {
      return PrintWriter(env->callObjectMethod(this$, mids$[mid_format_46403640cc63e5d7], a0.this$, a1.this$));
    }

    PrintWriter PrintWriter::format(const ::java::util::Locale & a0, const ::java::lang::String & a1, const JArray< ::java::lang::Object > & a2) const
    {
      return PrintWriter(env->callObjectMethod(this$, mids$[mid_format_94bed11dedfa9845], a0.this$, a1.this$, a2.this$));
    }

    void PrintWriter::print(const JArray< jchar > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_3534e8e092c162a5], a0.this$);
    }

    void PrintWriter::print(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_d0bc48d5b00dc40c], a0.this$);
    }

    void PrintWriter::print(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_bd04c9335fb9e4cf], a0);
    }

    void PrintWriter::print(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_636c0bbb96cab723], a0);
    }

    void PrintWriter::print(jdouble a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_17db3a65980d3441], a0);
    }

    void PrintWriter::print(jfloat a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_f63147a1690942cc], a0);
    }

    void PrintWriter::print(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_99803b0791f320ff], a0);
    }

    void PrintWriter::print(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_2990946c992aafed], a0.this$);
    }

    void PrintWriter::print(jlong a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_3a8e7649f31fdb20], a0);
    }

    PrintWriter PrintWriter::printf(const ::java::lang::String & a0, const JArray< ::java::lang::Object > & a1) const
    {
      return PrintWriter(env->callObjectMethod(this$, mids$[mid_printf_46403640cc63e5d7], a0.this$, a1.this$));
    }

    PrintWriter PrintWriter::printf(const ::java::util::Locale & a0, const ::java::lang::String & a1, const JArray< ::java::lang::Object > & a2) const
    {
      return PrintWriter(env->callObjectMethod(this$, mids$[mid_printf_94bed11dedfa9845], a0.this$, a1.this$, a2.this$));
    }

    void PrintWriter::println() const
    {
      env->callVoidMethod(this$, mids$[mid_println_0fa09c18fee449d5]);
    }

    void PrintWriter::println(const JArray< jchar > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_3534e8e092c162a5], a0.this$);
    }

    void PrintWriter::println(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_d0bc48d5b00dc40c], a0.this$);
    }

    void PrintWriter::println(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_bd04c9335fb9e4cf], a0);
    }

    void PrintWriter::println(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_636c0bbb96cab723], a0);
    }

    void PrintWriter::println(jdouble a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_17db3a65980d3441], a0);
    }

    void PrintWriter::println(jfloat a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_f63147a1690942cc], a0);
    }

    void PrintWriter::println(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_99803b0791f320ff], a0);
    }

    void PrintWriter::println(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_2990946c992aafed], a0.this$);
    }

    void PrintWriter::println(jlong a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_3a8e7649f31fdb20], a0);
    }

    void PrintWriter::write(const JArray< jchar > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_3534e8e092c162a5], a0.this$);
    }

    void PrintWriter::write(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_d0bc48d5b00dc40c], a0.this$);
    }

    void PrintWriter::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_99803b0791f320ff], a0);
    }

    void PrintWriter::write(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_44aecef33af91018], a0.this$, a1, a2);
    }

    void PrintWriter::write(const ::java::lang::String & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_04eb5531e9227c93], a0.this$, a1, a2);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_PrintWriter_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_PrintWriter_instance_(PyTypeObject *type, PyObject *arg);
    static int t_PrintWriter_init_(t_PrintWriter *self, PyObject *args, PyObject *kwds);
    static PyObject *t_PrintWriter_append(t_PrintWriter *self, PyObject *args);
    static PyObject *t_PrintWriter_checkError(t_PrintWriter *self);
    static PyObject *t_PrintWriter_close(t_PrintWriter *self, PyObject *args);
    static PyObject *t_PrintWriter_flush(t_PrintWriter *self, PyObject *args);
    static PyObject *t_PrintWriter_format(t_PrintWriter *self, PyObject *args);
    static PyObject *t_PrintWriter_print(t_PrintWriter *self, PyObject *args);
    static PyObject *t_PrintWriter_printf(t_PrintWriter *self, PyObject *args);
    static PyObject *t_PrintWriter_println(t_PrintWriter *self, PyObject *args);
    static PyObject *t_PrintWriter_write(t_PrintWriter *self, PyObject *args);

    static PyMethodDef t_PrintWriter__methods_[] = {
      DECLARE_METHOD(t_PrintWriter, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_PrintWriter, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_PrintWriter, append, METH_VARARGS),
      DECLARE_METHOD(t_PrintWriter, checkError, METH_NOARGS),
      DECLARE_METHOD(t_PrintWriter, close, METH_VARARGS),
      DECLARE_METHOD(t_PrintWriter, flush, METH_VARARGS),
      DECLARE_METHOD(t_PrintWriter, format, METH_VARARGS),
      DECLARE_METHOD(t_PrintWriter, print, METH_VARARGS),
      DECLARE_METHOD(t_PrintWriter, printf, METH_VARARGS),
      DECLARE_METHOD(t_PrintWriter, println, METH_VARARGS),
      DECLARE_METHOD(t_PrintWriter, write, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(PrintWriter)[] = {
      { Py_tp_methods, t_PrintWriter__methods_ },
      { Py_tp_init, (void *) t_PrintWriter_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(PrintWriter)[] = {
      &PY_TYPE_DEF(::java::io::Writer),
      NULL
    };

    DEFINE_TYPE(PrintWriter, t_PrintWriter, PrintWriter);

    void t_PrintWriter::install(PyObject *module)
    {
      installType(&PY_TYPE(PrintWriter), &PY_TYPE_DEF(PrintWriter), module, "PrintWriter", 0);
    }

    void t_PrintWriter::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(PrintWriter), "class_", make_descriptor(PrintWriter::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(PrintWriter), "wrapfn_", make_descriptor(t_PrintWriter::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(PrintWriter), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_PrintWriter_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, PrintWriter::initializeClass, 1)))
        return NULL;
      return t_PrintWriter::wrap_Object(PrintWriter(((t_PrintWriter *) arg)->object.this$));
    }
    static PyObject *t_PrintWriter_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, PrintWriter::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_PrintWriter_init_(t_PrintWriter *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::io::File a0((jobject) NULL);
          PrintWriter object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::File::initializeClass, &a0))
          {
            INT_CALL(object = PrintWriter(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::io::OutputStream a0((jobject) NULL);
          PrintWriter object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::OutputStream::initializeClass, &a0))
          {
            INT_CALL(object = PrintWriter(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::io::Writer a0((jobject) NULL);
          PrintWriter object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::Writer::initializeClass, &a0))
          {
            INT_CALL(object = PrintWriter(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          PrintWriter object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = PrintWriter(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::io::File a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          PrintWriter object((jobject) NULL);

          if (!parseArgs(args, "ks", ::java::io::File::initializeClass, &a0, &a1))
          {
            INT_CALL(object = PrintWriter(a0, a1));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          PrintWriter object((jobject) NULL);

          if (!parseArgs(args, "ss", &a0, &a1))
          {
            INT_CALL(object = PrintWriter(a0, a1));
            self->object = object;
            break;
          }
        }
        {
          ::java::io::OutputStream a0((jobject) NULL);
          jboolean a1;
          PrintWriter object((jobject) NULL);

          if (!parseArgs(args, "kZ", ::java::io::OutputStream::initializeClass, &a0, &a1))
          {
            INT_CALL(object = PrintWriter(a0, a1));
            self->object = object;
            break;
          }
        }
        {
          ::java::io::Writer a0((jobject) NULL);
          jboolean a1;
          PrintWriter object((jobject) NULL);

          if (!parseArgs(args, "kZ", ::java::io::Writer::initializeClass, &a0, &a1))
          {
            INT_CALL(object = PrintWriter(a0, a1));
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

    static PyObject *t_PrintWriter_append(t_PrintWriter *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          PrintWriter result((jobject) NULL);

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_PrintWriter::wrap_Object(result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          PrintWriter result((jobject) NULL);

          if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_PrintWriter::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          PrintWriter result((jobject) NULL);

          if (!parseArgs(args, "OII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.append(a0, a1, a2));
            return t_PrintWriter::wrap_Object(result);
          }
        }
      }

      return callSuper(PY_TYPE(PrintWriter), (PyObject *) self, "append", args, 2);
    }

    static PyObject *t_PrintWriter_checkError(t_PrintWriter *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.checkError());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_PrintWriter_close(t_PrintWriter *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(PrintWriter), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_PrintWriter_flush(t_PrintWriter *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.flush());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(PrintWriter), (PyObject *) self, "flush", args, 2);
    }

    static PyObject *t_PrintWriter_format(t_PrintWriter *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          PrintWriter result((jobject) NULL);

          if (!parseArgs(args, "s[o", &a0, &a1))
          {
            OBJ_CALL(result = self->object.format(a0, a1));
            return t_PrintWriter::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::util::Locale a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          JArray< ::java::lang::Object > a2((jobject) NULL);
          PrintWriter result((jobject) NULL);

          if (!parseArgs(args, "ks[o", ::java::util::Locale::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.format(a0, a1, a2));
            return t_PrintWriter::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "format", args);
      return NULL;
    }

    static PyObject *t_PrintWriter_print(t_PrintWriter *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jchar > a0((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jboolean a0;

          if (!parseArgs(args, "Z", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jchar a0;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jdouble a0;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jfloat a0;

          if (!parseArgs(args, "F", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jint a0;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jlong a0;

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "print", args);
      return NULL;
    }

    static PyObject *t_PrintWriter_printf(t_PrintWriter *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          PrintWriter result((jobject) NULL);

          if (!parseArgs(args, "s[o", &a0, &a1))
          {
            OBJ_CALL(result = self->object.printf(a0, a1));
            return t_PrintWriter::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::util::Locale a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          JArray< ::java::lang::Object > a2((jobject) NULL);
          PrintWriter result((jobject) NULL);

          if (!parseArgs(args, "ks[o", ::java::util::Locale::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.printf(a0, a1, a2));
            return t_PrintWriter::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "printf", args);
      return NULL;
    }

    static PyObject *t_PrintWriter_println(t_PrintWriter *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          OBJ_CALL(self->object.println());
          Py_RETURN_NONE;
        }
        break;
       case 1:
        {
          JArray< jchar > a0((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jboolean a0;

          if (!parseArgs(args, "Z", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jchar a0;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jdouble a0;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jfloat a0;

          if (!parseArgs(args, "F", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jint a0;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jlong a0;

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "println", args);
      return NULL;
    }

    static PyObject *t_PrintWriter_write(t_PrintWriter *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jchar > a0((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jint a0;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.write(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "sII", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.write(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
      }

      return callSuper(PY_TYPE(PrintWriter), (PyObject *) self, "write", args, 2);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/Region$Location.h"
#include "org/hipparchus/geometry/partitioning/Region$Location.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *Region$Location::class$ = NULL;
        jmethodID *Region$Location::mids$ = NULL;
        bool Region$Location::live$ = false;
        Region$Location *Region$Location::BOUNDARY = NULL;
        Region$Location *Region$Location::INSIDE = NULL;
        Region$Location *Region$Location::OUTSIDE = NULL;

        jclass Region$Location::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/Region$Location");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_bbfd54a308c574d3] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/geometry/partitioning/Region$Location;");
            mids$[mid_values_696a100e276703cd] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/geometry/partitioning/Region$Location;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            BOUNDARY = new Region$Location(env->getStaticObjectField(cls, "BOUNDARY", "Lorg/hipparchus/geometry/partitioning/Region$Location;"));
            INSIDE = new Region$Location(env->getStaticObjectField(cls, "INSIDE", "Lorg/hipparchus/geometry/partitioning/Region$Location;"));
            OUTSIDE = new Region$Location(env->getStaticObjectField(cls, "OUTSIDE", "Lorg/hipparchus/geometry/partitioning/Region$Location;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Region$Location Region$Location::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return Region$Location(env->callStaticObjectMethod(cls, mids$[mid_valueOf_bbfd54a308c574d3], a0.this$));
        }

        JArray< Region$Location > Region$Location::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< Region$Location >(env->callStaticObjectMethod(cls, mids$[mid_values_696a100e276703cd]));
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
        static PyObject *t_Region$Location_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Region$Location_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Region$Location_of_(t_Region$Location *self, PyObject *args);
        static PyObject *t_Region$Location_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_Region$Location_values(PyTypeObject *type);
        static PyObject *t_Region$Location_get__parameters_(t_Region$Location *self, void *data);
        static PyGetSetDef t_Region$Location__fields_[] = {
          DECLARE_GET_FIELD(t_Region$Location, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Region$Location__methods_[] = {
          DECLARE_METHOD(t_Region$Location, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Region$Location, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Region$Location, of_, METH_VARARGS),
          DECLARE_METHOD(t_Region$Location, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Region$Location, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Region$Location)[] = {
          { Py_tp_methods, t_Region$Location__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Region$Location__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Region$Location)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(Region$Location, t_Region$Location, Region$Location);
        PyObject *t_Region$Location::wrap_Object(const Region$Location& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Region$Location::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Region$Location *self = (t_Region$Location *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Region$Location::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Region$Location::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Region$Location *self = (t_Region$Location *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Region$Location::install(PyObject *module)
        {
          installType(&PY_TYPE(Region$Location), &PY_TYPE_DEF(Region$Location), module, "Region$Location", 0);
        }

        void t_Region$Location::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region$Location), "class_", make_descriptor(Region$Location::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region$Location), "wrapfn_", make_descriptor(t_Region$Location::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region$Location), "boxfn_", make_descriptor(boxObject));
          env->getClass(Region$Location::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region$Location), "BOUNDARY", make_descriptor(t_Region$Location::wrap_Object(*Region$Location::BOUNDARY)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region$Location), "INSIDE", make_descriptor(t_Region$Location::wrap_Object(*Region$Location::INSIDE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region$Location), "OUTSIDE", make_descriptor(t_Region$Location::wrap_Object(*Region$Location::OUTSIDE)));
        }

        static PyObject *t_Region$Location_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Region$Location::initializeClass, 1)))
            return NULL;
          return t_Region$Location::wrap_Object(Region$Location(((t_Region$Location *) arg)->object.this$));
        }
        static PyObject *t_Region$Location_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Region$Location::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Region$Location_of_(t_Region$Location *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Region$Location_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          Region$Location result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::geometry::partitioning::Region$Location::valueOf(a0));
            return t_Region$Location::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_Region$Location_values(PyTypeObject *type)
        {
          JArray< Region$Location > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::geometry::partitioning::Region$Location::values());
          return JArray<jobject>(result.this$).wrap(t_Region$Location::wrap_jobject);
        }
        static PyObject *t_Region$Location_get__parameters_(t_Region$Location *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/FieldAbstractRuleFactory.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/util/Pair.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/analysis/integration/gauss/FieldRuleFactory.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *FieldAbstractRuleFactory::class$ = NULL;
          jmethodID *FieldAbstractRuleFactory::mids$ = NULL;
          bool FieldAbstractRuleFactory::live$ = false;

          jclass FieldAbstractRuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/FieldAbstractRuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_484998d88974267b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
              mids$[mid_getField_5b28be2d3632a5dc] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
              mids$[mid_getRule_e670405dd33862ee] = env->getMethodID(cls, "getRule", "(I)Lorg/hipparchus/util/Pair;");
              mids$[mid_computeRule_e670405dd33862ee] = env->getMethodID(cls, "computeRule", "(I)Lorg/hipparchus/util/Pair;");
              mids$[mid_findRoots_d3fee632e761a383] = env->getMethodID(cls, "findRoots", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_enforceSymmetry_72479ee08453ef97] = env->getMethodID(cls, "enforceSymmetry", "([Lorg/hipparchus/CalculusFieldElement;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldAbstractRuleFactory::FieldAbstractRuleFactory(const ::org::hipparchus::Field & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_484998d88974267b, a0.this$)) {}

          ::org::hipparchus::Field FieldAbstractRuleFactory::getField() const
          {
            return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_5b28be2d3632a5dc]));
          }

          ::org::hipparchus::util::Pair FieldAbstractRuleFactory::getRule(jint a0) const
          {
            return ::org::hipparchus::util::Pair(env->callObjectMethod(this$, mids$[mid_getRule_e670405dd33862ee], a0));
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
    namespace analysis {
      namespace integration {
        namespace gauss {
          static PyObject *t_FieldAbstractRuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldAbstractRuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldAbstractRuleFactory_of_(t_FieldAbstractRuleFactory *self, PyObject *args);
          static int t_FieldAbstractRuleFactory_init_(t_FieldAbstractRuleFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldAbstractRuleFactory_getField(t_FieldAbstractRuleFactory *self);
          static PyObject *t_FieldAbstractRuleFactory_getRule(t_FieldAbstractRuleFactory *self, PyObject *arg);
          static PyObject *t_FieldAbstractRuleFactory_get__field(t_FieldAbstractRuleFactory *self, void *data);
          static PyObject *t_FieldAbstractRuleFactory_get__parameters_(t_FieldAbstractRuleFactory *self, void *data);
          static PyGetSetDef t_FieldAbstractRuleFactory__fields_[] = {
            DECLARE_GET_FIELD(t_FieldAbstractRuleFactory, field),
            DECLARE_GET_FIELD(t_FieldAbstractRuleFactory, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldAbstractRuleFactory__methods_[] = {
            DECLARE_METHOD(t_FieldAbstractRuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldAbstractRuleFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldAbstractRuleFactory, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldAbstractRuleFactory, getField, METH_NOARGS),
            DECLARE_METHOD(t_FieldAbstractRuleFactory, getRule, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldAbstractRuleFactory)[] = {
            { Py_tp_methods, t_FieldAbstractRuleFactory__methods_ },
            { Py_tp_init, (void *) t_FieldAbstractRuleFactory_init_ },
            { Py_tp_getset, t_FieldAbstractRuleFactory__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldAbstractRuleFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldAbstractRuleFactory, t_FieldAbstractRuleFactory, FieldAbstractRuleFactory);
          PyObject *t_FieldAbstractRuleFactory::wrap_Object(const FieldAbstractRuleFactory& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldAbstractRuleFactory::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldAbstractRuleFactory *self = (t_FieldAbstractRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldAbstractRuleFactory::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldAbstractRuleFactory::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldAbstractRuleFactory *self = (t_FieldAbstractRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldAbstractRuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldAbstractRuleFactory), &PY_TYPE_DEF(FieldAbstractRuleFactory), module, "FieldAbstractRuleFactory", 0);
          }

          void t_FieldAbstractRuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractRuleFactory), "class_", make_descriptor(FieldAbstractRuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractRuleFactory), "wrapfn_", make_descriptor(t_FieldAbstractRuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractRuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldAbstractRuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldAbstractRuleFactory::initializeClass, 1)))
              return NULL;
            return t_FieldAbstractRuleFactory::wrap_Object(FieldAbstractRuleFactory(((t_FieldAbstractRuleFactory *) arg)->object.this$));
          }
          static PyObject *t_FieldAbstractRuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldAbstractRuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldAbstractRuleFactory_of_(t_FieldAbstractRuleFactory *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldAbstractRuleFactory_init_(t_FieldAbstractRuleFactory *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldAbstractRuleFactory object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = FieldAbstractRuleFactory(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FieldAbstractRuleFactory_getField(t_FieldAbstractRuleFactory *self)
          {
            ::org::hipparchus::Field result((jobject) NULL);
            OBJ_CALL(result = self->object.getField());
            return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldAbstractRuleFactory_getRule(t_FieldAbstractRuleFactory *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::util::Pair result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getRule(a0));
              return ::org::hipparchus::util::t_Pair::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getRule", arg);
            return NULL;
          }
          static PyObject *t_FieldAbstractRuleFactory_get__parameters_(t_FieldAbstractRuleFactory *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldAbstractRuleFactory_get__field(t_FieldAbstractRuleFactory *self, void *data)
          {
            ::org::hipparchus::Field value((jobject) NULL);
            OBJ_CALL(value = self->object.getField());
            return ::org::hipparchus::t_Field::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/NodeDetector.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/events/NodeDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *NodeDetector::class$ = NULL;
        jmethodID *NodeDetector::mids$ = NULL;
        bool NodeDetector::live$ = false;

        jclass NodeDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/NodeDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b5680f5c30eede66] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
            mids$[mid_init$_4e10a74243c36dbb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/frames/Frame;)V");
            mids$[mid_init$_361a443c800ec596] = env->getMethodID(cls, "<init>", "(DLorg/orekit/orbits/Orbit;Lorg/orekit/frames/Frame;)V");
            mids$[mid_g_432f3d328c15ec82] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_create_c0eff52c5752eb86] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/NodeDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NodeDetector::NodeDetector(const ::org::orekit::frames::Frame & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_b5680f5c30eede66, a0.this$)) {}

        NodeDetector::NodeDetector(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::frames::Frame & a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_4e10a74243c36dbb, a0.this$, a1.this$)) {}

        NodeDetector::NodeDetector(jdouble a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_361a443c800ec596, a0, a1.this$, a2.this$)) {}

        jdouble NodeDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_432f3d328c15ec82], a0.this$);
        }

        ::org::orekit::frames::Frame NodeDetector::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
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
      namespace events {
        static PyObject *t_NodeDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NodeDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NodeDetector_of_(t_NodeDetector *self, PyObject *args);
        static int t_NodeDetector_init_(t_NodeDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NodeDetector_g(t_NodeDetector *self, PyObject *args);
        static PyObject *t_NodeDetector_getFrame(t_NodeDetector *self);
        static PyObject *t_NodeDetector_get__frame(t_NodeDetector *self, void *data);
        static PyObject *t_NodeDetector_get__parameters_(t_NodeDetector *self, void *data);
        static PyGetSetDef t_NodeDetector__fields_[] = {
          DECLARE_GET_FIELD(t_NodeDetector, frame),
          DECLARE_GET_FIELD(t_NodeDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NodeDetector__methods_[] = {
          DECLARE_METHOD(t_NodeDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NodeDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NodeDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_NodeDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_NodeDetector, getFrame, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NodeDetector)[] = {
          { Py_tp_methods, t_NodeDetector__methods_ },
          { Py_tp_init, (void *) t_NodeDetector_init_ },
          { Py_tp_getset, t_NodeDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NodeDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(NodeDetector, t_NodeDetector, NodeDetector);
        PyObject *t_NodeDetector::wrap_Object(const NodeDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_NodeDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_NodeDetector *self = (t_NodeDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_NodeDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_NodeDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_NodeDetector *self = (t_NodeDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_NodeDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(NodeDetector), &PY_TYPE_DEF(NodeDetector), module, "NodeDetector", 0);
        }

        void t_NodeDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NodeDetector), "class_", make_descriptor(NodeDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NodeDetector), "wrapfn_", make_descriptor(t_NodeDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NodeDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NodeDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NodeDetector::initializeClass, 1)))
            return NULL;
          return t_NodeDetector::wrap_Object(NodeDetector(((t_NodeDetector *) arg)->object.this$));
        }
        static PyObject *t_NodeDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NodeDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_NodeDetector_of_(t_NodeDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_NodeDetector_init_(t_NodeDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              NodeDetector object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
              {
                INT_CALL(object = NodeDetector(a0));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(NodeDetector);
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::frames::Frame a1((jobject) NULL);
              NodeDetector object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
              {
                INT_CALL(object = NodeDetector(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(NodeDetector);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              ::org::orekit::orbits::Orbit a1((jobject) NULL);
              ::org::orekit::frames::Frame a2((jobject) NULL);
              NodeDetector object((jobject) NULL);

              if (!parseArgs(args, "Dkk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = NodeDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(NodeDetector);
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

        static PyObject *t_NodeDetector_g(t_NodeDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NodeDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_NodeDetector_getFrame(t_NodeDetector *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }
        static PyObject *t_NodeDetector_get__parameters_(t_NodeDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_NodeDetector_get__frame(t_NodeDetector *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/PythonEnablingPredicate.h"
#include "org/orekit/propagation/events/EnablingPredicate.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *PythonEnablingPredicate::class$ = NULL;
        jmethodID *PythonEnablingPredicate::mids$ = NULL;
        bool PythonEnablingPredicate::live$ = false;

        jclass PythonEnablingPredicate::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PythonEnablingPredicate");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_eventIsEnabled_9da0e57d64f11841] = env->getMethodID(cls, "eventIsEnabled", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;D)Z");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEnablingPredicate::PythonEnablingPredicate() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonEnablingPredicate::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonEnablingPredicate::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonEnablingPredicate::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
      namespace events {
        static PyObject *t_PythonEnablingPredicate_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEnablingPredicate_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonEnablingPredicate_init_(t_PythonEnablingPredicate *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEnablingPredicate_finalize(t_PythonEnablingPredicate *self);
        static PyObject *t_PythonEnablingPredicate_pythonExtension(t_PythonEnablingPredicate *self, PyObject *args);
        static jboolean JNICALL t_PythonEnablingPredicate_eventIsEnabled0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2);
        static void JNICALL t_PythonEnablingPredicate_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonEnablingPredicate_get__self(t_PythonEnablingPredicate *self, void *data);
        static PyGetSetDef t_PythonEnablingPredicate__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEnablingPredicate, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEnablingPredicate__methods_[] = {
          DECLARE_METHOD(t_PythonEnablingPredicate, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEnablingPredicate, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEnablingPredicate, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEnablingPredicate, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEnablingPredicate)[] = {
          { Py_tp_methods, t_PythonEnablingPredicate__methods_ },
          { Py_tp_init, (void *) t_PythonEnablingPredicate_init_ },
          { Py_tp_getset, t_PythonEnablingPredicate__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEnablingPredicate)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEnablingPredicate, t_PythonEnablingPredicate, PythonEnablingPredicate);

        void t_PythonEnablingPredicate::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEnablingPredicate), &PY_TYPE_DEF(PythonEnablingPredicate), module, "PythonEnablingPredicate", 1);
        }

        void t_PythonEnablingPredicate::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEnablingPredicate), "class_", make_descriptor(PythonEnablingPredicate::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEnablingPredicate), "wrapfn_", make_descriptor(t_PythonEnablingPredicate::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEnablingPredicate), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEnablingPredicate::initializeClass);
          JNINativeMethod methods[] = {
            { "eventIsEnabled", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;D)Z", (void *) t_PythonEnablingPredicate_eventIsEnabled0 },
            { "pythonDecRef", "()V", (void *) t_PythonEnablingPredicate_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonEnablingPredicate_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEnablingPredicate::initializeClass, 1)))
            return NULL;
          return t_PythonEnablingPredicate::wrap_Object(PythonEnablingPredicate(((t_PythonEnablingPredicate *) arg)->object.this$));
        }
        static PyObject *t_PythonEnablingPredicate_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEnablingPredicate::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonEnablingPredicate_init_(t_PythonEnablingPredicate *self, PyObject *args, PyObject *kwds)
        {
          PythonEnablingPredicate object((jobject) NULL);

          INT_CALL(object = PythonEnablingPredicate());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEnablingPredicate_finalize(t_PythonEnablingPredicate *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEnablingPredicate_pythonExtension(t_PythonEnablingPredicate *self, PyObject *args)
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

        static jboolean JNICALL t_PythonEnablingPredicate_eventIsEnabled0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEnablingPredicate::mids$[PythonEnablingPredicate::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jboolean value;
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = ::org::orekit::propagation::events::t_EventDetector::wrap_Object(::org::orekit::propagation::events::EventDetector(a1));
          PyObject *result = PyObject_CallMethod(obj, "eventIsEnabled", "OOd", o0, o1, (double) a2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "Z", &value))
          {
            throwTypeError("eventIsEnabled", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jboolean) 0;
        }

        static void JNICALL t_PythonEnablingPredicate_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEnablingPredicate::mids$[PythonEnablingPredicate::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEnablingPredicate::mids$[PythonEnablingPredicate::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonEnablingPredicate_get__self(t_PythonEnablingPredicate *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/ntrip/CarrierPhase.h"
#include "org/orekit/gnss/metric/ntrip/CarrierPhase.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *CarrierPhase::class$ = NULL;
          jmethodID *CarrierPhase::mids$ = NULL;
          bool CarrierPhase::live$ = false;
          CarrierPhase *CarrierPhase::L1 = NULL;
          CarrierPhase *CarrierPhase::L1_L2 = NULL;
          CarrierPhase *CarrierPhase::NO = NULL;

          jclass CarrierPhase::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/CarrierPhase");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCarrierPhase_6c8f44ae7eea9423] = env->getStaticMethodID(cls, "getCarrierPhase", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/CarrierPhase;");
              mids$[mid_valueOf_6c8f44ae7eea9423] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/CarrierPhase;");
              mids$[mid_values_1e8a8730db16e81d] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/ntrip/CarrierPhase;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              L1 = new CarrierPhase(env->getStaticObjectField(cls, "L1", "Lorg/orekit/gnss/metric/ntrip/CarrierPhase;"));
              L1_L2 = new CarrierPhase(env->getStaticObjectField(cls, "L1_L2", "Lorg/orekit/gnss/metric/ntrip/CarrierPhase;"));
              NO = new CarrierPhase(env->getStaticObjectField(cls, "NO", "Lorg/orekit/gnss/metric/ntrip/CarrierPhase;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          CarrierPhase CarrierPhase::getCarrierPhase(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return CarrierPhase(env->callStaticObjectMethod(cls, mids$[mid_getCarrierPhase_6c8f44ae7eea9423], a0.this$));
          }

          CarrierPhase CarrierPhase::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return CarrierPhase(env->callStaticObjectMethod(cls, mids$[mid_valueOf_6c8f44ae7eea9423], a0.this$));
          }

          JArray< CarrierPhase > CarrierPhase::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< CarrierPhase >(env->callStaticObjectMethod(cls, mids$[mid_values_1e8a8730db16e81d]));
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
        namespace ntrip {
          static PyObject *t_CarrierPhase_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CarrierPhase_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CarrierPhase_of_(t_CarrierPhase *self, PyObject *args);
          static PyObject *t_CarrierPhase_getCarrierPhase(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CarrierPhase_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_CarrierPhase_values(PyTypeObject *type);
          static PyObject *t_CarrierPhase_get__parameters_(t_CarrierPhase *self, void *data);
          static PyGetSetDef t_CarrierPhase__fields_[] = {
            DECLARE_GET_FIELD(t_CarrierPhase, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CarrierPhase__methods_[] = {
            DECLARE_METHOD(t_CarrierPhase, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CarrierPhase, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CarrierPhase, of_, METH_VARARGS),
            DECLARE_METHOD(t_CarrierPhase, getCarrierPhase, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CarrierPhase, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CarrierPhase, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CarrierPhase)[] = {
            { Py_tp_methods, t_CarrierPhase__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_CarrierPhase__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CarrierPhase)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(CarrierPhase, t_CarrierPhase, CarrierPhase);
          PyObject *t_CarrierPhase::wrap_Object(const CarrierPhase& object, PyTypeObject *p0)
          {
            PyObject *obj = t_CarrierPhase::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_CarrierPhase *self = (t_CarrierPhase *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_CarrierPhase::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_CarrierPhase::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_CarrierPhase *self = (t_CarrierPhase *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_CarrierPhase::install(PyObject *module)
          {
            installType(&PY_TYPE(CarrierPhase), &PY_TYPE_DEF(CarrierPhase), module, "CarrierPhase", 0);
          }

          void t_CarrierPhase::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CarrierPhase), "class_", make_descriptor(CarrierPhase::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CarrierPhase), "wrapfn_", make_descriptor(t_CarrierPhase::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CarrierPhase), "boxfn_", make_descriptor(boxObject));
            env->getClass(CarrierPhase::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(CarrierPhase), "L1", make_descriptor(t_CarrierPhase::wrap_Object(*CarrierPhase::L1)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CarrierPhase), "L1_L2", make_descriptor(t_CarrierPhase::wrap_Object(*CarrierPhase::L1_L2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CarrierPhase), "NO", make_descriptor(t_CarrierPhase::wrap_Object(*CarrierPhase::NO)));
          }

          static PyObject *t_CarrierPhase_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CarrierPhase::initializeClass, 1)))
              return NULL;
            return t_CarrierPhase::wrap_Object(CarrierPhase(((t_CarrierPhase *) arg)->object.this$));
          }
          static PyObject *t_CarrierPhase_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CarrierPhase::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CarrierPhase_of_(t_CarrierPhase *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_CarrierPhase_getCarrierPhase(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            CarrierPhase result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::CarrierPhase::getCarrierPhase(a0));
              return t_CarrierPhase::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getCarrierPhase", arg);
            return NULL;
          }

          static PyObject *t_CarrierPhase_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            CarrierPhase result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::CarrierPhase::valueOf(a0));
              return t_CarrierPhase::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_CarrierPhase_values(PyTypeObject *type)
          {
            JArray< CarrierPhase > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::CarrierPhase::values());
            return JArray<jobject>(result.this$).wrap(t_CarrierPhase::wrap_jobject);
          }
          static PyObject *t_CarrierPhase_get__parameters_(t_CarrierPhase *self, void *data)
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
#include "org/orekit/propagation/sampling/PythonFieldOrekitStepHandler.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepHandler.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *PythonFieldOrekitStepHandler::class$ = NULL;
        jmethodID *PythonFieldOrekitStepHandler::mids$ = NULL;
        bool PythonFieldOrekitStepHandler::live$ = false;

        jclass PythonFieldOrekitStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/PythonFieldOrekitStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_finish_1463d3d0d52f94dd] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_handleStep_edb529c141e8d4a9] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;)V");
            mids$[mid_init_8e8de2be1664674a] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldOrekitStepHandler::PythonFieldOrekitStepHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonFieldOrekitStepHandler::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonFieldOrekitStepHandler::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonFieldOrekitStepHandler::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
        static PyObject *t_PythonFieldOrekitStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldOrekitStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldOrekitStepHandler_of_(t_PythonFieldOrekitStepHandler *self, PyObject *args);
        static int t_PythonFieldOrekitStepHandler_init_(t_PythonFieldOrekitStepHandler *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldOrekitStepHandler_finalize(t_PythonFieldOrekitStepHandler *self);
        static PyObject *t_PythonFieldOrekitStepHandler_pythonExtension(t_PythonFieldOrekitStepHandler *self, PyObject *args);
        static void JNICALL t_PythonFieldOrekitStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldOrekitStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldOrekitStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonFieldOrekitStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldOrekitStepHandler_get__self(t_PythonFieldOrekitStepHandler *self, void *data);
        static PyObject *t_PythonFieldOrekitStepHandler_get__parameters_(t_PythonFieldOrekitStepHandler *self, void *data);
        static PyGetSetDef t_PythonFieldOrekitStepHandler__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldOrekitStepHandler, self),
          DECLARE_GET_FIELD(t_PythonFieldOrekitStepHandler, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldOrekitStepHandler__methods_[] = {
          DECLARE_METHOD(t_PythonFieldOrekitStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldOrekitStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldOrekitStepHandler, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldOrekitStepHandler, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldOrekitStepHandler, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldOrekitStepHandler)[] = {
          { Py_tp_methods, t_PythonFieldOrekitStepHandler__methods_ },
          { Py_tp_init, (void *) t_PythonFieldOrekitStepHandler_init_ },
          { Py_tp_getset, t_PythonFieldOrekitStepHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldOrekitStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldOrekitStepHandler, t_PythonFieldOrekitStepHandler, PythonFieldOrekitStepHandler);
        PyObject *t_PythonFieldOrekitStepHandler::wrap_Object(const PythonFieldOrekitStepHandler& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldOrekitStepHandler::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldOrekitStepHandler *self = (t_PythonFieldOrekitStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldOrekitStepHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldOrekitStepHandler::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldOrekitStepHandler *self = (t_PythonFieldOrekitStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldOrekitStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldOrekitStepHandler), &PY_TYPE_DEF(PythonFieldOrekitStepHandler), module, "PythonFieldOrekitStepHandler", 1);
        }

        void t_PythonFieldOrekitStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOrekitStepHandler), "class_", make_descriptor(PythonFieldOrekitStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOrekitStepHandler), "wrapfn_", make_descriptor(t_PythonFieldOrekitStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOrekitStepHandler), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldOrekitStepHandler::initializeClass);
          JNINativeMethod methods[] = {
            { "finish", "(Lorg/orekit/propagation/FieldSpacecraftState;)V", (void *) t_PythonFieldOrekitStepHandler_finish0 },
            { "handleStep", "(Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;)V", (void *) t_PythonFieldOrekitStepHandler_handleStep1 },
            { "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V", (void *) t_PythonFieldOrekitStepHandler_init2 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldOrekitStepHandler_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonFieldOrekitStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldOrekitStepHandler::initializeClass, 1)))
            return NULL;
          return t_PythonFieldOrekitStepHandler::wrap_Object(PythonFieldOrekitStepHandler(((t_PythonFieldOrekitStepHandler *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldOrekitStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldOrekitStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldOrekitStepHandler_of_(t_PythonFieldOrekitStepHandler *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldOrekitStepHandler_init_(t_PythonFieldOrekitStepHandler *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldOrekitStepHandler object((jobject) NULL);

          INT_CALL(object = PythonFieldOrekitStepHandler());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldOrekitStepHandler_finalize(t_PythonFieldOrekitStepHandler *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldOrekitStepHandler_pythonExtension(t_PythonFieldOrekitStepHandler *self, PyObject *args)
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

        static void JNICALL t_PythonFieldOrekitStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepHandler::mids$[PythonFieldOrekitStepHandler::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "finish", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldOrekitStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepHandler::mids$[PythonFieldOrekitStepHandler::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::sampling::t_FieldOrekitStepInterpolator::wrap_Object(::org::orekit::propagation::sampling::FieldOrekitStepInterpolator(a0));
          PyObject *result = PyObject_CallMethod(obj, "handleStep", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldOrekitStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepHandler::mids$[PythonFieldOrekitStepHandler::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
          PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldOrekitStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepHandler::mids$[PythonFieldOrekitStepHandler::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldOrekitStepHandler::mids$[PythonFieldOrekitStepHandler::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldOrekitStepHandler_get__self(t_PythonFieldOrekitStepHandler *self, void *data)
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
        static PyObject *t_PythonFieldOrekitStepHandler_get__parameters_(t_PythonFieldOrekitStepHandler *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/GLONASSScale.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/DateComponents.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *GLONASSScale::class$ = NULL;
      jmethodID *GLONASSScale::mids$ = NULL;
      bool GLONASSScale::live$ = false;

      jclass GLONASSScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/GLONASSScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLeap_bf1d7732f1acb697] = env->getMethodID(cls, "getLeap", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getLeap_2a5f05be83ff251d] = env->getMethodID(cls, "getLeap", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_insideLeap_db6d81809797ddaa] = env->getMethodID(cls, "insideLeap", "(Lorg/orekit/time/AbsoluteDate;)Z");
          mids$[mid_insideLeap_6d572d97c8b0ec11] = env->getMethodID(cls, "insideLeap", "(Lorg/orekit/time/FieldAbsoluteDate;)Z");
          mids$[mid_minuteDuration_17efd3c2ea0eaff7] = env->getMethodID(cls, "minuteDuration", "(Lorg/orekit/time/AbsoluteDate;)I");
          mids$[mid_minuteDuration_1e7a6890919ea8bb] = env->getMethodID(cls, "minuteDuration", "(Lorg/orekit/time/FieldAbsoluteDate;)I");
          mids$[mid_offsetFromTAI_bf1d7732f1acb697] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_2a5f05be83ff251d] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_56358b00ba005b52] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble GLONASSScale::getLeap(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLeap_bf1d7732f1acb697], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement GLONASSScale::getLeap(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLeap_2a5f05be83ff251d], a0.this$));
      }

      ::java::lang::String GLONASSScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
      }

      jboolean GLONASSScale::insideLeap(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_insideLeap_db6d81809797ddaa], a0.this$);
      }

      jboolean GLONASSScale::insideLeap(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_insideLeap_6d572d97c8b0ec11], a0.this$);
      }

      jint GLONASSScale::minuteDuration(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_minuteDuration_17efd3c2ea0eaff7], a0.this$);
      }

      jint GLONASSScale::minuteDuration(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_minuteDuration_1e7a6890919ea8bb], a0.this$);
      }

      jdouble GLONASSScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_bf1d7732f1acb697], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement GLONASSScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_2a5f05be83ff251d], a0.this$));
      }

      jdouble GLONASSScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_56358b00ba005b52], a0.this$, a1.this$);
      }

      ::java::lang::String GLONASSScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
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
      static PyObject *t_GLONASSScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GLONASSScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GLONASSScale_getLeap(t_GLONASSScale *self, PyObject *args);
      static PyObject *t_GLONASSScale_getName(t_GLONASSScale *self);
      static PyObject *t_GLONASSScale_insideLeap(t_GLONASSScale *self, PyObject *args);
      static PyObject *t_GLONASSScale_minuteDuration(t_GLONASSScale *self, PyObject *args);
      static PyObject *t_GLONASSScale_offsetFromTAI(t_GLONASSScale *self, PyObject *args);
      static PyObject *t_GLONASSScale_offsetToTAI(t_GLONASSScale *self, PyObject *args);
      static PyObject *t_GLONASSScale_toString(t_GLONASSScale *self, PyObject *args);
      static PyObject *t_GLONASSScale_get__name(t_GLONASSScale *self, void *data);
      static PyGetSetDef t_GLONASSScale__fields_[] = {
        DECLARE_GET_FIELD(t_GLONASSScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_GLONASSScale__methods_[] = {
        DECLARE_METHOD(t_GLONASSScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GLONASSScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GLONASSScale, getLeap, METH_VARARGS),
        DECLARE_METHOD(t_GLONASSScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_GLONASSScale, insideLeap, METH_VARARGS),
        DECLARE_METHOD(t_GLONASSScale, minuteDuration, METH_VARARGS),
        DECLARE_METHOD(t_GLONASSScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_GLONASSScale, offsetToTAI, METH_VARARGS),
        DECLARE_METHOD(t_GLONASSScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GLONASSScale)[] = {
        { Py_tp_methods, t_GLONASSScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_GLONASSScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GLONASSScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GLONASSScale, t_GLONASSScale, GLONASSScale);

      void t_GLONASSScale::install(PyObject *module)
      {
        installType(&PY_TYPE(GLONASSScale), &PY_TYPE_DEF(GLONASSScale), module, "GLONASSScale", 0);
      }

      void t_GLONASSScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSScale), "class_", make_descriptor(GLONASSScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSScale), "wrapfn_", make_descriptor(t_GLONASSScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GLONASSScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GLONASSScale::initializeClass, 1)))
          return NULL;
        return t_GLONASSScale::wrap_Object(GLONASSScale(((t_GLONASSScale *) arg)->object.this$));
      }
      static PyObject *t_GLONASSScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GLONASSScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_GLONASSScale_getLeap(t_GLONASSScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getLeap(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getLeap(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getLeap", args);
        return NULL;
      }

      static PyObject *t_GLONASSScale_getName(t_GLONASSScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_GLONASSScale_insideLeap(t_GLONASSScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.insideLeap(a0));
              Py_RETURN_BOOL(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.insideLeap(a0));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "insideLeap", args);
        return NULL;
      }

      static PyObject *t_GLONASSScale_minuteDuration(t_GLONASSScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jint result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.minuteDuration(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jint result;

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.minuteDuration(a0));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "minuteDuration", args);
        return NULL;
      }

      static PyObject *t_GLONASSScale_offsetFromTAI(t_GLONASSScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFromTAI", args);
        return NULL;
      }

      static PyObject *t_GLONASSScale_offsetToTAI(t_GLONASSScale *self, PyObject *args)
      {
        ::org::orekit::time::DateComponents a0((jobject) NULL);
        ::org::orekit::time::TimeComponents a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "kk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.offsetToTAI(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "offsetToTAI", args);
        return NULL;
      }

      static PyObject *t_GLONASSScale_toString(t_GLONASSScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(GLONASSScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_GLONASSScale_get__name(t_GLONASSScale *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrame4C.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame4C::class$ = NULL;
          jmethodID *SubFrame4C::mids$ = NULL;
          bool SubFrame4C::live$ = false;
          jint SubFrame4C::NB_ERD = (jint) 0;

          jclass SubFrame4C::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame4C");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getERD_2235cd056f5a882b] = env->getMethodID(cls, "getERD", "(I)I");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              NB_ERD = env->getStaticIntField(cls, "NB_ERD");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint SubFrame4C::getERD(jint a0) const
          {
            return env->callIntMethod(this$, mids$[mid_getERD_2235cd056f5a882b], a0);
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
          static PyObject *t_SubFrame4C_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4C_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4C_getERD(t_SubFrame4C *self, PyObject *arg);

          static PyMethodDef t_SubFrame4C__methods_[] = {
            DECLARE_METHOD(t_SubFrame4C, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4C, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4C, getERD, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame4C)[] = {
            { Py_tp_methods, t_SubFrame4C__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame4C)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame45),
            NULL
          };

          DEFINE_TYPE(SubFrame4C, t_SubFrame4C, SubFrame4C);

          void t_SubFrame4C::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame4C), &PY_TYPE_DEF(SubFrame4C), module, "SubFrame4C", 0);
          }

          void t_SubFrame4C::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4C), "class_", make_descriptor(SubFrame4C::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4C), "wrapfn_", make_descriptor(t_SubFrame4C::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4C), "boxfn_", make_descriptor(boxObject));
            env->getClass(SubFrame4C::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4C), "NB_ERD", make_descriptor(SubFrame4C::NB_ERD));
          }

          static PyObject *t_SubFrame4C_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame4C::initializeClass, 1)))
              return NULL;
            return t_SubFrame4C::wrap_Object(SubFrame4C(((t_SubFrame4C *) arg)->object.this$));
          }
          static PyObject *t_SubFrame4C_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame4C::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame4C_getERD(t_SubFrame4C *self, PyObject *arg)
          {
            jint a0;
            jint result;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getERD(a0));
              return PyLong_FromLong((long) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getERD", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/LaguerreSolver.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/complex/Complex.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *LaguerreSolver::class$ = NULL;
        jmethodID *LaguerreSolver::mids$ = NULL;
        bool LaguerreSolver::live$ = false;

        jclass LaguerreSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/LaguerreSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_2c56b6dd4d4b1dec] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_doSolve_dff5885c2c873297] = env->getMethodID(cls, "doSolve", "()D");
            mids$[mid_solveAllComplex_43a66e19accb9584] = env->getMethodID(cls, "solveAllComplex", "([DD)[Lorg/hipparchus/complex/Complex;");
            mids$[mid_solveComplex_41cae59f37a8d706] = env->getMethodID(cls, "solveComplex", "([DD)Lorg/hipparchus/complex/Complex;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LaguerreSolver::LaguerreSolver() : ::org::hipparchus::analysis::solvers::AbstractPolynomialSolver(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        LaguerreSolver::LaguerreSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::AbstractPolynomialSolver(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        LaguerreSolver::LaguerreSolver(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::AbstractPolynomialSolver(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

        LaguerreSolver::LaguerreSolver(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::analysis::solvers::AbstractPolynomialSolver(env->newObject(initializeClass, &mids$, mid_init$_2c56b6dd4d4b1dec, a0, a1, a2)) {}

        jdouble LaguerreSolver::doSolve() const
        {
          return env->callDoubleMethod(this$, mids$[mid_doSolve_dff5885c2c873297]);
        }

        JArray< ::org::hipparchus::complex::Complex > LaguerreSolver::solveAllComplex(const JArray< jdouble > & a0, jdouble a1) const
        {
          return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_solveAllComplex_43a66e19accb9584], a0.this$, a1));
        }

        ::org::hipparchus::complex::Complex LaguerreSolver::solveComplex(const JArray< jdouble > & a0, jdouble a1) const
        {
          return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_solveComplex_41cae59f37a8d706], a0.this$, a1));
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
        static PyObject *t_LaguerreSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LaguerreSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LaguerreSolver_of_(t_LaguerreSolver *self, PyObject *args);
        static int t_LaguerreSolver_init_(t_LaguerreSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LaguerreSolver_doSolve(t_LaguerreSolver *self);
        static PyObject *t_LaguerreSolver_solveAllComplex(t_LaguerreSolver *self, PyObject *args);
        static PyObject *t_LaguerreSolver_solveComplex(t_LaguerreSolver *self, PyObject *args);
        static PyObject *t_LaguerreSolver_get__parameters_(t_LaguerreSolver *self, void *data);
        static PyGetSetDef t_LaguerreSolver__fields_[] = {
          DECLARE_GET_FIELD(t_LaguerreSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LaguerreSolver__methods_[] = {
          DECLARE_METHOD(t_LaguerreSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LaguerreSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LaguerreSolver, of_, METH_VARARGS),
          DECLARE_METHOD(t_LaguerreSolver, doSolve, METH_NOARGS),
          DECLARE_METHOD(t_LaguerreSolver, solveAllComplex, METH_VARARGS),
          DECLARE_METHOD(t_LaguerreSolver, solveComplex, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LaguerreSolver)[] = {
          { Py_tp_methods, t_LaguerreSolver__methods_ },
          { Py_tp_init, (void *) t_LaguerreSolver_init_ },
          { Py_tp_getset, t_LaguerreSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LaguerreSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::AbstractPolynomialSolver),
          NULL
        };

        DEFINE_TYPE(LaguerreSolver, t_LaguerreSolver, LaguerreSolver);
        PyObject *t_LaguerreSolver::wrap_Object(const LaguerreSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LaguerreSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LaguerreSolver *self = (t_LaguerreSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_LaguerreSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LaguerreSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LaguerreSolver *self = (t_LaguerreSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_LaguerreSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(LaguerreSolver), &PY_TYPE_DEF(LaguerreSolver), module, "LaguerreSolver", 0);
        }

        void t_LaguerreSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LaguerreSolver), "class_", make_descriptor(LaguerreSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LaguerreSolver), "wrapfn_", make_descriptor(t_LaguerreSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LaguerreSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LaguerreSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LaguerreSolver::initializeClass, 1)))
            return NULL;
          return t_LaguerreSolver::wrap_Object(LaguerreSolver(((t_LaguerreSolver *) arg)->object.this$));
        }
        static PyObject *t_LaguerreSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LaguerreSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_LaguerreSolver_of_(t_LaguerreSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_LaguerreSolver_init_(t_LaguerreSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              LaguerreSolver object((jobject) NULL);

              INT_CALL(object = LaguerreSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::polynomials::PY_TYPE(PolynomialFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              LaguerreSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = LaguerreSolver(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::polynomials::PY_TYPE(PolynomialFunction);
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              LaguerreSolver object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = LaguerreSolver(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::polynomials::PY_TYPE(PolynomialFunction);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              LaguerreSolver object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = LaguerreSolver(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::polynomials::PY_TYPE(PolynomialFunction);
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

        static PyObject *t_LaguerreSolver_doSolve(t_LaguerreSolver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.doSolve());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LaguerreSolver_solveAllComplex(t_LaguerreSolver *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble a1;
          JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);

          if (!parseArgs(args, "[DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.solveAllComplex(a0, a1));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "solveAllComplex", args);
          return NULL;
        }

        static PyObject *t_LaguerreSolver_solveComplex(t_LaguerreSolver *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble a1;
          ::org::hipparchus::complex::Complex result((jobject) NULL);

          if (!parseArgs(args, "[DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.solveComplex(a0, a1));
            return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "solveComplex", args);
          return NULL;
        }
        static PyObject *t_LaguerreSolver_get__parameters_(t_LaguerreSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/SimpleTimeStampedTableParser.h"
#include "java/util/List.h"
#include "java/io/InputStream.h"
#include "org/orekit/data/SimpleTimeStampedTableParser$RowConverter.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *SimpleTimeStampedTableParser::class$ = NULL;
      jmethodID *SimpleTimeStampedTableParser::mids$ = NULL;
      bool SimpleTimeStampedTableParser::live$ = false;

      jclass SimpleTimeStampedTableParser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/SimpleTimeStampedTableParser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_918475547f34bf1c] = env->getMethodID(cls, "<init>", "(ILorg/orekit/data/SimpleTimeStampedTableParser$RowConverter;)V");
          mids$[mid_parse_19eef1cf230063a6] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SimpleTimeStampedTableParser::SimpleTimeStampedTableParser(jint a0, const ::org::orekit::data::SimpleTimeStampedTableParser$RowConverter & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_918475547f34bf1c, a0, a1.this$)) {}

      ::java::util::List SimpleTimeStampedTableParser::parse(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_parse_19eef1cf230063a6], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_SimpleTimeStampedTableParser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleTimeStampedTableParser_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleTimeStampedTableParser_of_(t_SimpleTimeStampedTableParser *self, PyObject *args);
      static int t_SimpleTimeStampedTableParser_init_(t_SimpleTimeStampedTableParser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SimpleTimeStampedTableParser_parse(t_SimpleTimeStampedTableParser *self, PyObject *args);
      static PyObject *t_SimpleTimeStampedTableParser_get__parameters_(t_SimpleTimeStampedTableParser *self, void *data);
      static PyGetSetDef t_SimpleTimeStampedTableParser__fields_[] = {
        DECLARE_GET_FIELD(t_SimpleTimeStampedTableParser, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SimpleTimeStampedTableParser__methods_[] = {
        DECLARE_METHOD(t_SimpleTimeStampedTableParser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleTimeStampedTableParser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleTimeStampedTableParser, of_, METH_VARARGS),
        DECLARE_METHOD(t_SimpleTimeStampedTableParser, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SimpleTimeStampedTableParser)[] = {
        { Py_tp_methods, t_SimpleTimeStampedTableParser__methods_ },
        { Py_tp_init, (void *) t_SimpleTimeStampedTableParser_init_ },
        { Py_tp_getset, t_SimpleTimeStampedTableParser__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SimpleTimeStampedTableParser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SimpleTimeStampedTableParser, t_SimpleTimeStampedTableParser, SimpleTimeStampedTableParser);
      PyObject *t_SimpleTimeStampedTableParser::wrap_Object(const SimpleTimeStampedTableParser& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SimpleTimeStampedTableParser::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SimpleTimeStampedTableParser *self = (t_SimpleTimeStampedTableParser *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_SimpleTimeStampedTableParser::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SimpleTimeStampedTableParser::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SimpleTimeStampedTableParser *self = (t_SimpleTimeStampedTableParser *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_SimpleTimeStampedTableParser::install(PyObject *module)
      {
        installType(&PY_TYPE(SimpleTimeStampedTableParser), &PY_TYPE_DEF(SimpleTimeStampedTableParser), module, "SimpleTimeStampedTableParser", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTimeStampedTableParser), "RowConverter", make_descriptor(&PY_TYPE_DEF(SimpleTimeStampedTableParser$RowConverter)));
      }

      void t_SimpleTimeStampedTableParser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTimeStampedTableParser), "class_", make_descriptor(SimpleTimeStampedTableParser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTimeStampedTableParser), "wrapfn_", make_descriptor(t_SimpleTimeStampedTableParser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTimeStampedTableParser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SimpleTimeStampedTableParser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SimpleTimeStampedTableParser::initializeClass, 1)))
          return NULL;
        return t_SimpleTimeStampedTableParser::wrap_Object(SimpleTimeStampedTableParser(((t_SimpleTimeStampedTableParser *) arg)->object.this$));
      }
      static PyObject *t_SimpleTimeStampedTableParser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SimpleTimeStampedTableParser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SimpleTimeStampedTableParser_of_(t_SimpleTimeStampedTableParser *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_SimpleTimeStampedTableParser_init_(t_SimpleTimeStampedTableParser *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        ::org::orekit::data::SimpleTimeStampedTableParser$RowConverter a1((jobject) NULL);
        PyTypeObject **p1;
        SimpleTimeStampedTableParser object((jobject) NULL);

        if (!parseArgs(args, "IK", ::org::orekit::data::SimpleTimeStampedTableParser$RowConverter::initializeClass, &a0, &a1, &p1, ::org::orekit::data::t_SimpleTimeStampedTableParser$RowConverter::parameters_))
        {
          INT_CALL(object = SimpleTimeStampedTableParser(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SimpleTimeStampedTableParser_parse(t_SimpleTimeStampedTableParser *self, PyObject *args)
      {
        ::java::io::InputStream a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.parse(a0, a1));
          return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }
      static PyObject *t_SimpleTimeStampedTableParser_get__parameters_(t_SimpleTimeStampedTableParser *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
