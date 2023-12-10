#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/hipparchus/exception/Localizable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace exception {

      ::java::lang::Class *MathIllegalArgumentException::class$ = NULL;
      jmethodID *MathIllegalArgumentException::mids$ = NULL;
      bool MathIllegalArgumentException::live$ = false;

      jclass MathIllegalArgumentException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/exception/MathIllegalArgumentException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3d6784947cb48668] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_init$_ca997976b075d32c] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MathIllegalArgumentException::MathIllegalArgumentException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::org::hipparchus::exception::MathRuntimeException(env->newObject(initializeClass, &mids$, mid_init$_3d6784947cb48668, a0.this$, a1.this$)) {}

      MathIllegalArgumentException::MathIllegalArgumentException(const ::java::lang::Throwable & a0, const ::org::hipparchus::exception::Localizable & a1, const JArray< ::java::lang::Object > & a2) : ::org::hipparchus::exception::MathRuntimeException(env->newObject(initializeClass, &mids$, mid_init$_ca997976b075d32c, a0.this$, a1.this$, a2.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      static PyObject *t_MathIllegalArgumentException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathIllegalArgumentException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_MathIllegalArgumentException_init_(t_MathIllegalArgumentException *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_MathIllegalArgumentException__methods_[] = {
        DECLARE_METHOD(t_MathIllegalArgumentException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathIllegalArgumentException, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MathIllegalArgumentException)[] = {
        { Py_tp_methods, t_MathIllegalArgumentException__methods_ },
        { Py_tp_init, (void *) t_MathIllegalArgumentException_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MathIllegalArgumentException)[] = {
        &PY_TYPE_DEF(::org::hipparchus::exception::MathRuntimeException),
        NULL
      };

      DEFINE_TYPE(MathIllegalArgumentException, t_MathIllegalArgumentException, MathIllegalArgumentException);

      void t_MathIllegalArgumentException::install(PyObject *module)
      {
        installType(&PY_TYPE(MathIllegalArgumentException), &PY_TYPE_DEF(MathIllegalArgumentException), module, "MathIllegalArgumentException", 0);
      }

      void t_MathIllegalArgumentException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathIllegalArgumentException), "class_", make_descriptor(MathIllegalArgumentException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathIllegalArgumentException), "wrapfn_", make_descriptor(t_MathIllegalArgumentException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathIllegalArgumentException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MathIllegalArgumentException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MathIllegalArgumentException::initializeClass, 1)))
          return NULL;
        return t_MathIllegalArgumentException::wrap_Object(MathIllegalArgumentException(((t_MathIllegalArgumentException *) arg)->object.this$));
      }
      static PyObject *t_MathIllegalArgumentException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MathIllegalArgumentException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_MathIllegalArgumentException_init_(t_MathIllegalArgumentException *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::exception::Localizable a0((jobject) NULL);
            JArray< ::java::lang::Object > a1((jobject) NULL);
            MathIllegalArgumentException object((jobject) NULL);

            if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
            {
              INT_CALL(object = MathIllegalArgumentException(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::java::lang::Throwable a0((jobject) NULL);
            ::org::hipparchus::exception::Localizable a1((jobject) NULL);
            JArray< ::java::lang::Object > a2((jobject) NULL);
            MathIllegalArgumentException object((jobject) NULL);

            if (!parseArgs(args, "kk[o", ::java::lang::Throwable::initializeClass, ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = MathIllegalArgumentException(a0, a1, a2));
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
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Inertia.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *Inertia::class$ = NULL;
              jmethodID *Inertia::mids$ = NULL;
              bool Inertia::live$ = false;

              jclass Inertia::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/Inertia");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getFrame_aa70fdb14ae9305f] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getInertiaMatrix_7116bbecdd8ceb21] = env->getMethodID(cls, "getInertiaMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                  mids$[mid_setFrame_a455f3ff24eb0b47] = env->getMethodID(cls, "setFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setInertiaMatrixEntry_78e41e7b5124a628] = env->getMethodID(cls, "setInertiaMatrixEntry", "(IID)V");
                  mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Inertia::Inertia() : ::org::orekit::files::ccsds::ndm::CommonPhysicalProperties(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              ::org::orekit::files::ccsds::definitions::FrameFacade Inertia::getFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getFrame_aa70fdb14ae9305f]));
              }

              ::org::hipparchus::linear::RealMatrix Inertia::getInertiaMatrix() const
              {
                return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getInertiaMatrix_7116bbecdd8ceb21]));
              }

              void Inertia::setFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFrame_a455f3ff24eb0b47], a0.this$);
              }

              void Inertia::setInertiaMatrixEntry(jint a0, jint a1, jdouble a2) const
              {
                env->callVoidMethod(this$, mids$[mid_setInertiaMatrixEntry_78e41e7b5124a628], a0, a1, a2);
              }

              void Inertia::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_77e0f9a1f260e2e5], a0);
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
            namespace apm {
              static PyObject *t_Inertia_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Inertia_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Inertia_init_(t_Inertia *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Inertia_getFrame(t_Inertia *self);
              static PyObject *t_Inertia_getInertiaMatrix(t_Inertia *self);
              static PyObject *t_Inertia_setFrame(t_Inertia *self, PyObject *arg);
              static PyObject *t_Inertia_setInertiaMatrixEntry(t_Inertia *self, PyObject *args);
              static PyObject *t_Inertia_validate(t_Inertia *self, PyObject *args);
              static PyObject *t_Inertia_get__frame(t_Inertia *self, void *data);
              static int t_Inertia_set__frame(t_Inertia *self, PyObject *arg, void *data);
              static PyObject *t_Inertia_get__inertiaMatrix(t_Inertia *self, void *data);
              static PyGetSetDef t_Inertia__fields_[] = {
                DECLARE_GETSET_FIELD(t_Inertia, frame),
                DECLARE_GET_FIELD(t_Inertia, inertiaMatrix),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Inertia__methods_[] = {
                DECLARE_METHOD(t_Inertia, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Inertia, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Inertia, getFrame, METH_NOARGS),
                DECLARE_METHOD(t_Inertia, getInertiaMatrix, METH_NOARGS),
                DECLARE_METHOD(t_Inertia, setFrame, METH_O),
                DECLARE_METHOD(t_Inertia, setInertiaMatrixEntry, METH_VARARGS),
                DECLARE_METHOD(t_Inertia, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Inertia)[] = {
                { Py_tp_methods, t_Inertia__methods_ },
                { Py_tp_init, (void *) t_Inertia_init_ },
                { Py_tp_getset, t_Inertia__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Inertia)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::CommonPhysicalProperties),
                NULL
              };

              DEFINE_TYPE(Inertia, t_Inertia, Inertia);

              void t_Inertia::install(PyObject *module)
              {
                installType(&PY_TYPE(Inertia), &PY_TYPE_DEF(Inertia), module, "Inertia", 0);
              }

              void t_Inertia::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Inertia), "class_", make_descriptor(Inertia::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Inertia), "wrapfn_", make_descriptor(t_Inertia::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Inertia), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Inertia_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Inertia::initializeClass, 1)))
                  return NULL;
                return t_Inertia::wrap_Object(Inertia(((t_Inertia *) arg)->object.this$));
              }
              static PyObject *t_Inertia_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Inertia::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Inertia_init_(t_Inertia *self, PyObject *args, PyObject *kwds)
              {
                Inertia object((jobject) NULL);

                INT_CALL(object = Inertia());
                self->object = object;

                return 0;
              }

              static PyObject *t_Inertia_getFrame(t_Inertia *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_Inertia_getInertiaMatrix(t_Inertia *self)
              {
                ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.getInertiaMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }

              static PyObject *t_Inertia_setFrame(t_Inertia *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFrame", arg);
                return NULL;
              }

              static PyObject *t_Inertia_setInertiaMatrixEntry(t_Inertia *self, PyObject *args)
              {
                jint a0;
                jint a1;
                jdouble a2;

                if (!parseArgs(args, "IID", &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.setInertiaMatrixEntry(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInertiaMatrixEntry", args);
                return NULL;
              }

              static PyObject *t_Inertia_validate(t_Inertia *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(Inertia), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_Inertia_get__frame(t_Inertia *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_Inertia_set__frame(t_Inertia *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "frame", arg);
                return -1;
              }

              static PyObject *t_Inertia_get__inertiaMatrix(t_Inertia *self, void *data)
              {
                ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
                OBJ_CALL(value = self->object.getInertiaMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
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
#include "org/orekit/files/general/PythonEphemerisFile.h"
#include "java/util/Map.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/general/EphemerisFile$SatelliteEphemeris.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *PythonEphemerisFile::class$ = NULL;
        jmethodID *PythonEphemerisFile::mids$ = NULL;
        bool PythonEphemerisFile::live$ = false;

        jclass PythonEphemerisFile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/PythonEphemerisFile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getSatellites_d6753b7055940a54] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEphemerisFile::PythonEphemerisFile() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonEphemerisFile::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonEphemerisFile::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonEphemerisFile::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
        static PyObject *t_PythonEphemerisFile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEphemerisFile_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonEphemerisFile_init_(t_PythonEphemerisFile *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEphemerisFile_finalize(t_PythonEphemerisFile *self);
        static PyObject *t_PythonEphemerisFile_pythonExtension(t_PythonEphemerisFile *self, PyObject *args);
        static jobject JNICALL t_PythonEphemerisFile_getSatellites0(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonEphemerisFile_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonEphemerisFile_get__self(t_PythonEphemerisFile *self, void *data);
        static PyGetSetDef t_PythonEphemerisFile__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEphemerisFile, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEphemerisFile__methods_[] = {
          DECLARE_METHOD(t_PythonEphemerisFile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEphemerisFile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEphemerisFile, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEphemerisFile, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEphemerisFile)[] = {
          { Py_tp_methods, t_PythonEphemerisFile__methods_ },
          { Py_tp_init, (void *) t_PythonEphemerisFile_init_ },
          { Py_tp_getset, t_PythonEphemerisFile__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEphemerisFile)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEphemerisFile, t_PythonEphemerisFile, PythonEphemerisFile);

        void t_PythonEphemerisFile::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEphemerisFile), &PY_TYPE_DEF(PythonEphemerisFile), module, "PythonEphemerisFile", 1);
        }

        void t_PythonEphemerisFile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisFile), "class_", make_descriptor(PythonEphemerisFile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisFile), "wrapfn_", make_descriptor(t_PythonEphemerisFile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisFile), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEphemerisFile::initializeClass);
          JNINativeMethod methods[] = {
            { "getSatellites", "()Ljava/util/Map;", (void *) t_PythonEphemerisFile_getSatellites0 },
            { "pythonDecRef", "()V", (void *) t_PythonEphemerisFile_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonEphemerisFile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEphemerisFile::initializeClass, 1)))
            return NULL;
          return t_PythonEphemerisFile::wrap_Object(PythonEphemerisFile(((t_PythonEphemerisFile *) arg)->object.this$));
        }
        static PyObject *t_PythonEphemerisFile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEphemerisFile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonEphemerisFile_init_(t_PythonEphemerisFile *self, PyObject *args, PyObject *kwds)
        {
          PythonEphemerisFile object((jobject) NULL);

          INT_CALL(object = PythonEphemerisFile());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEphemerisFile_finalize(t_PythonEphemerisFile *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEphemerisFile_pythonExtension(t_PythonEphemerisFile *self, PyObject *args)
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

        static jobject JNICALL t_PythonEphemerisFile_getSatellites0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEphemerisFile::mids$[PythonEphemerisFile::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::Map value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getSatellites", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::Map::initializeClass, &value))
          {
            throwTypeError("getSatellites", result);
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

        static void JNICALL t_PythonEphemerisFile_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEphemerisFile::mids$[PythonEphemerisFile::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEphemerisFile::mids$[PythonEphemerisFile::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonEphemerisFile_get__self(t_PythonEphemerisFile *self, void *data)
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
#include "org/orekit/frames/StaticTransform.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/frames/StaticTransform.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/orekit/time/AbsoluteDate.h"
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
          mids$[mid_compose_9cc4c308b30c4347] = env->getStaticMethodID(cls, "compose", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/StaticTransform;Lorg/orekit/frames/StaticTransform;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_compositeRotation_8d24f716dff864dd] = env->getStaticMethodID(cls, "compositeRotation", "(Lorg/orekit/frames/StaticTransform;Lorg/orekit/frames/StaticTransform;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_compositeTranslation_3477dd066ed5954b] = env->getStaticMethodID(cls, "compositeTranslation", "(Lorg/orekit/frames/StaticTransform;Lorg/orekit/frames/StaticTransform;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getIdentity_85643104a022b593] = env->getStaticMethodID(cls, "getIdentity", "()Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getInverse_85643104a022b593] = env->getMethodID(cls, "getInverse", "()Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getRotation_24d2e432e376f9a0] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getTranslation_17a952530a808943] = env->getMethodID(cls, "getTranslation", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_of_3ede0c963b9ef830] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Rotation;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_of_54b6c6b3a96b6dd2] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_of_cd1da3ccebfd8543] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Rotation;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_transformLine_4ef7d9e66a21640e] = env->getMethodID(cls, "transformLine", "(Lorg/hipparchus/geometry/euclidean/threed/Line;)Lorg/hipparchus/geometry/euclidean/threed/Line;");
          mids$[mid_transformPosition_8ff2edc0ecba4b6e] = env->getMethodID(cls, "transformPosition", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_transformPosition_afd63a09f6d01e4c] = env->getMethodID(cls, "transformPosition", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_transformVector_8ff2edc0ecba4b6e] = env->getMethodID(cls, "transformVector", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_transformVector_afd63a09f6d01e4c] = env->getMethodID(cls, "transformVector", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      StaticTransform StaticTransform::compose(const ::org::orekit::time::AbsoluteDate & a0, const StaticTransform & a1, const StaticTransform & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return StaticTransform(env->callStaticObjectMethod(cls, mids$[mid_compose_9cc4c308b30c4347], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation StaticTransform::compositeRotation(const StaticTransform & a0, const StaticTransform & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callStaticObjectMethod(cls, mids$[mid_compositeRotation_8d24f716dff864dd], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D StaticTransform::compositeTranslation(const StaticTransform & a0, const StaticTransform & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callStaticObjectMethod(cls, mids$[mid_compositeTranslation_3477dd066ed5954b], a0.this$, a1.this$));
      }

      StaticTransform StaticTransform::getIdentity()
      {
        jclass cls = env->getClass(initializeClass);
        return StaticTransform(env->callStaticObjectMethod(cls, mids$[mid_getIdentity_85643104a022b593]));
      }

      StaticTransform StaticTransform::getInverse() const
      {
        return StaticTransform(env->callObjectMethod(this$, mids$[mid_getInverse_85643104a022b593]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation StaticTransform::getRotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getRotation_24d2e432e376f9a0]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D StaticTransform::getTranslation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getTranslation_17a952530a808943]));
      }

      StaticTransform StaticTransform::of(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return StaticTransform(env->callStaticObjectMethod(cls, mids$[mid_of_3ede0c963b9ef830], a0.this$, a1.this$));
      }

      StaticTransform StaticTransform::of(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return StaticTransform(env->callStaticObjectMethod(cls, mids$[mid_of_54b6c6b3a96b6dd2], a0.this$, a1.this$));
      }

      StaticTransform StaticTransform::of(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return StaticTransform(env->callStaticObjectMethod(cls, mids$[mid_of_cd1da3ccebfd8543], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Line StaticTransform::transformLine(const ::org::hipparchus::geometry::euclidean::threed::Line & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Line(env->callObjectMethod(this$, mids$[mid_transformLine_4ef7d9e66a21640e], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D StaticTransform::transformPosition(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformPosition_8ff2edc0ecba4b6e], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D StaticTransform::transformPosition(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transformPosition_afd63a09f6d01e4c], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D StaticTransform::transformVector(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformVector_8ff2edc0ecba4b6e], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D StaticTransform::transformVector(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transformVector_afd63a09f6d01e4c], a0.this$));
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
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedStringConsumer.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$IndexedStringConsumer::class$ = NULL;
            jmethodID *ParseToken$IndexedStringConsumer::mids$ = NULL;
            bool ParseToken$IndexedStringConsumer::live$ = false;

            jclass ParseToken$IndexedStringConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedStringConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_46ad99eaf34b9cef] = env->getMethodID(cls, "accept", "(ILjava/lang/String;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$IndexedStringConsumer::accept(jint a0, const ::java::lang::String & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_46ad99eaf34b9cef], a0, a1.this$);
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
          namespace lexical {
            static PyObject *t_ParseToken$IndexedStringConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IndexedStringConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IndexedStringConsumer_accept(t_ParseToken$IndexedStringConsumer *self, PyObject *args);

            static PyMethodDef t_ParseToken$IndexedStringConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$IndexedStringConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IndexedStringConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IndexedStringConsumer, accept, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$IndexedStringConsumer)[] = {
              { Py_tp_methods, t_ParseToken$IndexedStringConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$IndexedStringConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$IndexedStringConsumer, t_ParseToken$IndexedStringConsumer, ParseToken$IndexedStringConsumer);

            void t_ParseToken$IndexedStringConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$IndexedStringConsumer), &PY_TYPE_DEF(ParseToken$IndexedStringConsumer), module, "ParseToken$IndexedStringConsumer", 0);
            }

            void t_ParseToken$IndexedStringConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedStringConsumer), "class_", make_descriptor(ParseToken$IndexedStringConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedStringConsumer), "wrapfn_", make_descriptor(t_ParseToken$IndexedStringConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedStringConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$IndexedStringConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$IndexedStringConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$IndexedStringConsumer::wrap_Object(ParseToken$IndexedStringConsumer(((t_ParseToken$IndexedStringConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$IndexedStringConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$IndexedStringConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$IndexedStringConsumer_accept(t_ParseToken$IndexedStringConsumer *self, PyObject *args)
            {
              jint a0;
              ::java::lang::String a1((jobject) NULL);

              if (!parseArgs(args, "Is", &a0, &a1))
              {
                OBJ_CALL(self->object.accept(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", args);
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
#include "org/orekit/estimation/measurements/generation/OneWayGNSSRangeBuilder.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/util/Map.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSRange.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *OneWayGNSSRangeBuilder::class$ = NULL;
          jmethodID *OneWayGNSSRangeBuilder::mids$ = NULL;
          bool OneWayGNSSRangeBuilder::live$ = false;

          jclass OneWayGNSSRangeBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/OneWayGNSSRangeBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_build_fded91c16db00082] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/gnss/OneWayGNSSRange;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::estimation::measurements::gnss::OneWayGNSSRange OneWayGNSSRangeBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::gnss::OneWayGNSSRange(env->callObjectMethod(this$, mids$[mid_build_fded91c16db00082], a0.this$, a1.this$));
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
          static PyObject *t_OneWayGNSSRangeBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OneWayGNSSRangeBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OneWayGNSSRangeBuilder_of_(t_OneWayGNSSRangeBuilder *self, PyObject *args);
          static PyObject *t_OneWayGNSSRangeBuilder_build(t_OneWayGNSSRangeBuilder *self, PyObject *args);
          static PyObject *t_OneWayGNSSRangeBuilder_get__parameters_(t_OneWayGNSSRangeBuilder *self, void *data);
          static PyGetSetDef t_OneWayGNSSRangeBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_OneWayGNSSRangeBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OneWayGNSSRangeBuilder__methods_[] = {
            DECLARE_METHOD(t_OneWayGNSSRangeBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSRangeBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSRangeBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_OneWayGNSSRangeBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OneWayGNSSRangeBuilder)[] = {
            { Py_tp_methods, t_OneWayGNSSRangeBuilder__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_OneWayGNSSRangeBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OneWayGNSSRangeBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(OneWayGNSSRangeBuilder, t_OneWayGNSSRangeBuilder, OneWayGNSSRangeBuilder);
          PyObject *t_OneWayGNSSRangeBuilder::wrap_Object(const OneWayGNSSRangeBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OneWayGNSSRangeBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OneWayGNSSRangeBuilder *self = (t_OneWayGNSSRangeBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_OneWayGNSSRangeBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OneWayGNSSRangeBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OneWayGNSSRangeBuilder *self = (t_OneWayGNSSRangeBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_OneWayGNSSRangeBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(OneWayGNSSRangeBuilder), &PY_TYPE_DEF(OneWayGNSSRangeBuilder), module, "OneWayGNSSRangeBuilder", 0);
          }

          void t_OneWayGNSSRangeBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSRangeBuilder), "class_", make_descriptor(OneWayGNSSRangeBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSRangeBuilder), "wrapfn_", make_descriptor(t_OneWayGNSSRangeBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSRangeBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OneWayGNSSRangeBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OneWayGNSSRangeBuilder::initializeClass, 1)))
              return NULL;
            return t_OneWayGNSSRangeBuilder::wrap_Object(OneWayGNSSRangeBuilder(((t_OneWayGNSSRangeBuilder *) arg)->object.this$));
          }
          static PyObject *t_OneWayGNSSRangeBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OneWayGNSSRangeBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_OneWayGNSSRangeBuilder_of_(t_OneWayGNSSRangeBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_OneWayGNSSRangeBuilder_build(t_OneWayGNSSRangeBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::gnss::OneWayGNSSRange result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::gnss::t_OneWayGNSSRange::wrap_Object(result);
            }

            return callSuper(PY_TYPE(OneWayGNSSRangeBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_OneWayGNSSRangeBuilder_get__parameters_(t_OneWayGNSSRangeBuilder *self, void *data)
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
#include "org/hipparchus/geometry/partitioning/NodesSet.h"
#include "java/util/Iterator.h"
#include "java/lang/Iterable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *NodesSet::class$ = NULL;
        jmethodID *NodesSet::mids$ = NULL;
        bool NodesSet::live$ = false;

        jclass NodesSet::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/NodesSet");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_add_d174f4dc4d22a6b4] = env->getMethodID(cls, "add", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)V");
            mids$[mid_addAll_187af74f6ed91738] = env->getMethodID(cls, "addAll", "(Ljava/lang/Iterable;)V");
            mids$[mid_iterator_035c6167e6569aac] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NodesSet::NodesSet() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void NodesSet::add(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_add_d174f4dc4d22a6b4], a0.this$);
        }

        void NodesSet::addAll(const ::java::lang::Iterable & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addAll_187af74f6ed91738], a0.this$);
        }

        ::java::util::Iterator NodesSet::iterator() const
        {
          return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_035c6167e6569aac]));
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
        static PyObject *t_NodesSet_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NodesSet_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NodesSet_of_(t_NodesSet *self, PyObject *args);
        static int t_NodesSet_init_(t_NodesSet *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NodesSet_add(t_NodesSet *self, PyObject *arg);
        static PyObject *t_NodesSet_addAll(t_NodesSet *self, PyObject *arg);
        static PyObject *t_NodesSet_iterator(t_NodesSet *self);
        static PyObject *t_NodesSet_get__parameters_(t_NodesSet *self, void *data);
        static PyGetSetDef t_NodesSet__fields_[] = {
          DECLARE_GET_FIELD(t_NodesSet, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NodesSet__methods_[] = {
          DECLARE_METHOD(t_NodesSet, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NodesSet, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NodesSet, of_, METH_VARARGS),
          DECLARE_METHOD(t_NodesSet, add, METH_O),
          DECLARE_METHOD(t_NodesSet, addAll, METH_O),
          DECLARE_METHOD(t_NodesSet, iterator, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NodesSet)[] = {
          { Py_tp_methods, t_NodesSet__methods_ },
          { Py_tp_init, (void *) t_NodesSet_init_ },
          { Py_tp_getset, t_NodesSet__fields_ },
          { Py_tp_iter, (void *) ((PyObject *(*)(t_NodesSet *)) get_generic_iterator< t_NodesSet >) },
          { Py_tp_iternext, (void *) 0 },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NodesSet)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(NodesSet, t_NodesSet, NodesSet);
        PyObject *t_NodesSet::wrap_Object(const NodesSet& object, PyTypeObject *p0)
        {
          PyObject *obj = t_NodesSet::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_NodesSet *self = (t_NodesSet *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_NodesSet::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_NodesSet::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_NodesSet *self = (t_NodesSet *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_NodesSet::install(PyObject *module)
        {
          installType(&PY_TYPE(NodesSet), &PY_TYPE_DEF(NodesSet), module, "NodesSet", 0);
        }

        void t_NodesSet::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NodesSet), "class_", make_descriptor(NodesSet::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NodesSet), "wrapfn_", make_descriptor(t_NodesSet::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NodesSet), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NodesSet_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NodesSet::initializeClass, 1)))
            return NULL;
          return t_NodesSet::wrap_Object(NodesSet(((t_NodesSet *) arg)->object.this$));
        }
        static PyObject *t_NodesSet_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NodesSet::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_NodesSet_of_(t_NodesSet *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_NodesSet_init_(t_NodesSet *self, PyObject *args, PyObject *kwds)
        {
          NodesSet object((jobject) NULL);

          INT_CALL(object = NodesSet());
          self->object = object;

          return 0;
        }

        static PyObject *t_NodesSet_add(t_NodesSet *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
          {
            OBJ_CALL(self->object.add(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "add", arg);
          return NULL;
        }

        static PyObject *t_NodesSet_addAll(t_NodesSet *self, PyObject *arg)
        {
          ::java::lang::Iterable a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::java::lang::Iterable::initializeClass, &a0, &p0, ::java::lang::t_Iterable::parameters_))
          {
            OBJ_CALL(self->object.addAll(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addAll", arg);
          return NULL;
        }

        static PyObject *t_NodesSet_iterator(t_NodesSet *self)
        {
          ::java::util::Iterator result((jobject) NULL);
          OBJ_CALL(result = self->object.iterator());
          return ::java::util::t_Iterator::wrap_Object(result);
        }
        static PyObject *t_NodesSet_get__parameters_(t_NodesSet *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/IonosphereBDGIMMessage.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *IonosphereBDGIMMessage::class$ = NULL;
          jmethodID *IonosphereBDGIMMessage::mids$ = NULL;
          bool IonosphereBDGIMMessage::live$ = false;

          jclass IonosphereBDGIMMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/IonosphereBDGIMMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_70c1a5d645cab07e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;ILjava/lang/String;)V");
              mids$[mid_getAlpha_7cdc325af0834901] = env->getMethodID(cls, "getAlpha", "()[D");
              mids$[mid_setAlphaI_987a5fb872043b12] = env->getMethodID(cls, "setAlphaI", "(ID)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IonosphereBDGIMMessage::IonosphereBDGIMMessage(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1, const ::java::lang::String & a2) : ::org::orekit::files::rinex::navigation::IonosphereBaseMessage(env->newObject(initializeClass, &mids$, mid_init$_70c1a5d645cab07e, a0.this$, a1, a2.this$)) {}

          JArray< jdouble > IonosphereBDGIMMessage::getAlpha() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAlpha_7cdc325af0834901]));
          }

          void IonosphereBDGIMMessage::setAlphaI(jint a0, jdouble a1) const
          {
            env->callVoidMethod(this$, mids$[mid_setAlphaI_987a5fb872043b12], a0, a1);
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
        namespace navigation {
          static PyObject *t_IonosphereBDGIMMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphereBDGIMMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_IonosphereBDGIMMessage_init_(t_IonosphereBDGIMMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_IonosphereBDGIMMessage_getAlpha(t_IonosphereBDGIMMessage *self);
          static PyObject *t_IonosphereBDGIMMessage_setAlphaI(t_IonosphereBDGIMMessage *self, PyObject *args);
          static PyObject *t_IonosphereBDGIMMessage_get__alpha(t_IonosphereBDGIMMessage *self, void *data);
          static PyGetSetDef t_IonosphereBDGIMMessage__fields_[] = {
            DECLARE_GET_FIELD(t_IonosphereBDGIMMessage, alpha),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IonosphereBDGIMMessage__methods_[] = {
            DECLARE_METHOD(t_IonosphereBDGIMMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphereBDGIMMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphereBDGIMMessage, getAlpha, METH_NOARGS),
            DECLARE_METHOD(t_IonosphereBDGIMMessage, setAlphaI, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IonosphereBDGIMMessage)[] = {
            { Py_tp_methods, t_IonosphereBDGIMMessage__methods_ },
            { Py_tp_init, (void *) t_IonosphereBDGIMMessage_init_ },
            { Py_tp_getset, t_IonosphereBDGIMMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IonosphereBDGIMMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::files::rinex::navigation::IonosphereBaseMessage),
            NULL
          };

          DEFINE_TYPE(IonosphereBDGIMMessage, t_IonosphereBDGIMMessage, IonosphereBDGIMMessage);

          void t_IonosphereBDGIMMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(IonosphereBDGIMMessage), &PY_TYPE_DEF(IonosphereBDGIMMessage), module, "IonosphereBDGIMMessage", 0);
          }

          void t_IonosphereBDGIMMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereBDGIMMessage), "class_", make_descriptor(IonosphereBDGIMMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereBDGIMMessage), "wrapfn_", make_descriptor(t_IonosphereBDGIMMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereBDGIMMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IonosphereBDGIMMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IonosphereBDGIMMessage::initializeClass, 1)))
              return NULL;
            return t_IonosphereBDGIMMessage::wrap_Object(IonosphereBDGIMMessage(((t_IonosphereBDGIMMessage *) arg)->object.this$));
          }
          static PyObject *t_IonosphereBDGIMMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IonosphereBDGIMMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_IonosphereBDGIMMessage_init_(t_IonosphereBDGIMMessage *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::java::lang::String a2((jobject) NULL);
            IonosphereBDGIMMessage object((jobject) NULL);

            if (!parseArgs(args, "KIs", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2))
            {
              INT_CALL(object = IonosphereBDGIMMessage(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_IonosphereBDGIMMessage_getAlpha(t_IonosphereBDGIMMessage *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getAlpha());
            return result.wrap();
          }

          static PyObject *t_IonosphereBDGIMMessage_setAlphaI(t_IonosphereBDGIMMessage *self, PyObject *args)
          {
            jint a0;
            jdouble a1;

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              OBJ_CALL(self->object.setAlphaI(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAlphaI", args);
            return NULL;
          }

          static PyObject *t_IonosphereBDGIMMessage_get__alpha(t_IonosphereBDGIMMessage *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getAlpha());
            return value.wrap();
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/spherical/oned/ArcsSet$Split.h"
#include "org/hipparchus/geometry/spherical/oned/ArcsSet.h"
#include "org/hipparchus/geometry/partitioning/Side.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {

          ::java::lang::Class *ArcsSet$Split::class$ = NULL;
          jmethodID *ArcsSet$Split::mids$ = NULL;
          bool ArcsSet$Split::live$ = false;

          jclass ArcsSet$Split::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/oned/ArcsSet$Split");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getMinus_5473122695b414ae] = env->getMethodID(cls, "getMinus", "()Lorg/hipparchus/geometry/spherical/oned/ArcsSet;");
              mids$[mid_getPlus_5473122695b414ae] = env->getMethodID(cls, "getPlus", "()Lorg/hipparchus/geometry/spherical/oned/ArcsSet;");
              mids$[mid_getSide_930ceaef64a5a9be] = env->getMethodID(cls, "getSide", "()Lorg/hipparchus/geometry/partitioning/Side;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::spherical::oned::ArcsSet ArcsSet$Split::getMinus() const
          {
            return ::org::hipparchus::geometry::spherical::oned::ArcsSet(env->callObjectMethod(this$, mids$[mid_getMinus_5473122695b414ae]));
          }

          ::org::hipparchus::geometry::spherical::oned::ArcsSet ArcsSet$Split::getPlus() const
          {
            return ::org::hipparchus::geometry::spherical::oned::ArcsSet(env->callObjectMethod(this$, mids$[mid_getPlus_5473122695b414ae]));
          }

          ::org::hipparchus::geometry::partitioning::Side ArcsSet$Split::getSide() const
          {
            return ::org::hipparchus::geometry::partitioning::Side(env->callObjectMethod(this$, mids$[mid_getSide_930ceaef64a5a9be]));
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
        namespace oned {
          static PyObject *t_ArcsSet$Split_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ArcsSet$Split_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ArcsSet$Split_of_(t_ArcsSet$Split *self, PyObject *args);
          static PyObject *t_ArcsSet$Split_getMinus(t_ArcsSet$Split *self);
          static PyObject *t_ArcsSet$Split_getPlus(t_ArcsSet$Split *self);
          static PyObject *t_ArcsSet$Split_getSide(t_ArcsSet$Split *self);
          static PyObject *t_ArcsSet$Split_get__minus(t_ArcsSet$Split *self, void *data);
          static PyObject *t_ArcsSet$Split_get__plus(t_ArcsSet$Split *self, void *data);
          static PyObject *t_ArcsSet$Split_get__side(t_ArcsSet$Split *self, void *data);
          static PyObject *t_ArcsSet$Split_get__parameters_(t_ArcsSet$Split *self, void *data);
          static PyGetSetDef t_ArcsSet$Split__fields_[] = {
            DECLARE_GET_FIELD(t_ArcsSet$Split, minus),
            DECLARE_GET_FIELD(t_ArcsSet$Split, plus),
            DECLARE_GET_FIELD(t_ArcsSet$Split, side),
            DECLARE_GET_FIELD(t_ArcsSet$Split, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ArcsSet$Split__methods_[] = {
            DECLARE_METHOD(t_ArcsSet$Split, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ArcsSet$Split, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ArcsSet$Split, of_, METH_VARARGS),
            DECLARE_METHOD(t_ArcsSet$Split, getMinus, METH_NOARGS),
            DECLARE_METHOD(t_ArcsSet$Split, getPlus, METH_NOARGS),
            DECLARE_METHOD(t_ArcsSet$Split, getSide, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ArcsSet$Split)[] = {
            { Py_tp_methods, t_ArcsSet$Split__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_ArcsSet$Split__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ArcsSet$Split)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ArcsSet$Split, t_ArcsSet$Split, ArcsSet$Split);
          PyObject *t_ArcsSet$Split::wrap_Object(const ArcsSet$Split& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_ArcsSet$Split::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ArcsSet$Split *self = (t_ArcsSet$Split *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_ArcsSet$Split::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_ArcsSet$Split::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ArcsSet$Split *self = (t_ArcsSet$Split *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_ArcsSet$Split::install(PyObject *module)
          {
            installType(&PY_TYPE(ArcsSet$Split), &PY_TYPE_DEF(ArcsSet$Split), module, "ArcsSet$Split", 0);
          }

          void t_ArcsSet$Split::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet$Split), "class_", make_descriptor(ArcsSet$Split::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet$Split), "wrapfn_", make_descriptor(t_ArcsSet$Split::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet$Split), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ArcsSet$Split_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ArcsSet$Split::initializeClass, 1)))
              return NULL;
            return t_ArcsSet$Split::wrap_Object(ArcsSet$Split(((t_ArcsSet$Split *) arg)->object.this$));
          }
          static PyObject *t_ArcsSet$Split_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ArcsSet$Split::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ArcsSet$Split_of_(t_ArcsSet$Split *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_ArcsSet$Split_getMinus(t_ArcsSet$Split *self)
          {
            ::org::hipparchus::geometry::spherical::oned::ArcsSet result((jobject) NULL);
            OBJ_CALL(result = self->object.getMinus());
            return ::org::hipparchus::geometry::spherical::oned::t_ArcsSet::wrap_Object(result);
          }

          static PyObject *t_ArcsSet$Split_getPlus(t_ArcsSet$Split *self)
          {
            ::org::hipparchus::geometry::spherical::oned::ArcsSet result((jobject) NULL);
            OBJ_CALL(result = self->object.getPlus());
            return ::org::hipparchus::geometry::spherical::oned::t_ArcsSet::wrap_Object(result);
          }

          static PyObject *t_ArcsSet$Split_getSide(t_ArcsSet$Split *self)
          {
            ::org::hipparchus::geometry::partitioning::Side result((jobject) NULL);
            OBJ_CALL(result = self->object.getSide());
            return ::org::hipparchus::geometry::partitioning::t_Side::wrap_Object(result);
          }
          static PyObject *t_ArcsSet$Split_get__parameters_(t_ArcsSet$Split *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_ArcsSet$Split_get__minus(t_ArcsSet$Split *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::oned::ArcsSet value((jobject) NULL);
            OBJ_CALL(value = self->object.getMinus());
            return ::org::hipparchus::geometry::spherical::oned::t_ArcsSet::wrap_Object(value);
          }

          static PyObject *t_ArcsSet$Split_get__plus(t_ArcsSet$Split *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::oned::ArcsSet value((jobject) NULL);
            OBJ_CALL(value = self->object.getPlus());
            return ::org::hipparchus::geometry::spherical::oned::t_ArcsSet::wrap_Object(value);
          }

          static PyObject *t_ArcsSet$Split_get__side(t_ArcsSet$Split *self, void *data)
          {
            ::org::hipparchus::geometry::partitioning::Side value((jobject) NULL);
            OBJ_CALL(value = self->object.getSide());
            return ::org::hipparchus::geometry::partitioning::t_Side::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/FieldTimeStampedCache.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "java/util/stream/Stream.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldTimeStampedCache::class$ = NULL;
      jmethodID *FieldTimeStampedCache::mids$ = NULL;
      bool FieldTimeStampedCache::live$ = false;

      jclass FieldTimeStampedCache::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldTimeStampedCache");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getEarliest_2ac58ed946476d4e] = env->getMethodID(cls, "getEarliest", "()Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_getLatest_2ac58ed946476d4e] = env->getMethodID(cls, "getLatest", "()Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_getNeighbors_a39ee104977ad16b] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/FieldAbsoluteDate;)Ljava/util/stream/Stream;");
          mids$[mid_getNeighborsSize_f2f64475e4580546] = env->getMethodID(cls, "getNeighborsSize", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::FieldTimeStamped FieldTimeStampedCache::getEarliest() const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_getEarliest_2ac58ed946476d4e]));
      }

      ::org::orekit::time::FieldTimeStamped FieldTimeStampedCache::getLatest() const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_getLatest_2ac58ed946476d4e]));
      }

      ::java::util::stream::Stream FieldTimeStampedCache::getNeighbors(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getNeighbors_a39ee104977ad16b], a0.this$));
      }

      jint FieldTimeStampedCache::getNeighborsSize() const
      {
        return env->callIntMethod(this$, mids$[mid_getNeighborsSize_f2f64475e4580546]);
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
      static PyObject *t_FieldTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeStampedCache_of_(t_FieldTimeStampedCache *self, PyObject *args);
      static PyObject *t_FieldTimeStampedCache_getEarliest(t_FieldTimeStampedCache *self);
      static PyObject *t_FieldTimeStampedCache_getLatest(t_FieldTimeStampedCache *self);
      static PyObject *t_FieldTimeStampedCache_getNeighbors(t_FieldTimeStampedCache *self, PyObject *arg);
      static PyObject *t_FieldTimeStampedCache_getNeighborsSize(t_FieldTimeStampedCache *self);
      static PyObject *t_FieldTimeStampedCache_get__earliest(t_FieldTimeStampedCache *self, void *data);
      static PyObject *t_FieldTimeStampedCache_get__latest(t_FieldTimeStampedCache *self, void *data);
      static PyObject *t_FieldTimeStampedCache_get__neighborsSize(t_FieldTimeStampedCache *self, void *data);
      static PyObject *t_FieldTimeStampedCache_get__parameters_(t_FieldTimeStampedCache *self, void *data);
      static PyGetSetDef t_FieldTimeStampedCache__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTimeStampedCache, earliest),
        DECLARE_GET_FIELD(t_FieldTimeStampedCache, latest),
        DECLARE_GET_FIELD(t_FieldTimeStampedCache, neighborsSize),
        DECLARE_GET_FIELD(t_FieldTimeStampedCache, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTimeStampedCache__methods_[] = {
        DECLARE_METHOD(t_FieldTimeStampedCache, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeStampedCache, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeStampedCache, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTimeStampedCache, getEarliest, METH_NOARGS),
        DECLARE_METHOD(t_FieldTimeStampedCache, getLatest, METH_NOARGS),
        DECLARE_METHOD(t_FieldTimeStampedCache, getNeighbors, METH_O),
        DECLARE_METHOD(t_FieldTimeStampedCache, getNeighborsSize, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTimeStampedCache)[] = {
        { Py_tp_methods, t_FieldTimeStampedCache__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldTimeStampedCache__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTimeStampedCache)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldTimeStampedCache, t_FieldTimeStampedCache, FieldTimeStampedCache);
      PyObject *t_FieldTimeStampedCache::wrap_Object(const FieldTimeStampedCache& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldTimeStampedCache::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeStampedCache *self = (t_FieldTimeStampedCache *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_FieldTimeStampedCache::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldTimeStampedCache::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeStampedCache *self = (t_FieldTimeStampedCache *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_FieldTimeStampedCache::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTimeStampedCache), &PY_TYPE_DEF(FieldTimeStampedCache), module, "FieldTimeStampedCache", 0);
      }

      void t_FieldTimeStampedCache::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStampedCache), "class_", make_descriptor(FieldTimeStampedCache::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStampedCache), "wrapfn_", make_descriptor(t_FieldTimeStampedCache::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStampedCache), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTimeStampedCache::initializeClass, 1)))
          return NULL;
        return t_FieldTimeStampedCache::wrap_Object(FieldTimeStampedCache(((t_FieldTimeStampedCache *) arg)->object.this$));
      }
      static PyObject *t_FieldTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTimeStampedCache::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTimeStampedCache_of_(t_FieldTimeStampedCache *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldTimeStampedCache_getEarliest(t_FieldTimeStampedCache *self)
      {
        ::org::orekit::time::FieldTimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getEarliest());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
      }

      static PyObject *t_FieldTimeStampedCache_getLatest(t_FieldTimeStampedCache *self)
      {
        ::org::orekit::time::FieldTimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getLatest());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
      }

      static PyObject *t_FieldTimeStampedCache_getNeighbors(t_FieldTimeStampedCache *self, PyObject *arg)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::stream::Stream result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
        {
          OBJ_CALL(result = self->object.getNeighbors(a0));
          return ::java::util::stream::t_Stream::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getNeighbors", arg);
        return NULL;
      }

      static PyObject *t_FieldTimeStampedCache_getNeighborsSize(t_FieldTimeStampedCache *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNeighborsSize());
        return PyLong_FromLong((long) result);
      }
      static PyObject *t_FieldTimeStampedCache_get__parameters_(t_FieldTimeStampedCache *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldTimeStampedCache_get__earliest(t_FieldTimeStampedCache *self, void *data)
      {
        ::org::orekit::time::FieldTimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarliest());
        return ::org::orekit::time::t_FieldTimeStamped::wrap_Object(value);
      }

      static PyObject *t_FieldTimeStampedCache_get__latest(t_FieldTimeStampedCache *self, void *data)
      {
        ::org::orekit::time::FieldTimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getLatest());
        return ::org::orekit::time::t_FieldTimeStamped::wrap_Object(value);
      }

      static PyObject *t_FieldTimeStampedCache_get__neighborsSize(t_FieldTimeStampedCache *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNeighborsSize());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/BilinearInterpolator.h"
#include "org/hipparchus/analysis/interpolation/BilinearInterpolatingFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/interpolation/BivariateGridInterpolator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *BilinearInterpolator::class$ = NULL;
        jmethodID *BilinearInterpolator::mids$ = NULL;
        bool BilinearInterpolator::live$ = false;

        jclass BilinearInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/BilinearInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_interpolate_debd9c0b94a088f3] = env->getMethodID(cls, "interpolate", "([D[D[[D)Lorg/hipparchus/analysis/interpolation/BilinearInterpolatingFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BilinearInterpolator::BilinearInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction BilinearInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2) const
        {
          return ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction(env->callObjectMethod(this$, mids$[mid_interpolate_debd9c0b94a088f3], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_BilinearInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BilinearInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BilinearInterpolator_init_(t_BilinearInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BilinearInterpolator_interpolate(t_BilinearInterpolator *self, PyObject *args);

        static PyMethodDef t_BilinearInterpolator__methods_[] = {
          DECLARE_METHOD(t_BilinearInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BilinearInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BilinearInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BilinearInterpolator)[] = {
          { Py_tp_methods, t_BilinearInterpolator__methods_ },
          { Py_tp_init, (void *) t_BilinearInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BilinearInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BilinearInterpolator, t_BilinearInterpolator, BilinearInterpolator);

        void t_BilinearInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(BilinearInterpolator), &PY_TYPE_DEF(BilinearInterpolator), module, "BilinearInterpolator", 0);
        }

        void t_BilinearInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BilinearInterpolator), "class_", make_descriptor(BilinearInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BilinearInterpolator), "wrapfn_", make_descriptor(t_BilinearInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BilinearInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BilinearInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BilinearInterpolator::initializeClass, 1)))
            return NULL;
          return t_BilinearInterpolator::wrap_Object(BilinearInterpolator(((t_BilinearInterpolator *) arg)->object.this$));
        }
        static PyObject *t_BilinearInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BilinearInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BilinearInterpolator_init_(t_BilinearInterpolator *self, PyObject *args, PyObject *kwds)
        {
          BilinearInterpolator object((jobject) NULL);

          INT_CALL(object = BilinearInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_BilinearInterpolator_interpolate(t_BilinearInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< JArray< jdouble > > a2((jobject) NULL);
          ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction result((jobject) NULL);

          if (!parseArgs(args, "[D[D[[D", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1, a2));
            return ::org::hipparchus::analysis::interpolation::t_BilinearInterpolatingFunction::wrap_Object(result);
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
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative2.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative2.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative2Field.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
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
            mids$[mid_init$_d50646f27571013a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)V");
            mids$[mid_init$_d0d6094fbd7015c5] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_abs_347b0c8405a5a6a6] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_acos_347b0c8405a5a6a6] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_acosh_347b0c8405a5a6a6] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_add_f38f856bded3c65d] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_add_de62967c58d2b90b] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_asin_347b0c8405a5a6a6] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_asinh_347b0c8405a5a6a6] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_atan_347b0c8405a5a6a6] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_atan2_f38f856bded3c65d] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_atanh_347b0c8405a5a6a6] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_cbrt_347b0c8405a5a6a6] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_ceil_347b0c8405a5a6a6] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_compareTo_111e0906753f064d] = env->getMethodID(cls, "compareTo", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)I");
            mids$[mid_compose_17d6322e2725f608] = env->getMethodID(cls, "compose", "([D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_copySign_f38f856bded3c65d] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_copySign_de62967c58d2b90b] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_cos_347b0c8405a5a6a6] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_cosh_347b0c8405a5a6a6] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_divide_f38f856bded3c65d] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_divide_de62967c58d2b90b] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_exp_347b0c8405a5a6a6] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_expm1_347b0c8405a5a6a6] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_floor_347b0c8405a5a6a6] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_getDerivative_b772323fc98b7293] = env->getMethodID(cls, "getDerivative", "(I)D");
            mids$[mid_getExponent_f2f64475e4580546] = env->getMethodID(cls, "getExponent", "()I");
            mids$[mid_getField_416e8ca9aac6db67] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2Field;");
            mids$[mid_getFirstDerivative_456d9a2f64d6b28d] = env->getMethodID(cls, "getFirstDerivative", "()D");
            mids$[mid_getOrder_f2f64475e4580546] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPi_347b0c8405a5a6a6] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_getReal_456d9a2f64d6b28d] = env->getMethodID(cls, "getReal", "()D");
            mids$[mid_getSecondDerivative_456d9a2f64d6b28d] = env->getMethodID(cls, "getSecondDerivative", "()D");
            mids$[mid_getValue_456d9a2f64d6b28d] = env->getMethodID(cls, "getValue", "()D");
            mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_hypot_f38f856bded3c65d] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_linearCombination_41724f497390e8fb] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_linearCombination_f71767079cbce9ee] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;[Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_linearCombination_ef4bd9d122aa7ab0] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_linearCombination_5f46313a9cbd048c] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_linearCombination_5cd46ef6d023d27c] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_linearCombination_08e4761bd86e9a94] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_linearCombination_03271ea4d1209ff1] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_linearCombination_1a5f268fa3b182d0] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_log_347b0c8405a5a6a6] = env->getMethodID(cls, "log", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_log10_347b0c8405a5a6a6] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_log1p_347b0c8405a5a6a6] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_multiply_f38f856bded3c65d] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_multiply_de62967c58d2b90b] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_multiply_dcabf0ceb1a5ed03] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_negate_347b0c8405a5a6a6] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_newInstance_de62967c58d2b90b] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_pow_f38f856bded3c65d] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_pow_de62967c58d2b90b] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_pow_dcabf0ceb1a5ed03] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_pow_34a6ce822d00ed0f] = env->getStaticMethodID(cls, "pow", "(DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_reciprocal_347b0c8405a5a6a6] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_remainder_f38f856bded3c65d] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_remainder_de62967c58d2b90b] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_rint_347b0c8405a5a6a6] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_rootN_dcabf0ceb1a5ed03] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_scalb_dcabf0ceb1a5ed03] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_sign_347b0c8405a5a6a6] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_sin_347b0c8405a5a6a6] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_sinCos_35f2499c71416a1a] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
            mids$[mid_sinh_347b0c8405a5a6a6] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_sinhCosh_c388a3eefde9d597] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
            mids$[mid_sqrt_347b0c8405a5a6a6] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_subtract_f38f856bded3c65d] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_subtract_de62967c58d2b90b] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_tan_347b0c8405a5a6a6] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_tanh_347b0c8405a5a6a6] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_taylor_0ba5fed9597b693e] = env->getMethodID(cls, "taylor", "(D)D");
            mids$[mid_toDegrees_347b0c8405a5a6a6] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_toDerivativeStructure_c8ca2097cc2fbc0a] = env->getMethodID(cls, "toDerivativeStructure", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_toRadians_347b0c8405a5a6a6] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_ulp_347b0c8405a5a6a6] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            PI = new UnivariateDerivative2(env->getStaticObjectField(cls, "PI", "Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnivariateDerivative2::UnivariateDerivative2(const ::org::hipparchus::analysis::differentiation::DerivativeStructure & a0) : ::org::hipparchus::analysis::differentiation::UnivariateDerivative(env->newObject(initializeClass, &mids$, mid_init$_d50646f27571013a, a0.this$)) {}

        UnivariateDerivative2::UnivariateDerivative2(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::analysis::differentiation::UnivariateDerivative(env->newObject(initializeClass, &mids$, mid_init$_d0d6094fbd7015c5, a0, a1, a2)) {}

        UnivariateDerivative2 UnivariateDerivative2::abs() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_abs_347b0c8405a5a6a6]));
        }

        UnivariateDerivative2 UnivariateDerivative2::acos() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_acos_347b0c8405a5a6a6]));
        }

        UnivariateDerivative2 UnivariateDerivative2::acosh() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_acosh_347b0c8405a5a6a6]));
        }

        UnivariateDerivative2 UnivariateDerivative2::add(const UnivariateDerivative2 & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_add_f38f856bded3c65d], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::add(jdouble a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_add_de62967c58d2b90b], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::asin() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_asin_347b0c8405a5a6a6]));
        }

        UnivariateDerivative2 UnivariateDerivative2::asinh() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_asinh_347b0c8405a5a6a6]));
        }

        UnivariateDerivative2 UnivariateDerivative2::atan() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_atan_347b0c8405a5a6a6]));
        }

        UnivariateDerivative2 UnivariateDerivative2::atan2(const UnivariateDerivative2 & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_atan2_f38f856bded3c65d], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::atanh() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_atanh_347b0c8405a5a6a6]));
        }

        UnivariateDerivative2 UnivariateDerivative2::cbrt() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_cbrt_347b0c8405a5a6a6]));
        }

        UnivariateDerivative2 UnivariateDerivative2::ceil() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_ceil_347b0c8405a5a6a6]));
        }

        jint UnivariateDerivative2::compareTo(const UnivariateDerivative2 & a0) const
        {
          return env->callIntMethod(this$, mids$[mid_compareTo_111e0906753f064d], a0.this$);
        }

        UnivariateDerivative2 UnivariateDerivative2::compose(const JArray< jdouble > & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_compose_17d6322e2725f608], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::copySign(const UnivariateDerivative2 & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_copySign_f38f856bded3c65d], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::copySign(jdouble a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_copySign_de62967c58d2b90b], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::cos() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_cos_347b0c8405a5a6a6]));
        }

        UnivariateDerivative2 UnivariateDerivative2::cosh() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_cosh_347b0c8405a5a6a6]));
        }

        UnivariateDerivative2 UnivariateDerivative2::divide(const UnivariateDerivative2 & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_divide_f38f856bded3c65d], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::divide(jdouble a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_divide_de62967c58d2b90b], a0));
        }

        jboolean UnivariateDerivative2::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
        }

        UnivariateDerivative2 UnivariateDerivative2::exp() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_exp_347b0c8405a5a6a6]));
        }

        UnivariateDerivative2 UnivariateDerivative2::expm1() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_expm1_347b0c8405a5a6a6]));
        }

        UnivariateDerivative2 UnivariateDerivative2::floor() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_floor_347b0c8405a5a6a6]));
        }

        jdouble UnivariateDerivative2::getDerivative(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDerivative_b772323fc98b7293], a0);
        }

        jint UnivariateDerivative2::getExponent() const
        {
          return env->callIntMethod(this$, mids$[mid_getExponent_f2f64475e4580546]);
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDerivative2Field UnivariateDerivative2::getField() const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDerivative2Field(env->callObjectMethod(this$, mids$[mid_getField_416e8ca9aac6db67]));
        }

        jdouble UnivariateDerivative2::getFirstDerivative() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFirstDerivative_456d9a2f64d6b28d]);
        }

        jint UnivariateDerivative2::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_f2f64475e4580546]);
        }

        UnivariateDerivative2 UnivariateDerivative2::getPi() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_getPi_347b0c8405a5a6a6]));
        }

        jdouble UnivariateDerivative2::getReal() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReal_456d9a2f64d6b28d]);
        }

        jdouble UnivariateDerivative2::getSecondDerivative() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSecondDerivative_456d9a2f64d6b28d]);
        }

        jdouble UnivariateDerivative2::getValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getValue_456d9a2f64d6b28d]);
        }

        jint UnivariateDerivative2::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
        }

        UnivariateDerivative2 UnivariateDerivative2::hypot(const UnivariateDerivative2 & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_hypot_f38f856bded3c65d], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::linearCombination(const JArray< jdouble > & a0, const JArray< UnivariateDerivative2 > & a1) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_41724f497390e8fb], a0.this$, a1.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::linearCombination(const JArray< UnivariateDerivative2 > & a0, const JArray< UnivariateDerivative2 > & a1) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_f71767079cbce9ee], a0.this$, a1.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::linearCombination(const UnivariateDerivative2 & a0, const UnivariateDerivative2 & a1, const UnivariateDerivative2 & a2, const UnivariateDerivative2 & a3) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_ef4bd9d122aa7ab0], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::linearCombination(jdouble a0, const UnivariateDerivative2 & a1, jdouble a2, const UnivariateDerivative2 & a3) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_5f46313a9cbd048c], a0, a1.this$, a2, a3.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::linearCombination(const UnivariateDerivative2 & a0, const UnivariateDerivative2 & a1, const UnivariateDerivative2 & a2, const UnivariateDerivative2 & a3, const UnivariateDerivative2 & a4, const UnivariateDerivative2 & a5) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_5cd46ef6d023d27c], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::linearCombination(jdouble a0, const UnivariateDerivative2 & a1, jdouble a2, const UnivariateDerivative2 & a3, jdouble a4, const UnivariateDerivative2 & a5) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_08e4761bd86e9a94], a0, a1.this$, a2, a3.this$, a4, a5.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::linearCombination(const UnivariateDerivative2 & a0, const UnivariateDerivative2 & a1, const UnivariateDerivative2 & a2, const UnivariateDerivative2 & a3, const UnivariateDerivative2 & a4, const UnivariateDerivative2 & a5, const UnivariateDerivative2 & a6, const UnivariateDerivative2 & a7) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_03271ea4d1209ff1], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::linearCombination(jdouble a0, const UnivariateDerivative2 & a1, jdouble a2, const UnivariateDerivative2 & a3, jdouble a4, const UnivariateDerivative2 & a5, jdouble a6, const UnivariateDerivative2 & a7) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_1a5f268fa3b182d0], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::log() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_log_347b0c8405a5a6a6]));
        }

        UnivariateDerivative2 UnivariateDerivative2::log10() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_log10_347b0c8405a5a6a6]));
        }

        UnivariateDerivative2 UnivariateDerivative2::log1p() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_log1p_347b0c8405a5a6a6]));
        }

        UnivariateDerivative2 UnivariateDerivative2::multiply(const UnivariateDerivative2 & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_multiply_f38f856bded3c65d], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::multiply(jdouble a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_multiply_de62967c58d2b90b], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::multiply(jint a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_multiply_dcabf0ceb1a5ed03], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::negate() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_negate_347b0c8405a5a6a6]));
        }

        UnivariateDerivative2 UnivariateDerivative2::newInstance(jdouble a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_newInstance_de62967c58d2b90b], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::pow(const UnivariateDerivative2 & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_pow_f38f856bded3c65d], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::pow(jdouble a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_pow_de62967c58d2b90b], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::pow(jint a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_pow_dcabf0ceb1a5ed03], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::pow(jdouble a0, const UnivariateDerivative2 & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return UnivariateDerivative2(env->callStaticObjectMethod(cls, mids$[mid_pow_34a6ce822d00ed0f], a0, a1.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::reciprocal() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_reciprocal_347b0c8405a5a6a6]));
        }

        UnivariateDerivative2 UnivariateDerivative2::remainder(const UnivariateDerivative2 & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_remainder_f38f856bded3c65d], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::remainder(jdouble a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_remainder_de62967c58d2b90b], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::rint() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_rint_347b0c8405a5a6a6]));
        }

        UnivariateDerivative2 UnivariateDerivative2::rootN(jint a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_rootN_dcabf0ceb1a5ed03], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::scalb(jint a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_scalb_dcabf0ceb1a5ed03], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::sign() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_sign_347b0c8405a5a6a6]));
        }

        UnivariateDerivative2 UnivariateDerivative2::sin() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_sin_347b0c8405a5a6a6]));
        }

        ::org::hipparchus::util::FieldSinCos UnivariateDerivative2::sinCos() const
        {
          return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_35f2499c71416a1a]));
        }

        UnivariateDerivative2 UnivariateDerivative2::sinh() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_sinh_347b0c8405a5a6a6]));
        }

        ::org::hipparchus::util::FieldSinhCosh UnivariateDerivative2::sinhCosh() const
        {
          return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_c388a3eefde9d597]));
        }

        UnivariateDerivative2 UnivariateDerivative2::sqrt() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_sqrt_347b0c8405a5a6a6]));
        }

        UnivariateDerivative2 UnivariateDerivative2::subtract(const UnivariateDerivative2 & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_subtract_f38f856bded3c65d], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::subtract(jdouble a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_subtract_de62967c58d2b90b], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::tan() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_tan_347b0c8405a5a6a6]));
        }

        UnivariateDerivative2 UnivariateDerivative2::tanh() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_tanh_347b0c8405a5a6a6]));
        }

        jdouble UnivariateDerivative2::taylor(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_taylor_0ba5fed9597b693e], a0);
        }

        UnivariateDerivative2 UnivariateDerivative2::toDegrees() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_toDegrees_347b0c8405a5a6a6]));
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure UnivariateDerivative2::toDerivativeStructure() const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDerivativeStructure_c8ca2097cc2fbc0a]));
        }

        UnivariateDerivative2 UnivariateDerivative2::toRadians() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_toRadians_347b0c8405a5a6a6]));
        }

        UnivariateDerivative2 UnivariateDerivative2::ulp() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_ulp_347b0c8405a5a6a6]));
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
#include "org/orekit/propagation/numerical/FieldTimeDerivativesEquations.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *FieldTimeDerivativesEquations::class$ = NULL;
        jmethodID *FieldTimeDerivativesEquations::mids$ = NULL;
        bool FieldTimeDerivativesEquations::live$ = false;

        jclass FieldTimeDerivativesEquations::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/FieldTimeDerivativesEquations");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addKeplerContribution_03a16642f77779e7] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_addMassDerivative_03a16642f77779e7] = env->getMethodID(cls, "addMassDerivative", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_addNonKeplerianAcceleration_9c8737fc819646bf] = env->getMethodID(cls, "addNonKeplerianAcceleration", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void FieldTimeDerivativesEquations::addKeplerContribution(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addKeplerContribution_03a16642f77779e7], a0.this$);
        }

        void FieldTimeDerivativesEquations::addMassDerivative(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addMassDerivative_03a16642f77779e7], a0.this$);
        }

        void FieldTimeDerivativesEquations::addNonKeplerianAcceleration(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addNonKeplerianAcceleration_9c8737fc819646bf], a0.this$);
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
        static PyObject *t_FieldTimeDerivativesEquations_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldTimeDerivativesEquations_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldTimeDerivativesEquations_of_(t_FieldTimeDerivativesEquations *self, PyObject *args);
        static PyObject *t_FieldTimeDerivativesEquations_addKeplerContribution(t_FieldTimeDerivativesEquations *self, PyObject *arg);
        static PyObject *t_FieldTimeDerivativesEquations_addMassDerivative(t_FieldTimeDerivativesEquations *self, PyObject *arg);
        static PyObject *t_FieldTimeDerivativesEquations_addNonKeplerianAcceleration(t_FieldTimeDerivativesEquations *self, PyObject *arg);
        static PyObject *t_FieldTimeDerivativesEquations_get__parameters_(t_FieldTimeDerivativesEquations *self, void *data);
        static PyGetSetDef t_FieldTimeDerivativesEquations__fields_[] = {
          DECLARE_GET_FIELD(t_FieldTimeDerivativesEquations, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldTimeDerivativesEquations__methods_[] = {
          DECLARE_METHOD(t_FieldTimeDerivativesEquations, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldTimeDerivativesEquations, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldTimeDerivativesEquations, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldTimeDerivativesEquations, addKeplerContribution, METH_O),
          DECLARE_METHOD(t_FieldTimeDerivativesEquations, addMassDerivative, METH_O),
          DECLARE_METHOD(t_FieldTimeDerivativesEquations, addNonKeplerianAcceleration, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldTimeDerivativesEquations)[] = {
          { Py_tp_methods, t_FieldTimeDerivativesEquations__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldTimeDerivativesEquations__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldTimeDerivativesEquations)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldTimeDerivativesEquations, t_FieldTimeDerivativesEquations, FieldTimeDerivativesEquations);
        PyObject *t_FieldTimeDerivativesEquations::wrap_Object(const FieldTimeDerivativesEquations& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldTimeDerivativesEquations::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldTimeDerivativesEquations *self = (t_FieldTimeDerivativesEquations *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldTimeDerivativesEquations::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldTimeDerivativesEquations::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldTimeDerivativesEquations *self = (t_FieldTimeDerivativesEquations *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldTimeDerivativesEquations::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldTimeDerivativesEquations), &PY_TYPE_DEF(FieldTimeDerivativesEquations), module, "FieldTimeDerivativesEquations", 0);
        }

        void t_FieldTimeDerivativesEquations::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeDerivativesEquations), "class_", make_descriptor(FieldTimeDerivativesEquations::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeDerivativesEquations), "wrapfn_", make_descriptor(t_FieldTimeDerivativesEquations::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeDerivativesEquations), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldTimeDerivativesEquations_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldTimeDerivativesEquations::initializeClass, 1)))
            return NULL;
          return t_FieldTimeDerivativesEquations::wrap_Object(FieldTimeDerivativesEquations(((t_FieldTimeDerivativesEquations *) arg)->object.this$));
        }
        static PyObject *t_FieldTimeDerivativesEquations_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldTimeDerivativesEquations::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldTimeDerivativesEquations_of_(t_FieldTimeDerivativesEquations *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldTimeDerivativesEquations_addKeplerContribution(t_FieldTimeDerivativesEquations *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.addKeplerContribution(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addKeplerContribution", arg);
          return NULL;
        }

        static PyObject *t_FieldTimeDerivativesEquations_addMassDerivative(t_FieldTimeDerivativesEquations *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.addMassDerivative(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addMassDerivative", arg);
          return NULL;
        }

        static PyObject *t_FieldTimeDerivativesEquations_addNonKeplerianAcceleration(t_FieldTimeDerivativesEquations *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
          {
            OBJ_CALL(self->object.addNonKeplerianAcceleration(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addNonKeplerianAcceleration", arg);
          return NULL;
        }
        static PyObject *t_FieldTimeDerivativesEquations_get__parameters_(t_FieldTimeDerivativesEquations *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/Scheduler.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "java/util/SortedSet.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *Scheduler::class$ = NULL;
          jmethodID *Scheduler::mids$ = NULL;
          bool Scheduler::live$ = false;

          jclass Scheduler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/Scheduler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_generate_22733af3de6e4c17] = env->getMethodID(cls, "generate", "(Ljava/util/Map;)Ljava/util/SortedSet;");
              mids$[mid_getBuilder_f2ad316b33dc9e1f] = env->getMethodID(cls, "getBuilder", "()Lorg/orekit/estimation/measurements/generation/MeasurementBuilder;");
              mids$[mid_init_d958a9bfde45c759] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::SortedSet Scheduler::generate(const ::java::util::Map & a0) const
          {
            return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_generate_22733af3de6e4c17], a0.this$));
          }

          ::org::orekit::estimation::measurements::generation::MeasurementBuilder Scheduler::getBuilder() const
          {
            return ::org::orekit::estimation::measurements::generation::MeasurementBuilder(env->callObjectMethod(this$, mids$[mid_getBuilder_f2ad316b33dc9e1f]));
          }

          void Scheduler::init(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_d958a9bfde45c759], a0.this$, a1.this$);
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
          static PyObject *t_Scheduler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Scheduler_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Scheduler_of_(t_Scheduler *self, PyObject *args);
          static PyObject *t_Scheduler_generate(t_Scheduler *self, PyObject *arg);
          static PyObject *t_Scheduler_getBuilder(t_Scheduler *self);
          static PyObject *t_Scheduler_init(t_Scheduler *self, PyObject *args);
          static PyObject *t_Scheduler_get__builder(t_Scheduler *self, void *data);
          static PyObject *t_Scheduler_get__parameters_(t_Scheduler *self, void *data);
          static PyGetSetDef t_Scheduler__fields_[] = {
            DECLARE_GET_FIELD(t_Scheduler, builder),
            DECLARE_GET_FIELD(t_Scheduler, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Scheduler__methods_[] = {
            DECLARE_METHOD(t_Scheduler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Scheduler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Scheduler, of_, METH_VARARGS),
            DECLARE_METHOD(t_Scheduler, generate, METH_O),
            DECLARE_METHOD(t_Scheduler, getBuilder, METH_NOARGS),
            DECLARE_METHOD(t_Scheduler, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Scheduler)[] = {
            { Py_tp_methods, t_Scheduler__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Scheduler__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Scheduler)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Scheduler, t_Scheduler, Scheduler);
          PyObject *t_Scheduler::wrap_Object(const Scheduler& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Scheduler::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Scheduler *self = (t_Scheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_Scheduler::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Scheduler::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Scheduler *self = (t_Scheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_Scheduler::install(PyObject *module)
          {
            installType(&PY_TYPE(Scheduler), &PY_TYPE_DEF(Scheduler), module, "Scheduler", 0);
          }

          void t_Scheduler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Scheduler), "class_", make_descriptor(Scheduler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Scheduler), "wrapfn_", make_descriptor(t_Scheduler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Scheduler), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Scheduler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Scheduler::initializeClass, 1)))
              return NULL;
            return t_Scheduler::wrap_Object(Scheduler(((t_Scheduler *) arg)->object.this$));
          }
          static PyObject *t_Scheduler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Scheduler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Scheduler_of_(t_Scheduler *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_Scheduler_generate(t_Scheduler *self, PyObject *arg)
          {
            ::java::util::Map a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::SortedSet result((jobject) NULL);

            if (!parseArg(arg, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.generate(a0));
              return ::java::util::t_SortedSet::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "generate", arg);
            return NULL;
          }

          static PyObject *t_Scheduler_getBuilder(t_Scheduler *self)
          {
            ::org::orekit::estimation::measurements::generation::MeasurementBuilder result((jobject) NULL);
            OBJ_CALL(result = self->object.getBuilder());
            return ::org::orekit::estimation::measurements::generation::t_MeasurementBuilder::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_Scheduler_init(t_Scheduler *self, PyObject *args)
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
          static PyObject *t_Scheduler_get__parameters_(t_Scheduler *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_Scheduler_get__builder(t_Scheduler *self, void *data)
          {
            ::org::orekit::estimation::measurements::generation::MeasurementBuilder value((jobject) NULL);
            OBJ_CALL(value = self->object.getBuilder());
            return ::org::orekit::estimation::measurements::generation::t_MeasurementBuilder::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        ::java::lang::Class *ExtendedEllipsoid::class$ = NULL;
        jmethodID *ExtendedEllipsoid::mids$ = NULL;
        bool ExtendedEllipsoid::live$ = false;

        jclass ExtendedEllipsoid::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/utils/ExtendedEllipsoid");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_67a8caec77669819] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/frames/Frame;)V");
            mids$[mid_convertLos_ccf2ee059c93e01e] = env->getMethodID(cls, "convertLos", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_convertLos_54b6377056a157af] = env->getMethodID(cls, "convertLos", "(Lorg/orekit/bodies/GeodeticPoint;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_pointAtAltitude_b93b7baa8492af38] = env->getMethodID(cls, "pointAtAltitude", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_pointAtLatitude_c7c60b2b206e3e9d] = env->getMethodID(cls, "pointAtLatitude", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_pointAtLongitude_b93b7baa8492af38] = env->getMethodID(cls, "pointAtLongitude", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_pointOnGround_6f258df101c5dbf8] = env->getMethodID(cls, "pointOnGround", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");
            mids$[mid_transform_393fcc10540ff032] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_transform_588d378a3b637077] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");
            mids$[mid_transform_cce031b164f2fb00] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ExtendedEllipsoid::ExtendedEllipsoid(jdouble a0, jdouble a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::bodies::OneAxisEllipsoid(env->newObject(initializeClass, &mids$, mid_init$_67a8caec77669819, a0, a1, a2.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ExtendedEllipsoid::convertLos(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_convertLos_ccf2ee059c93e01e], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ExtendedEllipsoid::convertLos(const ::org::orekit::bodies::GeodeticPoint & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_convertLos_54b6377056a157af], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ExtendedEllipsoid::pointAtAltitude(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_pointAtAltitude_b93b7baa8492af38], a0.this$, a1.this$, a2));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ExtendedEllipsoid::pointAtLatitude(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_pointAtLatitude_c7c60b2b206e3e9d], a0.this$, a1.this$, a2, a3.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ExtendedEllipsoid::pointAtLongitude(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_pointAtLongitude_b93b7baa8492af38], a0.this$, a1.this$, a2));
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint ExtendedEllipsoid::pointOnGround(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_pointOnGround_6f258df101c5dbf8], a0.this$, a1.this$, a2));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ExtendedEllipsoid::transform(const ::org::orekit::bodies::GeodeticPoint & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transform_393fcc10540ff032], a0.this$));
        }

        ::org::orekit::bodies::GeodeticPoint ExtendedEllipsoid::transform(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
        {
          return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_transform_588d378a3b637077], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint ExtendedEllipsoid::transform(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_transform_cce031b164f2fb00], a0.this$, a1.this$, a2.this$, a3));
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
      namespace utils {
        static PyObject *t_ExtendedEllipsoid_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ExtendedEllipsoid_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ExtendedEllipsoid_init_(t_ExtendedEllipsoid *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ExtendedEllipsoid_convertLos(t_ExtendedEllipsoid *self, PyObject *args);
        static PyObject *t_ExtendedEllipsoid_pointAtAltitude(t_ExtendedEllipsoid *self, PyObject *args);
        static PyObject *t_ExtendedEllipsoid_pointAtLatitude(t_ExtendedEllipsoid *self, PyObject *args);
        static PyObject *t_ExtendedEllipsoid_pointAtLongitude(t_ExtendedEllipsoid *self, PyObject *args);
        static PyObject *t_ExtendedEllipsoid_pointOnGround(t_ExtendedEllipsoid *self, PyObject *args);
        static PyObject *t_ExtendedEllipsoid_transform(t_ExtendedEllipsoid *self, PyObject *args);

        static PyMethodDef t_ExtendedEllipsoid__methods_[] = {
          DECLARE_METHOD(t_ExtendedEllipsoid, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ExtendedEllipsoid, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ExtendedEllipsoid, convertLos, METH_VARARGS),
          DECLARE_METHOD(t_ExtendedEllipsoid, pointAtAltitude, METH_VARARGS),
          DECLARE_METHOD(t_ExtendedEllipsoid, pointAtLatitude, METH_VARARGS),
          DECLARE_METHOD(t_ExtendedEllipsoid, pointAtLongitude, METH_VARARGS),
          DECLARE_METHOD(t_ExtendedEllipsoid, pointOnGround, METH_VARARGS),
          DECLARE_METHOD(t_ExtendedEllipsoid, transform, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ExtendedEllipsoid)[] = {
          { Py_tp_methods, t_ExtendedEllipsoid__methods_ },
          { Py_tp_init, (void *) t_ExtendedEllipsoid_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ExtendedEllipsoid)[] = {
          &PY_TYPE_DEF(::org::orekit::bodies::OneAxisEllipsoid),
          NULL
        };

        DEFINE_TYPE(ExtendedEllipsoid, t_ExtendedEllipsoid, ExtendedEllipsoid);

        void t_ExtendedEllipsoid::install(PyObject *module)
        {
          installType(&PY_TYPE(ExtendedEllipsoid), &PY_TYPE_DEF(ExtendedEllipsoid), module, "ExtendedEllipsoid", 0);
        }

        void t_ExtendedEllipsoid::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedEllipsoid), "class_", make_descriptor(ExtendedEllipsoid::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedEllipsoid), "wrapfn_", make_descriptor(t_ExtendedEllipsoid::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedEllipsoid), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ExtendedEllipsoid_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ExtendedEllipsoid::initializeClass, 1)))
            return NULL;
          return t_ExtendedEllipsoid::wrap_Object(ExtendedEllipsoid(((t_ExtendedEllipsoid *) arg)->object.this$));
        }
        static PyObject *t_ExtendedEllipsoid_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ExtendedEllipsoid::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ExtendedEllipsoid_init_(t_ExtendedEllipsoid *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          ::org::orekit::frames::Frame a2((jobject) NULL);
          ExtendedEllipsoid object((jobject) NULL);

          if (!parseArgs(args, "DDk", ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = ExtendedEllipsoid(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ExtendedEllipsoid_convertLos(t_ExtendedEllipsoid *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.convertLos(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.convertLos(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "convertLos", args);
          return NULL;
        }

        static PyObject *t_ExtendedEllipsoid_pointAtAltitude(t_ExtendedEllipsoid *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.pointAtAltitude(a0, a1, a2));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "pointAtAltitude", args);
          return NULL;
        }

        static PyObject *t_ExtendedEllipsoid_pointAtLatitude(t_ExtendedEllipsoid *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArgs(args, "kkDk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.pointAtLatitude(a0, a1, a2, a3));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "pointAtLatitude", args);
          return NULL;
        }

        static PyObject *t_ExtendedEllipsoid_pointAtLongitude(t_ExtendedEllipsoid *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.pointAtLongitude(a0, a1, a2));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "pointAtLongitude", args);
          return NULL;
        }

        static PyObject *t_ExtendedEllipsoid_pointOnGround(t_ExtendedEllipsoid *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.pointOnGround(a0, a1, a2));
            return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "pointOnGround", args);
          return NULL;
        }

        static PyObject *t_ExtendedEllipsoid_transform(t_ExtendedEllipsoid *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.transform(a0));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              ::org::orekit::frames::Frame a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

              if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.transform(a0, a1, a2));
                return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              ::org::orekit::frames::Frame a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              jdouble a3;
              ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

              if (!parseArgs(args, "kkkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.transform(a0, a1, a2, a3));
                return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(ExtendedEllipsoid), (PyObject *) self, "transform", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/FileInputStream.h"
#include "java/io/IOException.h"
#include "java/io/FileNotFoundException.h"
#include "java/io/File.h"
#include "java/io/FileDescriptor.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *FileInputStream::class$ = NULL;
    jmethodID *FileInputStream::mids$ = NULL;
    bool FileInputStream::live$ = false;

    jclass FileInputStream::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/FileInputStream");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_46e66c77c82c9a6b] = env->getMethodID(cls, "<init>", "(Ljava/io/File;)V");
        mids$[mid_init$_451cf111c3bab36d] = env->getMethodID(cls, "<init>", "(Ljava/io/FileDescriptor;)V");
        mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_available_f2f64475e4580546] = env->getMethodID(cls, "available", "()I");
        mids$[mid_close_7ae3461a92a43152] = env->getMethodID(cls, "close", "()V");
        mids$[mid_getFD_0498b7250232ff82] = env->getMethodID(cls, "getFD", "()Ljava/io/FileDescriptor;");
        mids$[mid_read_f2f64475e4580546] = env->getMethodID(cls, "read", "()I");
        mids$[mid_read_11d417f25cf33664] = env->getMethodID(cls, "read", "([B)I");
        mids$[mid_read_4e993e185759f10d] = env->getMethodID(cls, "read", "([BII)I");
        mids$[mid_skip_955f7541fca701ab] = env->getMethodID(cls, "skip", "(J)J");
        mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    FileInputStream::FileInputStream(const ::java::io::File & a0) : ::java::io::InputStream(env->newObject(initializeClass, &mids$, mid_init$_46e66c77c82c9a6b, a0.this$)) {}

    FileInputStream::FileInputStream(const ::java::io::FileDescriptor & a0) : ::java::io::InputStream(env->newObject(initializeClass, &mids$, mid_init$_451cf111c3bab36d, a0.this$)) {}

    FileInputStream::FileInputStream(const ::java::lang::String & a0) : ::java::io::InputStream(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

    jint FileInputStream::available() const
    {
      return env->callIntMethod(this$, mids$[mid_available_f2f64475e4580546]);
    }

    void FileInputStream::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_7ae3461a92a43152]);
    }

    ::java::io::FileDescriptor FileInputStream::getFD() const
    {
      return ::java::io::FileDescriptor(env->callObjectMethod(this$, mids$[mid_getFD_0498b7250232ff82]));
    }

    jint FileInputStream::read() const
    {
      return env->callIntMethod(this$, mids$[mid_read_f2f64475e4580546]);
    }

    jint FileInputStream::read(const JArray< jbyte > & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_read_11d417f25cf33664], a0.this$);
    }

    jint FileInputStream::read(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      return env->callIntMethod(this$, mids$[mid_read_4e993e185759f10d], a0.this$, a1, a2);
    }

    jlong FileInputStream::skip(jlong a0) const
    {
      return env->callLongMethod(this$, mids$[mid_skip_955f7541fca701ab], a0);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_FileInputStream_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_FileInputStream_instance_(PyTypeObject *type, PyObject *arg);
    static int t_FileInputStream_init_(t_FileInputStream *self, PyObject *args, PyObject *kwds);
    static PyObject *t_FileInputStream_available(t_FileInputStream *self, PyObject *args);
    static PyObject *t_FileInputStream_close(t_FileInputStream *self, PyObject *args);
    static PyObject *t_FileInputStream_getFD(t_FileInputStream *self);
    static PyObject *t_FileInputStream_read(t_FileInputStream *self, PyObject *args);
    static PyObject *t_FileInputStream_skip(t_FileInputStream *self, PyObject *args);
    static PyObject *t_FileInputStream_get__fD(t_FileInputStream *self, void *data);
    static PyGetSetDef t_FileInputStream__fields_[] = {
      DECLARE_GET_FIELD(t_FileInputStream, fD),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_FileInputStream__methods_[] = {
      DECLARE_METHOD(t_FileInputStream, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FileInputStream, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FileInputStream, available, METH_VARARGS),
      DECLARE_METHOD(t_FileInputStream, close, METH_VARARGS),
      DECLARE_METHOD(t_FileInputStream, getFD, METH_NOARGS),
      DECLARE_METHOD(t_FileInputStream, read, METH_VARARGS),
      DECLARE_METHOD(t_FileInputStream, skip, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(FileInputStream)[] = {
      { Py_tp_methods, t_FileInputStream__methods_ },
      { Py_tp_init, (void *) t_FileInputStream_init_ },
      { Py_tp_getset, t_FileInputStream__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(FileInputStream)[] = {
      &PY_TYPE_DEF(::java::io::InputStream),
      NULL
    };

    DEFINE_TYPE(FileInputStream, t_FileInputStream, FileInputStream);

    void t_FileInputStream::install(PyObject *module)
    {
      installType(&PY_TYPE(FileInputStream), &PY_TYPE_DEF(FileInputStream), module, "FileInputStream", 0);
    }

    void t_FileInputStream::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileInputStream), "class_", make_descriptor(FileInputStream::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileInputStream), "wrapfn_", make_descriptor(t_FileInputStream::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileInputStream), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_FileInputStream_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, FileInputStream::initializeClass, 1)))
        return NULL;
      return t_FileInputStream::wrap_Object(FileInputStream(((t_FileInputStream *) arg)->object.this$));
    }
    static PyObject *t_FileInputStream_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, FileInputStream::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_FileInputStream_init_(t_FileInputStream *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::io::File a0((jobject) NULL);
          FileInputStream object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::File::initializeClass, &a0))
          {
            INT_CALL(object = FileInputStream(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::io::FileDescriptor a0((jobject) NULL);
          FileInputStream object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::FileDescriptor::initializeClass, &a0))
          {
            INT_CALL(object = FileInputStream(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          FileInputStream object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = FileInputStream(a0));
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

    static PyObject *t_FileInputStream_available(t_FileInputStream *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.available());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(FileInputStream), (PyObject *) self, "available", args, 2);
    }

    static PyObject *t_FileInputStream_close(t_FileInputStream *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(FileInputStream), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_FileInputStream_getFD(t_FileInputStream *self)
    {
      ::java::io::FileDescriptor result((jobject) NULL);
      OBJ_CALL(result = self->object.getFD());
      return ::java::io::t_FileDescriptor::wrap_Object(result);
    }

    static PyObject *t_FileInputStream_read(t_FileInputStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          jint result;
          OBJ_CALL(result = self->object.read());
          return PyLong_FromLong((long) result);
        }
        break;
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[B", &a0))
          {
            OBJ_CALL(result = self->object.read(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 3:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "[BII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.read(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      return callSuper(PY_TYPE(FileInputStream), (PyObject *) self, "read", args, 2);
    }

    static PyObject *t_FileInputStream_skip(t_FileInputStream *self, PyObject *args)
    {
      jlong a0;
      jlong result;

      if (!parseArgs(args, "J", &a0))
      {
        OBJ_CALL(result = self->object.skip(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      return callSuper(PY_TYPE(FileInputStream), (PyObject *) self, "skip", args, 2);
    }

    static PyObject *t_FileInputStream_get__fD(t_FileInputStream *self, void *data)
    {
      ::java::io::FileDescriptor value((jobject) NULL);
      OBJ_CALL(value = self->object.getFD());
      return ::java::io::t_FileDescriptor::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/KeplerianOrbit.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/orbits/PositionAngleBased.h"
#include "org/orekit/orbits/KeplerianOrbit.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *KeplerianOrbit::class$ = NULL;
      jmethodID *KeplerianOrbit::mids$ = NULL;
      bool KeplerianOrbit::live$ = false;

      jclass KeplerianOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/KeplerianOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e5b8a6a44355183e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;)V");
          mids$[mid_init$_c42dca2c1e36096d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;D)V");
          mids$[mid_init$_e115ec145d0ee229] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_init$_4eabb869f3e95925] = env->getMethodID(cls, "<init>", "(DDDDDDLorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_init$_8a0c29e70f4666fb] = env->getMethodID(cls, "<init>", "(DDDDDDDDDDDDLorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_addKeplerContribution_c8fa6ba58ef7126b] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;D[D)V");
          mids$[mid_getA_456d9a2f64d6b28d] = env->getMethodID(cls, "getA", "()D");
          mids$[mid_getADot_456d9a2f64d6b28d] = env->getMethodID(cls, "getADot", "()D");
          mids$[mid_getAnomaly_9803e84c1105942b] = env->getMethodID(cls, "getAnomaly", "(Lorg/orekit/orbits/PositionAngleType;)D");
          mids$[mid_getAnomalyDot_9803e84c1105942b] = env->getMethodID(cls, "getAnomalyDot", "(Lorg/orekit/orbits/PositionAngleType;)D");
          mids$[mid_getCachedPositionAngleType_2571e8fe1cede425] = env->getMethodID(cls, "getCachedPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_getE_456d9a2f64d6b28d] = env->getMethodID(cls, "getE", "()D");
          mids$[mid_getEDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getEDot", "()D");
          mids$[mid_getEccentricAnomaly_456d9a2f64d6b28d] = env->getMethodID(cls, "getEccentricAnomaly", "()D");
          mids$[mid_getEccentricAnomalyDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getEccentricAnomalyDot", "()D");
          mids$[mid_getEquinoctialEx_456d9a2f64d6b28d] = env->getMethodID(cls, "getEquinoctialEx", "()D");
          mids$[mid_getEquinoctialExDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getEquinoctialExDot", "()D");
          mids$[mid_getEquinoctialEy_456d9a2f64d6b28d] = env->getMethodID(cls, "getEquinoctialEy", "()D");
          mids$[mid_getEquinoctialEyDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getEquinoctialEyDot", "()D");
          mids$[mid_getHx_456d9a2f64d6b28d] = env->getMethodID(cls, "getHx", "()D");
          mids$[mid_getHxDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getHxDot", "()D");
          mids$[mid_getHy_456d9a2f64d6b28d] = env->getMethodID(cls, "getHy", "()D");
          mids$[mid_getHyDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getHyDot", "()D");
          mids$[mid_getI_456d9a2f64d6b28d] = env->getMethodID(cls, "getI", "()D");
          mids$[mid_getIDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getIDot", "()D");
          mids$[mid_getLE_456d9a2f64d6b28d] = env->getMethodID(cls, "getLE", "()D");
          mids$[mid_getLEDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getLEDot", "()D");
          mids$[mid_getLM_456d9a2f64d6b28d] = env->getMethodID(cls, "getLM", "()D");
          mids$[mid_getLMDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getLMDot", "()D");
          mids$[mid_getLv_456d9a2f64d6b28d] = env->getMethodID(cls, "getLv", "()D");
          mids$[mid_getLvDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getLvDot", "()D");
          mids$[mid_getMeanAnomaly_456d9a2f64d6b28d] = env->getMethodID(cls, "getMeanAnomaly", "()D");
          mids$[mid_getMeanAnomalyDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getMeanAnomalyDot", "()D");
          mids$[mid_getPerigeeArgument_456d9a2f64d6b28d] = env->getMethodID(cls, "getPerigeeArgument", "()D");
          mids$[mid_getPerigeeArgumentDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getPerigeeArgumentDot", "()D");
          mids$[mid_getRightAscensionOfAscendingNode_456d9a2f64d6b28d] = env->getMethodID(cls, "getRightAscensionOfAscendingNode", "()D");
          mids$[mid_getRightAscensionOfAscendingNodeDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getRightAscensionOfAscendingNodeDot", "()D");
          mids$[mid_getTrueAnomaly_456d9a2f64d6b28d] = env->getMethodID(cls, "getTrueAnomaly", "()D");
          mids$[mid_getTrueAnomalyDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getTrueAnomalyDot", "()D");
          mids$[mid_getType_63ea5cd020bf7bf1] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasRates_e470b6d9e0d979db] = env->getMethodID(cls, "hasRates", "()Z");
          mids$[mid_removeRates_073190698893349f] = env->getMethodID(cls, "removeRates", "()Lorg/orekit/orbits/KeplerianOrbit;");
          mids$[mid_shiftedBy_7006cc464ada3a10] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/KeplerianOrbit;");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_initPosition_17a952530a808943] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_initPVCoordinates_6890805957bea2cd] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_computeJacobianMeanWrtCartesian_43de1192439efa92] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[D");
          mids$[mid_computeJacobianEccentricWrtCartesian_43de1192439efa92] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[D");
          mids$[mid_computeJacobianTrueWrtCartesian_43de1192439efa92] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      KeplerianOrbit::KeplerianOrbit(const ::org::orekit::orbits::Orbit & a0) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_e5b8a6a44355183e, a0.this$)) {}

      KeplerianOrbit::KeplerianOrbit(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, jdouble a2) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_c42dca2c1e36096d, a0.this$, a1.this$, a2)) {}

      KeplerianOrbit::KeplerianOrbit(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_e115ec145d0ee229, a0.this$, a1.this$, a2.this$, a3)) {}

      KeplerianOrbit::KeplerianOrbit(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::orbits::PositionAngleType & a6, const ::org::orekit::frames::Frame & a7, const ::org::orekit::time::AbsoluteDate & a8, jdouble a9) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_4eabb869f3e95925, a0, a1, a2, a3, a4, a5, a6.this$, a7.this$, a8.this$, a9)) {}

      KeplerianOrbit::KeplerianOrbit(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, const ::org::orekit::orbits::PositionAngleType & a12, const ::org::orekit::frames::Frame & a13, const ::org::orekit::time::AbsoluteDate & a14, jdouble a15) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_8a0c29e70f4666fb, a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12.this$, a13.this$, a14.this$, a15)) {}

      void KeplerianOrbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, jdouble a1, const JArray< jdouble > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_c8fa6ba58ef7126b], a0.this$, a1, a2.this$);
      }

      jdouble KeplerianOrbit::getA() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getA_456d9a2f64d6b28d]);
      }

      jdouble KeplerianOrbit::getADot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getADot_456d9a2f64d6b28d]);
      }

      jdouble KeplerianOrbit::getAnomaly(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAnomaly_9803e84c1105942b], a0.this$);
      }

      jdouble KeplerianOrbit::getAnomalyDot(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAnomalyDot_9803e84c1105942b], a0.this$);
      }

      ::org::orekit::orbits::PositionAngleType KeplerianOrbit::getCachedPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getCachedPositionAngleType_2571e8fe1cede425]));
      }

      jdouble KeplerianOrbit::getE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getE_456d9a2f64d6b28d]);
      }

      jdouble KeplerianOrbit::getEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEDot_456d9a2f64d6b28d]);
      }

      jdouble KeplerianOrbit::getEccentricAnomaly() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEccentricAnomaly_456d9a2f64d6b28d]);
      }

      jdouble KeplerianOrbit::getEccentricAnomalyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEccentricAnomalyDot_456d9a2f64d6b28d]);
      }

      jdouble KeplerianOrbit::getEquinoctialEx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEx_456d9a2f64d6b28d]);
      }

      jdouble KeplerianOrbit::getEquinoctialExDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialExDot_456d9a2f64d6b28d]);
      }

      jdouble KeplerianOrbit::getEquinoctialEy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEy_456d9a2f64d6b28d]);
      }

      jdouble KeplerianOrbit::getEquinoctialEyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEyDot_456d9a2f64d6b28d]);
      }

      jdouble KeplerianOrbit::getHx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHx_456d9a2f64d6b28d]);
      }

      jdouble KeplerianOrbit::getHxDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHxDot_456d9a2f64d6b28d]);
      }

      jdouble KeplerianOrbit::getHy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHy_456d9a2f64d6b28d]);
      }

      jdouble KeplerianOrbit::getHyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHyDot_456d9a2f64d6b28d]);
      }

      jdouble KeplerianOrbit::getI() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getI_456d9a2f64d6b28d]);
      }

      jdouble KeplerianOrbit::getIDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getIDot_456d9a2f64d6b28d]);
      }

      jdouble KeplerianOrbit::getLE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLE_456d9a2f64d6b28d]);
      }

      jdouble KeplerianOrbit::getLEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLEDot_456d9a2f64d6b28d]);
      }

      jdouble KeplerianOrbit::getLM() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLM_456d9a2f64d6b28d]);
      }

      jdouble KeplerianOrbit::getLMDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLMDot_456d9a2f64d6b28d]);
      }

      jdouble KeplerianOrbit::getLv() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLv_456d9a2f64d6b28d]);
      }

      jdouble KeplerianOrbit::getLvDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLvDot_456d9a2f64d6b28d]);
      }

      jdouble KeplerianOrbit::getMeanAnomaly() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMeanAnomaly_456d9a2f64d6b28d]);
      }

      jdouble KeplerianOrbit::getMeanAnomalyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMeanAnomalyDot_456d9a2f64d6b28d]);
      }

      jdouble KeplerianOrbit::getPerigeeArgument() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPerigeeArgument_456d9a2f64d6b28d]);
      }

      jdouble KeplerianOrbit::getPerigeeArgumentDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPerigeeArgumentDot_456d9a2f64d6b28d]);
      }

      jdouble KeplerianOrbit::getRightAscensionOfAscendingNode() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRightAscensionOfAscendingNode_456d9a2f64d6b28d]);
      }

      jdouble KeplerianOrbit::getRightAscensionOfAscendingNodeDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRightAscensionOfAscendingNodeDot_456d9a2f64d6b28d]);
      }

      jdouble KeplerianOrbit::getTrueAnomaly() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getTrueAnomaly_456d9a2f64d6b28d]);
      }

      jdouble KeplerianOrbit::getTrueAnomalyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getTrueAnomalyDot_456d9a2f64d6b28d]);
      }

      ::org::orekit::orbits::OrbitType KeplerianOrbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_63ea5cd020bf7bf1]));
      }

      jboolean KeplerianOrbit::hasRates() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasRates_e470b6d9e0d979db]);
      }

      KeplerianOrbit KeplerianOrbit::removeRates() const
      {
        return KeplerianOrbit(env->callObjectMethod(this$, mids$[mid_removeRates_073190698893349f]));
      }

      KeplerianOrbit KeplerianOrbit::shiftedBy(jdouble a0) const
      {
        return KeplerianOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_7006cc464ada3a10], a0));
      }

      ::java::lang::String KeplerianOrbit::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
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
      static PyObject *t_KeplerianOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_KeplerianOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static int t_KeplerianOrbit_init_(t_KeplerianOrbit *self, PyObject *args, PyObject *kwds);
      static PyObject *t_KeplerianOrbit_addKeplerContribution(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getA(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getADot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getAnomaly(t_KeplerianOrbit *self, PyObject *arg);
      static PyObject *t_KeplerianOrbit_getAnomalyDot(t_KeplerianOrbit *self, PyObject *arg);
      static PyObject *t_KeplerianOrbit_getCachedPositionAngleType(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getE(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getEDot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getEccentricAnomaly(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getEccentricAnomalyDot(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getEquinoctialEx(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getEquinoctialExDot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getEquinoctialEy(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getEquinoctialEyDot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getHx(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getHxDot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getHy(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getHyDot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getI(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getIDot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getLE(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getLEDot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getLM(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getLMDot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getLv(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getLvDot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getMeanAnomaly(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getMeanAnomalyDot(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getPerigeeArgument(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getPerigeeArgumentDot(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getRightAscensionOfAscendingNode(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getRightAscensionOfAscendingNodeDot(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getTrueAnomaly(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getTrueAnomalyDot(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getType(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_hasRates(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_removeRates(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_shiftedBy(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_toString(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_get__a(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__aDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__cachedPositionAngleType(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__e(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__eDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__eccentricAnomaly(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__eccentricAnomalyDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__equinoctialEx(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__equinoctialExDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__equinoctialEy(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__equinoctialEyDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__hx(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__hxDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__hy(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__hyDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__i(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__iDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__lE(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__lEDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__lM(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__lMDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__lv(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__lvDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__meanAnomaly(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__meanAnomalyDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__perigeeArgument(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__perigeeArgumentDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__rightAscensionOfAscendingNode(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__rightAscensionOfAscendingNodeDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__trueAnomaly(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__trueAnomalyDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__type(t_KeplerianOrbit *self, void *data);
      static PyGetSetDef t_KeplerianOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_KeplerianOrbit, a),
        DECLARE_GET_FIELD(t_KeplerianOrbit, aDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, cachedPositionAngleType),
        DECLARE_GET_FIELD(t_KeplerianOrbit, e),
        DECLARE_GET_FIELD(t_KeplerianOrbit, eDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, eccentricAnomaly),
        DECLARE_GET_FIELD(t_KeplerianOrbit, eccentricAnomalyDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, equinoctialEx),
        DECLARE_GET_FIELD(t_KeplerianOrbit, equinoctialExDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, equinoctialEy),
        DECLARE_GET_FIELD(t_KeplerianOrbit, equinoctialEyDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, hx),
        DECLARE_GET_FIELD(t_KeplerianOrbit, hxDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, hy),
        DECLARE_GET_FIELD(t_KeplerianOrbit, hyDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, i),
        DECLARE_GET_FIELD(t_KeplerianOrbit, iDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, lE),
        DECLARE_GET_FIELD(t_KeplerianOrbit, lEDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, lM),
        DECLARE_GET_FIELD(t_KeplerianOrbit, lMDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, lv),
        DECLARE_GET_FIELD(t_KeplerianOrbit, lvDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, meanAnomaly),
        DECLARE_GET_FIELD(t_KeplerianOrbit, meanAnomalyDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, perigeeArgument),
        DECLARE_GET_FIELD(t_KeplerianOrbit, perigeeArgumentDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, rightAscensionOfAscendingNode),
        DECLARE_GET_FIELD(t_KeplerianOrbit, rightAscensionOfAscendingNodeDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, trueAnomaly),
        DECLARE_GET_FIELD(t_KeplerianOrbit, trueAnomalyDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, type),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_KeplerianOrbit__methods_[] = {
        DECLARE_METHOD(t_KeplerianOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_KeplerianOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_KeplerianOrbit, addKeplerContribution, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getA, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getADot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getAnomaly, METH_O),
        DECLARE_METHOD(t_KeplerianOrbit, getAnomalyDot, METH_O),
        DECLARE_METHOD(t_KeplerianOrbit, getCachedPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getE, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getEDot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getEccentricAnomaly, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getEccentricAnomalyDot, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getEquinoctialEx, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getEquinoctialExDot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getEquinoctialEy, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getEquinoctialEyDot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getHx, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getHxDot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getHy, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getHyDot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getI, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getIDot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getLE, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getLEDot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getLM, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getLMDot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getLv, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getLvDot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getMeanAnomaly, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getMeanAnomalyDot, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getPerigeeArgument, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getPerigeeArgumentDot, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getRightAscensionOfAscendingNode, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getRightAscensionOfAscendingNodeDot, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getTrueAnomaly, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getTrueAnomalyDot, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getType, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, hasRates, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, removeRates, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(KeplerianOrbit)[] = {
        { Py_tp_methods, t_KeplerianOrbit__methods_ },
        { Py_tp_init, (void *) t_KeplerianOrbit_init_ },
        { Py_tp_getset, t_KeplerianOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(KeplerianOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::Orbit),
        NULL
      };

      DEFINE_TYPE(KeplerianOrbit, t_KeplerianOrbit, KeplerianOrbit);

      void t_KeplerianOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(KeplerianOrbit), &PY_TYPE_DEF(KeplerianOrbit), module, "KeplerianOrbit", 0);
      }

      void t_KeplerianOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianOrbit), "class_", make_descriptor(KeplerianOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianOrbit), "wrapfn_", make_descriptor(t_KeplerianOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_KeplerianOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, KeplerianOrbit::initializeClass, 1)))
          return NULL;
        return t_KeplerianOrbit::wrap_Object(KeplerianOrbit(((t_KeplerianOrbit *) arg)->object.this$));
      }
      static PyObject *t_KeplerianOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, KeplerianOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_KeplerianOrbit_init_(t_KeplerianOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            KeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
            {
              INT_CALL(object = KeplerianOrbit(a0));
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
            KeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = KeplerianOrbit(a0, a1, a2));
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
            KeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkkD", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = KeplerianOrbit(a0, a1, a2, a3));
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
            KeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "DDDDDDKkkD", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a7, &a8, &a9))
            {
              INT_CALL(object = KeplerianOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
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
            KeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "DDDDDDDDDDDDKkkD", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &p12, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a13, &a14, &a15))
            {
              INT_CALL(object = KeplerianOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15));
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

      static PyObject *t_KeplerianOrbit_addKeplerContribution(t_KeplerianOrbit *self, PyObject *args)
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

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "addKeplerContribution", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getA(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getA());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getA", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getADot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getADot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getADot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getAnomaly(t_KeplerianOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getAnomaly(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getAnomaly", arg);
        return NULL;
      }

      static PyObject *t_KeplerianOrbit_getAnomalyDot(t_KeplerianOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getAnomalyDot(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getAnomalyDot", arg);
        return NULL;
      }

      static PyObject *t_KeplerianOrbit_getCachedPositionAngleType(t_KeplerianOrbit *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_KeplerianOrbit_getE(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getE());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getE", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getEDot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getEDot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getEccentricAnomaly(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEccentricAnomaly());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getEccentricAnomalyDot(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEccentricAnomalyDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getEquinoctialEx(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEx());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getEquinoctialEx", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getEquinoctialExDot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialExDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getEquinoctialExDot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getEquinoctialEy(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEy());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getEquinoctialEy", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getEquinoctialEyDot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEyDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getEquinoctialEyDot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getHx(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHx());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getHx", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getHxDot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHxDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getHxDot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getHy(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHy());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getHy", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getHyDot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHyDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getHyDot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getI(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getI());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getI", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getIDot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getIDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getIDot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getLE(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLE());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getLE", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getLEDot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLEDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getLEDot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getLM(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLM());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getLM", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getLMDot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLMDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getLMDot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getLv(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLv());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getLv", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getLvDot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLvDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getLvDot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getMeanAnomaly(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMeanAnomaly());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getMeanAnomalyDot(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMeanAnomalyDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getPerigeeArgument(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getPerigeeArgument());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getPerigeeArgumentDot(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getPerigeeArgumentDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getRightAscensionOfAscendingNode(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getRightAscensionOfAscendingNode());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getRightAscensionOfAscendingNodeDot(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getRightAscensionOfAscendingNodeDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getTrueAnomaly(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getTrueAnomaly());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getTrueAnomalyDot(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getTrueAnomalyDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getType(t_KeplerianOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getType", args, 2);
      }

      static PyObject *t_KeplerianOrbit_hasRates(t_KeplerianOrbit *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasRates());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_KeplerianOrbit_removeRates(t_KeplerianOrbit *self)
      {
        KeplerianOrbit result((jobject) NULL);
        OBJ_CALL(result = self->object.removeRates());
        return t_KeplerianOrbit::wrap_Object(result);
      }

      static PyObject *t_KeplerianOrbit_shiftedBy(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble a0;
        KeplerianOrbit result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_KeplerianOrbit::wrap_Object(result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_KeplerianOrbit_toString(t_KeplerianOrbit *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_KeplerianOrbit_get__a(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getA());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__aDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getADot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__cachedPositionAngleType(t_KeplerianOrbit *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }

      static PyObject *t_KeplerianOrbit_get__e(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__eDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__eccentricAnomaly(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEccentricAnomaly());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__eccentricAnomalyDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEccentricAnomalyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__equinoctialEx(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__equinoctialExDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialExDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__equinoctialEy(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__equinoctialEyDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__hx(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__hxDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHxDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__hy(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__hyDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__i(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getI());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__iDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getIDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__lE(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__lEDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__lM(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLM());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__lMDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLMDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__lv(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLv());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__lvDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLvDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__meanAnomaly(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMeanAnomaly());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__meanAnomalyDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMeanAnomalyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__perigeeArgument(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getPerigeeArgument());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__perigeeArgumentDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getPerigeeArgumentDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__rightAscensionOfAscendingNode(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getRightAscensionOfAscendingNode());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__rightAscensionOfAscendingNodeDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getRightAscensionOfAscendingNodeDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__trueAnomaly(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getTrueAnomaly());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__trueAnomalyDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getTrueAnomalyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__type(t_KeplerianOrbit *self, void *data)
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
#include "org/orekit/propagation/sampling/PythonOrekitFixedStepHandler.h"
#include "org/orekit/propagation/sampling/OrekitFixedStepHandler.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *PythonOrekitFixedStepHandler::class$ = NULL;
        jmethodID *PythonOrekitFixedStepHandler::mids$ = NULL;
        bool PythonOrekitFixedStepHandler::live$ = false;

        jclass PythonOrekitFixedStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/PythonOrekitFixedStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_finish_2b88003f931f70a7] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_handleStep_2b88003f931f70a7] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_init_703918df646bd2ae] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;D)V");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonOrekitFixedStepHandler::PythonOrekitFixedStepHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonOrekitFixedStepHandler::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonOrekitFixedStepHandler::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonOrekitFixedStepHandler::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
        static PyObject *t_PythonOrekitFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonOrekitFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonOrekitFixedStepHandler_init_(t_PythonOrekitFixedStepHandler *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonOrekitFixedStepHandler_finalize(t_PythonOrekitFixedStepHandler *self);
        static PyObject *t_PythonOrekitFixedStepHandler_pythonExtension(t_PythonOrekitFixedStepHandler *self, PyObject *args);
        static void JNICALL t_PythonOrekitFixedStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonOrekitFixedStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonOrekitFixedStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2);
        static void JNICALL t_PythonOrekitFixedStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonOrekitFixedStepHandler_get__self(t_PythonOrekitFixedStepHandler *self, void *data);
        static PyGetSetDef t_PythonOrekitFixedStepHandler__fields_[] = {
          DECLARE_GET_FIELD(t_PythonOrekitFixedStepHandler, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonOrekitFixedStepHandler__methods_[] = {
          DECLARE_METHOD(t_PythonOrekitFixedStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonOrekitFixedStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonOrekitFixedStepHandler, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonOrekitFixedStepHandler, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonOrekitFixedStepHandler)[] = {
          { Py_tp_methods, t_PythonOrekitFixedStepHandler__methods_ },
          { Py_tp_init, (void *) t_PythonOrekitFixedStepHandler_init_ },
          { Py_tp_getset, t_PythonOrekitFixedStepHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonOrekitFixedStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonOrekitFixedStepHandler, t_PythonOrekitFixedStepHandler, PythonOrekitFixedStepHandler);

        void t_PythonOrekitFixedStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonOrekitFixedStepHandler), &PY_TYPE_DEF(PythonOrekitFixedStepHandler), module, "PythonOrekitFixedStepHandler", 1);
        }

        void t_PythonOrekitFixedStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrekitFixedStepHandler), "class_", make_descriptor(PythonOrekitFixedStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrekitFixedStepHandler), "wrapfn_", make_descriptor(t_PythonOrekitFixedStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrekitFixedStepHandler), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonOrekitFixedStepHandler::initializeClass);
          JNINativeMethod methods[] = {
            { "finish", "(Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonOrekitFixedStepHandler_finish0 },
            { "handleStep", "(Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonOrekitFixedStepHandler_handleStep1 },
            { "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;D)V", (void *) t_PythonOrekitFixedStepHandler_init2 },
            { "pythonDecRef", "()V", (void *) t_PythonOrekitFixedStepHandler_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonOrekitFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonOrekitFixedStepHandler::initializeClass, 1)))
            return NULL;
          return t_PythonOrekitFixedStepHandler::wrap_Object(PythonOrekitFixedStepHandler(((t_PythonOrekitFixedStepHandler *) arg)->object.this$));
        }
        static PyObject *t_PythonOrekitFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonOrekitFixedStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonOrekitFixedStepHandler_init_(t_PythonOrekitFixedStepHandler *self, PyObject *args, PyObject *kwds)
        {
          PythonOrekitFixedStepHandler object((jobject) NULL);

          INT_CALL(object = PythonOrekitFixedStepHandler());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonOrekitFixedStepHandler_finalize(t_PythonOrekitFixedStepHandler *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonOrekitFixedStepHandler_pythonExtension(t_PythonOrekitFixedStepHandler *self, PyObject *args)
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

        static void JNICALL t_PythonOrekitFixedStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitFixedStepHandler::mids$[PythonOrekitFixedStepHandler::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "finish", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonOrekitFixedStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitFixedStepHandler::mids$[PythonOrekitFixedStepHandler::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "handleStep", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonOrekitFixedStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitFixedStepHandler::mids$[PythonOrekitFixedStepHandler::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
          PyObject *result = PyObject_CallMethod(obj, "init", "OOd", o0, o1, (double) a2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonOrekitFixedStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitFixedStepHandler::mids$[PythonOrekitFixedStepHandler::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonOrekitFixedStepHandler::mids$[PythonOrekitFixedStepHandler::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonOrekitFixedStepHandler_get__self(t_PythonOrekitFixedStepHandler *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/OdmMetadata.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *OdmMetadata::class$ = NULL;
            jmethodID *OdmMetadata::mids$ = NULL;
            bool OdmMetadata::live$ = false;

            jclass OdmMetadata::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/OdmMetadata");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getObjectName_0090f7797e403f43] = env->getMethodID(cls, "getObjectName", "()Ljava/lang/String;");
                mids$[mid_setObjectName_e939c6558ae8d313] = env->getMethodID(cls, "setObjectName", "(Ljava/lang/String;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::java::lang::String OdmMetadata::getObjectName() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObjectName_0090f7797e403f43]));
            }

            void OdmMetadata::setObjectName(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObjectName_e939c6558ae8d313], a0.this$);
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
            static PyObject *t_OdmMetadata_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_OdmMetadata_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_OdmMetadata_getObjectName(t_OdmMetadata *self);
            static PyObject *t_OdmMetadata_setObjectName(t_OdmMetadata *self, PyObject *arg);
            static PyObject *t_OdmMetadata_get__objectName(t_OdmMetadata *self, void *data);
            static int t_OdmMetadata_set__objectName(t_OdmMetadata *self, PyObject *arg, void *data);
            static PyGetSetDef t_OdmMetadata__fields_[] = {
              DECLARE_GETSET_FIELD(t_OdmMetadata, objectName),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_OdmMetadata__methods_[] = {
              DECLARE_METHOD(t_OdmMetadata, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OdmMetadata, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OdmMetadata, getObjectName, METH_NOARGS),
              DECLARE_METHOD(t_OdmMetadata, setObjectName, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(OdmMetadata)[] = {
              { Py_tp_methods, t_OdmMetadata__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_OdmMetadata__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(OdmMetadata)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Metadata),
              NULL
            };

            DEFINE_TYPE(OdmMetadata, t_OdmMetadata, OdmMetadata);

            void t_OdmMetadata::install(PyObject *module)
            {
              installType(&PY_TYPE(OdmMetadata), &PY_TYPE_DEF(OdmMetadata), module, "OdmMetadata", 0);
            }

            void t_OdmMetadata::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmMetadata), "class_", make_descriptor(OdmMetadata::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmMetadata), "wrapfn_", make_descriptor(t_OdmMetadata::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmMetadata), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_OdmMetadata_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, OdmMetadata::initializeClass, 1)))
                return NULL;
              return t_OdmMetadata::wrap_Object(OdmMetadata(((t_OdmMetadata *) arg)->object.this$));
            }
            static PyObject *t_OdmMetadata_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, OdmMetadata::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_OdmMetadata_getObjectName(t_OdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getObjectName());
              return j2p(result);
            }

            static PyObject *t_OdmMetadata_setObjectName(t_OdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setObjectName(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setObjectName", arg);
              return NULL;
            }

            static PyObject *t_OdmMetadata_get__objectName(t_OdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getObjectName());
              return j2p(value);
            }
            static int t_OdmMetadata_set__objectName(t_OdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setObjectName(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "objectName", arg);
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
#include "org/hipparchus/analysis/PythonFieldUnivariateFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/FieldUnivariateFunction.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *PythonFieldUnivariateFunction::class$ = NULL;
      jmethodID *PythonFieldUnivariateFunction::mids$ = NULL;
      bool PythonFieldUnivariateFunction::live$ = false;

      jclass PythonFieldUnivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/PythonFieldUnivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_value_d3398190482814dc] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldUnivariateFunction::PythonFieldUnivariateFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonFieldUnivariateFunction::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonFieldUnivariateFunction::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonFieldUnivariateFunction::pythonExtension(jlong a0) const
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
  namespace hipparchus {
    namespace analysis {
      static PyObject *t_PythonFieldUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonFieldUnivariateFunction_init_(t_PythonFieldUnivariateFunction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldUnivariateFunction_finalize(t_PythonFieldUnivariateFunction *self);
      static PyObject *t_PythonFieldUnivariateFunction_pythonExtension(t_PythonFieldUnivariateFunction *self, PyObject *args);
      static void JNICALL t_PythonFieldUnivariateFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldUnivariateFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonFieldUnivariateFunction_get__self(t_PythonFieldUnivariateFunction *self, void *data);
      static PyGetSetDef t_PythonFieldUnivariateFunction__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldUnivariateFunction, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldUnivariateFunction__methods_[] = {
        DECLARE_METHOD(t_PythonFieldUnivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldUnivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldUnivariateFunction, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldUnivariateFunction, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldUnivariateFunction)[] = {
        { Py_tp_methods, t_PythonFieldUnivariateFunction__methods_ },
        { Py_tp_init, (void *) t_PythonFieldUnivariateFunction_init_ },
        { Py_tp_getset, t_PythonFieldUnivariateFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldUnivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldUnivariateFunction, t_PythonFieldUnivariateFunction, PythonFieldUnivariateFunction);

      void t_PythonFieldUnivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldUnivariateFunction), &PY_TYPE_DEF(PythonFieldUnivariateFunction), module, "PythonFieldUnivariateFunction", 1);
      }

      void t_PythonFieldUnivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldUnivariateFunction), "class_", make_descriptor(PythonFieldUnivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldUnivariateFunction), "wrapfn_", make_descriptor(t_PythonFieldUnivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldUnivariateFunction), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldUnivariateFunction::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonFieldUnivariateFunction_pythonDecRef0 },
          { "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonFieldUnivariateFunction_value1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonFieldUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldUnivariateFunction::initializeClass, 1)))
          return NULL;
        return t_PythonFieldUnivariateFunction::wrap_Object(PythonFieldUnivariateFunction(((t_PythonFieldUnivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldUnivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonFieldUnivariateFunction_init_(t_PythonFieldUnivariateFunction *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldUnivariateFunction object((jobject) NULL);

        INT_CALL(object = PythonFieldUnivariateFunction());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldUnivariateFunction_finalize(t_PythonFieldUnivariateFunction *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldUnivariateFunction_pythonExtension(t_PythonFieldUnivariateFunction *self, PyObject *args)
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

      static void JNICALL t_PythonFieldUnivariateFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldUnivariateFunction::mids$[PythonFieldUnivariateFunction::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldUnivariateFunction::mids$[PythonFieldUnivariateFunction::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonFieldUnivariateFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldUnivariateFunction::mids$[PythonFieldUnivariateFunction::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
        PyObject *result = PyObject_CallMethod(obj, "value", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
        {
          throwTypeError("value", result);
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

      static PyObject *t_PythonFieldUnivariateFunction_get__self(t_PythonFieldUnivariateFunction *self, void *data)
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
#include "org/orekit/models/earth/troposphere/ViennaOneModel.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "java/util/List.h"
#include "org/orekit/time/TimeScale.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/models/earth/troposphere/MappingFunction.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *ViennaOneModel::class$ = NULL;
          jmethodID *ViennaOneModel::mids$ = NULL;
          bool ViennaOneModel::live$ = false;

          jclass ViennaOneModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/ViennaOneModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0d03c8a1d7f56f02] = env->getMethodID(cls, "<init>", "([D[D)V");
              mids$[mid_init$_3a8146127c0aa9ca] = env->getMethodID(cls, "<init>", "([D[DLorg/orekit/time/TimeScale;)V");
              mids$[mid_computeZenithDelay_99889d5cecaebf5d] = env->getMethodID(cls, "computeZenithDelay", "(Lorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_computeZenithDelay_c76a0fefc1748455] = env->getMethodID(cls, "computeZenithDelay", "(Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_mappingFactors_6def5a87906f3de8] = env->getMethodID(cls, "mappingFactors", "(DLorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_mappingFactors_67294ed37389436d] = env->getMethodID(cls, "mappingFactors", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_af133f80cdba1dc2] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_pathDelay_0326270bf0e8ed17] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ViennaOneModel::ViennaOneModel(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0d03c8a1d7f56f02, a0.this$, a1.this$)) {}

          ViennaOneModel::ViennaOneModel(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3a8146127c0aa9ca, a0.this$, a1.this$, a2.this$)) {}

          JArray< jdouble > ViennaOneModel::computeZenithDelay(const ::org::orekit::bodies::GeodeticPoint & a0, const JArray< jdouble > & a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeZenithDelay_99889d5cecaebf5d], a0.this$, a1.this$, a2.this$));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > ViennaOneModel::computeZenithDelay(const ::org::orekit::bodies::FieldGeodeticPoint & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeZenithDelay_c76a0fefc1748455], a0.this$, a1.this$, a2.this$));
          }

          ::java::util::List ViennaOneModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          JArray< jdouble > ViennaOneModel::mappingFactors(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_mappingFactors_6def5a87906f3de8], a0, a1.this$, a2.this$));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > ViennaOneModel::mappingFactors(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_mappingFactors_67294ed37389436d], a0.this$, a1.this$, a2.this$));
          }

          jdouble ViennaOneModel::pathDelay(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< jdouble > & a2, const ::org::orekit::time::AbsoluteDate & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_af133f80cdba1dc2], a0, a1.this$, a2.this$, a3.this$);
          }

          ::org::hipparchus::CalculusFieldElement ViennaOneModel::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_0326270bf0e8ed17], a0.this$, a1.this$, a2.this$, a3.this$));
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
        namespace troposphere {
          static PyObject *t_ViennaOneModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ViennaOneModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ViennaOneModel_init_(t_ViennaOneModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ViennaOneModel_computeZenithDelay(t_ViennaOneModel *self, PyObject *args);
          static PyObject *t_ViennaOneModel_getParametersDrivers(t_ViennaOneModel *self);
          static PyObject *t_ViennaOneModel_mappingFactors(t_ViennaOneModel *self, PyObject *args);
          static PyObject *t_ViennaOneModel_pathDelay(t_ViennaOneModel *self, PyObject *args);
          static PyObject *t_ViennaOneModel_get__parametersDrivers(t_ViennaOneModel *self, void *data);
          static PyGetSetDef t_ViennaOneModel__fields_[] = {
            DECLARE_GET_FIELD(t_ViennaOneModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ViennaOneModel__methods_[] = {
            DECLARE_METHOD(t_ViennaOneModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ViennaOneModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ViennaOneModel, computeZenithDelay, METH_VARARGS),
            DECLARE_METHOD(t_ViennaOneModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_ViennaOneModel, mappingFactors, METH_VARARGS),
            DECLARE_METHOD(t_ViennaOneModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ViennaOneModel)[] = {
            { Py_tp_methods, t_ViennaOneModel__methods_ },
            { Py_tp_init, (void *) t_ViennaOneModel_init_ },
            { Py_tp_getset, t_ViennaOneModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ViennaOneModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ViennaOneModel, t_ViennaOneModel, ViennaOneModel);

          void t_ViennaOneModel::install(PyObject *module)
          {
            installType(&PY_TYPE(ViennaOneModel), &PY_TYPE_DEF(ViennaOneModel), module, "ViennaOneModel", 0);
          }

          void t_ViennaOneModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaOneModel), "class_", make_descriptor(ViennaOneModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaOneModel), "wrapfn_", make_descriptor(t_ViennaOneModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaOneModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ViennaOneModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ViennaOneModel::initializeClass, 1)))
              return NULL;
            return t_ViennaOneModel::wrap_Object(ViennaOneModel(((t_ViennaOneModel *) arg)->object.this$));
          }
          static PyObject *t_ViennaOneModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ViennaOneModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ViennaOneModel_init_(t_ViennaOneModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ViennaOneModel object((jobject) NULL);

                if (!parseArgs(args, "[D[D", &a0, &a1))
                {
                  INT_CALL(object = ViennaOneModel(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ::org::orekit::time::TimeScale a2((jobject) NULL);
                ViennaOneModel object((jobject) NULL);

                if (!parseArgs(args, "[D[Dk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = ViennaOneModel(a0, a1, a2));
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

          static PyObject *t_ViennaOneModel_computeZenithDelay(t_ViennaOneModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::bodies::FieldGeodeticPoint a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                if (!parseArgs(args, "K[KK", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.computeZenithDelay(a0, a1, a2));
                  return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                }
              }
              {
                ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                JArray< jdouble > result((jobject) NULL);

                if (!parseArgs(args, "k[Dk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.computeZenithDelay(a0, a1, a2));
                  return result.wrap();
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "computeZenithDelay", args);
            return NULL;
          }

          static PyObject *t_ViennaOneModel_getParametersDrivers(t_ViennaOneModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_ViennaOneModel_mappingFactors(t_ViennaOneModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.mappingFactors(a0, a1, a2));
                  return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                }
              }
              {
                jdouble a0;
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                JArray< jdouble > result((jobject) NULL);

                if (!parseArgs(args, "Dkk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.mappingFactors(a0, a1, a2));
                  return result.wrap();
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "mappingFactors", args);
            return NULL;
          }

          static PyObject *t_ViennaOneModel_pathDelay(t_ViennaOneModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                JArray< jdouble > a2((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "Dk[Dk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_ViennaOneModel_get__parametersDrivers(t_ViennaOneModel *self, void *data)
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
#include "org/orekit/utils/AbsolutePVCoordinatesHermiteInterpolator.h"
#include "org/orekit/utils/AbsolutePVCoordinates.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *AbsolutePVCoordinatesHermiteInterpolator::class$ = NULL;
      jmethodID *AbsolutePVCoordinatesHermiteInterpolator::mids$ = NULL;
      bool AbsolutePVCoordinatesHermiteInterpolator::live$ = false;

      jclass AbsolutePVCoordinatesHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/AbsolutePVCoordinatesHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b1992bd1bb70f476] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_2ec8e00deddf59e8] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;)V");
          mids$[mid_init$_2844b958be24763f] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_init$_8ee7bc978fec63e6] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_getFilter_237181d932324188] = env->getMethodID(cls, "getFilter", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
          mids$[mid_getOutputFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getOutputFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_interpolate_a7bd5a496c0bae6e] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/utils/AbsolutePVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbsolutePVCoordinatesHermiteInterpolator::AbsolutePVCoordinatesHermiteInterpolator(const ::org::orekit::frames::Frame & a0) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_b1992bd1bb70f476, a0.this$)) {}

      AbsolutePVCoordinatesHermiteInterpolator::AbsolutePVCoordinatesHermiteInterpolator(jint a0, const ::org::orekit::frames::Frame & a1) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_2ec8e00deddf59e8, a0, a1.this$)) {}

      AbsolutePVCoordinatesHermiteInterpolator::AbsolutePVCoordinatesHermiteInterpolator(jint a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::utils::CartesianDerivativesFilter & a2) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_2844b958be24763f, a0, a1.this$, a2.this$)) {}

      AbsolutePVCoordinatesHermiteInterpolator::AbsolutePVCoordinatesHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_8ee7bc978fec63e6, a0, a1, a2.this$, a3.this$)) {}

      ::org::orekit::utils::CartesianDerivativesFilter AbsolutePVCoordinatesHermiteInterpolator::getFilter() const
      {
        return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getFilter_237181d932324188]));
      }

      ::org::orekit::frames::Frame AbsolutePVCoordinatesHermiteInterpolator::getOutputFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getOutputFrame_c8fe21bcdac65bf6]));
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
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_of_(t_AbsolutePVCoordinatesHermiteInterpolator *self, PyObject *args);
      static int t_AbsolutePVCoordinatesHermiteInterpolator_init_(t_AbsolutePVCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_getFilter(t_AbsolutePVCoordinatesHermiteInterpolator *self);
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_getOutputFrame(t_AbsolutePVCoordinatesHermiteInterpolator *self);
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_get__filter(t_AbsolutePVCoordinatesHermiteInterpolator *self, void *data);
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_get__outputFrame(t_AbsolutePVCoordinatesHermiteInterpolator *self, void *data);
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_get__parameters_(t_AbsolutePVCoordinatesHermiteInterpolator *self, void *data);
      static PyGetSetDef t_AbsolutePVCoordinatesHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_AbsolutePVCoordinatesHermiteInterpolator, filter),
        DECLARE_GET_FIELD(t_AbsolutePVCoordinatesHermiteInterpolator, outputFrame),
        DECLARE_GET_FIELD(t_AbsolutePVCoordinatesHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbsolutePVCoordinatesHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_AbsolutePVCoordinatesHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbsolutePVCoordinatesHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbsolutePVCoordinatesHermiteInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbsolutePVCoordinatesHermiteInterpolator, getFilter, METH_NOARGS),
        DECLARE_METHOD(t_AbsolutePVCoordinatesHermiteInterpolator, getOutputFrame, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbsolutePVCoordinatesHermiteInterpolator)[] = {
        { Py_tp_methods, t_AbsolutePVCoordinatesHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_AbsolutePVCoordinatesHermiteInterpolator_init_ },
        { Py_tp_getset, t_AbsolutePVCoordinatesHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbsolutePVCoordinatesHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(AbsolutePVCoordinatesHermiteInterpolator, t_AbsolutePVCoordinatesHermiteInterpolator, AbsolutePVCoordinatesHermiteInterpolator);
      PyObject *t_AbsolutePVCoordinatesHermiteInterpolator::wrap_Object(const AbsolutePVCoordinatesHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbsolutePVCoordinatesHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbsolutePVCoordinatesHermiteInterpolator *self = (t_AbsolutePVCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbsolutePVCoordinatesHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbsolutePVCoordinatesHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbsolutePVCoordinatesHermiteInterpolator *self = (t_AbsolutePVCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbsolutePVCoordinatesHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(AbsolutePVCoordinatesHermiteInterpolator), &PY_TYPE_DEF(AbsolutePVCoordinatesHermiteInterpolator), module, "AbsolutePVCoordinatesHermiteInterpolator", 0);
      }

      void t_AbsolutePVCoordinatesHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsolutePVCoordinatesHermiteInterpolator), "class_", make_descriptor(AbsolutePVCoordinatesHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsolutePVCoordinatesHermiteInterpolator), "wrapfn_", make_descriptor(t_AbsolutePVCoordinatesHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsolutePVCoordinatesHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbsolutePVCoordinatesHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_AbsolutePVCoordinatesHermiteInterpolator::wrap_Object(AbsolutePVCoordinatesHermiteInterpolator(((t_AbsolutePVCoordinatesHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbsolutePVCoordinatesHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_of_(t_AbsolutePVCoordinatesHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_AbsolutePVCoordinatesHermiteInterpolator_init_(t_AbsolutePVCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            AbsolutePVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              INT_CALL(object = AbsolutePVCoordinatesHermiteInterpolator(a0));
              self->object = object;
              self->parameters[0] = ::org::orekit::utils::PY_TYPE(AbsolutePVCoordinates);
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            AbsolutePVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AbsolutePVCoordinatesHermiteInterpolator(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::orekit::utils::PY_TYPE(AbsolutePVCoordinates);
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::CartesianDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            AbsolutePVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = AbsolutePVCoordinatesHermiteInterpolator(a0, a1, a2));
              self->object = object;
              self->parameters[0] = ::org::orekit::utils::PY_TYPE(AbsolutePVCoordinates);
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::CartesianDerivativesFilter a3((jobject) NULL);
            PyTypeObject **p3;
            AbsolutePVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = AbsolutePVCoordinatesHermiteInterpolator(a0, a1, a2, a3));
              self->object = object;
              self->parameters[0] = ::org::orekit::utils::PY_TYPE(AbsolutePVCoordinates);
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

      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_getFilter(t_AbsolutePVCoordinatesHermiteInterpolator *self)
      {
        ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
        OBJ_CALL(result = self->object.getFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
      }

      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_getOutputFrame(t_AbsolutePVCoordinatesHermiteInterpolator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutputFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_get__parameters_(t_AbsolutePVCoordinatesHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_get__filter(t_AbsolutePVCoordinatesHermiteInterpolator *self, void *data)
      {
        ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
        OBJ_CALL(value = self->object.getFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
      }

      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_get__outputFrame(t_AbsolutePVCoordinatesHermiteInterpolator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutputFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fitting/GaussianCurveFitter.h"
#include "org/hipparchus/fitting/GaussianCurveFitter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fitting {

      ::java::lang::Class *GaussianCurveFitter::class$ = NULL;
      jmethodID *GaussianCurveFitter::mids$ = NULL;
      bool GaussianCurveFitter::live$ = false;

      jclass GaussianCurveFitter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fitting/GaussianCurveFitter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_create_f7c1c887104d4e61] = env->getStaticMethodID(cls, "create", "()Lorg/hipparchus/fitting/GaussianCurveFitter;");
          mids$[mid_withMaxIterations_7e16ecc7bda7c112] = env->getMethodID(cls, "withMaxIterations", "(I)Lorg/hipparchus/fitting/GaussianCurveFitter;");
          mids$[mid_withStartPoint_1c1aae45ffa98ecb] = env->getMethodID(cls, "withStartPoint", "([D)Lorg/hipparchus/fitting/GaussianCurveFitter;");
          mids$[mid_getProblem_23a9c25631fa37c2] = env->getMethodID(cls, "getProblem", "(Ljava/util/Collection;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      GaussianCurveFitter GaussianCurveFitter::create()
      {
        jclass cls = env->getClass(initializeClass);
        return GaussianCurveFitter(env->callStaticObjectMethod(cls, mids$[mid_create_f7c1c887104d4e61]));
      }

      GaussianCurveFitter GaussianCurveFitter::withMaxIterations(jint a0) const
      {
        return GaussianCurveFitter(env->callObjectMethod(this$, mids$[mid_withMaxIterations_7e16ecc7bda7c112], a0));
      }

      GaussianCurveFitter GaussianCurveFitter::withStartPoint(const JArray< jdouble > & a0) const
      {
        return GaussianCurveFitter(env->callObjectMethod(this$, mids$[mid_withStartPoint_1c1aae45ffa98ecb], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/hipparchus/fitting/GaussianCurveFitter$ParameterGuesser.h"

namespace org {
  namespace hipparchus {
    namespace fitting {
      static PyObject *t_GaussianCurveFitter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GaussianCurveFitter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GaussianCurveFitter_create(PyTypeObject *type);
      static PyObject *t_GaussianCurveFitter_withMaxIterations(t_GaussianCurveFitter *self, PyObject *arg);
      static PyObject *t_GaussianCurveFitter_withStartPoint(t_GaussianCurveFitter *self, PyObject *arg);

      static PyMethodDef t_GaussianCurveFitter__methods_[] = {
        DECLARE_METHOD(t_GaussianCurveFitter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GaussianCurveFitter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GaussianCurveFitter, create, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_GaussianCurveFitter, withMaxIterations, METH_O),
        DECLARE_METHOD(t_GaussianCurveFitter, withStartPoint, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GaussianCurveFitter)[] = {
        { Py_tp_methods, t_GaussianCurveFitter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GaussianCurveFitter)[] = {
        &PY_TYPE_DEF(::org::hipparchus::fitting::AbstractCurveFitter),
        NULL
      };

      DEFINE_TYPE(GaussianCurveFitter, t_GaussianCurveFitter, GaussianCurveFitter);

      void t_GaussianCurveFitter::install(PyObject *module)
      {
        installType(&PY_TYPE(GaussianCurveFitter), &PY_TYPE_DEF(GaussianCurveFitter), module, "GaussianCurveFitter", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(GaussianCurveFitter), "ParameterGuesser", make_descriptor(&PY_TYPE_DEF(GaussianCurveFitter$ParameterGuesser)));
      }

      void t_GaussianCurveFitter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GaussianCurveFitter), "class_", make_descriptor(GaussianCurveFitter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GaussianCurveFitter), "wrapfn_", make_descriptor(t_GaussianCurveFitter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GaussianCurveFitter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GaussianCurveFitter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GaussianCurveFitter::initializeClass, 1)))
          return NULL;
        return t_GaussianCurveFitter::wrap_Object(GaussianCurveFitter(((t_GaussianCurveFitter *) arg)->object.this$));
      }
      static PyObject *t_GaussianCurveFitter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GaussianCurveFitter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_GaussianCurveFitter_create(PyTypeObject *type)
      {
        GaussianCurveFitter result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::fitting::GaussianCurveFitter::create());
        return t_GaussianCurveFitter::wrap_Object(result);
      }

      static PyObject *t_GaussianCurveFitter_withMaxIterations(t_GaussianCurveFitter *self, PyObject *arg)
      {
        jint a0;
        GaussianCurveFitter result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withMaxIterations(a0));
          return t_GaussianCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withMaxIterations", arg);
        return NULL;
      }

      static PyObject *t_GaussianCurveFitter_withStartPoint(t_GaussianCurveFitter *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        GaussianCurveFitter result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = self->object.withStartPoint(a0));
          return t_GaussianCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withStartPoint", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/KalmanEstimatorBuilder.h"
#include "org/orekit/estimation/sequential/KalmanEstimator.h"
#include "org/orekit/estimation/sequential/KalmanEstimatorBuilder.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/estimation/sequential/CovarianceMatrixProvider.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *KalmanEstimatorBuilder::class$ = NULL;
        jmethodID *KalmanEstimatorBuilder::mids$ = NULL;
        bool KalmanEstimatorBuilder::live$ = false;

        jclass KalmanEstimatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/KalmanEstimatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addPropagationConfiguration_8b0a5ded17518498] = env->getMethodID(cls, "addPropagationConfiguration", "(Lorg/orekit/propagation/conversion/PropagatorBuilder;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)Lorg/orekit/estimation/sequential/KalmanEstimatorBuilder;");
            mids$[mid_build_37c5ed5e5ccc3381] = env->getMethodID(cls, "build", "()Lorg/orekit/estimation/sequential/KalmanEstimator;");
            mids$[mid_decomposer_d884c98212f90b29] = env->getMethodID(cls, "decomposer", "(Lorg/hipparchus/linear/MatrixDecomposer;)Lorg/orekit/estimation/sequential/KalmanEstimatorBuilder;");
            mids$[mid_estimatedMeasurementsParameters_fe7efdeebd9a3d03] = env->getMethodID(cls, "estimatedMeasurementsParameters", "(Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)Lorg/orekit/estimation/sequential/KalmanEstimatorBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        KalmanEstimatorBuilder::KalmanEstimatorBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        KalmanEstimatorBuilder KalmanEstimatorBuilder::addPropagationConfiguration(const ::org::orekit::propagation::conversion::PropagatorBuilder & a0, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a1) const
        {
          return KalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_addPropagationConfiguration_8b0a5ded17518498], a0.this$, a1.this$));
        }

        ::org::orekit::estimation::sequential::KalmanEstimator KalmanEstimatorBuilder::build() const
        {
          return ::org::orekit::estimation::sequential::KalmanEstimator(env->callObjectMethod(this$, mids$[mid_build_37c5ed5e5ccc3381]));
        }

        KalmanEstimatorBuilder KalmanEstimatorBuilder::decomposer(const ::org::hipparchus::linear::MatrixDecomposer & a0) const
        {
          return KalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_decomposer_d884c98212f90b29], a0.this$));
        }

        KalmanEstimatorBuilder KalmanEstimatorBuilder::estimatedMeasurementsParameters(const ::org::orekit::utils::ParameterDriversList & a0, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a1) const
        {
          return KalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_estimatedMeasurementsParameters_fe7efdeebd9a3d03], a0.this$, a1.this$));
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
        static PyObject *t_KalmanEstimatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanEstimatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_KalmanEstimatorBuilder_init_(t_KalmanEstimatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_KalmanEstimatorBuilder_addPropagationConfiguration(t_KalmanEstimatorBuilder *self, PyObject *args);
        static PyObject *t_KalmanEstimatorBuilder_build(t_KalmanEstimatorBuilder *self);
        static PyObject *t_KalmanEstimatorBuilder_decomposer(t_KalmanEstimatorBuilder *self, PyObject *arg);
        static PyObject *t_KalmanEstimatorBuilder_estimatedMeasurementsParameters(t_KalmanEstimatorBuilder *self, PyObject *args);

        static PyMethodDef t_KalmanEstimatorBuilder__methods_[] = {
          DECLARE_METHOD(t_KalmanEstimatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorBuilder, addPropagationConfiguration, METH_VARARGS),
          DECLARE_METHOD(t_KalmanEstimatorBuilder, build, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimatorBuilder, decomposer, METH_O),
          DECLARE_METHOD(t_KalmanEstimatorBuilder, estimatedMeasurementsParameters, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KalmanEstimatorBuilder)[] = {
          { Py_tp_methods, t_KalmanEstimatorBuilder__methods_ },
          { Py_tp_init, (void *) t_KalmanEstimatorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KalmanEstimatorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(KalmanEstimatorBuilder, t_KalmanEstimatorBuilder, KalmanEstimatorBuilder);

        void t_KalmanEstimatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(KalmanEstimatorBuilder), &PY_TYPE_DEF(KalmanEstimatorBuilder), module, "KalmanEstimatorBuilder", 0);
        }

        void t_KalmanEstimatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimatorBuilder), "class_", make_descriptor(KalmanEstimatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimatorBuilder), "wrapfn_", make_descriptor(t_KalmanEstimatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KalmanEstimatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KalmanEstimatorBuilder::initializeClass, 1)))
            return NULL;
          return t_KalmanEstimatorBuilder::wrap_Object(KalmanEstimatorBuilder(((t_KalmanEstimatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_KalmanEstimatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KalmanEstimatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_KalmanEstimatorBuilder_init_(t_KalmanEstimatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          KalmanEstimatorBuilder object((jobject) NULL);

          INT_CALL(object = KalmanEstimatorBuilder());
          self->object = object;

          return 0;
        }

        static PyObject *t_KalmanEstimatorBuilder_addPropagationConfiguration(t_KalmanEstimatorBuilder *self, PyObject *args)
        {
          ::org::orekit::propagation::conversion::PropagatorBuilder a0((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a1((jobject) NULL);
          KalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.addPropagationConfiguration(a0, a1));
            return t_KalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "addPropagationConfiguration", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorBuilder_build(t_KalmanEstimatorBuilder *self)
        {
          ::org::orekit::estimation::sequential::KalmanEstimator result((jobject) NULL);
          OBJ_CALL(result = self->object.build());
          return ::org::orekit::estimation::sequential::t_KalmanEstimator::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimatorBuilder_decomposer(t_KalmanEstimatorBuilder *self, PyObject *arg)
        {
          ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
          KalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.decomposer(a0));
            return t_KalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "decomposer", arg);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorBuilder_estimatedMeasurementsParameters(t_KalmanEstimatorBuilder *self, PyObject *args)
        {
          ::org::orekit::utils::ParameterDriversList a0((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a1((jobject) NULL);
          KalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.estimatedMeasurementsParameters(a0, a1));
            return t_KalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "estimatedMeasurementsParameters", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/IonosphericCorrectionType.h"
#include "org/orekit/files/rinex/navigation/IonosphericCorrectionType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *IonosphericCorrectionType::class$ = NULL;
          jmethodID *IonosphericCorrectionType::mids$ = NULL;
          bool IonosphericCorrectionType::live$ = false;
          IonosphericCorrectionType *IonosphericCorrectionType::BDS = NULL;
          IonosphericCorrectionType *IonosphericCorrectionType::GAL = NULL;
          IonosphericCorrectionType *IonosphericCorrectionType::GPS = NULL;
          IonosphericCorrectionType *IonosphericCorrectionType::IRN = NULL;
          IonosphericCorrectionType *IonosphericCorrectionType::QZS = NULL;

          jclass IonosphericCorrectionType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/IonosphericCorrectionType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_9a5fca8917fd5eef] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/rinex/navigation/IonosphericCorrectionType;");
              mids$[mid_values_f87539906d50ed66] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/rinex/navigation/IonosphericCorrectionType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              BDS = new IonosphericCorrectionType(env->getStaticObjectField(cls, "BDS", "Lorg/orekit/files/rinex/navigation/IonosphericCorrectionType;"));
              GAL = new IonosphericCorrectionType(env->getStaticObjectField(cls, "GAL", "Lorg/orekit/files/rinex/navigation/IonosphericCorrectionType;"));
              GPS = new IonosphericCorrectionType(env->getStaticObjectField(cls, "GPS", "Lorg/orekit/files/rinex/navigation/IonosphericCorrectionType;"));
              IRN = new IonosphericCorrectionType(env->getStaticObjectField(cls, "IRN", "Lorg/orekit/files/rinex/navigation/IonosphericCorrectionType;"));
              QZS = new IonosphericCorrectionType(env->getStaticObjectField(cls, "QZS", "Lorg/orekit/files/rinex/navigation/IonosphericCorrectionType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IonosphericCorrectionType IonosphericCorrectionType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return IonosphericCorrectionType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_9a5fca8917fd5eef], a0.this$));
          }

          JArray< IonosphericCorrectionType > IonosphericCorrectionType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< IonosphericCorrectionType >(env->callStaticObjectMethod(cls, mids$[mid_values_f87539906d50ed66]));
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
        namespace navigation {
          static PyObject *t_IonosphericCorrectionType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphericCorrectionType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphericCorrectionType_of_(t_IonosphericCorrectionType *self, PyObject *args);
          static PyObject *t_IonosphericCorrectionType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_IonosphericCorrectionType_values(PyTypeObject *type);
          static PyObject *t_IonosphericCorrectionType_get__parameters_(t_IonosphericCorrectionType *self, void *data);
          static PyGetSetDef t_IonosphericCorrectionType__fields_[] = {
            DECLARE_GET_FIELD(t_IonosphericCorrectionType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IonosphericCorrectionType__methods_[] = {
            DECLARE_METHOD(t_IonosphericCorrectionType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphericCorrectionType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphericCorrectionType, of_, METH_VARARGS),
            DECLARE_METHOD(t_IonosphericCorrectionType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_IonosphericCorrectionType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IonosphericCorrectionType)[] = {
            { Py_tp_methods, t_IonosphericCorrectionType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_IonosphericCorrectionType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IonosphericCorrectionType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(IonosphericCorrectionType, t_IonosphericCorrectionType, IonosphericCorrectionType);
          PyObject *t_IonosphericCorrectionType::wrap_Object(const IonosphericCorrectionType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_IonosphericCorrectionType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_IonosphericCorrectionType *self = (t_IonosphericCorrectionType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_IonosphericCorrectionType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_IonosphericCorrectionType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_IonosphericCorrectionType *self = (t_IonosphericCorrectionType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_IonosphericCorrectionType::install(PyObject *module)
          {
            installType(&PY_TYPE(IonosphericCorrectionType), &PY_TYPE_DEF(IonosphericCorrectionType), module, "IonosphericCorrectionType", 0);
          }

          void t_IonosphericCorrectionType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericCorrectionType), "class_", make_descriptor(IonosphericCorrectionType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericCorrectionType), "wrapfn_", make_descriptor(t_IonosphericCorrectionType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericCorrectionType), "boxfn_", make_descriptor(boxObject));
            env->getClass(IonosphericCorrectionType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericCorrectionType), "BDS", make_descriptor(t_IonosphericCorrectionType::wrap_Object(*IonosphericCorrectionType::BDS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericCorrectionType), "GAL", make_descriptor(t_IonosphericCorrectionType::wrap_Object(*IonosphericCorrectionType::GAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericCorrectionType), "GPS", make_descriptor(t_IonosphericCorrectionType::wrap_Object(*IonosphericCorrectionType::GPS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericCorrectionType), "IRN", make_descriptor(t_IonosphericCorrectionType::wrap_Object(*IonosphericCorrectionType::IRN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericCorrectionType), "QZS", make_descriptor(t_IonosphericCorrectionType::wrap_Object(*IonosphericCorrectionType::QZS)));
          }

          static PyObject *t_IonosphericCorrectionType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IonosphericCorrectionType::initializeClass, 1)))
              return NULL;
            return t_IonosphericCorrectionType::wrap_Object(IonosphericCorrectionType(((t_IonosphericCorrectionType *) arg)->object.this$));
          }
          static PyObject *t_IonosphericCorrectionType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IonosphericCorrectionType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_IonosphericCorrectionType_of_(t_IonosphericCorrectionType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_IonosphericCorrectionType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            IonosphericCorrectionType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::rinex::navigation::IonosphericCorrectionType::valueOf(a0));
              return t_IonosphericCorrectionType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_IonosphericCorrectionType_values(PyTypeObject *type)
          {
            JArray< IonosphericCorrectionType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::rinex::navigation::IonosphericCorrectionType::values());
            return JArray<jobject>(result.this$).wrap(t_IonosphericCorrectionType::wrap_jobject);
          }
          static PyObject *t_IonosphericCorrectionType_get__parameters_(t_IonosphericCorrectionType *self, void *data)
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
#include "org/orekit/files/sp3/SP3Utils.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3Utils::class$ = NULL;
        jmethodID *SP3Utils::mids$ = NULL;
        bool SP3Utils::live$ = false;
        ::org::orekit::utils::units::Unit *SP3Utils::CLOCK_ACCURACY_UNIT = NULL;
        ::org::orekit::utils::units::Unit *SP3Utils::CLOCK_RATE_ACCURACY_UNIT = NULL;
        ::org::orekit::utils::units::Unit *SP3Utils::CLOCK_RATE_UNIT = NULL;
        ::org::orekit::utils::units::Unit *SP3Utils::CLOCK_UNIT = NULL;
        jdouble SP3Utils::DEFAULT_CLOCK_RATE_VALUE = (jdouble) 0;
        jdouble SP3Utils::DEFAULT_CLOCK_VALUE = (jdouble) 0;
        ::org::orekit::utils::units::Unit *SP3Utils::POSITION_ACCURACY_UNIT = NULL;
        ::org::orekit::utils::units::Unit *SP3Utils::POSITION_UNIT = NULL;
        jdouble SP3Utils::POS_VEL_BASE_ACCURACY = (jdouble) 0;
        ::org::orekit::utils::units::Unit *SP3Utils::VELOCITY_ACCURACY_UNIT = NULL;
        ::org::orekit::utils::units::Unit *SP3Utils::VELOCITY_UNIT = NULL;

        jclass SP3Utils::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3Utils");

            mids$ = new jmethodID[max_mid];
            mids$[mid_indexAccuracy_4d64e5c342a99239] = env->getStaticMethodID(cls, "indexAccuracy", "(Lorg/orekit/utils/units/Unit;DD)I");
            mids$[mid_siAccuracy_c5775d595550e21c] = env->getStaticMethodID(cls, "siAccuracy", "(Lorg/orekit/utils/units/Unit;DI)D");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            CLOCK_ACCURACY_UNIT = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "CLOCK_ACCURACY_UNIT", "Lorg/orekit/utils/units/Unit;"));
            CLOCK_RATE_ACCURACY_UNIT = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "CLOCK_RATE_ACCURACY_UNIT", "Lorg/orekit/utils/units/Unit;"));
            CLOCK_RATE_UNIT = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "CLOCK_RATE_UNIT", "Lorg/orekit/utils/units/Unit;"));
            CLOCK_UNIT = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "CLOCK_UNIT", "Lorg/orekit/utils/units/Unit;"));
            DEFAULT_CLOCK_RATE_VALUE = env->getStaticDoubleField(cls, "DEFAULT_CLOCK_RATE_VALUE");
            DEFAULT_CLOCK_VALUE = env->getStaticDoubleField(cls, "DEFAULT_CLOCK_VALUE");
            POSITION_ACCURACY_UNIT = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "POSITION_ACCURACY_UNIT", "Lorg/orekit/utils/units/Unit;"));
            POSITION_UNIT = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "POSITION_UNIT", "Lorg/orekit/utils/units/Unit;"));
            POS_VEL_BASE_ACCURACY = env->getStaticDoubleField(cls, "POS_VEL_BASE_ACCURACY");
            VELOCITY_ACCURACY_UNIT = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "VELOCITY_ACCURACY_UNIT", "Lorg/orekit/utils/units/Unit;"));
            VELOCITY_UNIT = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "VELOCITY_UNIT", "Lorg/orekit/utils/units/Unit;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jint SP3Utils::indexAccuracy(const ::org::orekit::utils::units::Unit & a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticIntMethod(cls, mids$[mid_indexAccuracy_4d64e5c342a99239], a0.this$, a1, a2);
        }

        jdouble SP3Utils::siAccuracy(const ::org::orekit::utils::units::Unit & a0, jdouble a1, jint a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_siAccuracy_c5775d595550e21c], a0.this$, a1, a2);
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
      namespace sp3 {
        static PyObject *t_SP3Utils_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3Utils_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3Utils_indexAccuracy(PyTypeObject *type, PyObject *args);
        static PyObject *t_SP3Utils_siAccuracy(PyTypeObject *type, PyObject *args);

        static PyMethodDef t_SP3Utils__methods_[] = {
          DECLARE_METHOD(t_SP3Utils, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Utils, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Utils, indexAccuracy, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SP3Utils, siAccuracy, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3Utils)[] = {
          { Py_tp_methods, t_SP3Utils__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3Utils)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SP3Utils, t_SP3Utils, SP3Utils);

        void t_SP3Utils::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3Utils), &PY_TYPE_DEF(SP3Utils), module, "SP3Utils", 0);
        }

        void t_SP3Utils::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "class_", make_descriptor(SP3Utils::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "wrapfn_", make_descriptor(t_SP3Utils::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "boxfn_", make_descriptor(boxObject));
          env->getClass(SP3Utils::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "CLOCK_ACCURACY_UNIT", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*SP3Utils::CLOCK_ACCURACY_UNIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "CLOCK_RATE_ACCURACY_UNIT", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*SP3Utils::CLOCK_RATE_ACCURACY_UNIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "CLOCK_RATE_UNIT", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*SP3Utils::CLOCK_RATE_UNIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "CLOCK_UNIT", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*SP3Utils::CLOCK_UNIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "DEFAULT_CLOCK_RATE_VALUE", make_descriptor(SP3Utils::DEFAULT_CLOCK_RATE_VALUE));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "DEFAULT_CLOCK_VALUE", make_descriptor(SP3Utils::DEFAULT_CLOCK_VALUE));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "POSITION_ACCURACY_UNIT", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*SP3Utils::POSITION_ACCURACY_UNIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "POSITION_UNIT", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*SP3Utils::POSITION_UNIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "POS_VEL_BASE_ACCURACY", make_descriptor(SP3Utils::POS_VEL_BASE_ACCURACY));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "VELOCITY_ACCURACY_UNIT", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*SP3Utils::VELOCITY_ACCURACY_UNIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "VELOCITY_UNIT", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*SP3Utils::VELOCITY_UNIT)));
        }

        static PyObject *t_SP3Utils_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3Utils::initializeClass, 1)))
            return NULL;
          return t_SP3Utils::wrap_Object(SP3Utils(((t_SP3Utils *) arg)->object.this$));
        }
        static PyObject *t_SP3Utils_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3Utils::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SP3Utils_indexAccuracy(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::utils::units::Unit a0((jobject) NULL);
          jdouble a1;
          jdouble a2;
          jint result;

          if (!parseArgs(args, "kDD", ::org::orekit::utils::units::Unit::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::orekit::files::sp3::SP3Utils::indexAccuracy(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }

          PyErr_SetArgsError(type, "indexAccuracy", args);
          return NULL;
        }

        static PyObject *t_SP3Utils_siAccuracy(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::utils::units::Unit a0((jobject) NULL);
          jdouble a1;
          jint a2;
          jdouble result;

          if (!parseArgs(args, "kDI", ::org::orekit::utils::units::Unit::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::orekit::files::sp3::SP3Utils::siAccuracy(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "siAccuracy", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fraction/AbstractFormat.h"
#include "java/lang/StringBuffer.h"
#include "java/lang/Class.h"
#include "java/text/FieldPosition.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *AbstractFormat::class$ = NULL;
      jmethodID *AbstractFormat::mids$ = NULL;
      bool AbstractFormat::live$ = false;

      jclass AbstractFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/AbstractFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_format_c6faa545a7a768dc] = env->getMethodID(cls, "format", "(DLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_format_ad0b55b296497605] = env->getMethodID(cls, "format", "(JLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_getDenominatorFormat_d34e2e8dd35583a0] = env->getMethodID(cls, "getDenominatorFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_getNumeratorFormat_d34e2e8dd35583a0] = env->getMethodID(cls, "getNumeratorFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_getDefaultNumberFormat_41d4a73d4466d8a8] = env->getStaticMethodID(cls, "getDefaultNumberFormat", "(Ljava/util/Locale;)Ljava/text/NumberFormat;");
          mids$[mid_getDefaultNumberFormat_d34e2e8dd35583a0] = env->getStaticMethodID(cls, "getDefaultNumberFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_parseAndIgnoreWhitespace_3f781e1d901a0f96] = env->getStaticMethodID(cls, "parseAndIgnoreWhitespace", "(Ljava/lang/String;Ljava/text/ParsePosition;)V");
          mids$[mid_parseNextCharacter_4aabc917f367b3fd] = env->getStaticMethodID(cls, "parseNextCharacter", "(Ljava/lang/String;Ljava/text/ParsePosition;)C");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::StringBuffer AbstractFormat::format(jdouble a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_c6faa545a7a768dc], a0, a1.this$, a2.this$));
      }

      ::java::lang::StringBuffer AbstractFormat::format(jlong a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_ad0b55b296497605], a0, a1.this$, a2.this$));
      }

      ::java::text::NumberFormat AbstractFormat::getDenominatorFormat() const
      {
        return ::java::text::NumberFormat(env->callObjectMethod(this$, mids$[mid_getDenominatorFormat_d34e2e8dd35583a0]));
      }

      ::java::text::NumberFormat AbstractFormat::getNumeratorFormat() const
      {
        return ::java::text::NumberFormat(env->callObjectMethod(this$, mids$[mid_getNumeratorFormat_d34e2e8dd35583a0]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace fraction {
      static PyObject *t_AbstractFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFormat_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFormat_format(t_AbstractFormat *self, PyObject *args);
      static PyObject *t_AbstractFormat_getDenominatorFormat(t_AbstractFormat *self);
      static PyObject *t_AbstractFormat_getNumeratorFormat(t_AbstractFormat *self);
      static PyObject *t_AbstractFormat_get__denominatorFormat(t_AbstractFormat *self, void *data);
      static PyObject *t_AbstractFormat_get__numeratorFormat(t_AbstractFormat *self, void *data);
      static PyGetSetDef t_AbstractFormat__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractFormat, denominatorFormat),
        DECLARE_GET_FIELD(t_AbstractFormat, numeratorFormat),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractFormat__methods_[] = {
        DECLARE_METHOD(t_AbstractFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFormat, format, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFormat, getDenominatorFormat, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFormat, getNumeratorFormat, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractFormat)[] = {
        { Py_tp_methods, t_AbstractFormat__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractFormat)[] = {
        &PY_TYPE_DEF(::java::text::NumberFormat),
        NULL
      };

      DEFINE_TYPE(AbstractFormat, t_AbstractFormat, AbstractFormat);

      void t_AbstractFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractFormat), &PY_TYPE_DEF(AbstractFormat), module, "AbstractFormat", 0);
      }

      void t_AbstractFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFormat), "class_", make_descriptor(AbstractFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFormat), "wrapfn_", make_descriptor(t_AbstractFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFormat), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractFormat::initializeClass, 1)))
          return NULL;
        return t_AbstractFormat::wrap_Object(AbstractFormat(((t_AbstractFormat *) arg)->object.this$));
      }
      static PyObject *t_AbstractFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractFormat_format(t_AbstractFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            jdouble a0;
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "Dkk", ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }
          }
          {
            jlong a0;
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "Jkk", ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(AbstractFormat), (PyObject *) self, "format", args, 2);
      }

      static PyObject *t_AbstractFormat_getDenominatorFormat(t_AbstractFormat *self)
      {
        ::java::text::NumberFormat result((jobject) NULL);
        OBJ_CALL(result = self->object.getDenominatorFormat());
        return ::java::text::t_NumberFormat::wrap_Object(result);
      }

      static PyObject *t_AbstractFormat_getNumeratorFormat(t_AbstractFormat *self)
      {
        ::java::text::NumberFormat result((jobject) NULL);
        OBJ_CALL(result = self->object.getNumeratorFormat());
        return ::java::text::t_NumberFormat::wrap_Object(result);
      }

      static PyObject *t_AbstractFormat_get__denominatorFormat(t_AbstractFormat *self, void *data)
      {
        ::java::text::NumberFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getDenominatorFormat());
        return ::java::text::t_NumberFormat::wrap_Object(value);
      }

      static PyObject *t_AbstractFormat_get__numeratorFormat(t_AbstractFormat *self, void *data)
      {
        ::java::text::NumberFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getNumeratorFormat());
        return ::java::text::t_NumberFormat::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/numerical/PythonTimeDerivativesEquations.h"
#include "org/orekit/propagation/numerical/TimeDerivativesEquations.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *PythonTimeDerivativesEquations::class$ = NULL;
        jmethodID *PythonTimeDerivativesEquations::mids$ = NULL;
        bool PythonTimeDerivativesEquations::live$ = false;

        jclass PythonTimeDerivativesEquations::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/PythonTimeDerivativesEquations");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addKeplerContribution_77e0f9a1f260e2e5] = env->getMethodID(cls, "addKeplerContribution", "(D)V");
            mids$[mid_addMassDerivative_77e0f9a1f260e2e5] = env->getMethodID(cls, "addMassDerivative", "(D)V");
            mids$[mid_addNonKeplerianAcceleration_a94622407b723689] = env->getMethodID(cls, "addNonKeplerianAcceleration", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonTimeDerivativesEquations::PythonTimeDerivativesEquations() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonTimeDerivativesEquations::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonTimeDerivativesEquations::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonTimeDerivativesEquations::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
        static PyObject *t_PythonTimeDerivativesEquations_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonTimeDerivativesEquations_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonTimeDerivativesEquations_init_(t_PythonTimeDerivativesEquations *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonTimeDerivativesEquations_finalize(t_PythonTimeDerivativesEquations *self);
        static PyObject *t_PythonTimeDerivativesEquations_pythonExtension(t_PythonTimeDerivativesEquations *self, PyObject *args);
        static void JNICALL t_PythonTimeDerivativesEquations_addKeplerContribution0(JNIEnv *jenv, jobject jobj, jdouble a0);
        static void JNICALL t_PythonTimeDerivativesEquations_addMassDerivative1(JNIEnv *jenv, jobject jobj, jdouble a0);
        static void JNICALL t_PythonTimeDerivativesEquations_addNonKeplerianAcceleration2(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonTimeDerivativesEquations_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonTimeDerivativesEquations_get__self(t_PythonTimeDerivativesEquations *self, void *data);
        static PyGetSetDef t_PythonTimeDerivativesEquations__fields_[] = {
          DECLARE_GET_FIELD(t_PythonTimeDerivativesEquations, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonTimeDerivativesEquations__methods_[] = {
          DECLARE_METHOD(t_PythonTimeDerivativesEquations, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonTimeDerivativesEquations, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonTimeDerivativesEquations, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonTimeDerivativesEquations, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonTimeDerivativesEquations)[] = {
          { Py_tp_methods, t_PythonTimeDerivativesEquations__methods_ },
          { Py_tp_init, (void *) t_PythonTimeDerivativesEquations_init_ },
          { Py_tp_getset, t_PythonTimeDerivativesEquations__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonTimeDerivativesEquations)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonTimeDerivativesEquations, t_PythonTimeDerivativesEquations, PythonTimeDerivativesEquations);

        void t_PythonTimeDerivativesEquations::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonTimeDerivativesEquations), &PY_TYPE_DEF(PythonTimeDerivativesEquations), module, "PythonTimeDerivativesEquations", 1);
        }

        void t_PythonTimeDerivativesEquations::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeDerivativesEquations), "class_", make_descriptor(PythonTimeDerivativesEquations::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeDerivativesEquations), "wrapfn_", make_descriptor(t_PythonTimeDerivativesEquations::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeDerivativesEquations), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonTimeDerivativesEquations::initializeClass);
          JNINativeMethod methods[] = {
            { "addKeplerContribution", "(D)V", (void *) t_PythonTimeDerivativesEquations_addKeplerContribution0 },
            { "addMassDerivative", "(D)V", (void *) t_PythonTimeDerivativesEquations_addMassDerivative1 },
            { "addNonKeplerianAcceleration", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V", (void *) t_PythonTimeDerivativesEquations_addNonKeplerianAcceleration2 },
            { "pythonDecRef", "()V", (void *) t_PythonTimeDerivativesEquations_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonTimeDerivativesEquations_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonTimeDerivativesEquations::initializeClass, 1)))
            return NULL;
          return t_PythonTimeDerivativesEquations::wrap_Object(PythonTimeDerivativesEquations(((t_PythonTimeDerivativesEquations *) arg)->object.this$));
        }
        static PyObject *t_PythonTimeDerivativesEquations_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonTimeDerivativesEquations::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonTimeDerivativesEquations_init_(t_PythonTimeDerivativesEquations *self, PyObject *args, PyObject *kwds)
        {
          PythonTimeDerivativesEquations object((jobject) NULL);

          INT_CALL(object = PythonTimeDerivativesEquations());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonTimeDerivativesEquations_finalize(t_PythonTimeDerivativesEquations *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonTimeDerivativesEquations_pythonExtension(t_PythonTimeDerivativesEquations *self, PyObject *args)
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

        static void JNICALL t_PythonTimeDerivativesEquations_addKeplerContribution0(JNIEnv *jenv, jobject jobj, jdouble a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTimeDerivativesEquations::mids$[PythonTimeDerivativesEquations::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *result = PyObject_CallMethod(obj, "addKeplerContribution", "d", (double) a0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonTimeDerivativesEquations_addMassDerivative1(JNIEnv *jenv, jobject jobj, jdouble a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTimeDerivativesEquations::mids$[PythonTimeDerivativesEquations::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *result = PyObject_CallMethod(obj, "addMassDerivative", "d", (double) a0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonTimeDerivativesEquations_addNonKeplerianAcceleration2(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTimeDerivativesEquations::mids$[PythonTimeDerivativesEquations::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
          PyObject *result = PyObject_CallMethod(obj, "addNonKeplerianAcceleration", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonTimeDerivativesEquations_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTimeDerivativesEquations::mids$[PythonTimeDerivativesEquations::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonTimeDerivativesEquations::mids$[PythonTimeDerivativesEquations::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonTimeDerivativesEquations_get__self(t_PythonTimeDerivativesEquations *self, void *data)
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
#include "org/orekit/propagation/sampling/MultisatStepNormalizer.h"
#include "java/util/List.h"
#include "org/orekit/propagation/sampling/MultiSatStepHandler.h"
#include "org/orekit/propagation/sampling/MultiSatFixedStepHandler.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *MultisatStepNormalizer::class$ = NULL;
        jmethodID *MultisatStepNormalizer::mids$ = NULL;
        bool MultisatStepNormalizer::live$ = false;

        jclass MultisatStepNormalizer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/MultisatStepNormalizer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_385da18075935026] = env->getMethodID(cls, "<init>", "(DLorg/orekit/propagation/sampling/MultiSatFixedStepHandler;)V");
            mids$[mid_finish_65de9727799c5641] = env->getMethodID(cls, "finish", "(Ljava/util/List;)V");
            mids$[mid_getFixedStepHandler_ab30ce422facc296] = env->getMethodID(cls, "getFixedStepHandler", "()Lorg/orekit/propagation/sampling/MultiSatFixedStepHandler;");
            mids$[mid_getFixedTimeStep_456d9a2f64d6b28d] = env->getMethodID(cls, "getFixedTimeStep", "()D");
            mids$[mid_handleStep_65de9727799c5641] = env->getMethodID(cls, "handleStep", "(Ljava/util/List;)V");
            mids$[mid_init_9864bb25319e03a0] = env->getMethodID(cls, "init", "(Ljava/util/List;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MultisatStepNormalizer::MultisatStepNormalizer(jdouble a0, const ::org::orekit::propagation::sampling::MultiSatFixedStepHandler & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_385da18075935026, a0, a1.this$)) {}

        void MultisatStepNormalizer::finish(const ::java::util::List & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_65de9727799c5641], a0.this$);
        }

        ::org::orekit::propagation::sampling::MultiSatFixedStepHandler MultisatStepNormalizer::getFixedStepHandler() const
        {
          return ::org::orekit::propagation::sampling::MultiSatFixedStepHandler(env->callObjectMethod(this$, mids$[mid_getFixedStepHandler_ab30ce422facc296]));
        }

        jdouble MultisatStepNormalizer::getFixedTimeStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFixedTimeStep_456d9a2f64d6b28d]);
        }

        void MultisatStepNormalizer::handleStep(const ::java::util::List & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_65de9727799c5641], a0.this$);
        }

        void MultisatStepNormalizer::init(const ::java::util::List & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_9864bb25319e03a0], a0.this$, a1.this$);
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
        static PyObject *t_MultisatStepNormalizer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultisatStepNormalizer_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MultisatStepNormalizer_init_(t_MultisatStepNormalizer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MultisatStepNormalizer_finish(t_MultisatStepNormalizer *self, PyObject *arg);
        static PyObject *t_MultisatStepNormalizer_getFixedStepHandler(t_MultisatStepNormalizer *self);
        static PyObject *t_MultisatStepNormalizer_getFixedTimeStep(t_MultisatStepNormalizer *self);
        static PyObject *t_MultisatStepNormalizer_handleStep(t_MultisatStepNormalizer *self, PyObject *arg);
        static PyObject *t_MultisatStepNormalizer_init(t_MultisatStepNormalizer *self, PyObject *args);
        static PyObject *t_MultisatStepNormalizer_get__fixedStepHandler(t_MultisatStepNormalizer *self, void *data);
        static PyObject *t_MultisatStepNormalizer_get__fixedTimeStep(t_MultisatStepNormalizer *self, void *data);
        static PyGetSetDef t_MultisatStepNormalizer__fields_[] = {
          DECLARE_GET_FIELD(t_MultisatStepNormalizer, fixedStepHandler),
          DECLARE_GET_FIELD(t_MultisatStepNormalizer, fixedTimeStep),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MultisatStepNormalizer__methods_[] = {
          DECLARE_METHOD(t_MultisatStepNormalizer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultisatStepNormalizer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultisatStepNormalizer, finish, METH_O),
          DECLARE_METHOD(t_MultisatStepNormalizer, getFixedStepHandler, METH_NOARGS),
          DECLARE_METHOD(t_MultisatStepNormalizer, getFixedTimeStep, METH_NOARGS),
          DECLARE_METHOD(t_MultisatStepNormalizer, handleStep, METH_O),
          DECLARE_METHOD(t_MultisatStepNormalizer, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultisatStepNormalizer)[] = {
          { Py_tp_methods, t_MultisatStepNormalizer__methods_ },
          { Py_tp_init, (void *) t_MultisatStepNormalizer_init_ },
          { Py_tp_getset, t_MultisatStepNormalizer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultisatStepNormalizer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MultisatStepNormalizer, t_MultisatStepNormalizer, MultisatStepNormalizer);

        void t_MultisatStepNormalizer::install(PyObject *module)
        {
          installType(&PY_TYPE(MultisatStepNormalizer), &PY_TYPE_DEF(MultisatStepNormalizer), module, "MultisatStepNormalizer", 0);
        }

        void t_MultisatStepNormalizer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultisatStepNormalizer), "class_", make_descriptor(MultisatStepNormalizer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultisatStepNormalizer), "wrapfn_", make_descriptor(t_MultisatStepNormalizer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultisatStepNormalizer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultisatStepNormalizer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultisatStepNormalizer::initializeClass, 1)))
            return NULL;
          return t_MultisatStepNormalizer::wrap_Object(MultisatStepNormalizer(((t_MultisatStepNormalizer *) arg)->object.this$));
        }
        static PyObject *t_MultisatStepNormalizer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultisatStepNormalizer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MultisatStepNormalizer_init_(t_MultisatStepNormalizer *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ::org::orekit::propagation::sampling::MultiSatFixedStepHandler a1((jobject) NULL);
          MultisatStepNormalizer object((jobject) NULL);

          if (!parseArgs(args, "Dk", ::org::orekit::propagation::sampling::MultiSatFixedStepHandler::initializeClass, &a0, &a1))
          {
            INT_CALL(object = MultisatStepNormalizer(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_MultisatStepNormalizer_finish(t_MultisatStepNormalizer *self, PyObject *arg)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_MultisatStepNormalizer_getFixedStepHandler(t_MultisatStepNormalizer *self)
        {
          ::org::orekit::propagation::sampling::MultiSatFixedStepHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getFixedStepHandler());
          return ::org::orekit::propagation::sampling::t_MultiSatFixedStepHandler::wrap_Object(result);
        }

        static PyObject *t_MultisatStepNormalizer_getFixedTimeStep(t_MultisatStepNormalizer *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getFixedTimeStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_MultisatStepNormalizer_handleStep(t_MultisatStepNormalizer *self, PyObject *arg)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_MultisatStepNormalizer_init(t_MultisatStepNormalizer *self, PyObject *args)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "Kk", ::java::util::List::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_MultisatStepNormalizer_get__fixedStepHandler(t_MultisatStepNormalizer *self, void *data)
        {
          ::org::orekit::propagation::sampling::MultiSatFixedStepHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getFixedStepHandler());
          return ::org::orekit::propagation::sampling::t_MultiSatFixedStepHandler::wrap_Object(value);
        }

        static PyObject *t_MultisatStepNormalizer_get__fixedTimeStep(t_MultisatStepNormalizer *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getFixedTimeStep());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
