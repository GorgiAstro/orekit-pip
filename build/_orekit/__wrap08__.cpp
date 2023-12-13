#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/SHMFormatReader.h"
#include "java/io/InputStream.h"
#include "java/text/ParseException.h"
#include "java/io/IOException.h"
#include "org/orekit/errors/OrekitException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *SHMFormatReader::class$ = NULL;
          jmethodID *SHMFormatReader::mids$ = NULL;
          bool SHMFormatReader::live$ = false;

          jclass SHMFormatReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/SHMFormatReader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_76cf8b957ccb7ae1] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Z)V");
              mids$[mid_init$_f201530b2ce67e89] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;ZLorg/orekit/time/TimeScale;)V");
              mids$[mid_getProvider_752316a4c911183b] = env->getMethodID(cls, "getProvider", "(ZII)Lorg/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider;");
              mids$[mid_loadData_360461e719fb564c] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SHMFormatReader::SHMFormatReader(const ::java::lang::String & a0, jboolean a1) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_76cf8b957ccb7ae1, a0.this$, a1)) {}

          SHMFormatReader::SHMFormatReader(const ::java::lang::String & a0, jboolean a1, const ::org::orekit::time::TimeScale & a2) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_f201530b2ce67e89, a0.this$, a1, a2.this$)) {}

          ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider SHMFormatReader::getProvider(jboolean a0, jint a1, jint a2) const
          {
            return ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getProvider_752316a4c911183b], a0, a1, a2));
          }

          void SHMFormatReader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_360461e719fb564c], a0.this$, a1.this$);
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
          static PyObject *t_SHMFormatReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SHMFormatReader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SHMFormatReader_init_(t_SHMFormatReader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SHMFormatReader_getProvider(t_SHMFormatReader *self, PyObject *args);
          static PyObject *t_SHMFormatReader_loadData(t_SHMFormatReader *self, PyObject *args);

          static PyMethodDef t_SHMFormatReader__methods_[] = {
            DECLARE_METHOD(t_SHMFormatReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SHMFormatReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SHMFormatReader, getProvider, METH_VARARGS),
            DECLARE_METHOD(t_SHMFormatReader, loadData, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SHMFormatReader)[] = {
            { Py_tp_methods, t_SHMFormatReader__methods_ },
            { Py_tp_init, (void *) t_SHMFormatReader_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SHMFormatReader)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::PotentialCoefficientsReader),
            NULL
          };

          DEFINE_TYPE(SHMFormatReader, t_SHMFormatReader, SHMFormatReader);

          void t_SHMFormatReader::install(PyObject *module)
          {
            installType(&PY_TYPE(SHMFormatReader), &PY_TYPE_DEF(SHMFormatReader), module, "SHMFormatReader", 0);
          }

          void t_SHMFormatReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SHMFormatReader), "class_", make_descriptor(SHMFormatReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SHMFormatReader), "wrapfn_", make_descriptor(t_SHMFormatReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SHMFormatReader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SHMFormatReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SHMFormatReader::initializeClass, 1)))
              return NULL;
            return t_SHMFormatReader::wrap_Object(SHMFormatReader(((t_SHMFormatReader *) arg)->object.this$));
          }
          static PyObject *t_SHMFormatReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SHMFormatReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SHMFormatReader_init_(t_SHMFormatReader *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                jboolean a1;
                SHMFormatReader object((jobject) NULL);

                if (!parseArgs(args, "sZ", &a0, &a1))
                {
                  INT_CALL(object = SHMFormatReader(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                jboolean a1;
                ::org::orekit::time::TimeScale a2((jobject) NULL);
                SHMFormatReader object((jobject) NULL);

                if (!parseArgs(args, "sZk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = SHMFormatReader(a0, a1, a2));
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

          static PyObject *t_SHMFormatReader_getProvider(t_SHMFormatReader *self, PyObject *args)
          {
            jboolean a0;
            jint a1;
            jint a2;
            ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "ZII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getProvider(a0, a1, a2));
              return ::org::orekit::forces::gravity::potential::t_RawSphericalHarmonicsProvider::wrap_Object(result);
            }

            return callSuper(PY_TYPE(SHMFormatReader), (PyObject *) self, "getProvider", args, 2);
          }

          static PyObject *t_SHMFormatReader_loadData(t_SHMFormatReader *self, PyObject *args)
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(SHMFormatReader), (PyObject *) self, "loadData", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/QRDecomposer.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *QRDecomposer::class$ = NULL;
      jmethodID *QRDecomposer::mids$ = NULL;
      bool QRDecomposer::live$ = false;

      jclass QRDecomposer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/QRDecomposer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_decompose_8def7320d620ddc9] = env->getMethodID(cls, "decompose", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/DecompositionSolver;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      QRDecomposer::QRDecomposer(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

      ::org::hipparchus::linear::DecompositionSolver QRDecomposer::decompose(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_decompose_8def7320d620ddc9], a0.this$));
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
      static PyObject *t_QRDecomposer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_QRDecomposer_instance_(PyTypeObject *type, PyObject *arg);
      static int t_QRDecomposer_init_(t_QRDecomposer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_QRDecomposer_decompose(t_QRDecomposer *self, PyObject *arg);

      static PyMethodDef t_QRDecomposer__methods_[] = {
        DECLARE_METHOD(t_QRDecomposer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_QRDecomposer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_QRDecomposer, decompose, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(QRDecomposer)[] = {
        { Py_tp_methods, t_QRDecomposer__methods_ },
        { Py_tp_init, (void *) t_QRDecomposer_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(QRDecomposer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(QRDecomposer, t_QRDecomposer, QRDecomposer);

      void t_QRDecomposer::install(PyObject *module)
      {
        installType(&PY_TYPE(QRDecomposer), &PY_TYPE_DEF(QRDecomposer), module, "QRDecomposer", 0);
      }

      void t_QRDecomposer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(QRDecomposer), "class_", make_descriptor(QRDecomposer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(QRDecomposer), "wrapfn_", make_descriptor(t_QRDecomposer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(QRDecomposer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_QRDecomposer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, QRDecomposer::initializeClass, 1)))
          return NULL;
        return t_QRDecomposer::wrap_Object(QRDecomposer(((t_QRDecomposer *) arg)->object.this$));
      }
      static PyObject *t_QRDecomposer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, QRDecomposer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_QRDecomposer_init_(t_QRDecomposer *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        QRDecomposer object((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          INT_CALL(object = QRDecomposer(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_QRDecomposer_decompose(t_QRDecomposer *self, PyObject *arg)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::DecompositionSolver result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.decompose(a0));
          return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "decompose", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/PythonAttitudeEphemerisSegment.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$AttitudeEphemerisSegment.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *PythonAttitudeEphemerisSegment::class$ = NULL;
        jmethodID *PythonAttitudeEphemerisSegment::mids$ = NULL;
        bool PythonAttitudeEphemerisSegment::live$ = false;

        jclass PythonAttitudeEphemerisSegment::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/PythonAttitudeEphemerisSegment");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getAngularCoordinates_e62d3bb06d56d7e3] = env->getMethodID(cls, "getAngularCoordinates", "()Ljava/util/List;");
            mids$[mid_getAttitudeProvider_fcce29ba1cf2a05e] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/BoundedAttitudeProvider;");
            mids$[mid_getAvailableDerivatives_33d67d456ec94a0c] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/AngularDerivativesFilter;");
            mids$[mid_getInterpolationMethod_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getInterpolationMethod", "()Ljava/lang/String;");
            mids$[mid_getInterpolationSamples_55546ef6a647f39b] = env->getMethodID(cls, "getInterpolationSamples", "()I");
            mids$[mid_getReferenceFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getStart_c325492395d89b24] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_c325492395d89b24] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAttitudeEphemerisSegment::PythonAttitudeEphemerisSegment() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonAttitudeEphemerisSegment::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonAttitudeEphemerisSegment::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonAttitudeEphemerisSegment::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
        static PyObject *t_PythonAttitudeEphemerisSegment_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAttitudeEphemerisSegment_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAttitudeEphemerisSegment_init_(t_PythonAttitudeEphemerisSegment *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAttitudeEphemerisSegment_finalize(t_PythonAttitudeEphemerisSegment *self);
        static PyObject *t_PythonAttitudeEphemerisSegment_pythonExtension(t_PythonAttitudeEphemerisSegment *self, PyObject *args);
        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getAngularCoordinates0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getAttitudeProvider1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getAvailableDerivatives2(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getInterpolationMethod3(JNIEnv *jenv, jobject jobj);
        static jint JNICALL t_PythonAttitudeEphemerisSegment_getInterpolationSamples4(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getReferenceFrame5(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getStart6(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getStop7(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAttitudeEphemerisSegment_pythonDecRef8(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAttitudeEphemerisSegment_get__self(t_PythonAttitudeEphemerisSegment *self, void *data);
        static PyGetSetDef t_PythonAttitudeEphemerisSegment__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAttitudeEphemerisSegment, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAttitudeEphemerisSegment__methods_[] = {
          DECLARE_METHOD(t_PythonAttitudeEphemerisSegment, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisSegment, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisSegment, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisSegment, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAttitudeEphemerisSegment)[] = {
          { Py_tp_methods, t_PythonAttitudeEphemerisSegment__methods_ },
          { Py_tp_init, (void *) t_PythonAttitudeEphemerisSegment_init_ },
          { Py_tp_getset, t_PythonAttitudeEphemerisSegment__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAttitudeEphemerisSegment)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonAttitudeEphemerisSegment, t_PythonAttitudeEphemerisSegment, PythonAttitudeEphemerisSegment);

        void t_PythonAttitudeEphemerisSegment::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAttitudeEphemerisSegment), &PY_TYPE_DEF(PythonAttitudeEphemerisSegment), module, "PythonAttitudeEphemerisSegment", 1);
        }

        void t_PythonAttitudeEphemerisSegment::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisSegment), "class_", make_descriptor(PythonAttitudeEphemerisSegment::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisSegment), "wrapfn_", make_descriptor(t_PythonAttitudeEphemerisSegment::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisSegment), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAttitudeEphemerisSegment::initializeClass);
          JNINativeMethod methods[] = {
            { "getAngularCoordinates", "()Ljava/util/List;", (void *) t_PythonAttitudeEphemerisSegment_getAngularCoordinates0 },
            { "getAttitudeProvider", "()Lorg/orekit/attitudes/BoundedAttitudeProvider;", (void *) t_PythonAttitudeEphemerisSegment_getAttitudeProvider1 },
            { "getAvailableDerivatives", "()Lorg/orekit/utils/AngularDerivativesFilter;", (void *) t_PythonAttitudeEphemerisSegment_getAvailableDerivatives2 },
            { "getInterpolationMethod", "()Ljava/lang/String;", (void *) t_PythonAttitudeEphemerisSegment_getInterpolationMethod3 },
            { "getInterpolationSamples", "()I", (void *) t_PythonAttitudeEphemerisSegment_getInterpolationSamples4 },
            { "getReferenceFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonAttitudeEphemerisSegment_getReferenceFrame5 },
            { "getStart", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonAttitudeEphemerisSegment_getStart6 },
            { "getStop", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonAttitudeEphemerisSegment_getStop7 },
            { "pythonDecRef", "()V", (void *) t_PythonAttitudeEphemerisSegment_pythonDecRef8 },
          };
          env->registerNatives(cls, methods, 9);
        }

        static PyObject *t_PythonAttitudeEphemerisSegment_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAttitudeEphemerisSegment::initializeClass, 1)))
            return NULL;
          return t_PythonAttitudeEphemerisSegment::wrap_Object(PythonAttitudeEphemerisSegment(((t_PythonAttitudeEphemerisSegment *) arg)->object.this$));
        }
        static PyObject *t_PythonAttitudeEphemerisSegment_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAttitudeEphemerisSegment::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAttitudeEphemerisSegment_init_(t_PythonAttitudeEphemerisSegment *self, PyObject *args, PyObject *kwds)
        {
          PythonAttitudeEphemerisSegment object((jobject) NULL);

          INT_CALL(object = PythonAttitudeEphemerisSegment());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonAttitudeEphemerisSegment_finalize(t_PythonAttitudeEphemerisSegment *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAttitudeEphemerisSegment_pythonExtension(t_PythonAttitudeEphemerisSegment *self, PyObject *args)
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

        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getAngularCoordinates0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::List value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getAngularCoordinates", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
          {
            throwTypeError("getAngularCoordinates", result);
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

        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getAttitudeProvider1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::attitudes::BoundedAttitudeProvider value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getAttitudeProvider", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::attitudes::BoundedAttitudeProvider::initializeClass, &value))
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

        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getAvailableDerivatives2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::utils::AngularDerivativesFilter value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getAvailableDerivatives", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &value))
          {
            throwTypeError("getAvailableDerivatives", result);
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

        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getInterpolationMethod3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::lang::String value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getInterpolationMethod", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "s", &value))
          {
            throwTypeError("getInterpolationMethod", result);
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

        static jint JNICALL t_PythonAttitudeEphemerisSegment_getInterpolationSamples4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getInterpolationSamples", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getInterpolationSamples", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getReferenceFrame5(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::frames::Frame value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getReferenceFrame", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
          {
            throwTypeError("getReferenceFrame", result);
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

        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getStart6(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getStart", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
          {
            throwTypeError("getStart", result);
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

        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getStop7(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getStop", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
          {
            throwTypeError("getStop", result);
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

        static void JNICALL t_PythonAttitudeEphemerisSegment_pythonDecRef8(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAttitudeEphemerisSegment_get__self(t_PythonAttitudeEphemerisSegment *self, void *data)
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
#include "org/hipparchus/random/RandomVectorGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *RandomVectorGenerator::class$ = NULL;
      jmethodID *RandomVectorGenerator::mids$ = NULL;
      bool RandomVectorGenerator::live$ = false;

      jclass RandomVectorGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/RandomVectorGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_nextVector_25e1757a36c4dde2] = env->getMethodID(cls, "nextVector", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > RandomVectorGenerator::nextVector() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_nextVector_25e1757a36c4dde2]));
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
      static PyObject *t_RandomVectorGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RandomVectorGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RandomVectorGenerator_nextVector(t_RandomVectorGenerator *self);

      static PyMethodDef t_RandomVectorGenerator__methods_[] = {
        DECLARE_METHOD(t_RandomVectorGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RandomVectorGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RandomVectorGenerator, nextVector, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RandomVectorGenerator)[] = {
        { Py_tp_methods, t_RandomVectorGenerator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RandomVectorGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RandomVectorGenerator, t_RandomVectorGenerator, RandomVectorGenerator);

      void t_RandomVectorGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(RandomVectorGenerator), &PY_TYPE_DEF(RandomVectorGenerator), module, "RandomVectorGenerator", 0);
      }

      void t_RandomVectorGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomVectorGenerator), "class_", make_descriptor(RandomVectorGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomVectorGenerator), "wrapfn_", make_descriptor(t_RandomVectorGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomVectorGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RandomVectorGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RandomVectorGenerator::initializeClass, 1)))
          return NULL;
        return t_RandomVectorGenerator::wrap_Object(RandomVectorGenerator(((t_RandomVectorGenerator *) arg)->object.this$));
      }
      static PyObject *t_RandomVectorGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RandomVectorGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RandomVectorGenerator_nextVector(t_RandomVectorGenerator *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.nextVector());
        return result.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/common/SignalInSpaceAccuracy.h"
#include "org/orekit/gnss/metric/messages/common/AccuracyProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            ::java::lang::Class *SignalInSpaceAccuracy::class$ = NULL;
            jmethodID *SignalInSpaceAccuracy::mids$ = NULL;
            bool SignalInSpaceAccuracy::live$ = false;

            jclass SignalInSpaceAccuracy::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/common/SignalInSpaceAccuracy");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_getAccuracy_b74f83833fdad017] = env->getMethodID(cls, "getAccuracy", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SignalInSpaceAccuracy::SignalInSpaceAccuracy(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

            jdouble SignalInSpaceAccuracy::getAccuracy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAccuracy_b74f83833fdad017]);
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
            static PyObject *t_SignalInSpaceAccuracy_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SignalInSpaceAccuracy_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SignalInSpaceAccuracy_init_(t_SignalInSpaceAccuracy *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SignalInSpaceAccuracy_getAccuracy(t_SignalInSpaceAccuracy *self);
            static PyObject *t_SignalInSpaceAccuracy_get__accuracy(t_SignalInSpaceAccuracy *self, void *data);
            static PyGetSetDef t_SignalInSpaceAccuracy__fields_[] = {
              DECLARE_GET_FIELD(t_SignalInSpaceAccuracy, accuracy),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SignalInSpaceAccuracy__methods_[] = {
              DECLARE_METHOD(t_SignalInSpaceAccuracy, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SignalInSpaceAccuracy, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SignalInSpaceAccuracy, getAccuracy, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SignalInSpaceAccuracy)[] = {
              { Py_tp_methods, t_SignalInSpaceAccuracy__methods_ },
              { Py_tp_init, (void *) t_SignalInSpaceAccuracy_init_ },
              { Py_tp_getset, t_SignalInSpaceAccuracy__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SignalInSpaceAccuracy)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(SignalInSpaceAccuracy, t_SignalInSpaceAccuracy, SignalInSpaceAccuracy);

            void t_SignalInSpaceAccuracy::install(PyObject *module)
            {
              installType(&PY_TYPE(SignalInSpaceAccuracy), &PY_TYPE_DEF(SignalInSpaceAccuracy), module, "SignalInSpaceAccuracy", 0);
            }

            void t_SignalInSpaceAccuracy::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SignalInSpaceAccuracy), "class_", make_descriptor(SignalInSpaceAccuracy::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SignalInSpaceAccuracy), "wrapfn_", make_descriptor(t_SignalInSpaceAccuracy::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SignalInSpaceAccuracy), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SignalInSpaceAccuracy_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SignalInSpaceAccuracy::initializeClass, 1)))
                return NULL;
              return t_SignalInSpaceAccuracy::wrap_Object(SignalInSpaceAccuracy(((t_SignalInSpaceAccuracy *) arg)->object.this$));
            }
            static PyObject *t_SignalInSpaceAccuracy_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SignalInSpaceAccuracy::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SignalInSpaceAccuracy_init_(t_SignalInSpaceAccuracy *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              SignalInSpaceAccuracy object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = SignalInSpaceAccuracy(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_SignalInSpaceAccuracy_getAccuracy(t_SignalInSpaceAccuracy *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAccuracy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SignalInSpaceAccuracy_get__accuracy(t_SignalInSpaceAccuracy *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAccuracy());
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
#include "org/orekit/propagation/conversion/GraggBulirschStoerIntegratorBuilder.h"
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

        ::java::lang::Class *GraggBulirschStoerIntegratorBuilder::class$ = NULL;
        jmethodID *GraggBulirschStoerIntegratorBuilder::mids$ = NULL;
        bool GraggBulirschStoerIntegratorBuilder::live$ = false;

        jclass GraggBulirschStoerIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/GraggBulirschStoerIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b5167f35b2521627] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_buildIntegrator_916fa199ca08d656] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GraggBulirschStoerIntegratorBuilder::GraggBulirschStoerIntegratorBuilder(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b5167f35b2521627, a0, a1, a2)) {}

        ::org::hipparchus::ode::AbstractIntegrator GraggBulirschStoerIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
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
        static PyObject *t_GraggBulirschStoerIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GraggBulirschStoerIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GraggBulirschStoerIntegratorBuilder_init_(t_GraggBulirschStoerIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GraggBulirschStoerIntegratorBuilder_buildIntegrator(t_GraggBulirschStoerIntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_GraggBulirschStoerIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_GraggBulirschStoerIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GraggBulirschStoerIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GraggBulirschStoerIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GraggBulirschStoerIntegratorBuilder)[] = {
          { Py_tp_methods, t_GraggBulirschStoerIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_GraggBulirschStoerIntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GraggBulirschStoerIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GraggBulirschStoerIntegratorBuilder, t_GraggBulirschStoerIntegratorBuilder, GraggBulirschStoerIntegratorBuilder);

        void t_GraggBulirschStoerIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(GraggBulirschStoerIntegratorBuilder), &PY_TYPE_DEF(GraggBulirschStoerIntegratorBuilder), module, "GraggBulirschStoerIntegratorBuilder", 0);
        }

        void t_GraggBulirschStoerIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GraggBulirschStoerIntegratorBuilder), "class_", make_descriptor(GraggBulirschStoerIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GraggBulirschStoerIntegratorBuilder), "wrapfn_", make_descriptor(t_GraggBulirschStoerIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GraggBulirschStoerIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GraggBulirschStoerIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GraggBulirschStoerIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_GraggBulirschStoerIntegratorBuilder::wrap_Object(GraggBulirschStoerIntegratorBuilder(((t_GraggBulirschStoerIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_GraggBulirschStoerIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GraggBulirschStoerIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GraggBulirschStoerIntegratorBuilder_init_(t_GraggBulirschStoerIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          GraggBulirschStoerIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = GraggBulirschStoerIntegratorBuilder(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GraggBulirschStoerIntegratorBuilder_buildIntegrator(t_GraggBulirschStoerIntegratorBuilder *self, PyObject *args)
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
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative2.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative2.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative2Field.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateDerivative2::class$ = NULL;
        jmethodID *UnivariateDerivative2::mids$ = NULL;
        bool UnivariateDerivative2::live$ = false;
        UnivariateDerivative2 *UnivariateDerivative2::PI = NULL;

        jclass UnivariateDerivative2::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateDerivative2");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0e3cd27f693a0167] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)V");
            mids$[mid_init$_b5167f35b2521627] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_abs_61c90b0e9e75ab08] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_acos_61c90b0e9e75ab08] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_acosh_61c90b0e9e75ab08] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_add_618c33568543b745] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_add_29624b0da98f03d2] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_asin_61c90b0e9e75ab08] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_asinh_61c90b0e9e75ab08] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_atan_61c90b0e9e75ab08] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_atan2_618c33568543b745] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_atanh_61c90b0e9e75ab08] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_cbrt_61c90b0e9e75ab08] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_ceil_61c90b0e9e75ab08] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_compareTo_3af9d93348f63790] = env->getMethodID(cls, "compareTo", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)I");
            mids$[mid_compose_d95512c8ac4e9e59] = env->getMethodID(cls, "compose", "([D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_copySign_618c33568543b745] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_copySign_29624b0da98f03d2] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_cos_61c90b0e9e75ab08] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_cosh_61c90b0e9e75ab08] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_divide_618c33568543b745] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_divide_29624b0da98f03d2] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_exp_61c90b0e9e75ab08] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_expm1_61c90b0e9e75ab08] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_floor_61c90b0e9e75ab08] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_getDerivative_2afcbc21f4e57ab2] = env->getMethodID(cls, "getDerivative", "(I)D");
            mids$[mid_getExponent_55546ef6a647f39b] = env->getMethodID(cls, "getExponent", "()I");
            mids$[mid_getField_7dee767fa0ace56c] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2Field;");
            mids$[mid_getFirstDerivative_b74f83833fdad017] = env->getMethodID(cls, "getFirstDerivative", "()D");
            mids$[mid_getOrder_55546ef6a647f39b] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPi_61c90b0e9e75ab08] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_getReal_b74f83833fdad017] = env->getMethodID(cls, "getReal", "()D");
            mids$[mid_getSecondDerivative_b74f83833fdad017] = env->getMethodID(cls, "getSecondDerivative", "()D");
            mids$[mid_getValue_b74f83833fdad017] = env->getMethodID(cls, "getValue", "()D");
            mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_hypot_618c33568543b745] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_linearCombination_88c6a33ccdcffc10] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_linearCombination_65b53d1f60ab8c5f] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;[Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_linearCombination_ac323f9e1e03c83c] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_linearCombination_c8e0368911da9d57] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_linearCombination_09b5f8a9034caafa] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_linearCombination_cc564d8b99f961c6] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_linearCombination_c2acd391d7d6c5ce] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_linearCombination_35e9f4b449a21669] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_log_61c90b0e9e75ab08] = env->getMethodID(cls, "log", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_log10_61c90b0e9e75ab08] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_log1p_61c90b0e9e75ab08] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_multiply_618c33568543b745] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_multiply_29624b0da98f03d2] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_multiply_0210591bd22c539f] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_negate_61c90b0e9e75ab08] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_newInstance_29624b0da98f03d2] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_pow_618c33568543b745] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_pow_29624b0da98f03d2] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_pow_0210591bd22c539f] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_pow_7e619823123d75e3] = env->getStaticMethodID(cls, "pow", "(DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_reciprocal_61c90b0e9e75ab08] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_remainder_618c33568543b745] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_remainder_29624b0da98f03d2] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_rint_61c90b0e9e75ab08] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_rootN_0210591bd22c539f] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_scalb_0210591bd22c539f] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_sign_61c90b0e9e75ab08] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_sin_61c90b0e9e75ab08] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_sinCos_e434dd780193da2f] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
            mids$[mid_sinh_61c90b0e9e75ab08] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_sinhCosh_4a1e2142f3481995] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
            mids$[mid_sqrt_61c90b0e9e75ab08] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_subtract_618c33568543b745] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_subtract_29624b0da98f03d2] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_tan_61c90b0e9e75ab08] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_tanh_61c90b0e9e75ab08] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_taylor_04fd0666b613d2ab] = env->getMethodID(cls, "taylor", "(D)D");
            mids$[mid_toDegrees_61c90b0e9e75ab08] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_toDerivativeStructure_57983c4d4b4a2f7f] = env->getMethodID(cls, "toDerivativeStructure", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_toRadians_61c90b0e9e75ab08] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_ulp_61c90b0e9e75ab08] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            PI = new UnivariateDerivative2(env->getStaticObjectField(cls, "PI", "Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnivariateDerivative2::UnivariateDerivative2(const ::org::hipparchus::analysis::differentiation::DerivativeStructure & a0) : ::org::hipparchus::analysis::differentiation::UnivariateDerivative(env->newObject(initializeClass, &mids$, mid_init$_0e3cd27f693a0167, a0.this$)) {}

        UnivariateDerivative2::UnivariateDerivative2(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::analysis::differentiation::UnivariateDerivative(env->newObject(initializeClass, &mids$, mid_init$_b5167f35b2521627, a0, a1, a2)) {}

        UnivariateDerivative2 UnivariateDerivative2::abs() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_abs_61c90b0e9e75ab08]));
        }

        UnivariateDerivative2 UnivariateDerivative2::acos() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_acos_61c90b0e9e75ab08]));
        }

        UnivariateDerivative2 UnivariateDerivative2::acosh() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_acosh_61c90b0e9e75ab08]));
        }

        UnivariateDerivative2 UnivariateDerivative2::add(const UnivariateDerivative2 & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_add_618c33568543b745], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::add(jdouble a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_add_29624b0da98f03d2], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::asin() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_asin_61c90b0e9e75ab08]));
        }

        UnivariateDerivative2 UnivariateDerivative2::asinh() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_asinh_61c90b0e9e75ab08]));
        }

        UnivariateDerivative2 UnivariateDerivative2::atan() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_atan_61c90b0e9e75ab08]));
        }

        UnivariateDerivative2 UnivariateDerivative2::atan2(const UnivariateDerivative2 & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_atan2_618c33568543b745], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::atanh() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_atanh_61c90b0e9e75ab08]));
        }

        UnivariateDerivative2 UnivariateDerivative2::cbrt() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_cbrt_61c90b0e9e75ab08]));
        }

        UnivariateDerivative2 UnivariateDerivative2::ceil() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_ceil_61c90b0e9e75ab08]));
        }

        jint UnivariateDerivative2::compareTo(const UnivariateDerivative2 & a0) const
        {
          return env->callIntMethod(this$, mids$[mid_compareTo_3af9d93348f63790], a0.this$);
        }

        UnivariateDerivative2 UnivariateDerivative2::compose(const JArray< jdouble > & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_compose_d95512c8ac4e9e59], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::copySign(const UnivariateDerivative2 & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_copySign_618c33568543b745], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::copySign(jdouble a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_copySign_29624b0da98f03d2], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::cos() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_cos_61c90b0e9e75ab08]));
        }

        UnivariateDerivative2 UnivariateDerivative2::cosh() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_cosh_61c90b0e9e75ab08]));
        }

        UnivariateDerivative2 UnivariateDerivative2::divide(const UnivariateDerivative2 & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_divide_618c33568543b745], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::divide(jdouble a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_divide_29624b0da98f03d2], a0));
        }

        jboolean UnivariateDerivative2::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
        }

        UnivariateDerivative2 UnivariateDerivative2::exp() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_exp_61c90b0e9e75ab08]));
        }

        UnivariateDerivative2 UnivariateDerivative2::expm1() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_expm1_61c90b0e9e75ab08]));
        }

        UnivariateDerivative2 UnivariateDerivative2::floor() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_floor_61c90b0e9e75ab08]));
        }

        jdouble UnivariateDerivative2::getDerivative(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDerivative_2afcbc21f4e57ab2], a0);
        }

        jint UnivariateDerivative2::getExponent() const
        {
          return env->callIntMethod(this$, mids$[mid_getExponent_55546ef6a647f39b]);
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDerivative2Field UnivariateDerivative2::getField() const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDerivative2Field(env->callObjectMethod(this$, mids$[mid_getField_7dee767fa0ace56c]));
        }

        jdouble UnivariateDerivative2::getFirstDerivative() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFirstDerivative_b74f83833fdad017]);
        }

        jint UnivariateDerivative2::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_55546ef6a647f39b]);
        }

        UnivariateDerivative2 UnivariateDerivative2::getPi() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_getPi_61c90b0e9e75ab08]));
        }

        jdouble UnivariateDerivative2::getReal() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReal_b74f83833fdad017]);
        }

        jdouble UnivariateDerivative2::getSecondDerivative() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSecondDerivative_b74f83833fdad017]);
        }

        jdouble UnivariateDerivative2::getValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getValue_b74f83833fdad017]);
        }

        jint UnivariateDerivative2::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
        }

        UnivariateDerivative2 UnivariateDerivative2::hypot(const UnivariateDerivative2 & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_hypot_618c33568543b745], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::linearCombination(const JArray< jdouble > & a0, const JArray< UnivariateDerivative2 > & a1) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_88c6a33ccdcffc10], a0.this$, a1.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::linearCombination(const JArray< UnivariateDerivative2 > & a0, const JArray< UnivariateDerivative2 > & a1) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_65b53d1f60ab8c5f], a0.this$, a1.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::linearCombination(const UnivariateDerivative2 & a0, const UnivariateDerivative2 & a1, const UnivariateDerivative2 & a2, const UnivariateDerivative2 & a3) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_ac323f9e1e03c83c], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::linearCombination(jdouble a0, const UnivariateDerivative2 & a1, jdouble a2, const UnivariateDerivative2 & a3) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_c8e0368911da9d57], a0, a1.this$, a2, a3.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::linearCombination(const UnivariateDerivative2 & a0, const UnivariateDerivative2 & a1, const UnivariateDerivative2 & a2, const UnivariateDerivative2 & a3, const UnivariateDerivative2 & a4, const UnivariateDerivative2 & a5) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_09b5f8a9034caafa], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::linearCombination(jdouble a0, const UnivariateDerivative2 & a1, jdouble a2, const UnivariateDerivative2 & a3, jdouble a4, const UnivariateDerivative2 & a5) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_cc564d8b99f961c6], a0, a1.this$, a2, a3.this$, a4, a5.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::linearCombination(const UnivariateDerivative2 & a0, const UnivariateDerivative2 & a1, const UnivariateDerivative2 & a2, const UnivariateDerivative2 & a3, const UnivariateDerivative2 & a4, const UnivariateDerivative2 & a5, const UnivariateDerivative2 & a6, const UnivariateDerivative2 & a7) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_c2acd391d7d6c5ce], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::linearCombination(jdouble a0, const UnivariateDerivative2 & a1, jdouble a2, const UnivariateDerivative2 & a3, jdouble a4, const UnivariateDerivative2 & a5, jdouble a6, const UnivariateDerivative2 & a7) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_35e9f4b449a21669], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::log() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_log_61c90b0e9e75ab08]));
        }

        UnivariateDerivative2 UnivariateDerivative2::log10() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_log10_61c90b0e9e75ab08]));
        }

        UnivariateDerivative2 UnivariateDerivative2::log1p() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_log1p_61c90b0e9e75ab08]));
        }

        UnivariateDerivative2 UnivariateDerivative2::multiply(const UnivariateDerivative2 & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_multiply_618c33568543b745], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::multiply(jdouble a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_multiply_29624b0da98f03d2], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::multiply(jint a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_multiply_0210591bd22c539f], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::negate() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_negate_61c90b0e9e75ab08]));
        }

        UnivariateDerivative2 UnivariateDerivative2::newInstance(jdouble a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_newInstance_29624b0da98f03d2], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::pow(const UnivariateDerivative2 & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_pow_618c33568543b745], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::pow(jdouble a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_pow_29624b0da98f03d2], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::pow(jint a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_pow_0210591bd22c539f], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::pow(jdouble a0, const UnivariateDerivative2 & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return UnivariateDerivative2(env->callStaticObjectMethod(cls, mids$[mid_pow_7e619823123d75e3], a0, a1.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::reciprocal() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_reciprocal_61c90b0e9e75ab08]));
        }

        UnivariateDerivative2 UnivariateDerivative2::remainder(const UnivariateDerivative2 & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_remainder_618c33568543b745], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::remainder(jdouble a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_remainder_29624b0da98f03d2], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::rint() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_rint_61c90b0e9e75ab08]));
        }

        UnivariateDerivative2 UnivariateDerivative2::rootN(jint a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_rootN_0210591bd22c539f], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::scalb(jint a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_scalb_0210591bd22c539f], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::sign() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_sign_61c90b0e9e75ab08]));
        }

        UnivariateDerivative2 UnivariateDerivative2::sin() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_sin_61c90b0e9e75ab08]));
        }

        ::org::hipparchus::util::FieldSinCos UnivariateDerivative2::sinCos() const
        {
          return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_e434dd780193da2f]));
        }

        UnivariateDerivative2 UnivariateDerivative2::sinh() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_sinh_61c90b0e9e75ab08]));
        }

        ::org::hipparchus::util::FieldSinhCosh UnivariateDerivative2::sinhCosh() const
        {
          return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_4a1e2142f3481995]));
        }

        UnivariateDerivative2 UnivariateDerivative2::sqrt() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_sqrt_61c90b0e9e75ab08]));
        }

        UnivariateDerivative2 UnivariateDerivative2::subtract(const UnivariateDerivative2 & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_subtract_618c33568543b745], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::subtract(jdouble a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_subtract_29624b0da98f03d2], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::tan() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_tan_61c90b0e9e75ab08]));
        }

        UnivariateDerivative2 UnivariateDerivative2::tanh() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_tanh_61c90b0e9e75ab08]));
        }

        jdouble UnivariateDerivative2::taylor(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_taylor_04fd0666b613d2ab], a0);
        }

        UnivariateDerivative2 UnivariateDerivative2::toDegrees() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_toDegrees_61c90b0e9e75ab08]));
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure UnivariateDerivative2::toDerivativeStructure() const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDerivativeStructure_57983c4d4b4a2f7f]));
        }

        UnivariateDerivative2 UnivariateDerivative2::toRadians() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_toRadians_61c90b0e9e75ab08]));
        }

        UnivariateDerivative2 UnivariateDerivative2::ulp() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_ulp_61c90b0e9e75ab08]));
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
      namespace differentiation {
        static PyObject *t_UnivariateDerivative2_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDerivative2_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDerivative2_of_(t_UnivariateDerivative2 *self, PyObject *args);
        static int t_UnivariateDerivative2_init_(t_UnivariateDerivative2 *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UnivariateDerivative2_abs(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_acos(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_acosh(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_add(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_asin(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_asinh(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_atan(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_atan2(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_atanh(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_cbrt(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_ceil(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_compareTo(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_compose(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_copySign(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_cos(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_cosh(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_divide(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_equals(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_exp(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_expm1(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_floor(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_getDerivative(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_getExponent(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_getField(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_getFirstDerivative(t_UnivariateDerivative2 *self);
        static PyObject *t_UnivariateDerivative2_getOrder(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_getPi(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_getReal(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_getSecondDerivative(t_UnivariateDerivative2 *self);
        static PyObject *t_UnivariateDerivative2_getValue(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_hashCode(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_hypot(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_linearCombination(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_log(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_log10(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_log1p(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_multiply(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_negate(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_newInstance(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_pow(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_pow_(PyTypeObject *type, PyObject *args);
        static PyObject *t_UnivariateDerivative2_reciprocal(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_remainder(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_rint(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_rootN(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_scalb(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_sign(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_sin(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_sinCos(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_sinh(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_sinhCosh(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_sqrt(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_subtract(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_tan(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_tanh(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_taylor(t_UnivariateDerivative2 *self, PyObject *arg);
        static PyObject *t_UnivariateDerivative2_toDegrees(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_toDerivativeStructure(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_toRadians(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_ulp(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_get__exponent(t_UnivariateDerivative2 *self, void *data);
        static PyObject *t_UnivariateDerivative2_get__field(t_UnivariateDerivative2 *self, void *data);
        static PyObject *t_UnivariateDerivative2_get__firstDerivative(t_UnivariateDerivative2 *self, void *data);
        static PyObject *t_UnivariateDerivative2_get__order(t_UnivariateDerivative2 *self, void *data);
        static PyObject *t_UnivariateDerivative2_get__pi(t_UnivariateDerivative2 *self, void *data);
        static PyObject *t_UnivariateDerivative2_get__real(t_UnivariateDerivative2 *self, void *data);
        static PyObject *t_UnivariateDerivative2_get__secondDerivative(t_UnivariateDerivative2 *self, void *data);
        static PyObject *t_UnivariateDerivative2_get__value(t_UnivariateDerivative2 *self, void *data);
        static PyObject *t_UnivariateDerivative2_get__parameters_(t_UnivariateDerivative2 *self, void *data);
        static PyGetSetDef t_UnivariateDerivative2__fields_[] = {
          DECLARE_GET_FIELD(t_UnivariateDerivative2, exponent),
          DECLARE_GET_FIELD(t_UnivariateDerivative2, field),
          DECLARE_GET_FIELD(t_UnivariateDerivative2, firstDerivative),
          DECLARE_GET_FIELD(t_UnivariateDerivative2, order),
          DECLARE_GET_FIELD(t_UnivariateDerivative2, pi),
          DECLARE_GET_FIELD(t_UnivariateDerivative2, real),
          DECLARE_GET_FIELD(t_UnivariateDerivative2, secondDerivative),
          DECLARE_GET_FIELD(t_UnivariateDerivative2, value),
          DECLARE_GET_FIELD(t_UnivariateDerivative2, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnivariateDerivative2__methods_[] = {
          DECLARE_METHOD(t_UnivariateDerivative2, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative2, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative2, of_, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, abs, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, acos, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, acosh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, add, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, asin, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, asinh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, atan, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, atan2, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, atanh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, cbrt, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, ceil, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, compareTo, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, compose, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, copySign, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, cos, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, cosh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, divide, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, equals, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, exp, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, expm1, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, floor, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, getDerivative, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, getExponent, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, getField, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, getFirstDerivative, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, getOrder, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, getPi, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, getReal, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, getSecondDerivative, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, getValue, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, hypot, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, linearCombination, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, log, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, log10, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, log1p, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, multiply, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, negate, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, newInstance, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, pow, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, pow_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative2, reciprocal, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, remainder, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, rint, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, rootN, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, scalb, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, sign, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, sin, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, sinCos, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, sinh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, sinhCosh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, sqrt, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, subtract, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, tan, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, tanh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, taylor, METH_O),
          DECLARE_METHOD(t_UnivariateDerivative2, toDegrees, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, toDerivativeStructure, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, toRadians, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, ulp, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateDerivative2)[] = {
          { Py_tp_methods, t_UnivariateDerivative2__methods_ },
          { Py_tp_init, (void *) t_UnivariateDerivative2_init_ },
          { Py_tp_getset, t_UnivariateDerivative2__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateDerivative2)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::differentiation::UnivariateDerivative),
          NULL
        };

        DEFINE_TYPE(UnivariateDerivative2, t_UnivariateDerivative2, UnivariateDerivative2);
        PyObject *t_UnivariateDerivative2::wrap_Object(const UnivariateDerivative2& object, PyTypeObject *p0)
        {
          PyObject *obj = t_UnivariateDerivative2::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_UnivariateDerivative2 *self = (t_UnivariateDerivative2 *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_UnivariateDerivative2::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_UnivariateDerivative2::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_UnivariateDerivative2 *self = (t_UnivariateDerivative2 *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_UnivariateDerivative2::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateDerivative2), &PY_TYPE_DEF(UnivariateDerivative2), module, "UnivariateDerivative2", 0);
        }

        void t_UnivariateDerivative2::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative2), "class_", make_descriptor(UnivariateDerivative2::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative2), "wrapfn_", make_descriptor(t_UnivariateDerivative2::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative2), "boxfn_", make_descriptor(boxObject));
          env->getClass(UnivariateDerivative2::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative2), "PI", make_descriptor(t_UnivariateDerivative2::wrap_Object(*UnivariateDerivative2::PI)));
        }

        static PyObject *t_UnivariateDerivative2_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateDerivative2::initializeClass, 1)))
            return NULL;
          return t_UnivariateDerivative2::wrap_Object(UnivariateDerivative2(((t_UnivariateDerivative2 *) arg)->object.this$));
        }
        static PyObject *t_UnivariateDerivative2_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateDerivative2::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateDerivative2_of_(t_UnivariateDerivative2 *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_UnivariateDerivative2_init_(t_UnivariateDerivative2 *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::analysis::differentiation::DerivativeStructure a0((jobject) NULL);
              UnivariateDerivative2 object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::analysis::differentiation::DerivativeStructure::initializeClass, &a0))
              {
                INT_CALL(object = UnivariateDerivative2(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative2);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              UnivariateDerivative2 object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = UnivariateDerivative2(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative2);
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

        static PyObject *t_UnivariateDerivative2_abs(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.abs());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "abs", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_acos(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.acos());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "acos", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_acosh(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.acosh());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "acosh", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_add(t_UnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative2::initializeClass, &a0, &p0, t_UnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "add", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_asin(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.asin());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "asin", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_asinh(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.asinh());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "asinh", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_atan(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.atan());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "atan", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_atan2(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 a0((jobject) NULL);
          PyTypeObject **p0;
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "K", UnivariateDerivative2::initializeClass, &a0, &p0, t_UnivariateDerivative2::parameters_))
          {
            OBJ_CALL(result = self->object.atan2(a0));
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "atan2", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_atanh(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.atanh());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "atanh", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_cbrt(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cbrt());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "cbrt", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_ceil(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.ceil());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "ceil", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_compareTo(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 a0((jobject) NULL);
          PyTypeObject **p0;
          jint result;

          if (!parseArgs(args, "K", UnivariateDerivative2::initializeClass, &a0, &p0, t_UnivariateDerivative2::parameters_))
          {
            OBJ_CALL(result = self->object.compareTo(a0));
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "compareTo", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_compose(t_UnivariateDerivative2 *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.compose(a0));
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "compose", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_copySign(t_UnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative2::initializeClass, &a0, &p0, t_UnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "copySign", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_cos(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cos());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "cos", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_cosh(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cosh());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "cosh", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_divide(t_UnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative2::initializeClass, &a0, &p0, t_UnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "divide", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_equals(t_UnivariateDerivative2 *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_exp(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.exp());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "exp", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_expm1(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.expm1());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "expm1", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_floor(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.floor());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "floor", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_getDerivative(t_UnivariateDerivative2 *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.getDerivative(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "getDerivative", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_getExponent(t_UnivariateDerivative2 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getExponent());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "getExponent", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_getField(t_UnivariateDerivative2 *self, PyObject *args)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative2Field result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getField());
            return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative2Field::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "getField", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_getFirstDerivative(t_UnivariateDerivative2 *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getFirstDerivative());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_UnivariateDerivative2_getOrder(t_UnivariateDerivative2 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getOrder());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "getOrder", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_getPi(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getPi());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "getPi", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_getReal(t_UnivariateDerivative2 *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getReal());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "getReal", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_getSecondDerivative(t_UnivariateDerivative2 *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSecondDerivative());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_UnivariateDerivative2_getValue(t_UnivariateDerivative2 *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getValue());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "getValue", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_hashCode(t_UnivariateDerivative2 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_hypot(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 a0((jobject) NULL);
          PyTypeObject **p0;
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "K", UnivariateDerivative2::initializeClass, &a0, &p0, t_UnivariateDerivative2::parameters_))
          {
            OBJ_CALL(result = self->object.hypot(a0));
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "hypot", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_linearCombination(t_UnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< UnivariateDerivative2 > a1((jobject) NULL);
              PyTypeObject **p1;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "[D[K", UnivariateDerivative2::initializeClass, &a0, &a1, &p1, t_UnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
            {
              JArray< UnivariateDerivative2 > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< UnivariateDerivative2 > a1((jobject) NULL);
              PyTypeObject **p1;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "[K[K", UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, &a0, &p0, t_UnivariateDerivative2::parameters_, &a1, &p1, t_UnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              UnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              UnivariateDerivative2 a2((jobject) NULL);
              PyTypeObject **p2;
              UnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "KKKK", UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, &a0, &p0, t_UnivariateDerivative2::parameters_, &a1, &p1, t_UnivariateDerivative2::parameters_, &a2, &p2, t_UnivariateDerivative2::parameters_, &a3, &p3, t_UnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              UnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "DKDK", UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, &a0, &a1, &p1, t_UnivariateDerivative2::parameters_, &a2, &a3, &p3, t_UnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
            break;
           case 6:
            {
              UnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              UnivariateDerivative2 a2((jobject) NULL);
              PyTypeObject **p2;
              UnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              UnivariateDerivative2 a4((jobject) NULL);
              PyTypeObject **p4;
              UnivariateDerivative2 a5((jobject) NULL);
              PyTypeObject **p5;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "KKKKKK", UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, &a0, &p0, t_UnivariateDerivative2::parameters_, &a1, &p1, t_UnivariateDerivative2::parameters_, &a2, &p2, t_UnivariateDerivative2::parameters_, &a3, &p3, t_UnivariateDerivative2::parameters_, &a4, &p4, t_UnivariateDerivative2::parameters_, &a5, &p5, t_UnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              UnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              UnivariateDerivative2 a5((jobject) NULL);
              PyTypeObject **p5;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "DKDKDK", UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, &a0, &a1, &p1, t_UnivariateDerivative2::parameters_, &a2, &a3, &p3, t_UnivariateDerivative2::parameters_, &a4, &a5, &p5, t_UnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
            break;
           case 8:
            {
              UnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              UnivariateDerivative2 a2((jobject) NULL);
              PyTypeObject **p2;
              UnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              UnivariateDerivative2 a4((jobject) NULL);
              PyTypeObject **p4;
              UnivariateDerivative2 a5((jobject) NULL);
              PyTypeObject **p5;
              UnivariateDerivative2 a6((jobject) NULL);
              PyTypeObject **p6;
              UnivariateDerivative2 a7((jobject) NULL);
              PyTypeObject **p7;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "KKKKKKKK", UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, &a0, &p0, t_UnivariateDerivative2::parameters_, &a1, &p1, t_UnivariateDerivative2::parameters_, &a2, &p2, t_UnivariateDerivative2::parameters_, &a3, &p3, t_UnivariateDerivative2::parameters_, &a4, &p4, t_UnivariateDerivative2::parameters_, &a5, &p5, t_UnivariateDerivative2::parameters_, &a6, &p6, t_UnivariateDerivative2::parameters_, &a7, &p7, t_UnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              UnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              UnivariateDerivative2 a5((jobject) NULL);
              PyTypeObject **p5;
              jdouble a6;
              UnivariateDerivative2 a7((jobject) NULL);
              PyTypeObject **p7;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "DKDKDKDK", UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, &a0, &a1, &p1, t_UnivariateDerivative2::parameters_, &a2, &a3, &p3, t_UnivariateDerivative2::parameters_, &a4, &a5, &p5, t_UnivariateDerivative2::parameters_, &a6, &a7, &p7, t_UnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "linearCombination", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_log(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "log", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_log10(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log10());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "log10", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_log1p(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log1p());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "log1p", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_multiply(t_UnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative2::initializeClass, &a0, &p0, t_UnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
            {
              jint a0;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "multiply", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_negate(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.negate());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "negate", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_newInstance(t_UnivariateDerivative2 *self, PyObject *args)
        {
          jdouble a0;
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.newInstance(a0));
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "newInstance", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_pow(t_UnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative2::initializeClass, &a0, &p0, t_UnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
            {
              jint a0;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "pow", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_pow_(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          UnivariateDerivative2 a1((jobject) NULL);
          PyTypeObject **p1;
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "DK", UnivariateDerivative2::initializeClass, &a0, &a1, &p1, t_UnivariateDerivative2::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::UnivariateDerivative2::pow(a0, a1));
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "pow_", args);
          return NULL;
        }

        static PyObject *t_UnivariateDerivative2_reciprocal(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.reciprocal());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "reciprocal", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_remainder(t_UnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative2::initializeClass, &a0, &p0, t_UnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "remainder", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_rint(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.rint());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "rint", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_rootN(t_UnivariateDerivative2 *self, PyObject *args)
        {
          jint a0;
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.rootN(a0));
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "rootN", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_scalb(t_UnivariateDerivative2 *self, PyObject *args)
        {
          jint a0;
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.scalb(a0));
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "scalb", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_sign(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sign());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "sign", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_sin(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sin());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "sin", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_sinCos(t_UnivariateDerivative2 *self, PyObject *args)
        {
          ::org::hipparchus::util::FieldSinCos result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinCos());
            return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative2));
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "sinCos", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_sinh(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinh());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "sinh", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_sinhCosh(t_UnivariateDerivative2 *self, PyObject *args)
        {
          ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinhCosh());
            return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative2));
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "sinhCosh", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_sqrt(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sqrt());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "sqrt", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_subtract(t_UnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative2::initializeClass, &a0, &p0, t_UnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "subtract", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_tan(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.tan());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "tan", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_tanh(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.tanh());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "tanh", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_taylor(t_UnivariateDerivative2 *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.taylor(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "taylor", arg);
          return NULL;
        }

        static PyObject *t_UnivariateDerivative2_toDegrees(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toDegrees());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "toDegrees", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_toDerivativeStructure(t_UnivariateDerivative2 *self, PyObject *args)
        {
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toDerivativeStructure());
            return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "toDerivativeStructure", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_toRadians(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toRadians());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "toRadians", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_ulp(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.ulp());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "ulp", args, 2);
        }
        static PyObject *t_UnivariateDerivative2_get__parameters_(t_UnivariateDerivative2 *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_UnivariateDerivative2_get__exponent(t_UnivariateDerivative2 *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getExponent());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_UnivariateDerivative2_get__field(t_UnivariateDerivative2 *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative2Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative2Field::wrap_Object(value);
        }

        static PyObject *t_UnivariateDerivative2_get__firstDerivative(t_UnivariateDerivative2 *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getFirstDerivative());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UnivariateDerivative2_get__order(t_UnivariateDerivative2 *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_UnivariateDerivative2_get__pi(t_UnivariateDerivative2 *self, void *data)
        {
          UnivariateDerivative2 value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return t_UnivariateDerivative2::wrap_Object(value);
        }

        static PyObject *t_UnivariateDerivative2_get__real(t_UnivariateDerivative2 *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReal());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UnivariateDerivative2_get__secondDerivative(t_UnivariateDerivative2 *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSecondDerivative());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UnivariateDerivative2_get__value(t_UnivariateDerivative2 *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getValue());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/PythonSatelliteAttitudeEphemeris.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$AttitudeEphemerisSegment.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$SatelliteAttitudeEphemeris.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *PythonSatelliteAttitudeEphemeris::class$ = NULL;
        jmethodID *PythonSatelliteAttitudeEphemeris::mids$ = NULL;
        bool PythonSatelliteAttitudeEphemeris::live$ = false;

        jclass PythonSatelliteAttitudeEphemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/PythonSatelliteAttitudeEphemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getAttitudeProvider_fcce29ba1cf2a05e] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/BoundedAttitudeProvider;");
            mids$[mid_getId_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
            mids$[mid_getSegments_e62d3bb06d56d7e3] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
            mids$[mid_getStart_c325492395d89b24] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_c325492395d89b24] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonSatelliteAttitudeEphemeris::PythonSatelliteAttitudeEphemeris() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonSatelliteAttitudeEphemeris::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonSatelliteAttitudeEphemeris::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonSatelliteAttitudeEphemeris::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
        static PyObject *t_PythonSatelliteAttitudeEphemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonSatelliteAttitudeEphemeris_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonSatelliteAttitudeEphemeris_init_(t_PythonSatelliteAttitudeEphemeris *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonSatelliteAttitudeEphemeris_finalize(t_PythonSatelliteAttitudeEphemeris *self);
        static PyObject *t_PythonSatelliteAttitudeEphemeris_pythonExtension(t_PythonSatelliteAttitudeEphemeris *self, PyObject *args);
        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getAttitudeProvider0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getId1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getSegments2(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getStart3(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getStop4(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonSatelliteAttitudeEphemeris_pythonDecRef5(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonSatelliteAttitudeEphemeris_get__self(t_PythonSatelliteAttitudeEphemeris *self, void *data);
        static PyGetSetDef t_PythonSatelliteAttitudeEphemeris__fields_[] = {
          DECLARE_GET_FIELD(t_PythonSatelliteAttitudeEphemeris, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonSatelliteAttitudeEphemeris__methods_[] = {
          DECLARE_METHOD(t_PythonSatelliteAttitudeEphemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonSatelliteAttitudeEphemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonSatelliteAttitudeEphemeris, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonSatelliteAttitudeEphemeris, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonSatelliteAttitudeEphemeris)[] = {
          { Py_tp_methods, t_PythonSatelliteAttitudeEphemeris__methods_ },
          { Py_tp_init, (void *) t_PythonSatelliteAttitudeEphemeris_init_ },
          { Py_tp_getset, t_PythonSatelliteAttitudeEphemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonSatelliteAttitudeEphemeris)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonSatelliteAttitudeEphemeris, t_PythonSatelliteAttitudeEphemeris, PythonSatelliteAttitudeEphemeris);

        void t_PythonSatelliteAttitudeEphemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonSatelliteAttitudeEphemeris), &PY_TYPE_DEF(PythonSatelliteAttitudeEphemeris), module, "PythonSatelliteAttitudeEphemeris", 1);
        }

        void t_PythonSatelliteAttitudeEphemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSatelliteAttitudeEphemeris), "class_", make_descriptor(PythonSatelliteAttitudeEphemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSatelliteAttitudeEphemeris), "wrapfn_", make_descriptor(t_PythonSatelliteAttitudeEphemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSatelliteAttitudeEphemeris), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonSatelliteAttitudeEphemeris::initializeClass);
          JNINativeMethod methods[] = {
            { "getAttitudeProvider", "()Lorg/orekit/attitudes/BoundedAttitudeProvider;", (void *) t_PythonSatelliteAttitudeEphemeris_getAttitudeProvider0 },
            { "getId", "()Ljava/lang/String;", (void *) t_PythonSatelliteAttitudeEphemeris_getId1 },
            { "getSegments", "()Ljava/util/List;", (void *) t_PythonSatelliteAttitudeEphemeris_getSegments2 },
            { "getStart", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonSatelliteAttitudeEphemeris_getStart3 },
            { "getStop", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonSatelliteAttitudeEphemeris_getStop4 },
            { "pythonDecRef", "()V", (void *) t_PythonSatelliteAttitudeEphemeris_pythonDecRef5 },
          };
          env->registerNatives(cls, methods, 6);
        }

        static PyObject *t_PythonSatelliteAttitudeEphemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonSatelliteAttitudeEphemeris::initializeClass, 1)))
            return NULL;
          return t_PythonSatelliteAttitudeEphemeris::wrap_Object(PythonSatelliteAttitudeEphemeris(((t_PythonSatelliteAttitudeEphemeris *) arg)->object.this$));
        }
        static PyObject *t_PythonSatelliteAttitudeEphemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonSatelliteAttitudeEphemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonSatelliteAttitudeEphemeris_init_(t_PythonSatelliteAttitudeEphemeris *self, PyObject *args, PyObject *kwds)
        {
          PythonSatelliteAttitudeEphemeris object((jobject) NULL);

          INT_CALL(object = PythonSatelliteAttitudeEphemeris());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonSatelliteAttitudeEphemeris_finalize(t_PythonSatelliteAttitudeEphemeris *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonSatelliteAttitudeEphemeris_pythonExtension(t_PythonSatelliteAttitudeEphemeris *self, PyObject *args)
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

        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getAttitudeProvider0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSatelliteAttitudeEphemeris::mids$[PythonSatelliteAttitudeEphemeris::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::attitudes::BoundedAttitudeProvider value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getAttitudeProvider", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::attitudes::BoundedAttitudeProvider::initializeClass, &value))
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

        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getId1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSatelliteAttitudeEphemeris::mids$[PythonSatelliteAttitudeEphemeris::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::lang::String value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getId", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "s", &value))
          {
            throwTypeError("getId", result);
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

        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getSegments2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSatelliteAttitudeEphemeris::mids$[PythonSatelliteAttitudeEphemeris::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::List value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getSegments", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
          {
            throwTypeError("getSegments", result);
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

        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getStart3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSatelliteAttitudeEphemeris::mids$[PythonSatelliteAttitudeEphemeris::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getStart", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
          {
            throwTypeError("getStart", result);
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

        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getStop4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSatelliteAttitudeEphemeris::mids$[PythonSatelliteAttitudeEphemeris::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getStop", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
          {
            throwTypeError("getStop", result);
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

        static void JNICALL t_PythonSatelliteAttitudeEphemeris_pythonDecRef5(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSatelliteAttitudeEphemeris::mids$[PythonSatelliteAttitudeEphemeris::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonSatelliteAttitudeEphemeris::mids$[PythonSatelliteAttitudeEphemeris::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonSatelliteAttitudeEphemeris_get__self(t_PythonSatelliteAttitudeEphemeris *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/CoefficientsFactory$NSKey.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/CoefficientsFactory$NSKey.h"
#include "java/lang/Class.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *CoefficientsFactory$NSKey::class$ = NULL;
            jmethodID *CoefficientsFactory$NSKey::mids$ = NULL;
            bool CoefficientsFactory$NSKey::live$ = false;

            jclass CoefficientsFactory$NSKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/CoefficientsFactory$NSKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_3313c75e3e16c428] = env->getMethodID(cls, "<init>", "(II)V");
                mids$[mid_compareTo_5280855caf3a4821] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/CoefficientsFactory$NSKey;)I");
                mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
                mids$[mid_getN_55546ef6a647f39b] = env->getMethodID(cls, "getN", "()I");
                mids$[mid_getS_55546ef6a647f39b] = env->getMethodID(cls, "getS", "()I");
                mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CoefficientsFactory$NSKey::CoefficientsFactory$NSKey(jint a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3313c75e3e16c428, a0, a1)) {}

            jint CoefficientsFactory$NSKey::compareTo(const CoefficientsFactory$NSKey & a0) const
            {
              return env->callIntMethod(this$, mids$[mid_compareTo_5280855caf3a4821], a0.this$);
            }

            jboolean CoefficientsFactory$NSKey::equals(const ::java::lang::Object & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
            }

            jint CoefficientsFactory$NSKey::getN() const
            {
              return env->callIntMethod(this$, mids$[mid_getN_55546ef6a647f39b]);
            }

            jint CoefficientsFactory$NSKey::getS() const
            {
              return env->callIntMethod(this$, mids$[mid_getS_55546ef6a647f39b]);
            }

            jint CoefficientsFactory$NSKey::hashCode() const
            {
              return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
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
            static PyObject *t_CoefficientsFactory$NSKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CoefficientsFactory$NSKey_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CoefficientsFactory$NSKey_init_(t_CoefficientsFactory$NSKey *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CoefficientsFactory$NSKey_compareTo(t_CoefficientsFactory$NSKey *self, PyObject *arg);
            static PyObject *t_CoefficientsFactory$NSKey_equals(t_CoefficientsFactory$NSKey *self, PyObject *args);
            static PyObject *t_CoefficientsFactory$NSKey_getN(t_CoefficientsFactory$NSKey *self);
            static PyObject *t_CoefficientsFactory$NSKey_getS(t_CoefficientsFactory$NSKey *self);
            static PyObject *t_CoefficientsFactory$NSKey_hashCode(t_CoefficientsFactory$NSKey *self, PyObject *args);
            static PyObject *t_CoefficientsFactory$NSKey_get__n(t_CoefficientsFactory$NSKey *self, void *data);
            static PyObject *t_CoefficientsFactory$NSKey_get__s(t_CoefficientsFactory$NSKey *self, void *data);
            static PyGetSetDef t_CoefficientsFactory$NSKey__fields_[] = {
              DECLARE_GET_FIELD(t_CoefficientsFactory$NSKey, n),
              DECLARE_GET_FIELD(t_CoefficientsFactory$NSKey, s),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CoefficientsFactory$NSKey__methods_[] = {
              DECLARE_METHOD(t_CoefficientsFactory$NSKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CoefficientsFactory$NSKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CoefficientsFactory$NSKey, compareTo, METH_O),
              DECLARE_METHOD(t_CoefficientsFactory$NSKey, equals, METH_VARARGS),
              DECLARE_METHOD(t_CoefficientsFactory$NSKey, getN, METH_NOARGS),
              DECLARE_METHOD(t_CoefficientsFactory$NSKey, getS, METH_NOARGS),
              DECLARE_METHOD(t_CoefficientsFactory$NSKey, hashCode, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CoefficientsFactory$NSKey)[] = {
              { Py_tp_methods, t_CoefficientsFactory$NSKey__methods_ },
              { Py_tp_init, (void *) t_CoefficientsFactory$NSKey_init_ },
              { Py_tp_getset, t_CoefficientsFactory$NSKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CoefficientsFactory$NSKey)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CoefficientsFactory$NSKey, t_CoefficientsFactory$NSKey, CoefficientsFactory$NSKey);

            void t_CoefficientsFactory$NSKey::install(PyObject *module)
            {
              installType(&PY_TYPE(CoefficientsFactory$NSKey), &PY_TYPE_DEF(CoefficientsFactory$NSKey), module, "CoefficientsFactory$NSKey", 0);
            }

            void t_CoefficientsFactory$NSKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CoefficientsFactory$NSKey), "class_", make_descriptor(CoefficientsFactory$NSKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CoefficientsFactory$NSKey), "wrapfn_", make_descriptor(t_CoefficientsFactory$NSKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CoefficientsFactory$NSKey), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CoefficientsFactory$NSKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CoefficientsFactory$NSKey::initializeClass, 1)))
                return NULL;
              return t_CoefficientsFactory$NSKey::wrap_Object(CoefficientsFactory$NSKey(((t_CoefficientsFactory$NSKey *) arg)->object.this$));
            }
            static PyObject *t_CoefficientsFactory$NSKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CoefficientsFactory$NSKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CoefficientsFactory$NSKey_init_(t_CoefficientsFactory$NSKey *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              jint a1;
              CoefficientsFactory$NSKey object((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                INT_CALL(object = CoefficientsFactory$NSKey(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CoefficientsFactory$NSKey_compareTo(t_CoefficientsFactory$NSKey *self, PyObject *arg)
            {
              CoefficientsFactory$NSKey a0((jobject) NULL);
              jint result;

              if (!parseArg(arg, "k", CoefficientsFactory$NSKey::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.compareTo(a0));
                return PyLong_FromLong((long) result);
              }

              PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
              return NULL;
            }

            static PyObject *t_CoefficientsFactory$NSKey_equals(t_CoefficientsFactory$NSKey *self, PyObject *args)
            {
              ::java::lang::Object a0((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "o", &a0))
              {
                OBJ_CALL(result = self->object.equals(a0));
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(CoefficientsFactory$NSKey), (PyObject *) self, "equals", args, 2);
            }

            static PyObject *t_CoefficientsFactory$NSKey_getN(t_CoefficientsFactory$NSKey *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CoefficientsFactory$NSKey_getS(t_CoefficientsFactory$NSKey *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getS());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CoefficientsFactory$NSKey_hashCode(t_CoefficientsFactory$NSKey *self, PyObject *args)
            {
              jint result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.hashCode());
                return PyLong_FromLong((long) result);
              }

              return callSuper(PY_TYPE(CoefficientsFactory$NSKey), (PyObject *) self, "hashCode", args, 2);
            }

            static PyObject *t_CoefficientsFactory$NSKey_get__n(t_CoefficientsFactory$NSKey *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getN());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_CoefficientsFactory$NSKey_get__s(t_CoefficientsFactory$NSKey *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getS());
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
#include "org/hipparchus/stat/descriptive/moment/FirstMoment.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/moment/FirstMoment.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *FirstMoment::class$ = NULL;
          jmethodID *FirstMoment::mids$ = NULL;
          bool FirstMoment::live$ = false;

          jclass FirstMoment::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/FirstMoment");

              mids$ = new jmethodID[max_mid];
              mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_c99c0278dbbc82c6] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/moment/FirstMoment;");
              mids$[mid_getN_6c0ce7e438e5ded4] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_b74f83833fdad017] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_8ba9fe7a847cecad] = env->getMethodID(cls, "increment", "(D)V");
              mids$[mid_aggregate_5f13a5ee5da004b6] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/moment/FirstMoment;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void FirstMoment::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
          }

          FirstMoment FirstMoment::copy() const
          {
            return FirstMoment(env->callObjectMethod(this$, mids$[mid_copy_c99c0278dbbc82c6]));
          }

          jlong FirstMoment::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_6c0ce7e438e5ded4]);
          }

          jdouble FirstMoment::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_b74f83833fdad017]);
          }

          void FirstMoment::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_8ba9fe7a847cecad], a0);
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
        namespace moment {
          static PyObject *t_FirstMoment_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FirstMoment_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FirstMoment_clear(t_FirstMoment *self, PyObject *args);
          static PyObject *t_FirstMoment_copy(t_FirstMoment *self, PyObject *args);
          static PyObject *t_FirstMoment_getN(t_FirstMoment *self, PyObject *args);
          static PyObject *t_FirstMoment_getResult(t_FirstMoment *self, PyObject *args);
          static PyObject *t_FirstMoment_increment(t_FirstMoment *self, PyObject *args);
          static PyObject *t_FirstMoment_get__n(t_FirstMoment *self, void *data);
          static PyObject *t_FirstMoment_get__result(t_FirstMoment *self, void *data);
          static PyGetSetDef t_FirstMoment__fields_[] = {
            DECLARE_GET_FIELD(t_FirstMoment, n),
            DECLARE_GET_FIELD(t_FirstMoment, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FirstMoment__methods_[] = {
            DECLARE_METHOD(t_FirstMoment, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FirstMoment, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FirstMoment, clear, METH_VARARGS),
            DECLARE_METHOD(t_FirstMoment, copy, METH_VARARGS),
            DECLARE_METHOD(t_FirstMoment, getN, METH_VARARGS),
            DECLARE_METHOD(t_FirstMoment, getResult, METH_VARARGS),
            DECLARE_METHOD(t_FirstMoment, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FirstMoment)[] = {
            { Py_tp_methods, t_FirstMoment__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FirstMoment__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FirstMoment)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(FirstMoment, t_FirstMoment, FirstMoment);

          void t_FirstMoment::install(PyObject *module)
          {
            installType(&PY_TYPE(FirstMoment), &PY_TYPE_DEF(FirstMoment), module, "FirstMoment", 0);
          }

          void t_FirstMoment::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FirstMoment), "class_", make_descriptor(FirstMoment::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FirstMoment), "wrapfn_", make_descriptor(t_FirstMoment::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FirstMoment), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FirstMoment_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FirstMoment::initializeClass, 1)))
              return NULL;
            return t_FirstMoment::wrap_Object(FirstMoment(((t_FirstMoment *) arg)->object.this$));
          }
          static PyObject *t_FirstMoment_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FirstMoment::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FirstMoment_clear(t_FirstMoment *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(FirstMoment), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_FirstMoment_copy(t_FirstMoment *self, PyObject *args)
          {
            FirstMoment result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_FirstMoment::wrap_Object(result);
            }

            return callSuper(PY_TYPE(FirstMoment), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_FirstMoment_getN(t_FirstMoment *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(FirstMoment), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_FirstMoment_getResult(t_FirstMoment *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(FirstMoment), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_FirstMoment_increment(t_FirstMoment *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(FirstMoment), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_FirstMoment_get__n(t_FirstMoment *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_FirstMoment_get__result(t_FirstMoment *self, void *data)
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
#include "org/hipparchus/optim/AbstractConvergenceChecker.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *AbstractConvergenceChecker::class$ = NULL;
      jmethodID *AbstractConvergenceChecker::mids$ = NULL;
      bool AbstractConvergenceChecker::live$ = false;

      jclass AbstractConvergenceChecker::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/AbstractConvergenceChecker");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
          mids$[mid_converged_061aaa68e115701e] = env->getMethodID(cls, "converged", "(ILjava/lang/Object;Ljava/lang/Object;)Z");
          mids$[mid_getAbsoluteThreshold_b74f83833fdad017] = env->getMethodID(cls, "getAbsoluteThreshold", "()D");
          mids$[mid_getRelativeThreshold_b74f83833fdad017] = env->getMethodID(cls, "getRelativeThreshold", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractConvergenceChecker::AbstractConvergenceChecker(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

      jboolean AbstractConvergenceChecker::converged(jint a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2) const
      {
        return env->callBooleanMethod(this$, mids$[mid_converged_061aaa68e115701e], a0, a1.this$, a2.this$);
      }

      jdouble AbstractConvergenceChecker::getAbsoluteThreshold() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAbsoluteThreshold_b74f83833fdad017]);
      }

      jdouble AbstractConvergenceChecker::getRelativeThreshold() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRelativeThreshold_b74f83833fdad017]);
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
      static PyObject *t_AbstractConvergenceChecker_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractConvergenceChecker_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractConvergenceChecker_of_(t_AbstractConvergenceChecker *self, PyObject *args);
      static int t_AbstractConvergenceChecker_init_(t_AbstractConvergenceChecker *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbstractConvergenceChecker_converged(t_AbstractConvergenceChecker *self, PyObject *args);
      static PyObject *t_AbstractConvergenceChecker_getAbsoluteThreshold(t_AbstractConvergenceChecker *self);
      static PyObject *t_AbstractConvergenceChecker_getRelativeThreshold(t_AbstractConvergenceChecker *self);
      static PyObject *t_AbstractConvergenceChecker_get__absoluteThreshold(t_AbstractConvergenceChecker *self, void *data);
      static PyObject *t_AbstractConvergenceChecker_get__relativeThreshold(t_AbstractConvergenceChecker *self, void *data);
      static PyObject *t_AbstractConvergenceChecker_get__parameters_(t_AbstractConvergenceChecker *self, void *data);
      static PyGetSetDef t_AbstractConvergenceChecker__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractConvergenceChecker, absoluteThreshold),
        DECLARE_GET_FIELD(t_AbstractConvergenceChecker, relativeThreshold),
        DECLARE_GET_FIELD(t_AbstractConvergenceChecker, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractConvergenceChecker__methods_[] = {
        DECLARE_METHOD(t_AbstractConvergenceChecker, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractConvergenceChecker, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractConvergenceChecker, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractConvergenceChecker, converged, METH_VARARGS),
        DECLARE_METHOD(t_AbstractConvergenceChecker, getAbsoluteThreshold, METH_NOARGS),
        DECLARE_METHOD(t_AbstractConvergenceChecker, getRelativeThreshold, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractConvergenceChecker)[] = {
        { Py_tp_methods, t_AbstractConvergenceChecker__methods_ },
        { Py_tp_init, (void *) t_AbstractConvergenceChecker_init_ },
        { Py_tp_getset, t_AbstractConvergenceChecker__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractConvergenceChecker)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractConvergenceChecker, t_AbstractConvergenceChecker, AbstractConvergenceChecker);
      PyObject *t_AbstractConvergenceChecker::wrap_Object(const AbstractConvergenceChecker& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractConvergenceChecker::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractConvergenceChecker *self = (t_AbstractConvergenceChecker *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbstractConvergenceChecker::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractConvergenceChecker::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractConvergenceChecker *self = (t_AbstractConvergenceChecker *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbstractConvergenceChecker::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractConvergenceChecker), &PY_TYPE_DEF(AbstractConvergenceChecker), module, "AbstractConvergenceChecker", 0);
      }

      void t_AbstractConvergenceChecker::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConvergenceChecker), "class_", make_descriptor(AbstractConvergenceChecker::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConvergenceChecker), "wrapfn_", make_descriptor(t_AbstractConvergenceChecker::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConvergenceChecker), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractConvergenceChecker_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractConvergenceChecker::initializeClass, 1)))
          return NULL;
        return t_AbstractConvergenceChecker::wrap_Object(AbstractConvergenceChecker(((t_AbstractConvergenceChecker *) arg)->object.this$));
      }
      static PyObject *t_AbstractConvergenceChecker_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractConvergenceChecker::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractConvergenceChecker_of_(t_AbstractConvergenceChecker *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_AbstractConvergenceChecker_init_(t_AbstractConvergenceChecker *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        jdouble a1;
        AbstractConvergenceChecker object((jobject) NULL);

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          INT_CALL(object = AbstractConvergenceChecker(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_AbstractConvergenceChecker_converged(t_AbstractConvergenceChecker *self, PyObject *args)
      {
        jint a0;
        ::java::lang::Object a1((jobject) NULL);
        ::java::lang::Object a2((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "IOO", self->parameters[0], self->parameters[0], &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.converged(a0, a1, a2));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "converged", args);
        return NULL;
      }

      static PyObject *t_AbstractConvergenceChecker_getAbsoluteThreshold(t_AbstractConvergenceChecker *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAbsoluteThreshold());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_AbstractConvergenceChecker_getRelativeThreshold(t_AbstractConvergenceChecker *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getRelativeThreshold());
        return PyFloat_FromDouble((double) result);
      }
      static PyObject *t_AbstractConvergenceChecker_get__parameters_(t_AbstractConvergenceChecker *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractConvergenceChecker_get__absoluteThreshold(t_AbstractConvergenceChecker *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAbsoluteThreshold());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_AbstractConvergenceChecker_get__relativeThreshold(t_AbstractConvergenceChecker *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getRelativeThreshold());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/ConstantThrustManeuver.h"
#include "org/orekit/forces/maneuvers/propulsion/AbstractConstantThrustPropulsionModel.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/forces/maneuvers/trigger/DateBasedManeuverTriggers.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {

        ::java::lang::Class *ConstantThrustManeuver::class$ = NULL;
        jmethodID *ConstantThrustManeuver::mids$ = NULL;
        bool ConstantThrustManeuver::live$ = false;

        jclass ConstantThrustManeuver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/ConstantThrustManeuver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_222f3ac3ba5526f6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/forces/maneuvers/trigger/DateBasedManeuverTriggers;Lorg/orekit/forces/maneuvers/propulsion/AbstractConstantThrustPropulsionModel;)V");
            mids$[mid_init$_b92ace1679db3ad4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/forces/maneuvers/propulsion/AbstractConstantThrustPropulsionModel;)V");
            mids$[mid_init$_1d766a862a2fba89] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDLorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
            mids$[mid_init$_159216b8eab5f883] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDLorg/hipparchus/geometry/euclidean/threed/Vector3D;Ljava/lang/String;)V");
            mids$[mid_init$_421685bf274cf624] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDLorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
            mids$[mid_init$_b1f761fead489272] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDLorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Ljava/lang/String;)V");
            mids$[mid_init$_2c8f4d747b28c68e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDLorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/forces/maneuvers/Control3DVectorCostType;Ljava/lang/String;)V");
            mids$[mid_getDirection_8b724f8b4fdad1a2] = env->getMethodID(cls, "getDirection", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getDirection_082e6346b274f880] = env->getMethodID(cls, "getDirection", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getDuration_b74f83833fdad017] = env->getMethodID(cls, "getDuration", "()D");
            mids$[mid_getEndDate_c325492395d89b24] = env->getMethodID(cls, "getEndDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getFlowRate_b74f83833fdad017] = env->getMethodID(cls, "getFlowRate", "()D");
            mids$[mid_getFlowRate_fd347811007a6ba3] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getIsp_b74f83833fdad017] = env->getMethodID(cls, "getIsp", "()D");
            mids$[mid_getIsp_fd347811007a6ba3] = env->getMethodID(cls, "getIsp", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getStartDate_c325492395d89b24] = env->getMethodID(cls, "getStartDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getThrustMagnitude_b74f83833fdad017] = env->getMethodID(cls, "getThrustMagnitude", "()D");
            mids$[mid_getThrustMagnitude_fd347811007a6ba3] = env->getMethodID(cls, "getThrustMagnitude", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getThrustVector_8b724f8b4fdad1a2] = env->getMethodID(cls, "getThrustVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getThrustVector_082e6346b274f880] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_isFiring_e6d9e841ca2e035c] = env->getMethodID(cls, "isFiring", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z");
            mids$[mid_isFiring_97df9017614a1945] = env->getMethodID(cls, "isFiring", "(Lorg/orekit/propagation/SpacecraftState;)Z");
            mids$[mid_isFiring_a35647bda2901f54] = env->getMethodID(cls, "isFiring", "(Lorg/orekit/time/AbsoluteDate;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ConstantThrustManeuver::ConstantThrustManeuver(const ::org::orekit::attitudes::AttitudeProvider & a0, const ::org::orekit::forces::maneuvers::trigger::DateBasedManeuverTriggers & a1, const ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel & a2) : ::org::orekit::forces::maneuvers::Maneuver(env->newObject(initializeClass, &mids$, mid_init$_222f3ac3ba5526f6, a0.this$, a1.this$, a2.this$)) {}

        ConstantThrustManeuver::ConstantThrustManeuver(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::attitudes::AttitudeProvider & a2, const ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel & a3) : ::org::orekit::forces::maneuvers::Maneuver(env->newObject(initializeClass, &mids$, mid_init$_b92ace1679db3ad4, a0.this$, a1, a2.this$, a3.this$)) {}

        ConstantThrustManeuver::ConstantThrustManeuver(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4) : ::org::orekit::forces::maneuvers::Maneuver(env->newObject(initializeClass, &mids$, mid_init$_1d766a862a2fba89, a0.this$, a1, a2, a3, a4.this$)) {}

        ConstantThrustManeuver::ConstantThrustManeuver(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4, const ::java::lang::String & a5) : ::org::orekit::forces::maneuvers::Maneuver(env->newObject(initializeClass, &mids$, mid_init$_159216b8eab5f883, a0.this$, a1, a2, a3, a4.this$, a5.this$)) {}

        ConstantThrustManeuver::ConstantThrustManeuver(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, const ::org::orekit::attitudes::AttitudeProvider & a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5) : ::org::orekit::forces::maneuvers::Maneuver(env->newObject(initializeClass, &mids$, mid_init$_421685bf274cf624, a0.this$, a1, a2, a3, a4.this$, a5.this$)) {}

        ConstantThrustManeuver::ConstantThrustManeuver(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, const ::org::orekit::attitudes::AttitudeProvider & a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5, const ::java::lang::String & a6) : ::org::orekit::forces::maneuvers::Maneuver(env->newObject(initializeClass, &mids$, mid_init$_b1f761fead489272, a0.this$, a1, a2, a3, a4.this$, a5.this$, a6.this$)) {}

        ConstantThrustManeuver::ConstantThrustManeuver(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, const ::org::orekit::attitudes::AttitudeProvider & a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5, const ::org::orekit::forces::maneuvers::Control3DVectorCostType & a6, const ::java::lang::String & a7) : ::org::orekit::forces::maneuvers::Maneuver(env->newObject(initializeClass, &mids$, mid_init$_2c8f4d747b28c68e, a0.this$, a1, a2, a3, a4.this$, a5.this$, a6.this$, a7.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ConstantThrustManeuver::getDirection() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDirection_8b724f8b4fdad1a2]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ConstantThrustManeuver::getDirection(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDirection_082e6346b274f880], a0.this$));
        }

        jdouble ConstantThrustManeuver::getDuration() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDuration_b74f83833fdad017]);
        }

        ::org::orekit::time::AbsoluteDate ConstantThrustManeuver::getEndDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEndDate_c325492395d89b24]));
        }

        jdouble ConstantThrustManeuver::getFlowRate() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFlowRate_b74f83833fdad017]);
        }

        jdouble ConstantThrustManeuver::getFlowRate(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFlowRate_fd347811007a6ba3], a0.this$);
        }

        jdouble ConstantThrustManeuver::getIsp() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getIsp_b74f83833fdad017]);
        }

        jdouble ConstantThrustManeuver::getIsp(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getIsp_fd347811007a6ba3], a0.this$);
        }

        ::org::orekit::time::AbsoluteDate ConstantThrustManeuver::getStartDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartDate_c325492395d89b24]));
        }

        jdouble ConstantThrustManeuver::getThrustMagnitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getThrustMagnitude_b74f83833fdad017]);
        }

        jdouble ConstantThrustManeuver::getThrustMagnitude(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getThrustMagnitude_fd347811007a6ba3], a0.this$);
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ConstantThrustManeuver::getThrustVector() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_8b724f8b4fdad1a2]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ConstantThrustManeuver::getThrustVector(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_082e6346b274f880], a0.this$));
        }

        jboolean ConstantThrustManeuver::isFiring(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isFiring_e6d9e841ca2e035c], a0.this$);
        }

        jboolean ConstantThrustManeuver::isFiring(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isFiring_97df9017614a1945], a0.this$);
        }

        jboolean ConstantThrustManeuver::isFiring(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isFiring_a35647bda2901f54], a0.this$);
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
      namespace maneuvers {
        static PyObject *t_ConstantThrustManeuver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConstantThrustManeuver_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ConstantThrustManeuver_init_(t_ConstantThrustManeuver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ConstantThrustManeuver_getDirection(t_ConstantThrustManeuver *self, PyObject *args);
        static PyObject *t_ConstantThrustManeuver_getDuration(t_ConstantThrustManeuver *self);
        static PyObject *t_ConstantThrustManeuver_getEndDate(t_ConstantThrustManeuver *self);
        static PyObject *t_ConstantThrustManeuver_getFlowRate(t_ConstantThrustManeuver *self, PyObject *args);
        static PyObject *t_ConstantThrustManeuver_getIsp(t_ConstantThrustManeuver *self, PyObject *args);
        static PyObject *t_ConstantThrustManeuver_getStartDate(t_ConstantThrustManeuver *self);
        static PyObject *t_ConstantThrustManeuver_getThrustMagnitude(t_ConstantThrustManeuver *self, PyObject *args);
        static PyObject *t_ConstantThrustManeuver_getThrustVector(t_ConstantThrustManeuver *self, PyObject *args);
        static PyObject *t_ConstantThrustManeuver_isFiring(t_ConstantThrustManeuver *self, PyObject *args);
        static PyObject *t_ConstantThrustManeuver_get__direction(t_ConstantThrustManeuver *self, void *data);
        static PyObject *t_ConstantThrustManeuver_get__duration(t_ConstantThrustManeuver *self, void *data);
        static PyObject *t_ConstantThrustManeuver_get__endDate(t_ConstantThrustManeuver *self, void *data);
        static PyObject *t_ConstantThrustManeuver_get__flowRate(t_ConstantThrustManeuver *self, void *data);
        static PyObject *t_ConstantThrustManeuver_get__isp(t_ConstantThrustManeuver *self, void *data);
        static PyObject *t_ConstantThrustManeuver_get__startDate(t_ConstantThrustManeuver *self, void *data);
        static PyObject *t_ConstantThrustManeuver_get__thrustMagnitude(t_ConstantThrustManeuver *self, void *data);
        static PyObject *t_ConstantThrustManeuver_get__thrustVector(t_ConstantThrustManeuver *self, void *data);
        static PyGetSetDef t_ConstantThrustManeuver__fields_[] = {
          DECLARE_GET_FIELD(t_ConstantThrustManeuver, direction),
          DECLARE_GET_FIELD(t_ConstantThrustManeuver, duration),
          DECLARE_GET_FIELD(t_ConstantThrustManeuver, endDate),
          DECLARE_GET_FIELD(t_ConstantThrustManeuver, flowRate),
          DECLARE_GET_FIELD(t_ConstantThrustManeuver, isp),
          DECLARE_GET_FIELD(t_ConstantThrustManeuver, startDate),
          DECLARE_GET_FIELD(t_ConstantThrustManeuver, thrustMagnitude),
          DECLARE_GET_FIELD(t_ConstantThrustManeuver, thrustVector),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ConstantThrustManeuver__methods_[] = {
          DECLARE_METHOD(t_ConstantThrustManeuver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConstantThrustManeuver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConstantThrustManeuver, getDirection, METH_VARARGS),
          DECLARE_METHOD(t_ConstantThrustManeuver, getDuration, METH_NOARGS),
          DECLARE_METHOD(t_ConstantThrustManeuver, getEndDate, METH_NOARGS),
          DECLARE_METHOD(t_ConstantThrustManeuver, getFlowRate, METH_VARARGS),
          DECLARE_METHOD(t_ConstantThrustManeuver, getIsp, METH_VARARGS),
          DECLARE_METHOD(t_ConstantThrustManeuver, getStartDate, METH_NOARGS),
          DECLARE_METHOD(t_ConstantThrustManeuver, getThrustMagnitude, METH_VARARGS),
          DECLARE_METHOD(t_ConstantThrustManeuver, getThrustVector, METH_VARARGS),
          DECLARE_METHOD(t_ConstantThrustManeuver, isFiring, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ConstantThrustManeuver)[] = {
          { Py_tp_methods, t_ConstantThrustManeuver__methods_ },
          { Py_tp_init, (void *) t_ConstantThrustManeuver_init_ },
          { Py_tp_getset, t_ConstantThrustManeuver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ConstantThrustManeuver)[] = {
          &PY_TYPE_DEF(::org::orekit::forces::maneuvers::Maneuver),
          NULL
        };

        DEFINE_TYPE(ConstantThrustManeuver, t_ConstantThrustManeuver, ConstantThrustManeuver);

        void t_ConstantThrustManeuver::install(PyObject *module)
        {
          installType(&PY_TYPE(ConstantThrustManeuver), &PY_TYPE_DEF(ConstantThrustManeuver), module, "ConstantThrustManeuver", 0);
        }

        void t_ConstantThrustManeuver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantThrustManeuver), "class_", make_descriptor(ConstantThrustManeuver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantThrustManeuver), "wrapfn_", make_descriptor(t_ConstantThrustManeuver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantThrustManeuver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ConstantThrustManeuver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ConstantThrustManeuver::initializeClass, 1)))
            return NULL;
          return t_ConstantThrustManeuver::wrap_Object(ConstantThrustManeuver(((t_ConstantThrustManeuver *) arg)->object.this$));
        }
        static PyObject *t_ConstantThrustManeuver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ConstantThrustManeuver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ConstantThrustManeuver_init_(t_ConstantThrustManeuver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
              ::org::orekit::forces::maneuvers::trigger::DateBasedManeuverTriggers a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel a2((jobject) NULL);
              ConstantThrustManeuver object((jobject) NULL);

              if (!parseArgs(args, "kKk", ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::maneuvers::trigger::DateBasedManeuverTriggers::initializeClass, ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel::initializeClass, &a0, &a1, &p1, ::org::orekit::forces::maneuvers::trigger::t_DateBasedManeuverTriggers::parameters_, &a2))
              {
                INT_CALL(object = ConstantThrustManeuver(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
              ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel a3((jobject) NULL);
              ConstantThrustManeuver object((jobject) NULL);

              if (!parseArgs(args, "kDkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = ConstantThrustManeuver(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
              ConstantThrustManeuver object((jobject) NULL);

              if (!parseArgs(args, "kDDDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = ConstantThrustManeuver(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            goto err;
           case 6:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
              ::java::lang::String a5((jobject) NULL);
              ConstantThrustManeuver object((jobject) NULL);

              if (!parseArgs(args, "kDDDks", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = ConstantThrustManeuver(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a5((jobject) NULL);
              ConstantThrustManeuver object((jobject) NULL);

              if (!parseArgs(args, "kDDDkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = ConstantThrustManeuver(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            goto err;
           case 7:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a5((jobject) NULL);
              ::java::lang::String a6((jobject) NULL);
              ConstantThrustManeuver object((jobject) NULL);

              if (!parseArgs(args, "kDDDkks", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                INT_CALL(object = ConstantThrustManeuver(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
                break;
              }
            }
            goto err;
           case 8:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a5((jobject) NULL);
              ::org::orekit::forces::maneuvers::Control3DVectorCostType a6((jobject) NULL);
              PyTypeObject **p6;
              ::java::lang::String a7((jobject) NULL);
              ConstantThrustManeuver object((jobject) NULL);

              if (!parseArgs(args, "kDDDkkKs", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::forces::maneuvers::Control3DVectorCostType::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::parameters_, &a7))
              {
                INT_CALL(object = ConstantThrustManeuver(a0, a1, a2, a3, a4, a5, a6, a7));
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

        static PyObject *t_ConstantThrustManeuver_getDirection(t_ConstantThrustManeuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getDirection());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getDirection(a0));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getDirection", args);
          return NULL;
        }

        static PyObject *t_ConstantThrustManeuver_getDuration(t_ConstantThrustManeuver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDuration());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ConstantThrustManeuver_getEndDate(t_ConstantThrustManeuver *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getEndDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_ConstantThrustManeuver_getFlowRate(t_ConstantThrustManeuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jdouble result;
              OBJ_CALL(result = self->object.getFlowRate());
              return PyFloat_FromDouble((double) result);
            }
            break;
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getFlowRate(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getFlowRate", args);
          return NULL;
        }

        static PyObject *t_ConstantThrustManeuver_getIsp(t_ConstantThrustManeuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIsp());
              return PyFloat_FromDouble((double) result);
            }
            break;
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getIsp(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getIsp", args);
          return NULL;
        }

        static PyObject *t_ConstantThrustManeuver_getStartDate(t_ConstantThrustManeuver *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStartDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_ConstantThrustManeuver_getThrustMagnitude(t_ConstantThrustManeuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jdouble result;
              OBJ_CALL(result = self->object.getThrustMagnitude());
              return PyFloat_FromDouble((double) result);
            }
            break;
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getThrustMagnitude(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getThrustMagnitude", args);
          return NULL;
        }

        static PyObject *t_ConstantThrustManeuver_getThrustVector(t_ConstantThrustManeuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getThrustVector());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getThrustVector(a0));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getThrustVector", args);
          return NULL;
        }

        static PyObject *t_ConstantThrustManeuver_isFiring(t_ConstantThrustManeuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean result;

              if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
              {
                OBJ_CALL(result = self->object.isFiring(a0));
                Py_RETURN_BOOL(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.isFiring(a0));
                Py_RETURN_BOOL(result);
              }
            }
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.isFiring(a0));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "isFiring", args);
          return NULL;
        }

        static PyObject *t_ConstantThrustManeuver_get__direction(t_ConstantThrustManeuver *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getDirection());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_ConstantThrustManeuver_get__duration(t_ConstantThrustManeuver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDuration());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConstantThrustManeuver_get__endDate(t_ConstantThrustManeuver *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getEndDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_ConstantThrustManeuver_get__flowRate(t_ConstantThrustManeuver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getFlowRate());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConstantThrustManeuver_get__isp(t_ConstantThrustManeuver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getIsp());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConstantThrustManeuver_get__startDate(t_ConstantThrustManeuver *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStartDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_ConstantThrustManeuver_get__thrustMagnitude(t_ConstantThrustManeuver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getThrustMagnitude());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConstantThrustManeuver_get__thrustVector(t_ConstantThrustManeuver *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getThrustVector());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm05Header.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm05Header::class$ = NULL;
              jmethodID *SsrIgm05Header::mids$ = NULL;
              bool SsrIgm05Header::live$ = false;

              jclass SsrIgm05Header::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm05Header");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm05Header::SsrIgm05Header() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}
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
          namespace ssr {
            namespace igm {
              static PyObject *t_SsrIgm05Header_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm05Header_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm05Header_init_(t_SsrIgm05Header *self, PyObject *args, PyObject *kwds);

              static PyMethodDef t_SsrIgm05Header__methods_[] = {
                DECLARE_METHOD(t_SsrIgm05Header, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm05Header, instance_, METH_O | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm05Header)[] = {
                { Py_tp_methods, t_SsrIgm05Header__methods_ },
                { Py_tp_init, (void *) t_SsrIgm05Header_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm05Header)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader),
                NULL
              };

              DEFINE_TYPE(SsrIgm05Header, t_SsrIgm05Header, SsrIgm05Header);

              void t_SsrIgm05Header::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm05Header), &PY_TYPE_DEF(SsrIgm05Header), module, "SsrIgm05Header", 0);
              }

              void t_SsrIgm05Header::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm05Header), "class_", make_descriptor(SsrIgm05Header::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm05Header), "wrapfn_", make_descriptor(t_SsrIgm05Header::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm05Header), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm05Header_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm05Header::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm05Header::wrap_Object(SsrIgm05Header(((t_SsrIgm05Header *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm05Header_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm05Header::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm05Header_init_(t_SsrIgm05Header *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm05Header object((jobject) NULL);

                INT_CALL(object = SsrIgm05Header());
                self->object = object;

                return 0;
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
#include "org/hipparchus/special/BesselJ.h"
#include "org/hipparchus/special/BesselJ$BesselJResult.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {

      ::java::lang::Class *BesselJ::class$ = NULL;
      jmethodID *BesselJ::mids$ = NULL;
      bool BesselJ::live$ = false;

      jclass BesselJ::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/special/BesselJ");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_rjBesl_f3a496b684b77e9a] = env->getStaticMethodID(cls, "rjBesl", "(DDI)Lorg/hipparchus/special/BesselJ$BesselJResult;");
          mids$[mid_value_04fd0666b613d2ab] = env->getMethodID(cls, "value", "(D)D");
          mids$[mid_value_99e3200dafc19573] = env->getStaticMethodID(cls, "value", "(DD)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BesselJ::BesselJ(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

      ::org::hipparchus::special::BesselJ$BesselJResult BesselJ::rjBesl(jdouble a0, jdouble a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::special::BesselJ$BesselJResult(env->callStaticObjectMethod(cls, mids$[mid_rjBesl_f3a496b684b77e9a], a0, a1, a2));
      }

      jdouble BesselJ::value(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_04fd0666b613d2ab], a0);
      }

      jdouble BesselJ::value(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_value_99e3200dafc19573], a0, a1);
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
      static PyObject *t_BesselJ_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BesselJ_instance_(PyTypeObject *type, PyObject *arg);
      static int t_BesselJ_init_(t_BesselJ *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BesselJ_rjBesl(PyTypeObject *type, PyObject *args);
      static PyObject *t_BesselJ_value(t_BesselJ *self, PyObject *arg);
      static PyObject *t_BesselJ_value_(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_BesselJ__methods_[] = {
        DECLARE_METHOD(t_BesselJ, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BesselJ, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BesselJ, rjBesl, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BesselJ, value, METH_O),
        DECLARE_METHOD(t_BesselJ, value_, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BesselJ)[] = {
        { Py_tp_methods, t_BesselJ__methods_ },
        { Py_tp_init, (void *) t_BesselJ_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BesselJ)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BesselJ, t_BesselJ, BesselJ);

      void t_BesselJ::install(PyObject *module)
      {
        installType(&PY_TYPE(BesselJ), &PY_TYPE_DEF(BesselJ), module, "BesselJ", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(BesselJ), "BesselJResult", make_descriptor(&PY_TYPE_DEF(BesselJ$BesselJResult)));
      }

      void t_BesselJ::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BesselJ), "class_", make_descriptor(BesselJ::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BesselJ), "wrapfn_", make_descriptor(t_BesselJ::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BesselJ), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BesselJ_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BesselJ::initializeClass, 1)))
          return NULL;
        return t_BesselJ::wrap_Object(BesselJ(((t_BesselJ *) arg)->object.this$));
      }
      static PyObject *t_BesselJ_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BesselJ::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_BesselJ_init_(t_BesselJ *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        BesselJ object((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          INT_CALL(object = BesselJ(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_BesselJ_rjBesl(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jint a2;
        ::org::hipparchus::special::BesselJ$BesselJResult result((jobject) NULL);

        if (!parseArgs(args, "DDI", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::special::BesselJ::rjBesl(a0, a1, a2));
          return ::org::hipparchus::special::t_BesselJ$BesselJResult::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "rjBesl", args);
        return NULL;
      }

      static PyObject *t_BesselJ_value(t_BesselJ *self, PyObject *arg)
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

      static PyObject *t_BesselJ_value_(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::special::BesselJ::value(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "value_", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/TLEConstants.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *TLEConstants::class$ = NULL;
          jmethodID *TLEConstants::mids$ = NULL;
          bool TLEConstants::live$ = false;
          jdouble TLEConstants::A3OVK2 = (jdouble) 0;
          jdouble TLEConstants::C1L = (jdouble) 0;
          jdouble TLEConstants::C1SS = (jdouble) 0;
          jdouble TLEConstants::CK2 = (jdouble) 0;
          jdouble TLEConstants::CK4 = (jdouble) 0;
          jdouble TLEConstants::C_2FASX4 = (jdouble) 0;
          jdouble TLEConstants::C_3FASX6 = (jdouble) 0;
          jdouble TLEConstants::C_FASX2 = (jdouble) 0;
          jdouble TLEConstants::C_G22 = (jdouble) 0;
          jdouble TLEConstants::C_G32 = (jdouble) 0;
          jdouble TLEConstants::C_G44 = (jdouble) 0;
          jdouble TLEConstants::C_G52 = (jdouble) 0;
          jdouble TLEConstants::C_G54 = (jdouble) 0;
          jdouble TLEConstants::EARTH_RADIUS = (jdouble) 0;
          jdouble TLEConstants::MINUTES_PER_DAY = (jdouble) 0;
          jdouble TLEConstants::MU = (jdouble) 0;
          jdouble TLEConstants::NORMALIZED_EQUATORIAL_RADIUS = (jdouble) 0;
          jdouble TLEConstants::ONE_THIRD = (jdouble) 0;
          jdouble TLEConstants::Q22 = (jdouble) 0;
          jdouble TLEConstants::Q31 = (jdouble) 0;
          jdouble TLEConstants::Q33 = (jdouble) 0;
          jdouble TLEConstants::QOMS2T = (jdouble) 0;
          jdouble TLEConstants::ROOT22 = (jdouble) 0;
          jdouble TLEConstants::ROOT32 = (jdouble) 0;
          jdouble TLEConstants::ROOT44 = (jdouble) 0;
          jdouble TLEConstants::ROOT52 = (jdouble) 0;
          jdouble TLEConstants::ROOT54 = (jdouble) 0;
          jdouble TLEConstants::S = (jdouble) 0;
          jdouble TLEConstants::S_2FASX4 = (jdouble) 0;
          jdouble TLEConstants::S_3FASX6 = (jdouble) 0;
          jdouble TLEConstants::S_FASX2 = (jdouble) 0;
          jdouble TLEConstants::S_G22 = (jdouble) 0;
          jdouble TLEConstants::S_G32 = (jdouble) 0;
          jdouble TLEConstants::S_G44 = (jdouble) 0;
          jdouble TLEConstants::S_G52 = (jdouble) 0;
          jdouble TLEConstants::S_G54 = (jdouble) 0;
          jdouble TLEConstants::THDT = (jdouble) 0;
          jdouble TLEConstants::TWO_THIRD = (jdouble) 0;
          jdouble TLEConstants::XJ2 = (jdouble) 0;
          jdouble TLEConstants::XJ3 = (jdouble) 0;
          jdouble TLEConstants::XJ4 = (jdouble) 0;
          jdouble TLEConstants::XKE = (jdouble) 0;
          jdouble TLEConstants::ZEL = (jdouble) 0;
          jdouble TLEConstants::ZES = (jdouble) 0;
          jdouble TLEConstants::ZNL = (jdouble) 0;
          jdouble TLEConstants::ZNS = (jdouble) 0;

          jclass TLEConstants::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/TLEConstants");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              A3OVK2 = env->getStaticDoubleField(cls, "A3OVK2");
              C1L = env->getStaticDoubleField(cls, "C1L");
              C1SS = env->getStaticDoubleField(cls, "C1SS");
              CK2 = env->getStaticDoubleField(cls, "CK2");
              CK4 = env->getStaticDoubleField(cls, "CK4");
              C_2FASX4 = env->getStaticDoubleField(cls, "C_2FASX4");
              C_3FASX6 = env->getStaticDoubleField(cls, "C_3FASX6");
              C_FASX2 = env->getStaticDoubleField(cls, "C_FASX2");
              C_G22 = env->getStaticDoubleField(cls, "C_G22");
              C_G32 = env->getStaticDoubleField(cls, "C_G32");
              C_G44 = env->getStaticDoubleField(cls, "C_G44");
              C_G52 = env->getStaticDoubleField(cls, "C_G52");
              C_G54 = env->getStaticDoubleField(cls, "C_G54");
              EARTH_RADIUS = env->getStaticDoubleField(cls, "EARTH_RADIUS");
              MINUTES_PER_DAY = env->getStaticDoubleField(cls, "MINUTES_PER_DAY");
              MU = env->getStaticDoubleField(cls, "MU");
              NORMALIZED_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "NORMALIZED_EQUATORIAL_RADIUS");
              ONE_THIRD = env->getStaticDoubleField(cls, "ONE_THIRD");
              Q22 = env->getStaticDoubleField(cls, "Q22");
              Q31 = env->getStaticDoubleField(cls, "Q31");
              Q33 = env->getStaticDoubleField(cls, "Q33");
              QOMS2T = env->getStaticDoubleField(cls, "QOMS2T");
              ROOT22 = env->getStaticDoubleField(cls, "ROOT22");
              ROOT32 = env->getStaticDoubleField(cls, "ROOT32");
              ROOT44 = env->getStaticDoubleField(cls, "ROOT44");
              ROOT52 = env->getStaticDoubleField(cls, "ROOT52");
              ROOT54 = env->getStaticDoubleField(cls, "ROOT54");
              S = env->getStaticDoubleField(cls, "S");
              S_2FASX4 = env->getStaticDoubleField(cls, "S_2FASX4");
              S_3FASX6 = env->getStaticDoubleField(cls, "S_3FASX6");
              S_FASX2 = env->getStaticDoubleField(cls, "S_FASX2");
              S_G22 = env->getStaticDoubleField(cls, "S_G22");
              S_G32 = env->getStaticDoubleField(cls, "S_G32");
              S_G44 = env->getStaticDoubleField(cls, "S_G44");
              S_G52 = env->getStaticDoubleField(cls, "S_G52");
              S_G54 = env->getStaticDoubleField(cls, "S_G54");
              THDT = env->getStaticDoubleField(cls, "THDT");
              TWO_THIRD = env->getStaticDoubleField(cls, "TWO_THIRD");
              XJ2 = env->getStaticDoubleField(cls, "XJ2");
              XJ3 = env->getStaticDoubleField(cls, "XJ3");
              XJ4 = env->getStaticDoubleField(cls, "XJ4");
              XKE = env->getStaticDoubleField(cls, "XKE");
              ZEL = env->getStaticDoubleField(cls, "ZEL");
              ZES = env->getStaticDoubleField(cls, "ZES");
              ZNL = env->getStaticDoubleField(cls, "ZNL");
              ZNS = env->getStaticDoubleField(cls, "ZNS");
              live$ = true;
            }
            return (jclass) class$->this$;
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
        namespace tle {
          static PyObject *t_TLEConstants_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TLEConstants_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_TLEConstants__methods_[] = {
            DECLARE_METHOD(t_TLEConstants, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TLEConstants, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TLEConstants)[] = {
            { Py_tp_methods, t_TLEConstants__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TLEConstants)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TLEConstants, t_TLEConstants, TLEConstants);

          void t_TLEConstants::install(PyObject *module)
          {
            installType(&PY_TYPE(TLEConstants), &PY_TYPE_DEF(TLEConstants), module, "TLEConstants", 0);
          }

          void t_TLEConstants::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "class_", make_descriptor(TLEConstants::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "wrapfn_", make_descriptor(t_TLEConstants::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "boxfn_", make_descriptor(boxObject));
            env->getClass(TLEConstants::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "A3OVK2", make_descriptor(TLEConstants::A3OVK2));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C1L", make_descriptor(TLEConstants::C1L));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C1SS", make_descriptor(TLEConstants::C1SS));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "CK2", make_descriptor(TLEConstants::CK2));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "CK4", make_descriptor(TLEConstants::CK4));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C_2FASX4", make_descriptor(TLEConstants::C_2FASX4));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C_3FASX6", make_descriptor(TLEConstants::C_3FASX6));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C_FASX2", make_descriptor(TLEConstants::C_FASX2));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C_G22", make_descriptor(TLEConstants::C_G22));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C_G32", make_descriptor(TLEConstants::C_G32));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C_G44", make_descriptor(TLEConstants::C_G44));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C_G52", make_descriptor(TLEConstants::C_G52));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C_G54", make_descriptor(TLEConstants::C_G54));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "EARTH_RADIUS", make_descriptor(TLEConstants::EARTH_RADIUS));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "MINUTES_PER_DAY", make_descriptor(TLEConstants::MINUTES_PER_DAY));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "MU", make_descriptor(TLEConstants::MU));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "NORMALIZED_EQUATORIAL_RADIUS", make_descriptor(TLEConstants::NORMALIZED_EQUATORIAL_RADIUS));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ONE_THIRD", make_descriptor(TLEConstants::ONE_THIRD));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "Q22", make_descriptor(TLEConstants::Q22));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "Q31", make_descriptor(TLEConstants::Q31));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "Q33", make_descriptor(TLEConstants::Q33));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "QOMS2T", make_descriptor(TLEConstants::QOMS2T));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ROOT22", make_descriptor(TLEConstants::ROOT22));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ROOT32", make_descriptor(TLEConstants::ROOT32));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ROOT44", make_descriptor(TLEConstants::ROOT44));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ROOT52", make_descriptor(TLEConstants::ROOT52));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ROOT54", make_descriptor(TLEConstants::ROOT54));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "S", make_descriptor(TLEConstants::S));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "S_2FASX4", make_descriptor(TLEConstants::S_2FASX4));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "S_3FASX6", make_descriptor(TLEConstants::S_3FASX6));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "S_FASX2", make_descriptor(TLEConstants::S_FASX2));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "S_G22", make_descriptor(TLEConstants::S_G22));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "S_G32", make_descriptor(TLEConstants::S_G32));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "S_G44", make_descriptor(TLEConstants::S_G44));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "S_G52", make_descriptor(TLEConstants::S_G52));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "S_G54", make_descriptor(TLEConstants::S_G54));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "THDT", make_descriptor(TLEConstants::THDT));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "TWO_THIRD", make_descriptor(TLEConstants::TWO_THIRD));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "XJ2", make_descriptor(TLEConstants::XJ2));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "XJ3", make_descriptor(TLEConstants::XJ3));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "XJ4", make_descriptor(TLEConstants::XJ4));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "XKE", make_descriptor(TLEConstants::XKE));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ZEL", make_descriptor(TLEConstants::ZEL));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ZES", make_descriptor(TLEConstants::ZES));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ZNL", make_descriptor(TLEConstants::ZNL));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ZNS", make_descriptor(TLEConstants::ZNS));
          }

          static PyObject *t_TLEConstants_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TLEConstants::initializeClass, 1)))
              return NULL;
            return t_TLEConstants::wrap_Object(TLEConstants(((t_TLEConstants *) arg)->object.this$));
          }
          static PyObject *t_TLEConstants_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TLEConstants::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/CovarianceMatrixProvider.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *CovarianceMatrixProvider::class$ = NULL;
        jmethodID *CovarianceMatrixProvider::mids$ = NULL;
        bool CovarianceMatrixProvider::live$ = false;

        jclass CovarianceMatrixProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/CovarianceMatrixProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getInitialCovarianceMatrix_b7aa5791b069a41f] = env->getMethodID(cls, "getInitialCovarianceMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getProcessNoiseMatrix_18b28191c1378912] = env->getMethodID(cls, "getProcessNoiseMatrix", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::linear::RealMatrix CovarianceMatrixProvider::getInitialCovarianceMatrix(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getInitialCovarianceMatrix_b7aa5791b069a41f], a0.this$));
        }

        ::org::hipparchus::linear::RealMatrix CovarianceMatrixProvider::getProcessNoiseMatrix(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getProcessNoiseMatrix_18b28191c1378912], a0.this$, a1.this$));
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
        static PyObject *t_CovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CovarianceMatrixProvider_getInitialCovarianceMatrix(t_CovarianceMatrixProvider *self, PyObject *arg);
        static PyObject *t_CovarianceMatrixProvider_getProcessNoiseMatrix(t_CovarianceMatrixProvider *self, PyObject *args);

        static PyMethodDef t_CovarianceMatrixProvider__methods_[] = {
          DECLARE_METHOD(t_CovarianceMatrixProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CovarianceMatrixProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CovarianceMatrixProvider, getInitialCovarianceMatrix, METH_O),
          DECLARE_METHOD(t_CovarianceMatrixProvider, getProcessNoiseMatrix, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CovarianceMatrixProvider)[] = {
          { Py_tp_methods, t_CovarianceMatrixProvider__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CovarianceMatrixProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CovarianceMatrixProvider, t_CovarianceMatrixProvider, CovarianceMatrixProvider);

        void t_CovarianceMatrixProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(CovarianceMatrixProvider), &PY_TYPE_DEF(CovarianceMatrixProvider), module, "CovarianceMatrixProvider", 0);
        }

        void t_CovarianceMatrixProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CovarianceMatrixProvider), "class_", make_descriptor(CovarianceMatrixProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CovarianceMatrixProvider), "wrapfn_", make_descriptor(t_CovarianceMatrixProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CovarianceMatrixProvider), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CovarianceMatrixProvider::initializeClass, 1)))
            return NULL;
          return t_CovarianceMatrixProvider::wrap_Object(CovarianceMatrixProvider(((t_CovarianceMatrixProvider *) arg)->object.this$));
        }
        static PyObject *t_CovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CovarianceMatrixProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_CovarianceMatrixProvider_getInitialCovarianceMatrix(t_CovarianceMatrixProvider *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getInitialCovarianceMatrix(a0));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getInitialCovarianceMatrix", arg);
          return NULL;
        }

        static PyObject *t_CovarianceMatrixProvider_getProcessNoiseMatrix(t_CovarianceMatrixProvider *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getProcessNoiseMatrix(a0, a1));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getProcessNoiseMatrix", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/BivariateGridInterpolator.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
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
            mids$[mid_interpolate_6c5ae26764f0e206] = env->getMethodID(cls, "interpolate", "([D[D[[D)Lorg/hipparchus/analysis/BivariateFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::BivariateFunction BivariateGridInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2) const
        {
          return ::org::hipparchus::analysis::BivariateFunction(env->callObjectMethod(this$, mids$[mid_interpolate_6c5ae26764f0e206], a0.this$, a1.this$, a2.this$));
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
#include "org/hipparchus/random/ForwardingRandomGenerator.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *ForwardingRandomGenerator::class$ = NULL;
      jmethodID *ForwardingRandomGenerator::mids$ = NULL;
      bool ForwardingRandomGenerator::live$ = false;

      jclass ForwardingRandomGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/ForwardingRandomGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_nextBoolean_9ab94ac1dc23b105] = env->getMethodID(cls, "nextBoolean", "()Z");
          mids$[mid_nextBytes_459771b03534868e] = env->getMethodID(cls, "nextBytes", "([B)V");
          mids$[mid_nextBytes_a9fddc59b07ce512] = env->getMethodID(cls, "nextBytes", "([BII)V");
          mids$[mid_nextDouble_b74f83833fdad017] = env->getMethodID(cls, "nextDouble", "()D");
          mids$[mid_nextFloat_1fb1bf0772ae5db7] = env->getMethodID(cls, "nextFloat", "()F");
          mids$[mid_nextGaussian_b74f83833fdad017] = env->getMethodID(cls, "nextGaussian", "()D");
          mids$[mid_nextInt_55546ef6a647f39b] = env->getMethodID(cls, "nextInt", "()I");
          mids$[mid_nextInt_0e7cf35192c3effe] = env->getMethodID(cls, "nextInt", "(I)I");
          mids$[mid_nextLong_6c0ce7e438e5ded4] = env->getMethodID(cls, "nextLong", "()J");
          mids$[mid_nextLong_9db63109f74a74fc] = env->getMethodID(cls, "nextLong", "(J)J");
          mids$[mid_setSeed_86a2769cb881d388] = env->getMethodID(cls, "setSeed", "([I)V");
          mids$[mid_setSeed_44ed599e93e8a30c] = env->getMethodID(cls, "setSeed", "(I)V");
          mids$[mid_setSeed_3d7dd2314a0dd456] = env->getMethodID(cls, "setSeed", "(J)V");
          mids$[mid_delegate_9c758ae03d1b398a] = env->getMethodID(cls, "delegate", "()Lorg/hipparchus/random/RandomGenerator;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean ForwardingRandomGenerator::nextBoolean() const
      {
        return env->callBooleanMethod(this$, mids$[mid_nextBoolean_9ab94ac1dc23b105]);
      }

      void ForwardingRandomGenerator::nextBytes(const JArray< jbyte > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_459771b03534868e], a0.this$);
      }

      void ForwardingRandomGenerator::nextBytes(const JArray< jbyte > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_a9fddc59b07ce512], a0.this$, a1, a2);
      }

      jdouble ForwardingRandomGenerator::nextDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextDouble_b74f83833fdad017]);
      }

      jfloat ForwardingRandomGenerator::nextFloat() const
      {
        return env->callFloatMethod(this$, mids$[mid_nextFloat_1fb1bf0772ae5db7]);
      }

      jdouble ForwardingRandomGenerator::nextGaussian() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextGaussian_b74f83833fdad017]);
      }

      jint ForwardingRandomGenerator::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_55546ef6a647f39b]);
      }

      jint ForwardingRandomGenerator::nextInt(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_0e7cf35192c3effe], a0);
      }

      jlong ForwardingRandomGenerator::nextLong() const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_6c0ce7e438e5ded4]);
      }

      jlong ForwardingRandomGenerator::nextLong(jlong a0) const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_9db63109f74a74fc], a0);
      }

      void ForwardingRandomGenerator::setSeed(const JArray< jint > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_86a2769cb881d388], a0.this$);
      }

      void ForwardingRandomGenerator::setSeed(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_44ed599e93e8a30c], a0);
      }

      void ForwardingRandomGenerator::setSeed(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_3d7dd2314a0dd456], a0);
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
      static PyObject *t_ForwardingRandomGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ForwardingRandomGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ForwardingRandomGenerator_nextBoolean(t_ForwardingRandomGenerator *self);
      static PyObject *t_ForwardingRandomGenerator_nextBytes(t_ForwardingRandomGenerator *self, PyObject *args);
      static PyObject *t_ForwardingRandomGenerator_nextDouble(t_ForwardingRandomGenerator *self);
      static PyObject *t_ForwardingRandomGenerator_nextFloat(t_ForwardingRandomGenerator *self);
      static PyObject *t_ForwardingRandomGenerator_nextGaussian(t_ForwardingRandomGenerator *self);
      static PyObject *t_ForwardingRandomGenerator_nextInt(t_ForwardingRandomGenerator *self, PyObject *args);
      static PyObject *t_ForwardingRandomGenerator_nextLong(t_ForwardingRandomGenerator *self, PyObject *args);
      static PyObject *t_ForwardingRandomGenerator_setSeed(t_ForwardingRandomGenerator *self, PyObject *args);
      static int t_ForwardingRandomGenerator_set__seed(t_ForwardingRandomGenerator *self, PyObject *arg, void *data);
      static PyGetSetDef t_ForwardingRandomGenerator__fields_[] = {
        DECLARE_SET_FIELD(t_ForwardingRandomGenerator, seed),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ForwardingRandomGenerator__methods_[] = {
        DECLARE_METHOD(t_ForwardingRandomGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ForwardingRandomGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ForwardingRandomGenerator, nextBoolean, METH_NOARGS),
        DECLARE_METHOD(t_ForwardingRandomGenerator, nextBytes, METH_VARARGS),
        DECLARE_METHOD(t_ForwardingRandomGenerator, nextDouble, METH_NOARGS),
        DECLARE_METHOD(t_ForwardingRandomGenerator, nextFloat, METH_NOARGS),
        DECLARE_METHOD(t_ForwardingRandomGenerator, nextGaussian, METH_NOARGS),
        DECLARE_METHOD(t_ForwardingRandomGenerator, nextInt, METH_VARARGS),
        DECLARE_METHOD(t_ForwardingRandomGenerator, nextLong, METH_VARARGS),
        DECLARE_METHOD(t_ForwardingRandomGenerator, setSeed, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ForwardingRandomGenerator)[] = {
        { Py_tp_methods, t_ForwardingRandomGenerator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ForwardingRandomGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ForwardingRandomGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ForwardingRandomGenerator, t_ForwardingRandomGenerator, ForwardingRandomGenerator);

      void t_ForwardingRandomGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(ForwardingRandomGenerator), &PY_TYPE_DEF(ForwardingRandomGenerator), module, "ForwardingRandomGenerator", 0);
      }

      void t_ForwardingRandomGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ForwardingRandomGenerator), "class_", make_descriptor(ForwardingRandomGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ForwardingRandomGenerator), "wrapfn_", make_descriptor(t_ForwardingRandomGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ForwardingRandomGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ForwardingRandomGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ForwardingRandomGenerator::initializeClass, 1)))
          return NULL;
        return t_ForwardingRandomGenerator::wrap_Object(ForwardingRandomGenerator(((t_ForwardingRandomGenerator *) arg)->object.this$));
      }
      static PyObject *t_ForwardingRandomGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ForwardingRandomGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ForwardingRandomGenerator_nextBoolean(t_ForwardingRandomGenerator *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.nextBoolean());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_ForwardingRandomGenerator_nextBytes(t_ForwardingRandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jbyte > a0((jobject) NULL);

            if (!parseArgs(args, "[B", &a0))
            {
              OBJ_CALL(self->object.nextBytes(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 3:
          {
            JArray< jbyte > a0((jobject) NULL);
            jint a1;
            jint a2;

            if (!parseArgs(args, "[BII", &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.nextBytes(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "nextBytes", args);
        return NULL;
      }

      static PyObject *t_ForwardingRandomGenerator_nextDouble(t_ForwardingRandomGenerator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.nextDouble());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ForwardingRandomGenerator_nextFloat(t_ForwardingRandomGenerator *self)
      {
        jfloat result;
        OBJ_CALL(result = self->object.nextFloat());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ForwardingRandomGenerator_nextGaussian(t_ForwardingRandomGenerator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.nextGaussian());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ForwardingRandomGenerator_nextInt(t_ForwardingRandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jint result;
            OBJ_CALL(result = self->object.nextInt());
            return PyLong_FromLong((long) result);
          }
          break;
         case 1:
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.nextInt(a0));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "nextInt", args);
        return NULL;
      }

      static PyObject *t_ForwardingRandomGenerator_nextLong(t_ForwardingRandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.nextLong());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;
            jlong result;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.nextLong(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "nextLong", args);
        return NULL;
      }

      static PyObject *t_ForwardingRandomGenerator_setSeed(t_ForwardingRandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jint > a0((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
          {
            jint a0;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "setSeed", args);
        return NULL;
      }

      static int t_ForwardingRandomGenerator_set__seed(t_ForwardingRandomGenerator *self, PyObject *arg, void *data)
      {
        {
          JArray< jint > value((jobject) NULL);
          if (!parseArg(arg, "[I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        {
          jlong value;
          if (!parseArg(arg, "J", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "seed", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/FieldQRDecomposer.h"
#include "org/hipparchus/linear/FieldDecompositionSolver.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/linear/FieldMatrixDecomposer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldQRDecomposer::class$ = NULL;
      jmethodID *FieldQRDecomposer::mids$ = NULL;
      bool FieldQRDecomposer::live$ = false;

      jclass FieldQRDecomposer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldQRDecomposer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f2b4bfa0af1007e8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_decompose_b399fec7c31dfc95] = env->getMethodID(cls, "decompose", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldDecompositionSolver;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldQRDecomposer::FieldQRDecomposer(const ::org::hipparchus::CalculusFieldElement & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f2b4bfa0af1007e8, a0.this$)) {}

      ::org::hipparchus::linear::FieldDecompositionSolver FieldQRDecomposer::decompose(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldDecompositionSolver(env->callObjectMethod(this$, mids$[mid_decompose_b399fec7c31dfc95], a0.this$));
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
      static PyObject *t_FieldQRDecomposer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldQRDecomposer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldQRDecomposer_of_(t_FieldQRDecomposer *self, PyObject *args);
      static int t_FieldQRDecomposer_init_(t_FieldQRDecomposer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldQRDecomposer_decompose(t_FieldQRDecomposer *self, PyObject *arg);
      static PyObject *t_FieldQRDecomposer_get__parameters_(t_FieldQRDecomposer *self, void *data);
      static PyGetSetDef t_FieldQRDecomposer__fields_[] = {
        DECLARE_GET_FIELD(t_FieldQRDecomposer, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldQRDecomposer__methods_[] = {
        DECLARE_METHOD(t_FieldQRDecomposer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldQRDecomposer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldQRDecomposer, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldQRDecomposer, decompose, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldQRDecomposer)[] = {
        { Py_tp_methods, t_FieldQRDecomposer__methods_ },
        { Py_tp_init, (void *) t_FieldQRDecomposer_init_ },
        { Py_tp_getset, t_FieldQRDecomposer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldQRDecomposer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldQRDecomposer, t_FieldQRDecomposer, FieldQRDecomposer);
      PyObject *t_FieldQRDecomposer::wrap_Object(const FieldQRDecomposer& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldQRDecomposer::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldQRDecomposer *self = (t_FieldQRDecomposer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldQRDecomposer::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldQRDecomposer::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldQRDecomposer *self = (t_FieldQRDecomposer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldQRDecomposer::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldQRDecomposer), &PY_TYPE_DEF(FieldQRDecomposer), module, "FieldQRDecomposer", 0);
      }

      void t_FieldQRDecomposer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldQRDecomposer), "class_", make_descriptor(FieldQRDecomposer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldQRDecomposer), "wrapfn_", make_descriptor(t_FieldQRDecomposer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldQRDecomposer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldQRDecomposer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldQRDecomposer::initializeClass, 1)))
          return NULL;
        return t_FieldQRDecomposer::wrap_Object(FieldQRDecomposer(((t_FieldQRDecomposer *) arg)->object.this$));
      }
      static PyObject *t_FieldQRDecomposer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldQRDecomposer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldQRDecomposer_of_(t_FieldQRDecomposer *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldQRDecomposer_init_(t_FieldQRDecomposer *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldQRDecomposer object((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          INT_CALL(object = FieldQRDecomposer(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldQRDecomposer_decompose(t_FieldQRDecomposer *self, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldDecompositionSolver result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.decompose(a0));
          return ::org::hipparchus::linear::t_FieldDecompositionSolver::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "decompose", arg);
        return NULL;
      }
      static PyObject *t_FieldQRDecomposer_get__parameters_(t_FieldQRDecomposer *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/StreamingAemWriter.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemMetadata.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemWriter.h"
#include "java/lang/AutoCloseable.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/StreamingAemWriter$SegmentWriter.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *StreamingAemWriter::class$ = NULL;
              jmethodID *StreamingAemWriter::mids$ = NULL;
              bool StreamingAemWriter::live$ = false;

              jclass StreamingAemWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/StreamingAemWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_2d375483dc672a96] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/adm/aem/AemWriter;Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadata;)V");
                  mids$[mid_close_a1fa5dae97ea5ed2] = env->getMethodID(cls, "close", "()V");
                  mids$[mid_newSegment_572930d4f22e8598] = env->getMethodID(cls, "newSegment", "()Lorg/orekit/files/ccsds/ndm/adm/aem/StreamingAemWriter$SegmentWriter;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              StreamingAemWriter::StreamingAemWriter(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::adm::aem::AemWriter & a1, const ::org::orekit::files::ccsds::ndm::adm::AdmHeader & a2, const ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2d375483dc672a96, a0.this$, a1.this$, a2.this$, a3.this$)) {}

              void StreamingAemWriter::close() const
              {
                env->callVoidMethod(this$, mids$[mid_close_a1fa5dae97ea5ed2]);
              }

              ::org::orekit::files::ccsds::ndm::adm::aem::StreamingAemWriter$SegmentWriter StreamingAemWriter::newSegment() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::aem::StreamingAemWriter$SegmentWriter(env->callObjectMethod(this$, mids$[mid_newSegment_572930d4f22e8598]));
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
              static PyObject *t_StreamingAemWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_StreamingAemWriter_instance_(PyTypeObject *type, PyObject *arg);
              static int t_StreamingAemWriter_init_(t_StreamingAemWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_StreamingAemWriter_close(t_StreamingAemWriter *self);
              static PyObject *t_StreamingAemWriter_newSegment(t_StreamingAemWriter *self);

              static PyMethodDef t_StreamingAemWriter__methods_[] = {
                DECLARE_METHOD(t_StreamingAemWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingAemWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingAemWriter, close, METH_NOARGS),
                DECLARE_METHOD(t_StreamingAemWriter, newSegment, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(StreamingAemWriter)[] = {
                { Py_tp_methods, t_StreamingAemWriter__methods_ },
                { Py_tp_init, (void *) t_StreamingAemWriter_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(StreamingAemWriter)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(StreamingAemWriter, t_StreamingAemWriter, StreamingAemWriter);

              void t_StreamingAemWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(StreamingAemWriter), &PY_TYPE_DEF(StreamingAemWriter), module, "StreamingAemWriter", 0);
              }

              void t_StreamingAemWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingAemWriter), "class_", make_descriptor(StreamingAemWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingAemWriter), "wrapfn_", make_descriptor(t_StreamingAemWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingAemWriter), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_StreamingAemWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, StreamingAemWriter::initializeClass, 1)))
                  return NULL;
                return t_StreamingAemWriter::wrap_Object(StreamingAemWriter(((t_StreamingAemWriter *) arg)->object.this$));
              }
              static PyObject *t_StreamingAemWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, StreamingAemWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_StreamingAemWriter_init_(t_StreamingAemWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::aem::AemWriter a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader a2((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata a3((jobject) NULL);
                StreamingAemWriter object((jobject) NULL);

                if (!parseArgs(args, "kKkk", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::adm::aem::AemWriter::initializeClass, ::org::orekit::files::ccsds::ndm::adm::AdmHeader::initializeClass, ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::adm::aem::t_AemWriter::parameters_, &a2, &a3))
                {
                  INT_CALL(object = StreamingAemWriter(a0, a1, a2, a3));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_StreamingAemWriter_close(t_StreamingAemWriter *self)
              {
                OBJ_CALL(self->object.close());
                Py_RETURN_NONE;
              }

              static PyObject *t_StreamingAemWriter_newSegment(t_StreamingAemWriter *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::aem::StreamingAemWriter$SegmentWriter result((jobject) NULL);
                OBJ_CALL(result = self->object.newSegment());
                return ::org::orekit::files::ccsds::ndm::adm::aem::t_StreamingAemWriter$SegmentWriter::wrap_Object(result);
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
#include "org/orekit/frames/StaticTransform.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/orekit/frames/StaticTransform.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *StaticTransform::class$ = NULL;
      jmethodID *StaticTransform::mids$ = NULL;
      bool StaticTransform::live$ = false;

      jclass StaticTransform::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/StaticTransform");

          mids$ = new jmethodID[max_mid];
          mids$[mid_compose_8d4aa90b08e0a7e3] = env->getStaticMethodID(cls, "compose", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/StaticTransform;Lorg/orekit/frames/StaticTransform;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_compositeRotation_caebcd4047ef9312] = env->getStaticMethodID(cls, "compositeRotation", "(Lorg/orekit/frames/StaticTransform;Lorg/orekit/frames/StaticTransform;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_compositeTranslation_9e300b01ed590b12] = env->getStaticMethodID(cls, "compositeTranslation", "(Lorg/orekit/frames/StaticTransform;Lorg/orekit/frames/StaticTransform;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getIdentity_00930874428900c5] = env->getStaticMethodID(cls, "getIdentity", "()Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getInverse_00930874428900c5] = env->getMethodID(cls, "getInverse", "()Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getRotation_ff298a39b3cae5da] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getTranslation_8b724f8b4fdad1a2] = env->getMethodID(cls, "getTranslation", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_of_119c524e27aa8136] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Rotation;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_of_967fc4f87ccb447c] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_of_5349cbaa7f64f62d] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Rotation;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_transformLine_372f5ec6b8d717a8] = env->getMethodID(cls, "transformLine", "(Lorg/hipparchus/geometry/euclidean/threed/Line;)Lorg/hipparchus/geometry/euclidean/threed/Line;");
          mids$[mid_transformPosition_49157187b00e5904] = env->getMethodID(cls, "transformPosition", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_transformPosition_f21507e4850a184e] = env->getMethodID(cls, "transformPosition", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_transformVector_49157187b00e5904] = env->getMethodID(cls, "transformVector", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_transformVector_f21507e4850a184e] = env->getMethodID(cls, "transformVector", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      StaticTransform StaticTransform::compose(const ::org::orekit::time::AbsoluteDate & a0, const StaticTransform & a1, const StaticTransform & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return StaticTransform(env->callStaticObjectMethod(cls, mids$[mid_compose_8d4aa90b08e0a7e3], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation StaticTransform::compositeRotation(const StaticTransform & a0, const StaticTransform & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callStaticObjectMethod(cls, mids$[mid_compositeRotation_caebcd4047ef9312], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D StaticTransform::compositeTranslation(const StaticTransform & a0, const StaticTransform & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callStaticObjectMethod(cls, mids$[mid_compositeTranslation_9e300b01ed590b12], a0.this$, a1.this$));
      }

      StaticTransform StaticTransform::getIdentity()
      {
        jclass cls = env->getClass(initializeClass);
        return StaticTransform(env->callStaticObjectMethod(cls, mids$[mid_getIdentity_00930874428900c5]));
      }

      StaticTransform StaticTransform::getInverse() const
      {
        return StaticTransform(env->callObjectMethod(this$, mids$[mid_getInverse_00930874428900c5]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation StaticTransform::getRotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getRotation_ff298a39b3cae5da]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D StaticTransform::getTranslation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getTranslation_8b724f8b4fdad1a2]));
      }

      StaticTransform StaticTransform::of(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return StaticTransform(env->callStaticObjectMethod(cls, mids$[mid_of_119c524e27aa8136], a0.this$, a1.this$));
      }

      StaticTransform StaticTransform::of(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return StaticTransform(env->callStaticObjectMethod(cls, mids$[mid_of_967fc4f87ccb447c], a0.this$, a1.this$));
      }

      StaticTransform StaticTransform::of(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return StaticTransform(env->callStaticObjectMethod(cls, mids$[mid_of_5349cbaa7f64f62d], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Line StaticTransform::transformLine(const ::org::hipparchus::geometry::euclidean::threed::Line & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Line(env->callObjectMethod(this$, mids$[mid_transformLine_372f5ec6b8d717a8], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D StaticTransform::transformPosition(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformPosition_49157187b00e5904], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D StaticTransform::transformPosition(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transformPosition_f21507e4850a184e], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D StaticTransform::transformVector(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformVector_49157187b00e5904], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D StaticTransform::transformVector(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transformVector_f21507e4850a184e], a0.this$));
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
      static PyObject *t_StaticTransform_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StaticTransform_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StaticTransform_compose(PyTypeObject *type, PyObject *args);
      static PyObject *t_StaticTransform_compositeRotation(PyTypeObject *type, PyObject *args);
      static PyObject *t_StaticTransform_compositeTranslation(PyTypeObject *type, PyObject *args);
      static PyObject *t_StaticTransform_getIdentity(PyTypeObject *type);
      static PyObject *t_StaticTransform_getInverse(t_StaticTransform *self);
      static PyObject *t_StaticTransform_getRotation(t_StaticTransform *self);
      static PyObject *t_StaticTransform_getTranslation(t_StaticTransform *self);
      static PyObject *t_StaticTransform_of(PyTypeObject *type, PyObject *args);
      static PyObject *t_StaticTransform_transformLine(t_StaticTransform *self, PyObject *arg);
      static PyObject *t_StaticTransform_transformPosition(t_StaticTransform *self, PyObject *args);
      static PyObject *t_StaticTransform_transformVector(t_StaticTransform *self, PyObject *args);
      static PyObject *t_StaticTransform_get__identity(t_StaticTransform *self, void *data);
      static PyObject *t_StaticTransform_get__inverse(t_StaticTransform *self, void *data);
      static PyObject *t_StaticTransform_get__rotation(t_StaticTransform *self, void *data);
      static PyObject *t_StaticTransform_get__translation(t_StaticTransform *self, void *data);
      static PyGetSetDef t_StaticTransform__fields_[] = {
        DECLARE_GET_FIELD(t_StaticTransform, identity),
        DECLARE_GET_FIELD(t_StaticTransform, inverse),
        DECLARE_GET_FIELD(t_StaticTransform, rotation),
        DECLARE_GET_FIELD(t_StaticTransform, translation),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_StaticTransform__methods_[] = {
        DECLARE_METHOD(t_StaticTransform, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StaticTransform, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StaticTransform, compose, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StaticTransform, compositeRotation, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StaticTransform, compositeTranslation, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StaticTransform, getIdentity, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_StaticTransform, getInverse, METH_NOARGS),
        DECLARE_METHOD(t_StaticTransform, getRotation, METH_NOARGS),
        DECLARE_METHOD(t_StaticTransform, getTranslation, METH_NOARGS),
        DECLARE_METHOD(t_StaticTransform, of, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StaticTransform, transformLine, METH_O),
        DECLARE_METHOD(t_StaticTransform, transformPosition, METH_VARARGS),
        DECLARE_METHOD(t_StaticTransform, transformVector, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(StaticTransform)[] = {
        { Py_tp_methods, t_StaticTransform__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_StaticTransform__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(StaticTransform)[] = {
        &PY_TYPE_DEF(::org::orekit::time::TimeStamped),
        NULL
      };

      DEFINE_TYPE(StaticTransform, t_StaticTransform, StaticTransform);

      void t_StaticTransform::install(PyObject *module)
      {
        installType(&PY_TYPE(StaticTransform), &PY_TYPE_DEF(StaticTransform), module, "StaticTransform", 0);
      }

      void t_StaticTransform::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(StaticTransform), "class_", make_descriptor(StaticTransform::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StaticTransform), "wrapfn_", make_descriptor(t_StaticTransform::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StaticTransform), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_StaticTransform_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, StaticTransform::initializeClass, 1)))
          return NULL;
        return t_StaticTransform::wrap_Object(StaticTransform(((t_StaticTransform *) arg)->object.this$));
      }
      static PyObject *t_StaticTransform_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, StaticTransform::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_StaticTransform_compose(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        StaticTransform a1((jobject) NULL);
        StaticTransform a2((jobject) NULL);
        StaticTransform result((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, StaticTransform::initializeClass, StaticTransform::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::frames::StaticTransform::compose(a0, a1, a2));
          return t_StaticTransform::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "compose", args);
        return NULL;
      }

      static PyObject *t_StaticTransform_compositeRotation(PyTypeObject *type, PyObject *args)
      {
        StaticTransform a0((jobject) NULL);
        StaticTransform a1((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

        if (!parseArgs(args, "kk", StaticTransform::initializeClass, StaticTransform::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::frames::StaticTransform::compositeRotation(a0, a1));
          return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "compositeRotation", args);
        return NULL;
      }

      static PyObject *t_StaticTransform_compositeTranslation(PyTypeObject *type, PyObject *args)
      {
        StaticTransform a0((jobject) NULL);
        StaticTransform a1((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArgs(args, "kk", StaticTransform::initializeClass, StaticTransform::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::frames::StaticTransform::compositeTranslation(a0, a1));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "compositeTranslation", args);
        return NULL;
      }

      static PyObject *t_StaticTransform_getIdentity(PyTypeObject *type)
      {
        StaticTransform result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::StaticTransform::getIdentity());
        return t_StaticTransform::wrap_Object(result);
      }

      static PyObject *t_StaticTransform_getInverse(t_StaticTransform *self)
      {
        StaticTransform result((jobject) NULL);
        OBJ_CALL(result = self->object.getInverse());
        return t_StaticTransform::wrap_Object(result);
      }

      static PyObject *t_StaticTransform_getRotation(t_StaticTransform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
      }

      static PyObject *t_StaticTransform_getTranslation(t_StaticTransform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getTranslation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_StaticTransform_of(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation a1((jobject) NULL);
            StaticTransform result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::frames::StaticTransform::of(a0, a1));
              return t_StaticTransform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            StaticTransform result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::frames::StaticTransform::of(a0, a1));
              return t_StaticTransform::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation a2((jobject) NULL);
            StaticTransform result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::orekit::frames::StaticTransform::of(a0, a1, a2));
              return t_StaticTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "of", args);
        return NULL;
      }

      static PyObject *t_StaticTransform_transformLine(t_StaticTransform *self, PyObject *arg)
      {
        ::org::hipparchus::geometry::euclidean::threed::Line a0((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Line result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Line::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.transformLine(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_Line::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "transformLine", arg);
        return NULL;
      }

      static PyObject *t_StaticTransform_transformPosition(t_StaticTransform *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              OBJ_CALL(result = self->object.transformPosition(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transformPosition(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transformPosition", args);
        return NULL;
      }

      static PyObject *t_StaticTransform_transformVector(t_StaticTransform *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              OBJ_CALL(result = self->object.transformVector(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transformVector(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transformVector", args);
        return NULL;
      }

      static PyObject *t_StaticTransform_get__identity(t_StaticTransform *self, void *data)
      {
        StaticTransform value((jobject) NULL);
        OBJ_CALL(value = self->object.getIdentity());
        return t_StaticTransform::wrap_Object(value);
      }

      static PyObject *t_StaticTransform_get__inverse(t_StaticTransform *self, void *data)
      {
        StaticTransform value((jobject) NULL);
        OBJ_CALL(value = self->object.getInverse());
        return t_StaticTransform::wrap_Object(value);
      }

      static PyObject *t_StaticTransform_get__rotation(t_StaticTransform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(value);
      }

      static PyObject *t_StaticTransform_get__translation(t_StaticTransform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getTranslation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonTimeShiftable.h"
#include "org/orekit/time/TimeShiftable.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonTimeShiftable::class$ = NULL;
      jmethodID *PythonTimeShiftable::mids$ = NULL;
      bool PythonTimeShiftable::live$ = false;

      jclass PythonTimeShiftable::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonTimeShiftable");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_shiftedBy_d6d7c40512c5891a] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/time/TimeShiftable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTimeShiftable::PythonTimeShiftable() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonTimeShiftable::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonTimeShiftable::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonTimeShiftable::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
      static PyObject *t_PythonTimeShiftable_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeShiftable_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeShiftable_of_(t_PythonTimeShiftable *self, PyObject *args);
      static int t_PythonTimeShiftable_init_(t_PythonTimeShiftable *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonTimeShiftable_finalize(t_PythonTimeShiftable *self);
      static PyObject *t_PythonTimeShiftable_pythonExtension(t_PythonTimeShiftable *self, PyObject *args);
      static void JNICALL t_PythonTimeShiftable_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeShiftable_shiftedBy1(JNIEnv *jenv, jobject jobj, jdouble a0);
      static PyObject *t_PythonTimeShiftable_get__self(t_PythonTimeShiftable *self, void *data);
      static PyObject *t_PythonTimeShiftable_get__parameters_(t_PythonTimeShiftable *self, void *data);
      static PyGetSetDef t_PythonTimeShiftable__fields_[] = {
        DECLARE_GET_FIELD(t_PythonTimeShiftable, self),
        DECLARE_GET_FIELD(t_PythonTimeShiftable, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonTimeShiftable__methods_[] = {
        DECLARE_METHOD(t_PythonTimeShiftable, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeShiftable, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeShiftable, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonTimeShiftable, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonTimeShiftable, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonTimeShiftable)[] = {
        { Py_tp_methods, t_PythonTimeShiftable__methods_ },
        { Py_tp_init, (void *) t_PythonTimeShiftable_init_ },
        { Py_tp_getset, t_PythonTimeShiftable__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonTimeShiftable)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonTimeShiftable, t_PythonTimeShiftable, PythonTimeShiftable);
      PyObject *t_PythonTimeShiftable::wrap_Object(const PythonTimeShiftable& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonTimeShiftable::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonTimeShiftable *self = (t_PythonTimeShiftable *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonTimeShiftable::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonTimeShiftable::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonTimeShiftable *self = (t_PythonTimeShiftable *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonTimeShiftable::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonTimeShiftable), &PY_TYPE_DEF(PythonTimeShiftable), module, "PythonTimeShiftable", 1);
      }

      void t_PythonTimeShiftable::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeShiftable), "class_", make_descriptor(PythonTimeShiftable::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeShiftable), "wrapfn_", make_descriptor(t_PythonTimeShiftable::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeShiftable), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonTimeShiftable::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonTimeShiftable_pythonDecRef0 },
          { "shiftedBy", "(D)Lorg/orekit/time/TimeShiftable;", (void *) t_PythonTimeShiftable_shiftedBy1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonTimeShiftable_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonTimeShiftable::initializeClass, 1)))
          return NULL;
        return t_PythonTimeShiftable::wrap_Object(PythonTimeShiftable(((t_PythonTimeShiftable *) arg)->object.this$));
      }
      static PyObject *t_PythonTimeShiftable_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonTimeShiftable::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonTimeShiftable_of_(t_PythonTimeShiftable *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonTimeShiftable_init_(t_PythonTimeShiftable *self, PyObject *args, PyObject *kwds)
      {
        PythonTimeShiftable object((jobject) NULL);

        INT_CALL(object = PythonTimeShiftable());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonTimeShiftable_finalize(t_PythonTimeShiftable *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonTimeShiftable_pythonExtension(t_PythonTimeShiftable *self, PyObject *args)
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

      static void JNICALL t_PythonTimeShiftable_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeShiftable::mids$[PythonTimeShiftable::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTimeShiftable::mids$[PythonTimeShiftable::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonTimeShiftable_shiftedBy1(JNIEnv *jenv, jobject jobj, jdouble a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeShiftable::mids$[PythonTimeShiftable::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TimeShiftable value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "shiftedBy", "d", (double) a0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TimeShiftable::initializeClass, &value))
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

      static PyObject *t_PythonTimeShiftable_get__self(t_PythonTimeShiftable *self, void *data)
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
      static PyObject *t_PythonTimeShiftable_get__parameters_(t_PythonTimeShiftable *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/MultidimensionalCounter.h"
#include "java/lang/Iterable.h"
#include "java/lang/Integer.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/MultidimensionalCounter$Iterator.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *MultidimensionalCounter::class$ = NULL;
      jmethodID *MultidimensionalCounter::mids$ = NULL;
      bool MultidimensionalCounter::live$ = false;

      jclass MultidimensionalCounter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/MultidimensionalCounter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_86a2769cb881d388] = env->getMethodID(cls, "<init>", "([I)V");
          mids$[mid_getCount_d57a86117ebc55bd] = env->getMethodID(cls, "getCount", "([I)I");
          mids$[mid_getCounts_7247c1a113e968de] = env->getMethodID(cls, "getCounts", "(I)[I");
          mids$[mid_getDimension_55546ef6a647f39b] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getSize_55546ef6a647f39b] = env->getMethodID(cls, "getSize", "()I");
          mids$[mid_getSizes_4d095d7a08163110] = env->getMethodID(cls, "getSizes", "()[I");
          mids$[mid_iterator_3bb401bf17509ee9] = env->getMethodID(cls, "iterator", "()Lorg/hipparchus/util/MultidimensionalCounter$Iterator;");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MultidimensionalCounter::MultidimensionalCounter(const JArray< jint > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_86a2769cb881d388, a0.this$)) {}

      jint MultidimensionalCounter::getCount(const JArray< jint > & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_getCount_d57a86117ebc55bd], a0.this$);
      }

      JArray< jint > MultidimensionalCounter::getCounts(jint a0) const
      {
        return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getCounts_7247c1a113e968de], a0));
      }

      jint MultidimensionalCounter::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_55546ef6a647f39b]);
      }

      jint MultidimensionalCounter::getSize() const
      {
        return env->callIntMethod(this$, mids$[mid_getSize_55546ef6a647f39b]);
      }

      JArray< jint > MultidimensionalCounter::getSizes() const
      {
        return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getSizes_4d095d7a08163110]));
      }

      ::org::hipparchus::util::MultidimensionalCounter$Iterator MultidimensionalCounter::iterator() const
      {
        return ::org::hipparchus::util::MultidimensionalCounter$Iterator(env->callObjectMethod(this$, mids$[mid_iterator_3bb401bf17509ee9]));
      }

      ::java::lang::String MultidimensionalCounter::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_MultidimensionalCounter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultidimensionalCounter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_MultidimensionalCounter_init_(t_MultidimensionalCounter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_MultidimensionalCounter_getCount(t_MultidimensionalCounter *self, PyObject *arg);
      static PyObject *t_MultidimensionalCounter_getCounts(t_MultidimensionalCounter *self, PyObject *arg);
      static PyObject *t_MultidimensionalCounter_getDimension(t_MultidimensionalCounter *self);
      static PyObject *t_MultidimensionalCounter_getSize(t_MultidimensionalCounter *self);
      static PyObject *t_MultidimensionalCounter_getSizes(t_MultidimensionalCounter *self);
      static PyObject *t_MultidimensionalCounter_iterator(t_MultidimensionalCounter *self);
      static PyObject *t_MultidimensionalCounter_toString(t_MultidimensionalCounter *self, PyObject *args);
      static PyObject *t_MultidimensionalCounter_get__dimension(t_MultidimensionalCounter *self, void *data);
      static PyObject *t_MultidimensionalCounter_get__size(t_MultidimensionalCounter *self, void *data);
      static PyObject *t_MultidimensionalCounter_get__sizes(t_MultidimensionalCounter *self, void *data);
      static PyGetSetDef t_MultidimensionalCounter__fields_[] = {
        DECLARE_GET_FIELD(t_MultidimensionalCounter, dimension),
        DECLARE_GET_FIELD(t_MultidimensionalCounter, size),
        DECLARE_GET_FIELD(t_MultidimensionalCounter, sizes),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MultidimensionalCounter__methods_[] = {
        DECLARE_METHOD(t_MultidimensionalCounter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultidimensionalCounter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultidimensionalCounter, getCount, METH_O),
        DECLARE_METHOD(t_MultidimensionalCounter, getCounts, METH_O),
        DECLARE_METHOD(t_MultidimensionalCounter, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_MultidimensionalCounter, getSize, METH_NOARGS),
        DECLARE_METHOD(t_MultidimensionalCounter, getSizes, METH_NOARGS),
        DECLARE_METHOD(t_MultidimensionalCounter, iterator, METH_NOARGS),
        DECLARE_METHOD(t_MultidimensionalCounter, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MultidimensionalCounter)[] = {
        { Py_tp_methods, t_MultidimensionalCounter__methods_ },
        { Py_tp_init, (void *) t_MultidimensionalCounter_init_ },
        { Py_tp_getset, t_MultidimensionalCounter__fields_ },
        { Py_tp_iter, (void *) ((PyObject *(*)(t_MultidimensionalCounter *)) get_iterator< t_MultidimensionalCounter >) },
        { Py_tp_iternext, (void *) 0 },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MultidimensionalCounter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MultidimensionalCounter, t_MultidimensionalCounter, MultidimensionalCounter);

      void t_MultidimensionalCounter::install(PyObject *module)
      {
        installType(&PY_TYPE(MultidimensionalCounter), &PY_TYPE_DEF(MultidimensionalCounter), module, "MultidimensionalCounter", 0);
      }

      void t_MultidimensionalCounter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultidimensionalCounter), "class_", make_descriptor(MultidimensionalCounter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultidimensionalCounter), "wrapfn_", make_descriptor(t_MultidimensionalCounter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultidimensionalCounter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MultidimensionalCounter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MultidimensionalCounter::initializeClass, 1)))
          return NULL;
        return t_MultidimensionalCounter::wrap_Object(MultidimensionalCounter(((t_MultidimensionalCounter *) arg)->object.this$));
      }
      static PyObject *t_MultidimensionalCounter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MultidimensionalCounter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_MultidimensionalCounter_init_(t_MultidimensionalCounter *self, PyObject *args, PyObject *kwds)
      {
        JArray< jint > a0((jobject) NULL);
        MultidimensionalCounter object((jobject) NULL);

        if (!parseArgs(args, "[I", &a0))
        {
          INT_CALL(object = MultidimensionalCounter(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_MultidimensionalCounter_getCount(t_MultidimensionalCounter *self, PyObject *arg)
      {
        JArray< jint > a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "[I", &a0))
        {
          OBJ_CALL(result = self->object.getCount(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getCount", arg);
        return NULL;
      }

      static PyObject *t_MultidimensionalCounter_getCounts(t_MultidimensionalCounter *self, PyObject *arg)
      {
        jint a0;
        JArray< jint > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getCounts(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getCounts", arg);
        return NULL;
      }

      static PyObject *t_MultidimensionalCounter_getDimension(t_MultidimensionalCounter *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_MultidimensionalCounter_getSize(t_MultidimensionalCounter *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getSize());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_MultidimensionalCounter_getSizes(t_MultidimensionalCounter *self)
      {
        JArray< jint > result((jobject) NULL);
        OBJ_CALL(result = self->object.getSizes());
        return result.wrap();
      }

      static PyObject *t_MultidimensionalCounter_iterator(t_MultidimensionalCounter *self)
      {
        ::org::hipparchus::util::MultidimensionalCounter$Iterator result((jobject) NULL);
        OBJ_CALL(result = self->object.iterator());
        return ::org::hipparchus::util::t_MultidimensionalCounter$Iterator::wrap_Object(result);
      }

      static PyObject *t_MultidimensionalCounter_toString(t_MultidimensionalCounter *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(MultidimensionalCounter), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_MultidimensionalCounter_get__dimension(t_MultidimensionalCounter *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_MultidimensionalCounter_get__size(t_MultidimensionalCounter *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getSize());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_MultidimensionalCounter_get__sizes(t_MultidimensionalCounter *self, void *data)
      {
        JArray< jint > value((jobject) NULL);
        OBJ_CALL(value = self->object.getSizes());
        return value.wrap();
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
              mids$[mid_getCarrierPhase_7692c1efa91724b9] = env->getStaticMethodID(cls, "getCarrierPhase", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/CarrierPhase;");
              mids$[mid_valueOf_7692c1efa91724b9] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/CarrierPhase;");
              mids$[mid_values_1e83cc361837022c] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/ntrip/CarrierPhase;");

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
            return CarrierPhase(env->callStaticObjectMethod(cls, mids$[mid_getCarrierPhase_7692c1efa91724b9], a0.this$));
          }

          CarrierPhase CarrierPhase::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return CarrierPhase(env->callStaticObjectMethod(cls, mids$[mid_valueOf_7692c1efa91724b9], a0.this$));
          }

          JArray< CarrierPhase > CarrierPhase::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< CarrierPhase >(env->callStaticObjectMethod(cls, mids$[mid_values_1e83cc361837022c]));
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
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTTesseralContext.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTTesseralContext::class$ = NULL;
            jmethodID *DSSTTesseralContext::mids$ = NULL;
            bool DSSTTesseralContext::live$ = false;

            jclass DSSTTesseralContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTTesseralContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getAx2oA_b74f83833fdad017] = env->getMethodID(cls, "getAx2oA", "()D");
                mids$[mid_getBoA_b74f83833fdad017] = env->getMethodID(cls, "getBoA", "()D");
                mids$[mid_getBoABpo_b74f83833fdad017] = env->getMethodID(cls, "getBoABpo", "()D");
                mids$[mid_getChi_b74f83833fdad017] = env->getMethodID(cls, "getChi", "()D");
                mids$[mid_getChi2_b74f83833fdad017] = env->getMethodID(cls, "getChi2", "()D");
                mids$[mid_getCo2AB_b74f83833fdad017] = env->getMethodID(cls, "getCo2AB", "()D");
                mids$[mid_getE2_b74f83833fdad017] = env->getMethodID(cls, "getE2", "()D");
                mids$[mid_getMeanMotion_b74f83833fdad017] = env->getMethodID(cls, "getMeanMotion", "()D");
                mids$[mid_getMoa_b74f83833fdad017] = env->getMethodID(cls, "getMoa", "()D");
                mids$[mid_getOoAB_b74f83833fdad017] = env->getMethodID(cls, "getOoAB", "()D");
                mids$[mid_getOrbitPeriod_b74f83833fdad017] = env->getMethodID(cls, "getOrbitPeriod", "()D");
                mids$[mid_getRatio_b74f83833fdad017] = env->getMethodID(cls, "getRatio", "()D");
                mids$[mid_getRoa_b74f83833fdad017] = env->getMethodID(cls, "getRoa", "()D");
                mids$[mid_getTheta_b74f83833fdad017] = env->getMethodID(cls, "getTheta", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble DSSTTesseralContext::getAx2oA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAx2oA_b74f83833fdad017]);
            }

            jdouble DSSTTesseralContext::getBoA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBoA_b74f83833fdad017]);
            }

            jdouble DSSTTesseralContext::getBoABpo() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBoABpo_b74f83833fdad017]);
            }

            jdouble DSSTTesseralContext::getChi() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getChi_b74f83833fdad017]);
            }

            jdouble DSSTTesseralContext::getChi2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getChi2_b74f83833fdad017]);
            }

            jdouble DSSTTesseralContext::getCo2AB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCo2AB_b74f83833fdad017]);
            }

            jdouble DSSTTesseralContext::getE2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getE2_b74f83833fdad017]);
            }

            jdouble DSSTTesseralContext::getMeanMotion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_b74f83833fdad017]);
            }

            jdouble DSSTTesseralContext::getMoa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMoa_b74f83833fdad017]);
            }

            jdouble DSSTTesseralContext::getOoAB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOoAB_b74f83833fdad017]);
            }

            jdouble DSSTTesseralContext::getOrbitPeriod() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOrbitPeriod_b74f83833fdad017]);
            }

            jdouble DSSTTesseralContext::getRatio() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRatio_b74f83833fdad017]);
            }

            jdouble DSSTTesseralContext::getRoa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRoa_b74f83833fdad017]);
            }

            jdouble DSSTTesseralContext::getTheta() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTheta_b74f83833fdad017]);
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
            static PyObject *t_DSSTTesseralContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTTesseralContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTTesseralContext_getAx2oA(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getBoA(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getBoABpo(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getChi(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getChi2(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getCo2AB(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getE2(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getMeanMotion(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getMoa(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getOoAB(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getOrbitPeriod(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getRatio(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getRoa(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getTheta(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_get__ax2oA(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__boA(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__boABpo(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__chi(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__chi2(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__co2AB(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__e2(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__meanMotion(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__moa(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__ooAB(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__orbitPeriod(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__ratio(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__roa(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__theta(t_DSSTTesseralContext *self, void *data);
            static PyGetSetDef t_DSSTTesseralContext__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTTesseralContext, ax2oA),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, boA),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, boABpo),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, chi),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, chi2),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, co2AB),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, e2),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, meanMotion),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, moa),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, ooAB),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, orbitPeriod),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, ratio),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, roa),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, theta),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTTesseralContext__methods_[] = {
              DECLARE_METHOD(t_DSSTTesseralContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTTesseralContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTTesseralContext, getAx2oA, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getBoA, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getBoABpo, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getChi, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getChi2, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getCo2AB, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getE2, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getMoa, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getOoAB, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getOrbitPeriod, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getRatio, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getRoa, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getTheta, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTTesseralContext)[] = {
              { Py_tp_methods, t_DSSTTesseralContext__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_DSSTTesseralContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTTesseralContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext),
              NULL
            };

            DEFINE_TYPE(DSSTTesseralContext, t_DSSTTesseralContext, DSSTTesseralContext);

            void t_DSSTTesseralContext::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTTesseralContext), &PY_TYPE_DEF(DSSTTesseralContext), module, "DSSTTesseralContext", 0);
            }

            void t_DSSTTesseralContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTTesseralContext), "class_", make_descriptor(DSSTTesseralContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTTesseralContext), "wrapfn_", make_descriptor(t_DSSTTesseralContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTTesseralContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DSSTTesseralContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTTesseralContext::initializeClass, 1)))
                return NULL;
              return t_DSSTTesseralContext::wrap_Object(DSSTTesseralContext(((t_DSSTTesseralContext *) arg)->object.this$));
            }
            static PyObject *t_DSSTTesseralContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTTesseralContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_DSSTTesseralContext_getAx2oA(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAx2oA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getBoA(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBoA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getBoABpo(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBoABpo());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getChi(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getChi());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getChi2(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getChi2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getCo2AB(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCo2AB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getE2(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getE2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getMeanMotion(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getMoa(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMoa());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getOoAB(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOoAB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getOrbitPeriod(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOrbitPeriod());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getRatio(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRatio());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getRoa(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRoa());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getTheta(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTheta());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_get__ax2oA(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAx2oA());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__boA(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBoA());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__boABpo(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBoABpo());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__chi(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getChi());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__chi2(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getChi2());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__co2AB(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCo2AB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__e2(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getE2());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__meanMotion(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__moa(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMoa());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__ooAB(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOoAB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__orbitPeriod(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOrbitPeriod());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__ratio(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRatio());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__roa(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRoa());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__theta(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTheta());
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
#include "org/orekit/estimation/measurements/generation/AngularAzElBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/AngularAzEl.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *AngularAzElBuilder::class$ = NULL;
          jmethodID *AngularAzElBuilder::mids$ = NULL;
          bool AngularAzElBuilder::live$ = false;

          jclass AngularAzElBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/AngularAzElBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_eead9de9d756ce8d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;[D[DLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_0a714677ae6b43f0] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/AngularAzEl;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AngularAzElBuilder::AngularAzElBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3, const ::org::orekit::estimation::measurements::ObservableSatellite & a4) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_eead9de9d756ce8d, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

          ::org::orekit::estimation::measurements::AngularAzEl AngularAzElBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::AngularAzEl(env->callObjectMethod(this$, mids$[mid_build_0a714677ae6b43f0], a0.this$, a1.this$));
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
          static PyObject *t_AngularAzElBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AngularAzElBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AngularAzElBuilder_of_(t_AngularAzElBuilder *self, PyObject *args);
          static int t_AngularAzElBuilder_init_(t_AngularAzElBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AngularAzElBuilder_build(t_AngularAzElBuilder *self, PyObject *args);
          static PyObject *t_AngularAzElBuilder_get__parameters_(t_AngularAzElBuilder *self, void *data);
          static PyGetSetDef t_AngularAzElBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_AngularAzElBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AngularAzElBuilder__methods_[] = {
            DECLARE_METHOD(t_AngularAzElBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularAzElBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularAzElBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_AngularAzElBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AngularAzElBuilder)[] = {
            { Py_tp_methods, t_AngularAzElBuilder__methods_ },
            { Py_tp_init, (void *) t_AngularAzElBuilder_init_ },
            { Py_tp_getset, t_AngularAzElBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AngularAzElBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(AngularAzElBuilder, t_AngularAzElBuilder, AngularAzElBuilder);
          PyObject *t_AngularAzElBuilder::wrap_Object(const AngularAzElBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AngularAzElBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AngularAzElBuilder *self = (t_AngularAzElBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_AngularAzElBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AngularAzElBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AngularAzElBuilder *self = (t_AngularAzElBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_AngularAzElBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(AngularAzElBuilder), &PY_TYPE_DEF(AngularAzElBuilder), module, "AngularAzElBuilder", 0);
          }

          void t_AngularAzElBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularAzElBuilder), "class_", make_descriptor(AngularAzElBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularAzElBuilder), "wrapfn_", make_descriptor(t_AngularAzElBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularAzElBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AngularAzElBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AngularAzElBuilder::initializeClass, 1)))
              return NULL;
            return t_AngularAzElBuilder::wrap_Object(AngularAzElBuilder(((t_AngularAzElBuilder *) arg)->object.this$));
          }
          static PyObject *t_AngularAzElBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AngularAzElBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AngularAzElBuilder_of_(t_AngularAzElBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_AngularAzElBuilder_init_(t_AngularAzElBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            JArray< jdouble > a2((jobject) NULL);
            JArray< jdouble > a3((jobject) NULL);
            ::org::orekit::estimation::measurements::ObservableSatellite a4((jobject) NULL);
            AngularAzElBuilder object((jobject) NULL);

            if (!parseArgs(args, "kk[D[Dk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = AngularAzElBuilder(a0, a1, a2, a3, a4));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(AngularAzEl);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_AngularAzElBuilder_build(t_AngularAzElBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::AngularAzEl result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_AngularAzEl::wrap_Object(result);
            }

            return callSuper(PY_TYPE(AngularAzElBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_AngularAzElBuilder_get__parameters_(t_AngularAzElBuilder *self, void *data)
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
#include "org/orekit/utils/SecularAndHarmonic.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *SecularAndHarmonic::class$ = NULL;
      jmethodID *SecularAndHarmonic::mids$ = NULL;
      bool SecularAndHarmonic::live$ = false;

      jclass SecularAndHarmonic::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/SecularAndHarmonic");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_75061e5f5bbace93] = env->getMethodID(cls, "<init>", "(I[D)V");
          mids$[mid_addPoint_3dd4638451e09a7f] = env->getMethodID(cls, "addPoint", "(Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_addWeightedPoint_574dcea0b820e53f] = env->getMethodID(cls, "addWeightedPoint", "(Lorg/orekit/time/AbsoluteDate;DD)V");
          mids$[mid_approximateAsPolynomialOnly_5574de1f3d416bc4] = env->getMethodID(cls, "approximateAsPolynomialOnly", "(ILorg/orekit/time/AbsoluteDate;IILorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;D)[D");
          mids$[mid_fit_a1fa5dae97ea5ed2] = env->getMethodID(cls, "fit", "()V");
          mids$[mid_getFittedParameters_25e1757a36c4dde2] = env->getMethodID(cls, "getFittedParameters", "()[D");
          mids$[mid_getHarmonicAmplitude_b74f83833fdad017] = env->getMethodID(cls, "getHarmonicAmplitude", "()D");
          mids$[mid_getPulsations_25e1757a36c4dde2] = env->getMethodID(cls, "getPulsations", "()[D");
          mids$[mid_getReferenceDate_c325492395d89b24] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getSecularDegree_55546ef6a647f39b] = env->getMethodID(cls, "getSecularDegree", "()I");
          mids$[mid_meanDerivative_dd92b03c798e45ba] = env->getMethodID(cls, "meanDerivative", "(Lorg/orekit/time/AbsoluteDate;II)D");
          mids$[mid_meanSecondDerivative_dd92b03c798e45ba] = env->getMethodID(cls, "meanSecondDerivative", "(Lorg/orekit/time/AbsoluteDate;II)D");
          mids$[mid_meanValue_dd92b03c798e45ba] = env->getMethodID(cls, "meanValue", "(Lorg/orekit/time/AbsoluteDate;II)D");
          mids$[mid_osculatingDerivative_fd347811007a6ba3] = env->getMethodID(cls, "osculatingDerivative", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_osculatingSecondDerivative_fd347811007a6ba3] = env->getMethodID(cls, "osculatingSecondDerivative", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_osculatingValue_fd347811007a6ba3] = env->getMethodID(cls, "osculatingValue", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_resetFitting_9bdf5cd7dd060d54] = env->getMethodID(cls, "resetFitting", "(Lorg/orekit/time/AbsoluteDate;[D)V");
          mids$[mid_setConvergenceRMS_8ba9fe7a847cecad] = env->getMethodID(cls, "setConvergenceRMS", "(D)V");
          mids$[mid_setMaxIter_44ed599e93e8a30c] = env->getMethodID(cls, "setMaxIter", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SecularAndHarmonic::SecularAndHarmonic(jint a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_75061e5f5bbace93, a0, a1.this$)) {}

      void SecularAndHarmonic::addPoint(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addPoint_3dd4638451e09a7f], a0.this$, a1);
      }

      void SecularAndHarmonic::addWeightedPoint(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addWeightedPoint_574dcea0b820e53f], a0.this$, a1, a2);
      }

      JArray< jdouble > SecularAndHarmonic::approximateAsPolynomialOnly(jint a0, const ::org::orekit::time::AbsoluteDate & a1, jint a2, jint a3, const ::org::orekit::time::AbsoluteDate & a4, const ::org::orekit::time::AbsoluteDate & a5, jdouble a6) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_approximateAsPolynomialOnly_5574de1f3d416bc4], a0, a1.this$, a2, a3, a4.this$, a5.this$, a6));
      }

      void SecularAndHarmonic::fit() const
      {
        env->callVoidMethod(this$, mids$[mid_fit_a1fa5dae97ea5ed2]);
      }

      JArray< jdouble > SecularAndHarmonic::getFittedParameters() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getFittedParameters_25e1757a36c4dde2]));
      }

      jdouble SecularAndHarmonic::getHarmonicAmplitude() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHarmonicAmplitude_b74f83833fdad017]);
      }

      JArray< jdouble > SecularAndHarmonic::getPulsations() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getPulsations_25e1757a36c4dde2]));
      }

      ::org::orekit::time::AbsoluteDate SecularAndHarmonic::getReferenceDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceDate_c325492395d89b24]));
      }

      jint SecularAndHarmonic::getSecularDegree() const
      {
        return env->callIntMethod(this$, mids$[mid_getSecularDegree_55546ef6a647f39b]);
      }

      jdouble SecularAndHarmonic::meanDerivative(const ::org::orekit::time::AbsoluteDate & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_meanDerivative_dd92b03c798e45ba], a0.this$, a1, a2);
      }

      jdouble SecularAndHarmonic::meanSecondDerivative(const ::org::orekit::time::AbsoluteDate & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_meanSecondDerivative_dd92b03c798e45ba], a0.this$, a1, a2);
      }

      jdouble SecularAndHarmonic::meanValue(const ::org::orekit::time::AbsoluteDate & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_meanValue_dd92b03c798e45ba], a0.this$, a1, a2);
      }

      jdouble SecularAndHarmonic::osculatingDerivative(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_osculatingDerivative_fd347811007a6ba3], a0.this$);
      }

      jdouble SecularAndHarmonic::osculatingSecondDerivative(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_osculatingSecondDerivative_fd347811007a6ba3], a0.this$);
      }

      jdouble SecularAndHarmonic::osculatingValue(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_osculatingValue_fd347811007a6ba3], a0.this$);
      }

      void SecularAndHarmonic::resetFitting(const ::org::orekit::time::AbsoluteDate & a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_resetFitting_9bdf5cd7dd060d54], a0.this$, a1.this$);
      }

      void SecularAndHarmonic::setConvergenceRMS(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setConvergenceRMS_8ba9fe7a847cecad], a0);
      }

      void SecularAndHarmonic::setMaxIter(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMaxIter_44ed599e93e8a30c], a0);
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
      static PyObject *t_SecularAndHarmonic_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SecularAndHarmonic_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SecularAndHarmonic_init_(t_SecularAndHarmonic *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SecularAndHarmonic_addPoint(t_SecularAndHarmonic *self, PyObject *args);
      static PyObject *t_SecularAndHarmonic_addWeightedPoint(t_SecularAndHarmonic *self, PyObject *args);
      static PyObject *t_SecularAndHarmonic_approximateAsPolynomialOnly(t_SecularAndHarmonic *self, PyObject *args);
      static PyObject *t_SecularAndHarmonic_fit(t_SecularAndHarmonic *self);
      static PyObject *t_SecularAndHarmonic_getFittedParameters(t_SecularAndHarmonic *self);
      static PyObject *t_SecularAndHarmonic_getHarmonicAmplitude(t_SecularAndHarmonic *self);
      static PyObject *t_SecularAndHarmonic_getPulsations(t_SecularAndHarmonic *self);
      static PyObject *t_SecularAndHarmonic_getReferenceDate(t_SecularAndHarmonic *self);
      static PyObject *t_SecularAndHarmonic_getSecularDegree(t_SecularAndHarmonic *self);
      static PyObject *t_SecularAndHarmonic_meanDerivative(t_SecularAndHarmonic *self, PyObject *args);
      static PyObject *t_SecularAndHarmonic_meanSecondDerivative(t_SecularAndHarmonic *self, PyObject *args);
      static PyObject *t_SecularAndHarmonic_meanValue(t_SecularAndHarmonic *self, PyObject *args);
      static PyObject *t_SecularAndHarmonic_osculatingDerivative(t_SecularAndHarmonic *self, PyObject *arg);
      static PyObject *t_SecularAndHarmonic_osculatingSecondDerivative(t_SecularAndHarmonic *self, PyObject *arg);
      static PyObject *t_SecularAndHarmonic_osculatingValue(t_SecularAndHarmonic *self, PyObject *arg);
      static PyObject *t_SecularAndHarmonic_resetFitting(t_SecularAndHarmonic *self, PyObject *args);
      static PyObject *t_SecularAndHarmonic_setConvergenceRMS(t_SecularAndHarmonic *self, PyObject *arg);
      static PyObject *t_SecularAndHarmonic_setMaxIter(t_SecularAndHarmonic *self, PyObject *arg);
      static int t_SecularAndHarmonic_set__convergenceRMS(t_SecularAndHarmonic *self, PyObject *arg, void *data);
      static PyObject *t_SecularAndHarmonic_get__fittedParameters(t_SecularAndHarmonic *self, void *data);
      static PyObject *t_SecularAndHarmonic_get__harmonicAmplitude(t_SecularAndHarmonic *self, void *data);
      static int t_SecularAndHarmonic_set__maxIter(t_SecularAndHarmonic *self, PyObject *arg, void *data);
      static PyObject *t_SecularAndHarmonic_get__pulsations(t_SecularAndHarmonic *self, void *data);
      static PyObject *t_SecularAndHarmonic_get__referenceDate(t_SecularAndHarmonic *self, void *data);
      static PyObject *t_SecularAndHarmonic_get__secularDegree(t_SecularAndHarmonic *self, void *data);
      static PyGetSetDef t_SecularAndHarmonic__fields_[] = {
        DECLARE_SET_FIELD(t_SecularAndHarmonic, convergenceRMS),
        DECLARE_GET_FIELD(t_SecularAndHarmonic, fittedParameters),
        DECLARE_GET_FIELD(t_SecularAndHarmonic, harmonicAmplitude),
        DECLARE_SET_FIELD(t_SecularAndHarmonic, maxIter),
        DECLARE_GET_FIELD(t_SecularAndHarmonic, pulsations),
        DECLARE_GET_FIELD(t_SecularAndHarmonic, referenceDate),
        DECLARE_GET_FIELD(t_SecularAndHarmonic, secularDegree),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SecularAndHarmonic__methods_[] = {
        DECLARE_METHOD(t_SecularAndHarmonic, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SecularAndHarmonic, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SecularAndHarmonic, addPoint, METH_VARARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, addWeightedPoint, METH_VARARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, approximateAsPolynomialOnly, METH_VARARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, fit, METH_NOARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, getFittedParameters, METH_NOARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, getHarmonicAmplitude, METH_NOARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, getPulsations, METH_NOARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, getReferenceDate, METH_NOARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, getSecularDegree, METH_NOARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, meanDerivative, METH_VARARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, meanSecondDerivative, METH_VARARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, meanValue, METH_VARARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, osculatingDerivative, METH_O),
        DECLARE_METHOD(t_SecularAndHarmonic, osculatingSecondDerivative, METH_O),
        DECLARE_METHOD(t_SecularAndHarmonic, osculatingValue, METH_O),
        DECLARE_METHOD(t_SecularAndHarmonic, resetFitting, METH_VARARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, setConvergenceRMS, METH_O),
        DECLARE_METHOD(t_SecularAndHarmonic, setMaxIter, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SecularAndHarmonic)[] = {
        { Py_tp_methods, t_SecularAndHarmonic__methods_ },
        { Py_tp_init, (void *) t_SecularAndHarmonic_init_ },
        { Py_tp_getset, t_SecularAndHarmonic__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SecularAndHarmonic)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SecularAndHarmonic, t_SecularAndHarmonic, SecularAndHarmonic);

      void t_SecularAndHarmonic::install(PyObject *module)
      {
        installType(&PY_TYPE(SecularAndHarmonic), &PY_TYPE_DEF(SecularAndHarmonic), module, "SecularAndHarmonic", 0);
      }

      void t_SecularAndHarmonic::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SecularAndHarmonic), "class_", make_descriptor(SecularAndHarmonic::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SecularAndHarmonic), "wrapfn_", make_descriptor(t_SecularAndHarmonic::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SecularAndHarmonic), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SecularAndHarmonic_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SecularAndHarmonic::initializeClass, 1)))
          return NULL;
        return t_SecularAndHarmonic::wrap_Object(SecularAndHarmonic(((t_SecularAndHarmonic *) arg)->object.this$));
      }
      static PyObject *t_SecularAndHarmonic_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SecularAndHarmonic::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SecularAndHarmonic_init_(t_SecularAndHarmonic *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);
        SecularAndHarmonic object((jobject) NULL);

        if (!parseArgs(args, "I[D", &a0, &a1))
        {
          INT_CALL(object = SecularAndHarmonic(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SecularAndHarmonic_addPoint(t_SecularAndHarmonic *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble a1;

        if (!parseArgs(args, "kD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.addPoint(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addPoint", args);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_addWeightedPoint(t_SecularAndHarmonic *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble a1;
        jdouble a2;

        if (!parseArgs(args, "kDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.addWeightedPoint(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addWeightedPoint", args);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_approximateAsPolynomialOnly(t_SecularAndHarmonic *self, PyObject *args)
      {
        jint a0;
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        jint a2;
        jint a3;
        ::org::orekit::time::AbsoluteDate a4((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a5((jobject) NULL);
        jdouble a6;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "IkIIkkD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
        {
          OBJ_CALL(result = self->object.approximateAsPolynomialOnly(a0, a1, a2, a3, a4, a5, a6));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "approximateAsPolynomialOnly", args);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_fit(t_SecularAndHarmonic *self)
      {
        OBJ_CALL(self->object.fit());
        Py_RETURN_NONE;
      }

      static PyObject *t_SecularAndHarmonic_getFittedParameters(t_SecularAndHarmonic *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getFittedParameters());
        return result.wrap();
      }

      static PyObject *t_SecularAndHarmonic_getHarmonicAmplitude(t_SecularAndHarmonic *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getHarmonicAmplitude());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SecularAndHarmonic_getPulsations(t_SecularAndHarmonic *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPulsations());
        return result.wrap();
      }

      static PyObject *t_SecularAndHarmonic_getReferenceDate(t_SecularAndHarmonic *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getReferenceDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_SecularAndHarmonic_getSecularDegree(t_SecularAndHarmonic *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getSecularDegree());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_SecularAndHarmonic_meanDerivative(t_SecularAndHarmonic *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jint a1;
        jint a2;
        jdouble result;

        if (!parseArgs(args, "kII", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.meanDerivative(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "meanDerivative", args);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_meanSecondDerivative(t_SecularAndHarmonic *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jint a1;
        jint a2;
        jdouble result;

        if (!parseArgs(args, "kII", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.meanSecondDerivative(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "meanSecondDerivative", args);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_meanValue(t_SecularAndHarmonic *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jint a1;
        jint a2;
        jdouble result;

        if (!parseArgs(args, "kII", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.meanValue(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "meanValue", args);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_osculatingDerivative(t_SecularAndHarmonic *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.osculatingDerivative(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "osculatingDerivative", arg);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_osculatingSecondDerivative(t_SecularAndHarmonic *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.osculatingSecondDerivative(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "osculatingSecondDerivative", arg);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_osculatingValue(t_SecularAndHarmonic *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.osculatingValue(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "osculatingValue", arg);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_resetFitting(t_SecularAndHarmonic *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "k[D", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.resetFitting(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "resetFitting", args);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_setConvergenceRMS(t_SecularAndHarmonic *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setConvergenceRMS(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setConvergenceRMS", arg);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_setMaxIter(t_SecularAndHarmonic *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setMaxIter(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setMaxIter", arg);
        return NULL;
      }

      static int t_SecularAndHarmonic_set__convergenceRMS(t_SecularAndHarmonic *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setConvergenceRMS(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "convergenceRMS", arg);
        return -1;
      }

      static PyObject *t_SecularAndHarmonic_get__fittedParameters(t_SecularAndHarmonic *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getFittedParameters());
        return value.wrap();
      }

      static PyObject *t_SecularAndHarmonic_get__harmonicAmplitude(t_SecularAndHarmonic *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHarmonicAmplitude());
        return PyFloat_FromDouble((double) value);
      }

      static int t_SecularAndHarmonic_set__maxIter(t_SecularAndHarmonic *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setMaxIter(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "maxIter", arg);
        return -1;
      }

      static PyObject *t_SecularAndHarmonic_get__pulsations(t_SecularAndHarmonic *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPulsations());
        return value.wrap();
      }

      static PyObject *t_SecularAndHarmonic_get__referenceDate(t_SecularAndHarmonic *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getReferenceDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_SecularAndHarmonic_get__secularDegree(t_SecularAndHarmonic *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getSecularDegree());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTThirdBodyDynamicContext.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTThirdBodyDynamicContext::class$ = NULL;
            jmethodID *DSSTThirdBodyDynamicContext::mids$ = NULL;
            bool DSSTThirdBodyDynamicContext::live$ = false;

            jclass DSSTThirdBodyDynamicContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTThirdBodyDynamicContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0c5b54ae7a4af60a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/bodies/CelestialBody;[D)V");
                mids$[mid_getA_b74f83833fdad017] = env->getMethodID(cls, "getA", "()D");
                mids$[mid_getAlpha_b74f83833fdad017] = env->getMethodID(cls, "getAlpha", "()D");
                mids$[mid_getBB_b74f83833fdad017] = env->getMethodID(cls, "getBB", "()D");
                mids$[mid_getBBB_b74f83833fdad017] = env->getMethodID(cls, "getBBB", "()D");
                mids$[mid_getBeta_b74f83833fdad017] = env->getMethodID(cls, "getBeta", "()D");
                mids$[mid_getBoA_b74f83833fdad017] = env->getMethodID(cls, "getBoA", "()D");
                mids$[mid_getBoABpo_b74f83833fdad017] = env->getMethodID(cls, "getBoABpo", "()D");
                mids$[mid_getGamma_b74f83833fdad017] = env->getMethodID(cls, "getGamma", "()D");
                mids$[mid_getHXXX_b74f83833fdad017] = env->getMethodID(cls, "getHXXX", "()D");
                mids$[mid_getKXXX_b74f83833fdad017] = env->getMethodID(cls, "getKXXX", "()D");
                mids$[mid_getM2aoA_b74f83833fdad017] = env->getMethodID(cls, "getM2aoA", "()D");
                mids$[mid_getMCo2AB_b74f83833fdad017] = env->getMethodID(cls, "getMCo2AB", "()D");
                mids$[mid_getMeanMotion_b74f83833fdad017] = env->getMethodID(cls, "getMeanMotion", "()D");
                mids$[mid_getMuoR3_b74f83833fdad017] = env->getMethodID(cls, "getMuoR3", "()D");
                mids$[mid_getOoAB_b74f83833fdad017] = env->getMethodID(cls, "getOoAB", "()D");
                mids$[mid_getR3_b74f83833fdad017] = env->getMethodID(cls, "getR3", "()D");
                mids$[mid_getX_b74f83833fdad017] = env->getMethodID(cls, "getX", "()D");
                mids$[mid_getXX_b74f83833fdad017] = env->getMethodID(cls, "getXX", "()D");
                mids$[mid_getb_b74f83833fdad017] = env->getMethodID(cls, "getb", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTThirdBodyDynamicContext::DSSTThirdBodyDynamicContext(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const ::org::orekit::bodies::CelestialBody & a1, const JArray< jdouble > & a2) : ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext(env->newObject(initializeClass, &mids$, mid_init$_0c5b54ae7a4af60a, a0.this$, a1.this$, a2.this$)) {}

            jdouble DSSTThirdBodyDynamicContext::getA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getA_b74f83833fdad017]);
            }

            jdouble DSSTThirdBodyDynamicContext::getAlpha() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAlpha_b74f83833fdad017]);
            }

            jdouble DSSTThirdBodyDynamicContext::getBB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBB_b74f83833fdad017]);
            }

            jdouble DSSTThirdBodyDynamicContext::getBBB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBBB_b74f83833fdad017]);
            }

            jdouble DSSTThirdBodyDynamicContext::getBeta() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBeta_b74f83833fdad017]);
            }

            jdouble DSSTThirdBodyDynamicContext::getBoA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBoA_b74f83833fdad017]);
            }

            jdouble DSSTThirdBodyDynamicContext::getBoABpo() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBoABpo_b74f83833fdad017]);
            }

            jdouble DSSTThirdBodyDynamicContext::getGamma() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGamma_b74f83833fdad017]);
            }

            jdouble DSSTThirdBodyDynamicContext::getHXXX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getHXXX_b74f83833fdad017]);
            }

            jdouble DSSTThirdBodyDynamicContext::getKXXX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getKXXX_b74f83833fdad017]);
            }

            jdouble DSSTThirdBodyDynamicContext::getM2aoA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getM2aoA_b74f83833fdad017]);
            }

            jdouble DSSTThirdBodyDynamicContext::getMCo2AB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMCo2AB_b74f83833fdad017]);
            }

            jdouble DSSTThirdBodyDynamicContext::getMeanMotion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_b74f83833fdad017]);
            }

            jdouble DSSTThirdBodyDynamicContext::getMuoR3() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMuoR3_b74f83833fdad017]);
            }

            jdouble DSSTThirdBodyDynamicContext::getOoAB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOoAB_b74f83833fdad017]);
            }

            jdouble DSSTThirdBodyDynamicContext::getR3() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getR3_b74f83833fdad017]);
            }

            jdouble DSSTThirdBodyDynamicContext::getX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getX_b74f83833fdad017]);
            }

            jdouble DSSTThirdBodyDynamicContext::getXX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXX_b74f83833fdad017]);
            }

            jdouble DSSTThirdBodyDynamicContext::getb() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getb_b74f83833fdad017]);
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
            static PyObject *t_DSSTThirdBodyDynamicContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTThirdBodyDynamicContext_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTThirdBodyDynamicContext_init_(t_DSSTThirdBodyDynamicContext *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTThirdBodyDynamicContext_getA(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getAlpha(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getBB(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getBBB(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getBeta(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getBoA(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getBoABpo(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getGamma(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getHXXX(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getKXXX(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getM2aoA(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getMCo2AB(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getMeanMotion(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getMuoR3(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getOoAB(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getR3(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getX(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getXX(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getb(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__a(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__alpha(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__b(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__bB(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__bBB(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__beta(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__boA(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__boABpo(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__gamma(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__hXXX(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__kXXX(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__m2aoA(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__mCo2AB(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__meanMotion(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__muoR3(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__ooAB(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__r3(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__x(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__xX(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyGetSetDef t_DSSTThirdBodyDynamicContext__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, a),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, alpha),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, b),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, bB),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, bBB),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, beta),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, boA),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, boABpo),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, gamma),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, hXXX),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, kXXX),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, m2aoA),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, mCo2AB),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, meanMotion),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, muoR3),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, ooAB),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, r3),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, x),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, xX),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTThirdBodyDynamicContext__methods_[] = {
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getA, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getAlpha, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getBB, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getBBB, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getBeta, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getBoA, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getBoABpo, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getGamma, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getHXXX, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getKXXX, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getM2aoA, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getMCo2AB, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getMuoR3, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getOoAB, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getR3, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getX, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getXX, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getb, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTThirdBodyDynamicContext)[] = {
              { Py_tp_methods, t_DSSTThirdBodyDynamicContext__methods_ },
              { Py_tp_init, (void *) t_DSSTThirdBodyDynamicContext_init_ },
              { Py_tp_getset, t_DSSTThirdBodyDynamicContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTThirdBodyDynamicContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext),
              NULL
            };

            DEFINE_TYPE(DSSTThirdBodyDynamicContext, t_DSSTThirdBodyDynamicContext, DSSTThirdBodyDynamicContext);

            void t_DSSTThirdBodyDynamicContext::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTThirdBodyDynamicContext), &PY_TYPE_DEF(DSSTThirdBodyDynamicContext), module, "DSSTThirdBodyDynamicContext", 0);
            }

            void t_DSSTThirdBodyDynamicContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBodyDynamicContext), "class_", make_descriptor(DSSTThirdBodyDynamicContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBodyDynamicContext), "wrapfn_", make_descriptor(t_DSSTThirdBodyDynamicContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBodyDynamicContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTThirdBodyDynamicContext::initializeClass, 1)))
                return NULL;
              return t_DSSTThirdBodyDynamicContext::wrap_Object(DSSTThirdBodyDynamicContext(((t_DSSTThirdBodyDynamicContext *) arg)->object.this$));
            }
            static PyObject *t_DSSTThirdBodyDynamicContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTThirdBodyDynamicContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTThirdBodyDynamicContext_init_(t_DSSTThirdBodyDynamicContext *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a0((jobject) NULL);
              ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
              JArray< jdouble > a2((jobject) NULL);
              DSSTThirdBodyDynamicContext object((jobject) NULL);

              if (!parseArgs(args, "kk[D", ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = DSSTThirdBodyDynamicContext(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getA(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getAlpha(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAlpha());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getBB(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getBBB(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBBB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getBeta(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBeta());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getBoA(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBoA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getBoABpo(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBoABpo());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getGamma(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getGamma());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getHXXX(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getHXXX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getKXXX(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getKXXX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getM2aoA(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getM2aoA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getMCo2AB(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMCo2AB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getMeanMotion(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getMuoR3(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMuoR3());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getOoAB(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOoAB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getR3(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getR3());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getX(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getXX(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getb(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getb());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__a(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getA());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__alpha(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAlpha());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__b(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getb());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__bB(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__bBB(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBBB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__beta(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBeta());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__boA(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBoA());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__boABpo(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBoABpo());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__gamma(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getGamma());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__hXXX(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getHXXX());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__kXXX(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getKXXX());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__m2aoA(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getM2aoA());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__mCo2AB(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMCo2AB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__meanMotion(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__muoR3(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMuoR3());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__ooAB(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOoAB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__r3(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getR3());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__x(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getX());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__xX(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXX());
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
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/Chan1997.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *Chan1997::class$ = NULL;
              jmethodID *Chan1997::mids$ = NULL;
              bool Chan1997::live$ = false;

              jclass Chan1997::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/Chan1997");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_compute_a73e6347f5238a63] = env->getMethodID(cls, "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_11689cd07cf55453] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_getType_8397a286d982b383] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Chan1997::Chan1997() : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              ::org::orekit::ssa::metrics::ProbabilityOfCollision Chan1997::compute(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_a73e6347f5238a63], a0, a1, a2, a3, a4));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision Chan1997::compute(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_11689cd07cf55453], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
              }

              ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType Chan1997::getType() const
              {
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType(env->callObjectMethod(this$, mids$[mid_getType_8397a286d982b383]));
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
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {
              static PyObject *t_Chan1997_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Chan1997_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Chan1997_init_(t_Chan1997 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Chan1997_compute(t_Chan1997 *self, PyObject *args);
              static PyObject *t_Chan1997_getType(t_Chan1997 *self, PyObject *args);
              static PyObject *t_Chan1997_get__type(t_Chan1997 *self, void *data);
              static PyGetSetDef t_Chan1997__fields_[] = {
                DECLARE_GET_FIELD(t_Chan1997, type),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Chan1997__methods_[] = {
                DECLARE_METHOD(t_Chan1997, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Chan1997, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Chan1997, compute, METH_VARARGS),
                DECLARE_METHOD(t_Chan1997, getType, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Chan1997)[] = {
                { Py_tp_methods, t_Chan1997__methods_ },
                { Py_tp_init, (void *) t_Chan1997_init_ },
                { Py_tp_getset, t_Chan1997__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Chan1997)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod),
                NULL
              };

              DEFINE_TYPE(Chan1997, t_Chan1997, Chan1997);

              void t_Chan1997::install(PyObject *module)
              {
                installType(&PY_TYPE(Chan1997), &PY_TYPE_DEF(Chan1997), module, "Chan1997", 0);
              }

              void t_Chan1997::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Chan1997), "class_", make_descriptor(Chan1997::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Chan1997), "wrapfn_", make_descriptor(t_Chan1997::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Chan1997), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Chan1997_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Chan1997::initializeClass, 1)))
                  return NULL;
                return t_Chan1997::wrap_Object(Chan1997(((t_Chan1997 *) arg)->object.this$));
              }
              static PyObject *t_Chan1997_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Chan1997::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Chan1997_init_(t_Chan1997 *self, PyObject *args, PyObject *kwds)
              {
                Chan1997 object((jobject) NULL);

                INT_CALL(object = Chan1997());
                self->object = object;

                return 0;
              }

              static PyObject *t_Chan1997_compute(t_Chan1997 *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 5:
                  {
                    jdouble a0;
                    jdouble a1;
                    jdouble a2;
                    jdouble a3;
                    jdouble a4;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "DDDDD", &a0, &a1, &a2, &a3, &a4))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                    PyTypeObject **p4;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                }

                return callSuper(PY_TYPE(Chan1997), (PyObject *) self, "compute", args, 2);
              }

              static PyObject *t_Chan1997_getType(t_Chan1997 *self, PyObject *args)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getType());
                  return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(result);
                }

                return callSuper(PY_TYPE(Chan1997), (PyObject *) self, "getType", args, 2);
              }

              static PyObject *t_Chan1997_get__type(t_Chan1997 *self, void *data)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType value((jobject) NULL);
                OBJ_CALL(value = self->object.getType());
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(value);
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
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/ParameterValidator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *ParameterValidator::class$ = NULL;
            jmethodID *ParameterValidator::mids$ = NULL;
            bool ParameterValidator::live$ = false;

            jclass ParameterValidator::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/ParameterValidator");

                mids$ = new jmethodID[max_mid];
                mids$[mid_validate_d5f1d017fd25113b] = env->getMethodID(cls, "validate", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::linear::RealVector ParameterValidator::validate(const ::org::hipparchus::linear::RealVector & a0) const
            {
              return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_validate_d5f1d017fd25113b], a0.this$));
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
            static PyObject *t_ParameterValidator_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParameterValidator_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParameterValidator_validate(t_ParameterValidator *self, PyObject *arg);

            static PyMethodDef t_ParameterValidator__methods_[] = {
              DECLARE_METHOD(t_ParameterValidator, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParameterValidator, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParameterValidator, validate, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParameterValidator)[] = {
              { Py_tp_methods, t_ParameterValidator__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParameterValidator)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParameterValidator, t_ParameterValidator, ParameterValidator);

            void t_ParameterValidator::install(PyObject *module)
            {
              installType(&PY_TYPE(ParameterValidator), &PY_TYPE_DEF(ParameterValidator), module, "ParameterValidator", 0);
            }

            void t_ParameterValidator::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterValidator), "class_", make_descriptor(ParameterValidator::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterValidator), "wrapfn_", make_descriptor(t_ParameterValidator::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterValidator), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParameterValidator_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParameterValidator::initializeClass, 1)))
                return NULL;
              return t_ParameterValidator::wrap_Object(ParameterValidator(((t_ParameterValidator *) arg)->object.this$));
            }
            static PyObject *t_ParameterValidator_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParameterValidator::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParameterValidator_validate(t_ParameterValidator *self, PyObject *arg)
            {
              ::org::hipparchus::linear::RealVector a0((jobject) NULL);
              ::org::hipparchus::linear::RealVector result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.validate(a0));
                return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "validate", arg);
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
#include "org/orekit/propagation/events/EventShifter.h"
#include "org/orekit/propagation/events/EventShifter.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EventShifter::class$ = NULL;
        jmethodID *EventShifter::mids$ = NULL;
        bool EventShifter::live$ = false;

        jclass EventShifter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EventShifter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_22b333117b3e805e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/EventDetector;ZDD)V");
            mids$[mid_g_a17ea857ce74d258] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getDecreasingTimeShift_b74f83833fdad017] = env->getMethodID(cls, "getDecreasingTimeShift", "()D");
            mids$[mid_getDetector_9ada55f07f5a223c] = env->getMethodID(cls, "getDetector", "()Lorg/orekit/propagation/events/EventDetector;");
            mids$[mid_getIncreasingTimeShift_b74f83833fdad017] = env->getMethodID(cls, "getIncreasingTimeShift", "()D");
            mids$[mid_init_2d7f9a496c7e9781] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_create_f480106a3072748e] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/EventShifter;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EventShifter::EventShifter(const ::org::orekit::propagation::events::EventDetector & a0, jboolean a1, jdouble a2, jdouble a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_22b333117b3e805e, a0.this$, a1, a2, a3)) {}

        jdouble EventShifter::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_a17ea857ce74d258], a0.this$);
        }

        jdouble EventShifter::getDecreasingTimeShift() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDecreasingTimeShift_b74f83833fdad017]);
        }

        ::org::orekit::propagation::events::EventDetector EventShifter::getDetector() const
        {
          return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_9ada55f07f5a223c]));
        }

        jdouble EventShifter::getIncreasingTimeShift() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getIncreasingTimeShift_b74f83833fdad017]);
        }

        void EventShifter::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_2d7f9a496c7e9781], a0.this$, a1.this$);
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
        static PyObject *t_EventShifter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventShifter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventShifter_of_(t_EventShifter *self, PyObject *args);
        static int t_EventShifter_init_(t_EventShifter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EventShifter_g(t_EventShifter *self, PyObject *args);
        static PyObject *t_EventShifter_getDecreasingTimeShift(t_EventShifter *self);
        static PyObject *t_EventShifter_getDetector(t_EventShifter *self);
        static PyObject *t_EventShifter_getIncreasingTimeShift(t_EventShifter *self);
        static PyObject *t_EventShifter_init(t_EventShifter *self, PyObject *args);
        static PyObject *t_EventShifter_get__decreasingTimeShift(t_EventShifter *self, void *data);
        static PyObject *t_EventShifter_get__detector(t_EventShifter *self, void *data);
        static PyObject *t_EventShifter_get__increasingTimeShift(t_EventShifter *self, void *data);
        static PyObject *t_EventShifter_get__parameters_(t_EventShifter *self, void *data);
        static PyGetSetDef t_EventShifter__fields_[] = {
          DECLARE_GET_FIELD(t_EventShifter, decreasingTimeShift),
          DECLARE_GET_FIELD(t_EventShifter, detector),
          DECLARE_GET_FIELD(t_EventShifter, increasingTimeShift),
          DECLARE_GET_FIELD(t_EventShifter, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventShifter__methods_[] = {
          DECLARE_METHOD(t_EventShifter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventShifter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventShifter, of_, METH_VARARGS),
          DECLARE_METHOD(t_EventShifter, g, METH_VARARGS),
          DECLARE_METHOD(t_EventShifter, getDecreasingTimeShift, METH_NOARGS),
          DECLARE_METHOD(t_EventShifter, getDetector, METH_NOARGS),
          DECLARE_METHOD(t_EventShifter, getIncreasingTimeShift, METH_NOARGS),
          DECLARE_METHOD(t_EventShifter, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventShifter)[] = {
          { Py_tp_methods, t_EventShifter__methods_ },
          { Py_tp_init, (void *) t_EventShifter_init_ },
          { Py_tp_getset, t_EventShifter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventShifter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(EventShifter, t_EventShifter, EventShifter);
        PyObject *t_EventShifter::wrap_Object(const EventShifter& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventShifter::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventShifter *self = (t_EventShifter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EventShifter::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventShifter::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventShifter *self = (t_EventShifter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EventShifter::install(PyObject *module)
        {
          installType(&PY_TYPE(EventShifter), &PY_TYPE_DEF(EventShifter), module, "EventShifter", 0);
        }

        void t_EventShifter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventShifter), "class_", make_descriptor(EventShifter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventShifter), "wrapfn_", make_descriptor(t_EventShifter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventShifter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventShifter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventShifter::initializeClass, 1)))
            return NULL;
          return t_EventShifter::wrap_Object(EventShifter(((t_EventShifter *) arg)->object.this$));
        }
        static PyObject *t_EventShifter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventShifter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EventShifter_of_(t_EventShifter *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EventShifter_init_(t_EventShifter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
          jboolean a1;
          jdouble a2;
          jdouble a3;
          EventShifter object((jobject) NULL);

          if (!parseArgs(args, "kZDD", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = EventShifter(a0, a1, a2, a3));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(EventShifter);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EventShifter_g(t_EventShifter *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EventShifter), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_EventShifter_getDecreasingTimeShift(t_EventShifter *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDecreasingTimeShift());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EventShifter_getDetector(t_EventShifter *self)
        {
          ::org::orekit::propagation::events::EventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetector());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(result);
        }

        static PyObject *t_EventShifter_getIncreasingTimeShift(t_EventShifter *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getIncreasingTimeShift());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EventShifter_init(t_EventShifter *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(EventShifter), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_EventShifter_get__parameters_(t_EventShifter *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EventShifter_get__decreasingTimeShift(t_EventShifter *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDecreasingTimeShift());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EventShifter_get__detector(t_EventShifter *self, void *data)
        {
          ::org::orekit::propagation::events::EventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetector());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(value);
        }

        static PyObject *t_EventShifter_get__increasingTimeShift(t_EventShifter *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getIncreasingTimeShift());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PVCoordinatesProvider::class$ = NULL;
      jmethodID *PVCoordinatesProvider::mids$ = NULL;
      bool PVCoordinatesProvider::live$ = false;

      jclass PVCoordinatesProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PVCoordinatesProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getPVCoordinates_e5d15ef236cd9ffe] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPosition_42ef2ff6aede2782] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::utils::TimeStampedPVCoordinates PVCoordinatesProvider::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_e5d15ef236cd9ffe], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D PVCoordinatesProvider::getPosition(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_42ef2ff6aede2782], a0.this$, a1.this$));
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
      static PyObject *t_PVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PVCoordinatesProvider_getPVCoordinates(t_PVCoordinatesProvider *self, PyObject *args);
      static PyObject *t_PVCoordinatesProvider_getPosition(t_PVCoordinatesProvider *self, PyObject *args);

      static PyMethodDef t_PVCoordinatesProvider__methods_[] = {
        DECLARE_METHOD(t_PVCoordinatesProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PVCoordinatesProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PVCoordinatesProvider, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_PVCoordinatesProvider, getPosition, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PVCoordinatesProvider)[] = {
        { Py_tp_methods, t_PVCoordinatesProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PVCoordinatesProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PVCoordinatesProvider, t_PVCoordinatesProvider, PVCoordinatesProvider);

      void t_PVCoordinatesProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PVCoordinatesProvider), &PY_TYPE_DEF(PVCoordinatesProvider), module, "PVCoordinatesProvider", 0);
      }

      void t_PVCoordinatesProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PVCoordinatesProvider), "class_", make_descriptor(PVCoordinatesProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PVCoordinatesProvider), "wrapfn_", make_descriptor(t_PVCoordinatesProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PVCoordinatesProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PVCoordinatesProvider::initializeClass, 1)))
          return NULL;
        return t_PVCoordinatesProvider::wrap_Object(PVCoordinatesProvider(((t_PVCoordinatesProvider *) arg)->object.this$));
      }
      static PyObject *t_PVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PVCoordinatesProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PVCoordinatesProvider_getPVCoordinates(t_PVCoordinatesProvider *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
          return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_PVCoordinatesProvider_getPosition(t_PVCoordinatesProvider *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.getPosition(a0, a1));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPosition", args);
        return NULL;
      }
    }
  }
}
